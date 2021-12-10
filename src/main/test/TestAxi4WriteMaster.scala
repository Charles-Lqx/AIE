import spinal.lib._
import spinal.core._
import spinal.core.sim._
import spinal.lib.bus.amba4.axi._

case class TestAxi4WriteMaster(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Component {
  val axi4Interface = Axi4WriteMaster(addressWidth, len, widthPerData)
  Axi4WriteMasterSpecRenamer(axi4Interface)
}

case class TestFifo2Axi4WriteMaster(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Component {
  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth = widthPerData,
    idWidth = 1
  )
  val fifoInterface = slave Stream Bits(widthPerData bits)
  val axi4MasterInterface = master(Axi4(config))

  val axi4Interconnection = TestAxi4WriteMaster(addressWidth, len, widthPerData)
  val fifoInstance = StreamFifo(Bits(widthPerData bits), len)
  fifoInterface >> fifoInstance.io.push
  fifoInstance.io.pop >> axi4Interconnection.axi4Interface.fifo
  axi4Interconnection.axi4Interface.writeMasterInterface >> axi4MasterInterface

}

object TestAxi4WriteMaster extends App {

  import scala.util.Random
  import scala.collection.mutable._

  SimConfig.withWave.allOptimisation.compile(TestFifo2Axi4WriteMaster(32))
    .doSim { dut =>

      val testCase = ArrayBuffer[BigInt]()
      val writeData = ArrayBuffer[BigInt]()

      dut.axi4MasterInterface.w.ready #= true
      dut.axi4MasterInterface.aw.ready #= true

      dut.fifoInterface.payload #= 32
      dut.fifoInterface.valid #= false

      dut.clockDomain.assertReset()
      dut.clockDomain.forkStimulus(10)
      dut.clockDomain.waitSampling()

      def doIt(): Unit = {
        dut.fifoInterface.payload #= Random.nextInt(256)
        dut.fifoInterface.valid #= true
        if (dut.fifoInterface.valid.toBoolean & dut.fifoInterface.ready.toBoolean) {
          testCase += dut.fifoInterface.payload.toBigInt
        }
        if (dut.axi4MasterInterface.w.valid.toBoolean & dut.axi4MasterInterface.w.ready.toBoolean) {
          writeData += dut.axi4MasterInterface.w.payload.data.toBigInt
        }
        dut.clockDomain.waitSampling()
      }

      for (i <- 0 to 100) {
        if (i != 100) {
          doIt()
        } else {
          println(s"the testCase is :${testCase.mkString(",")}")
          println(s"the writeData is ${writeData.mkString(",")}")
        }
      }

    }
}
