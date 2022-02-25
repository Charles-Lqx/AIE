import spinal.core._
import spinal.lib._

case class TestOpWidth() extends Component {
  val a = in UInt(20 bits)
  val b = in UInt(8 bits)
  val c1 = out UInt()
  val c2 = out UInt(16 bits)
  val c3 = out UInt()
  val c4 = out UInt(16 bits)
  val c5 = out UInt(16 bits)
  val bo = out Bool()

  c1 := (a + b).resized
  c2 := U(0)
  c3 := a * U(8).resized
  c4 := (a / b).resized
  c5 := (a % b).resized
  bo := a === U(0).resize(8)
}

object TestOpWidth extends App{
  SpinalVerilog(TestOpWidth())
}

