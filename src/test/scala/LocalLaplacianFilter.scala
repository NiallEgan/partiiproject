import sepia._
import org.scalatest.FlatSpec
import scala.math._
import scala.collection.mutable.ListBuffer

// Translated from the Halide example

trait LocalLaplacian extends TestPipeline {
  val alpha = 0.25f
  val beta = 1.0f
  val levels = 3

  override def prog(in: Input, w: Rep[Int], h: Rep[Int]) = {
    //val remapTable: Rep[Array[Float]] = NewArray(256)

    val xs = for (i <- 0 until 256: Range) yield {
       val fx = (i / 256.0f)
       unit(alpha * fx * exp(-fx * fx / 2.0f).toFloat)
    }
    val remapTable: Rep[Array[Float]] = array_obj_fromseq(xs)

    def remap(x: RGBVal[Float]): RGBVal[Float] = {
      x.map(v => {
        val index = repFloatToRepInt(v)
        remapTable(index)
      })
    }

    def clamp(x: RGBVal[Float], min: Float, max: Float) = {
      x.map(v => { // todo: optimise this!
        tern(v < min, min, tern(v > max, max, v))
      })
    }

    def downsample(f: Func[Float]): Func[Float] = {
      val downx = func[Float] ((x: Rep[Int], y: Rep[Int]) =>
        (f(2*x-1, y) + 3.0f * (f(2*x, y) + f(2*x+1, y)) + f(2*x+2, y)) / 8.0f
      )
      downx addName "downx"
      val downy = func[Float] ((x: Rep[Int], y: Rep[Int]) =>
        (downx(x, 2*y-1) + 3.0f * (downx(x, 2*y) + downx(x, 2*y+1)) + downx(x, 2*y+2)) / 8.0f
      )
      downy addName "downy"
      downy
    }

    def upsample(f: Func[Float]): Func[Float] = {
      val upx = func[Float] ((x: Rep[Int], y: Rep[Int]) =>
         0.25f * f(x/2 - 1, y) + 0.75f * f(x/2, y)
         // + 2 * (x % 2
      )
      upx addName "upx"
      val upy = func[Float] ((x: Rep[Int], y: Rep[Int]) =>
        0.25f * upx(x, y / 2 - 1) + 0.75f * upx(x, y / 2)
        // + 2 * (x % 2
      )
      upy addName "upy"
      upy
    }

    def gaussianPyramids(i: Int, offset: Int)(f: Func[Float],
                         inGPyramid: List[Func[Float]]): List[Func[Float]] = {
      val firstLevel =
        func[Float] ((x: Rep[Int], y: Rep[Int]) => {
          val in_level = inGPyramid(i)(x, y) * (levels - 1)
          val li = clamp(in_level, 0, levels-2).map(repFloatToRepInt(_))
          val k = li + offset
          val level =  k * (1.0f / (levels - 1))
          val idx = clamp(f(x, y) * (levels-1) * 256.0f, 0.0f, (levels-1)*256.0f)
          beta * (f(x, y) - level) + level + remap(idx - 256 * k)
        })
      firstLevel addName "first level processed gaussian pyramid"

      val gPyramid = new ListBuffer[Func[Float]]
      gPyramid += firstLevel
      for (j <- 1 until levels: Range) {
        val g = downsample(gPyramid(j-1))
        gPyramid += g
        g addName f"processes gaussian pyramid $j"
      }
      gPyramid.toList
    }

    def laplacianPyramids(gPyramid: List[Func[Float]]): List[Func[Float]] = {
      val lPyramid = new ListBuffer[Func[Float]]
      gPyramid(levels-1) +=: lPyramid
      for (j <- levels - 2 to 0 by -1: Range) {
        val us = upsample(gPyramid(j+1))
        val g = func[Float] ((x: Rep[Int], y: Rep[Int]) =>
          gPyramid(j)(x, y) - us(x, y)
        )
        g addName f"laplacian pyramid $j"
        g +=: lPyramid
      }
      lPyramid.toList
    }

    def inGPyramid(f: Func[Float]): List[Func[Float]] = {
      val gPyramid = new ListBuffer[Func[Float]]
      gPyramid += f
      for (j <- 1 until levels: Range) {
        val g = downsample(gPyramid(j-1))
        g addName f"in gauss pyramid $j"
        gPyramid += g
      }
      gPyramid.toList
    }

    def outLPyramid(f: Func[Float], inPyramid: List[Func[Float]]):
      List[(List[Func[Float]], List[Func[Float]], Func[Float], Func[Float], Func[Float])] = {
      val outLPyramid = new ListBuffer[(List[Func[Float]], List[Func[Float]], Func[Float], Func[Float], Func[Float])]
      for (j <- 0 until levels: Range) {
        val gPyramid0 = gaussianPyramids(j, 0)(f, inPyramid)
        val gPyramid1 = gaussianPyramids(j, 1)(f, inPyramid)
        val lPyramid0 = laplacianPyramids(gPyramid0)
        val lPyramid1 = laplacianPyramids(gPyramid1)
        val g = func[Float] ( (x: Rep[Int], y: Rep[Int]) => {
          val level = inPyramid(j)(x, y) * (levels - 1)
          val li = clamp(level, 0, levels-2).map(repFloatToRepInt(_))
          val lf = level - li
          (1.0f - lf) * lPyramid0(j)(x, y) + lf * lPyramid1(j)(x, y)
        })
        val funcs = (gPyramid0, gPyramid1, lPyramid0(j), lPyramid1(j), g)
        outLPyramid += funcs
        g addName f"out laplace pyramid $j"
      }
      outLPyramid.toList
    }


    val f = func[Float] ((x: Rep[Int], y: Rep[Int]) => in(x, y).map(repCharToRepFloat(_)))
    val inGaussPyramid = inGPyramid(f)

    val outLaplacePyramid = outLPyramid(f, inGaussPyramid)

    val fin = final_func[Float] ((x: Rep[Int], y: Rep[Int]) => outLaplacePyramid(levels-1)._5(x, y))


    /*
    val outGaussPyramid = new ListBuffer[Func[Float]]
    println(f"out laplace pyramid: ${outLaplacePyramid}")
    println(f"in gauss pyramid: ${inGaussPyramid}")
    outLaplacePyramid(levels-1)._5 +=: outGaussPyramid
    for (j <- levels-2 to 1 by -1: Range) {
      val us = upsample(outGaussPyramid(0)) // this is why mutability is bad!!!
      val g = func[Float]((x: Rep[Int], y: Rep[Int]) =>
        us(x, y) + outLaplacePyramid(j)._5(x, y)
      )
      g addName f"out gauss pyramid $j"
      g +=: outGaussPyramid
    }
    println(f"Out gauss pyramid: ${outGaussPyramid}")
    val us = upsample(outGaussPyramid(0))
    val last = final_func[Float] ((x: Rep[Int], y: Rep[Int]) =>
      us(x, y) + outLaplacePyramid(0)._5(x, y)
    )
    last addName "final func"*/


    for (i <- levels-1 to 0 by -1) {
      outLaplacePyramid(i)._5.computeRoot()
      outLaplacePyramid(i)._4.computeRoot()
      outLaplacePyramid(i)._3.computeRoot()
      outLaplacePyramid(i)._2.reverse.foreach(_.computeRoot())
      outLaplacePyramid(i)._1.reverse.foreach(_.computeRoot())
    }


    inGaussPyramid.reverse.foreach(_.computeRoot())
  }
}

class LocalLaplacianTest extends FlatSpec {
  "LowPassEdgeFilter" should "make a crude edge detection filter" in {
    println("local laplacian")
    val blurProg =
      new LocalLaplacian with CompilerInstance with TestAstOps
    val blurProgAnalysis = new LocalLaplacian with TestPipelineAnalysis
    val bg = blurProgAnalysis.getBoundsGraph
    blurProg.compile(bg, "local_laplacian")
  }
}
