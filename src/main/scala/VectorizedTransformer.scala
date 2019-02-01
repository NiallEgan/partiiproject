package sepia

import scala.reflect.SourceContext
import lms.common._
import lms.internal._

trait VectorizedOps extends PrimitiveOps with RangeOps with ArrayOps {
  def vectorized_loop(r: Range,
                      block: Rep[Int] => Rep[Unit]): Rep[Unit]
}

trait VectorizedOpsExp extends VectorizedOps with BaseExp
                       with RangeOpsExp with ArrayOpsExpOpt {
 case class VectorForEach(start: Int, end: Int,
                           i: Sym[Int], body: Block[Unit]) extends Def[Unit]
 case class VectorForEachUnvectorized(start: Int, end: Int,
                                      i: Sym[Int], body: Block[Unit]) extends Def[Unit]

 def vectorized_loop(r: Range,
                     block: Exp[Int] => Exp[Unit]): Exp[Unit] = {
    val i = fresh[Int]
    val a = reifyEffects{block(i)}
    reflectEffect(VectorForEachUnvectorized(r.start, r.end, i, a), summarizeEffects(a))
  }

  def vectorized_loop(start: Int, end: Int,
                      i: Sym[Int], body: Block[Unit]): Exp[Unit] = {
    reflectEffect(VectorForEach(start, end, i, body), summarizeEffects(body))
  }

  override def mirror[A:Typ](e: Def[A], f: Transformer)(implicit pos: SourceContext): Exp[A] = (e match {
    case Reflect(VectorForEach(s, e, i, b), u, es) => reflectMirrored(Reflect(VectorForEach(s, e, f(i).asInstanceOf[Sym[Int]],f(b)), mapOver(f,u), f(es)))(mtyp1[A], pos)
    case VectorForEach(s, e, i, b) => {
      throw new Exception("hi")
    }
    case Reflect(VectorForEachUnvectorized(s, e, i, b), u, es) => reflectMirrored(Reflect(VectorForEachUnvectorized(s, e, f(i).asInstanceOf[Sym[Int]],f(b)), mapOver(f,u), f(es)))(mtyp1[A], pos)
    case Reflect(ArrayNew(i), _, _) => {
      super.mirror(e, f)
    }
    case _ => super.mirror(e, f)
  }).asInstanceOf[Exp[A]]


  override def syms(e: Any): List[Sym[Any]] = e match {
    case VectorForEach(start, end, a, body) => syms(a):::syms(body)
    case VectorForEachUnvectorized(start, end, a, body) => syms(a):::syms(body)
    case _ => super.syms(e)
  }

  override def boundSyms(e: Any): List[Sym[Any]] = e match {
    case VectorForEach(start, end, x, body) => x :: effectSyms(body)
    case VectorForEachUnvectorized(start, end, x, body) => x :: effectSyms(body)
    case _ => super.boundSyms(e)
  }

  override def symsFreq(e: Any): List[(Sym[Any], Double)] = e match {
    case VectorForEach(start, end, a, body) => freqNormal(a):::freqHot(body)
    case VectorForEachUnvectorized(start, end, a, body) => freqNormal(a):::freqHot(body)
    case _ => super.symsFreq(e)
  }
}

trait Vectorizer extends ForwardTransformer {
  val IR: DslExp
  import IR._

  def intVectorizer(exp: Exp[Int], start: Int,
                    end: Int, indexSymbol: Sym[Int]): Exp[__m256i] = {
    val n = end - start

    def make_constant_i32(size: Int, v: Int) = {
      val xs = for (i <- 7 to -1 by -1: Range) yield (if (i < size) v else 0)
      _mm256_set_epi32(xs(0), xs(1), xs(2), xs(3), xs(4), xs(5), xs(6), xs(7))
    }

    def make_index_i32(start: Int, end: Int) = {
      val size = end - start
      val xs = for (i <- 0 until 8: Range) yield(if (i < size) i + start else 0)
      _mm256_set_epi32(xs(7), xs(6), xs(5), xs(4), xs(3), xs(2), xs(1), xs(0))
    }

    exp match {
      case Def(v) => v match {
        case IntPlus(a, b) => _mm256_add_epi32(intVectorizer(a, start, end, indexSymbol),
                                intVectorizer(b, start, end, indexSymbol))
        case IntMinus(a, b) => _mm256_sub_epi32(intVectorizer(a, start, end, indexSymbol),
                                intVectorizer(b, start, end, indexSymbol))
      }
      case Const(v) => make_constant_i32(n, v)
      case s@Sym(_) => {
        if (s == indexSymbol) {
          make_index_i32(start, end)
        }
        else throw new Exception("Should never get here?")
      }
    }
  }

