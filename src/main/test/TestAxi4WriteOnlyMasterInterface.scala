import spinal.lib._
import spinal.core._
import spinal.core.sim._
import spinal.lib.bus.amba4.axi._

case class Axi4WriteOnlyMasterInterface(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Component {
  val axi4Interface = Axi4WriteOnlyMaster(addressWidth, len, widthPerData)
  Axi4WriteOnlyMasterSpecRenamer(axi4Interface)
}

case class Fifo2Axi4WriteOnlyMasterInterface(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Component {
  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth = widthPerData,
    useId = false,
    useLock = false
  )
  val fifoInterface = slave Stream Bits(widthPerData bits)
  val axi4WriteOnlyMasterInterface = master(Axi4WriteOnly(config)).setName("")

  val axi4Interconnection = Axi4WriteOnlyMasterInterface(addressWidth, len, widthPerData)
  val fifoInstance = StreamFifo(Bits(widthPerData bits), len)
  fifoInterface >> fifoInstance.io.push
  fifoInstance.io.pop >> axi4Interconnection.axi4Interface.fifo
  axi4Interconnection.axi4Interface.writeOnlyMasterInterface >> axi4WriteOnlyMasterInterface

}

object TestAxi4WriteOnlyMasterInterface extends App {

  import scala.util.Random
  import scala.collection.mutable._

  SimConfig.withWave.allOptimisation
    .withConfig(SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetActiveLevel = LOW)))
    .compile(Fifo2Axi4WriteOnlyMasterInterface(32, 32))
    .doSim { dut =>

      val testCase = ArrayBuffer[BigInt]()
      val writeData = ArrayBuffer[BigInt]()

      import Axi4.resp._
      dut.axi4WriteOnlyMasterInterface.w.ready #= false
      dut.axi4WriteOnlyMasterInterface.aw.ready #= false
      dut.axi4WriteOnlyMasterInterface.b.resp #= 0

      dut.fifoInterface.payload #= 32
      dut.fifoInterface.valid #= false

      dut.clockDomain.assertReset()
      dut.clockDomain.forkStimulus(10)
      dut.clockDomain.waitSampling()

      def doSim(): Unit = {
        val readySignal = Random.nextBoolean()
        dut.fifoInterface.payload #= Random.nextInt(256)
        dut.fifoInterface.valid #= Random.nextBoolean()
        dut.axi4WriteOnlyMasterInterface.aw.ready #= readySignal
        dut.axi4WriteOnlyMasterInterface.w.ready #= readySignal
        if (dut.fifoInterface.valid.toBoolean & dut.fifoInterface.ready.toBoolean) {
          testCase += dut.fifoInterface.payload.toBigInt
        }
        if (dut.axi4WriteOnlyMasterInterface.w.valid.toBoolean & dut.axi4WriteOnlyMasterInterface.w.ready.toBoolean) {
          writeData += dut.axi4WriteOnlyMasterInterface.w.payload.data.toBigInt
        }
        dut.clockDomain.waitSampling()
      }

      for (i <- 0 to 256 * 10) {
        if (i != 100) {
          doSim()
        } else {
          println(s"the testCase is :${testCase.mkString(",")}")
          println(s"the writeData is ${writeData.mkString(",")}")
        }
      }

    }
}
