import sepia._


trait GradProg extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val f: Func =
			((x: Rep[Int], y: Rep[Int]) => x + y) withDomain (w, h)

		f.realize()
		// This is for testing purposes only
		registerFunction("f", f)
	}
}

trait BlurredGradProg extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val f: Func =
			((x: Rep[Int], y: Rep[Int]) => x + y) withDomain (w, h)

		val g: Func =
			((x: Rep[Int], y: Rep[Int]) =>
				(f(x+1, y-1) + f(x+1, y) + f(x+1, y+1) +
				 f(x,   y-1) + f(x,   y) + f(x,   y+1) +
				 f(x-1, y-1) + f(x-1, y) + f(x-1, y+1)) / 9) withNZDomain ((1, w-1), (1, h-1))
		g.realize()

		// This is for testing purposes only
		registerFunction("f", f)
		registerFunction("g", g)
	}
}

trait BlurredGradProgComputeAt extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {

		val f: Func =
			((x: Rep[Int], y: Rep[Int]) => x + y) withDomain (w, h)

		val g: Func =
				((x: Rep[Int], y: Rep[Int]) =>
					(f(x+1, y-1) + f(x+1, y) + f(x+1, y+1) +
					 f(x,   y-1) + f(x,   y) + f(x,   y+1) +
				   f(x-1, y-1) + f(x-1, y) + f(x-1, y+1)) / 9) withNZDomain ((1, w-1), (1, h-1))

		f.computeAt(g, "y")

		g.realize()

		// This is for testing purposes only
		registerFunction("f", f)
		registerFunction("g", g)


/*RootNode(List(
	StorageNode(sepia.CompilerFuncOps$CompilerFunc@268775a7,List(
		LoopNode(y,sepia.CompilerFuncOps$CompilerFunc@268775a7,Sequential,List(
			StorageNode(sepia.CompilerFuncOps$CompilerFunc@71601bd9,List(
				LoopNode(y,sepia.CompilerFuncOps$CompilerFunc@71601bd9,Sequential,List(
					LoopNode(x,sepia.CompilerFuncOps$CompilerFunc@71601bd9,Sequential,List(
						ComputeNode(sepia.CompilerFuncOps$CompilerFunc@71601bd9,List())
					))
				)), // This is a relevant sn
				LoopNode(x,sepia.CompilerFuncOps$CompilerFunc@268775a7,Sequential,
					List(ComputeNode(sepia.CompilerFuncOps$CompilerFunc@268775a7,List()))
				))
			))
		))
	)))*/

	}
}

trait FunkyBoundsProg extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val f: Func =
			((x: Rep[Int], y: Rep[Int]) => 30 + x) withDomain (w, h)

		val g: Func =
			((x: Rep[Int], y: Rep[Int]) =>
			f(x-4, y+3) + f(x+10, y) + f(x-11, y+12) + f(x, y-40*2)) withDomain (w, h) // N.B. These are not valid domains

		g.realize()
		registerFunction("f", f)
		registerFunction("g", g)
	}
}

trait ThreeStageBoxBlur extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val f: Func =
			((x: Rep[Int], y: Rep[Int]) => in(x, y)) withDomain(w, h)
		val g: Func =
			((x: Rep[Int], y: Rep[Int]) => (f(x, y) + f(x+1, y) + f(x-1, y)) / 3) withNZDomain((1, w-1), (0, h))
		val i: Func =
			((x: Rep[Int], y: Rep[Int]) => (g(x, y) + g(x, y+1) + g(x, y-1)) / 3) withNZDomain((1, w-1), (1, h-1))


		i.realize()
		registerFunction("f", f)
		registerFunction("g", g)
		registerFunction("i", i)
	}
}