  def doubleVectorizer(exp: Exp[Double], start: Int,
                       end: Int, indexSymbol: Sym[Int]): Exp[__m256d] = {
     val n = end - start

     def make_constant_d32(size: Int, v: Exp[Double]) = {
       val xs: IndexedSeq[Exp[Double]] = for (i <- 3 to -1 by -1: Range) yield (if (i < size) v else Const(0.0))
       _mm256_set_pd(xs(0), xs(1), xs(2), xs(3))
     }

     def make_index_d32(start: Int, end: Int) = {
       println("Making index:")
       val size = end - start
       val xs = for (i <- 0 until 4: Range) yield(if (i < size) i + start else 0)
       _mm256_set_pd(xs(3), xs(2), xs(1), xs(0))
     }

     exp match {
       case Def(v) => v match {
         // todo: are all of these needed?
         case NumericPlus(a, b) => _mm256_add_pd(doubleVectorizer(a.asInstanceOf[Exp[Double]], start, end, indexSymbol),
                                                 doubleVectorizer(b.asInstanceOf[Exp[Double]], start, end, indexSymbol))
         case NumericMinus(a, b) => _mm256_sub_pd(doubleVectorizer(a.asInstanceOf[Exp[Double]], start, end, indexSymbol),
                                                  doubleVectorizer(b.asInstanceOf[Exp[Double]], start, end, indexSymbol))
         case NumericTimes(a, b) => _mm256_mul_pd(doubleVectorizer(a.asInstanceOf[Exp[Double]], start, end, indexSymbol),
                                                  doubleVectorizer(b.asInstanceOf[Exp[Double]], start, end, indexSymbol))
         case NumericDivide(a, b) => _mm256_div_pd(doubleVectorizer(a.asInstanceOf[Exp[Double]], start, end, indexSymbol),
                                                   doubleVectorizer(b.asInstanceOf[Exp[Double]], start, end, indexSymbol))
         case DoublePlus(a, b) => _mm256_add_pd(doubleVectorizer(a, start, end, indexSymbol),
                                                 doubleVectorizer(b, start, end, indexSymbol))
         case DoubleMinus(a, b) => _mm256_sub_pd(doubleVectorizer(a, start, end, indexSymbol),
                                                  doubleVectorizer(b, start, end, indexSymbol))
         case DoubleTimes(a, b) => _mm256_mul_pd(doubleVectorizer(a, start, end, indexSymbol),
                                                  doubleVectorizer(b, start, end, indexSymbol))
         case DoubleDivide(a, b) => _mm256_div_pd(doubleVectorizer(a, start, end, indexSymbol),
                                                   doubleVectorizer(b, start, end, indexSymbol))
         case IntToDouble(a) => {
          a match {
             case s@Sym(_) if s == indexSymbol => make_index_d32(start, end)
             case _ => make_constant_d32(n, a)
           }
         }
      }
       case Const(v) => make_constant_d32(n, v)
       case s@Sym(_) => {
         if (s == indexSymbol) {
           make_index_d32(start, end)
         }
         else throw new Exception("Should never get here?")
       }
     }
   }

