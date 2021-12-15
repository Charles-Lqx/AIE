import spinal.lib._
import spinal.core._
import spinal.core.sim._
import spinal.lib.bus.amba4.axi._

case class Axi4WriteMasterInterface(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Component {
  val axi4Interface = Axi4WriteMaster(addressWidth, len, widthPerData)
  Axi4WriteMasterSpecRenamer(axi4Interface)
}

case class Fifo2Axi4WriteMasterInterface(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Component {
  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth = widthPerData,
    useId = false,
    useLock = false
  )
  val fifoInterface = slave Stream Bits(widthPerData bits)
  val axi4WriteMasterInterface = master(Axi4(config)).setName("")

  val axi4Interconnection = Axi4WriteMasterInterface(addressWidth, len, widthPerData)
  val fifoInstance = StreamFifo(Bits(widthPerData bits), len)
  fifoInterface >> fifoInstance.io.push
  fifoInstance.io.pop >> axi4Interconnection.axi4Interface.fifo
  axi4Interconnection.axi4Interface.writeMasterInterface >> axi4WriteMasterInterface

}

object TestAxi4WriteMasterInterface extends App {

  import scala.util.Random
  import scala.collection.mutable._

  SimConfig.withWave.allOptimisation.compile(Fifo2Axi4WriteMasterInterface(32))
    .doSim { dut =>

      val testCase = ArrayBuffer[BigInt]()
      val writeData = ArrayBuffer[BigInt]()

      import Axi4.resp._
      dut.axi4WriteMasterInterface.w.ready #= false
      dut.axi4WriteMasterInterface.aw.ready #= false
      dut.axi4WriteMasterInterface.b.resp #= 0

      dut.fifoInterface.payload #= 32
      dut.fifoInterface.valid #= false

      dut.clockDomain.assertReset()
      dut.clockDomain.forkStimulus(10)
      dut.clockDomain.waitSampling()

      def doSim(): Unit = {
        val readySignal = Random.nextBoolean()
        dut.fifoInterface.payload #= Random.nextInt(256)
        dut.fifoInterface.valid #= true
        dut.axi4WriteMasterInterface.aw.ready #= readySignal
        dut.axi4WriteMasterInterface.w.ready #= readySignal
        if (dut.fifoInterface.valid.toBoolean & dut.fifoInterface.ready.toBoolean) {
          testCase += dut.fifoInterface.payload.toBigInt
        }
        if (dut.axi4WriteMasterInterface.w.valid.toBoolean & dut.axi4WriteMasterInterface.w.ready.toBoolean) {
          writeData += dut.axi4WriteMasterInterface.w.payload.data.toBigInt
        }
        dut.clockDomain.waitSampling()
      }

      for (i <- 0 to 256 * 5) {
        if (i != 100) {
          doSim()
        } else {
          println(s"the testCase is :${testCase.mkString(",")}")
          println(s"the writeData is ${writeData.mkString(",")}")
        }
      }

    }
}