trait ThreeStageBoxBlurWithComputeAt extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val f: Func =
			((x: Rep[Int], y: Rep[Int]) => in(x, y)) withDomain(w, h)
		val g: Func =
			((x: Rep[Int], y: Rep[Int]) => (f(x, y) + f(x+1, y) + f(x-1, y)) / 3) withNZDomain((1, w-1), (0, h))
		val i: Func =
			((x: Rep[Int], y: Rep[Int]) => (g(x, y) + g(x, y+1) + g(x, y-1)) / 3) withNZDomain((1, w-1), (1, h-1))

		// TODO: What about 'middle functions'?
		f.computeAt(i, "y")

		i.realize()

		registerFunction("f", f)
		registerFunction("g", g)
		registerFunction("i", i)
	}
}

trait ThreeStageBoundsAnalysisExample extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val f: Func =
			((x: Rep[Int], y: Rep[Int]) => x + y) withDomain(w, h)
		val g: Func =
			((x: Rep[Int], y: Rep[Int]) => f(x-1, y+1) + f(x+1, y-1)) withNZDomain ((1, w-1), (1, h-1))
		val i: Func =
			((x: Rep[Int], y: Rep[Int]) => g(x-1, y+1) + g(x+1, y-1)) withNZDomain ((2, w-2), (2, h-2))

		i.realize()

		registerFunction("f", f)
		registerFunction("g", g)
		registerFunction("i", i)
	}
}

trait IDProg extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val f: Func =
			((x: Rep[Int], y: Rep[Int]) => in(x, y)) withDomain(w, h)

		f.realize()
		registerFunction("f", f)
	}
}

trait TwoStageBoxBlur extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val g: Func =
			((x: Rep[Int], y: Rep[Int]) => (in(x, y) + in(x+1, y) + in(x-1, y)) / 3) withNZDomain((1, w-1), (0, h))
		val i: Func =
			((x: Rep[Int], y: Rep[Int]) => (g(x, y) + g(x, y+1) + g(x, y-1)) / 3) withNZDomain((1, w-1), (1, h-1))


		i.realize()
		registerFunction("g", g)
		registerFunction("i", i)
	}
}

trait OneStageBoxBlur extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val i: Func =
			((x: Rep[Int], y: Rep[Int]) => (in(x, y) + in(x, y+1) + in(x, y-1) +
																			in(x-1, y-1) + in(x-1, y) + in(x-1, y+1) +
																			in(x+1, y-1) + in(x+1, y) + in(x+1, y+1)) / 9) withNZDomain((1, w-1), (1, h-1))
		i.realize()
		registerFunction("i", i)
	}
}

trait Cropper extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val f: Func =
			((x: Rep[Int], y: Rep[Int]) => in(x, y)) withNZDomain((1, w-1), (1, h-1))

		f.realize()
	}
}

trait TwoStageBoxBlurStoreAt extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val g: Func =
			((x: Rep[Int], y: Rep[Int]) => (in(x, y) + in(x+1, y) + in(x-1, y)) / 3) withNZDomain((1, w-1), (0, h))
		val i: Func =
			((x: Rep[Int], y: Rep[Int]) => (g(x, y) + g(x, y+1) + g(x, y-1)) / 3) withNZDomain((1, w-1), (1, h-1))

		g.computeAt(i, "x")
		g.storeAt(i, "y")
		i.realize()

		registerFunction("i", i)
		registerFunction("g", g)

	}
}

trait TwoStageBoxBlurComputeAtX extends TestPipeline {
	override def prog(in: Buffer, w: Rep[Int], h: Rep[Int]): Rep[Unit] = {
		val g: Func =
			((x: Rep[Int], y: Rep[Int]) => (in(x, y) + in(x+1, y) + in(x-1, y)) / 3) withNZDomain((1, w-1), (0, h))
		val i: Func =
			((x: Rep[Int], y: Rep[Int]) => (g(x, y) + g(x, y+1) + g(x, y-1)) / 3) withNZDomain((1, w-1), (1, h-1))

		g.computeAt(i, "x")
		i.realize()

		registerFunction("i", i)
		registerFunction("g", g)

	}
}