 def floatVectorizer(exp: Exp[Float], start: Int,
                      end: Int, indexSymbol: Sym[Int]): Exp[__m256] = {
    val n = end - start

    def make_constant_32(size: Int, v: Exp[Float]) = {
      val xs: IndexedSeq[Exp[Float]] = for (i <- 7 to -1 by -1: Range) yield (if (i < size) v else Const(0.0f))
      _mm256_set_ps(xs(0), xs(1), xs(2), xs(3), xs(4), xs(5), xs(6), xs(7))
    }

    def make_index_32(start: Int, end: Int) = {
      println("Making index:")
      val size = end - start
      val xs = for (i <- 0 until 8: Range) yield(if (i < size) i + start else 0)
      _mm256_set_ps(xs(7), xs(6), xs(5), xs(4), xs(3), xs(2), xs(1), xs(0))
    }

    exp match {
      case Def(v) => v match {
        // todo: are all of these needed?
        case NumericPlus(a, b) => _mm256_add_ps(floatVectorizer(a.asInstanceOf[Exp[Float]], start, end, indexSymbol),
                                                floatVectorizer(b.asInstanceOf[Exp[Float]], start, end, indexSymbol))
        case NumericMinus(a, b) => _mm256_sub_ps(floatVectorizer(a.asInstanceOf[Exp[Float]], start, end, indexSymbol),
                                                 floatVectorizer(b.asInstanceOf[Exp[Float]], start, end, indexSymbol))
        case NumericTimes(a, b) => _mm256_mul_ps(floatVectorizer(a.asInstanceOf[Exp[Float]], start, end, indexSymbol),
                                                 floatVectorizer(b.asInstanceOf[Exp[Float]], start, end, indexSymbol))
        case NumericDivide(a, b) => _mm256_div_ps(floatVectorizer(a.asInstanceOf[Exp[Float]], start, end, indexSymbol),
                                                  floatVectorizer(b.asInstanceOf[Exp[Float]], start, end, indexSymbol))
        case FloatPlus(a, b) => _mm256_add_ps(floatVectorizer(a, start, end, indexSymbol),
                                                floatVectorizer(b, start, end, indexSymbol))
        case FloatMinus(a, b) => _mm256_sub_ps(floatVectorizer(a, start, end, indexSymbol),
                                                 floatVectorizer(b, start, end, indexSymbol))
        case FloatTimes(a, b) => _mm256_mul_ps(floatVectorizer(a, start, end, indexSymbol),
                                                 floatVectorizer(b, start, end, indexSymbol))
        case FloatDivide(a, b) => _mm256_div_ps(floatVectorizer(a, start, end, indexSymbol),
                                                  floatVectorizer(b, start, end, indexSymbol))
        case IntToFloat(a) => {
         a match {
            case s@Sym(_) if s == indexSymbol => make_index_32(start, end)
            case _ => make_constant_32(n, a)
          }
        }
     }
      case Const(v) => make_constant_32(n, v)
      case s@Sym(_) => {
        if (s == indexSymbol) {
          make_index_32(start, end)
        }
        else throw new Exception("Should never get here?")
      }
    }
  }

  def stripIndex(n: Exp[Int], i: Sym[Int]): Exp[Int] = {
    n match {
      case s@Sym(_) if s == i => Const(0)  // Is this correct - multiplcation?
      case _ => n
    }
  }

  def vectorizeBlock(body: Block[Unit], start: Int, end: Int, indexSymbol: Sym[Int]): Block[Unit] = {
    val e = getBlockResult(body)
    reifyEffects {
      e match {
        case Def(v) => {
           v match {
            case Reflect(arr@ArrayUpdate(a, n, y), _, _) => {
              if (arr.m == typ[Int]) {
                val vectorizedExp: Exp[__m256i] = intVectorizer(y.asInstanceOf[Exp[Int]], start, end, indexSymbol)
                _mm256_storeu_si256(a.asInstanceOf[Exp[Array[__m256i]]], vectorizedExp, stripIndex(n, indexSymbol))
              } else if (arr.m == typ[Double]) {
                val vectorizedExp: Exp[__m256d] = doubleVectorizer(y.asInstanceOf[Exp[Double]], start, end, indexSymbol)
                _mm256_store_pd(a.asInstanceOf[Exp[Array[Double]]], vectorizedExp, stripIndex(n, indexSymbol))
              } else if (arr.m == typ[Float]){
                val vectorizedExp: Exp[__m256] = floatVectorizer(y.asInstanceOf[Exp[Float]], start, end, indexSymbol)
                _mm256_store_ps(a.asInstanceOf[Exp[Array[Float]]], vectorizedExp, stripIndex(n, indexSymbol))
              } else ???
            }
          }
        }
      }
    }
  }

  override def transformStm(stm: Stm): Exp[Any] = stm match {
    case TP(sym, Reflect(VectorForEachUnvectorized(start, end, indexSym, body), a, b)) => {
      val a = vectorizeBlock(transformBlock(body), start, end, indexSym)
      vectorized_loop(start, end, indexSym, a)
    }
    case _ => {
      //println(stm)
      super.transformStm(stm)
    }
  }
}
