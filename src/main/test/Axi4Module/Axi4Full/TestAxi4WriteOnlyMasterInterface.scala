package Axi4Module.Axi4Full

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.bus.amba4.axi._


case class Stream2Axi4WriteOnlyMasterInterface(addressWidth: Int = 32, maxBurstLen: Int = 256, dataWidth: Int = 32) extends Component {
  val axi4Interface = Axi4WriteOnlyMaster(addressWidth, maxBurstLen, dataWidth)
  Axi4WriteOnlyMasterSpecRenamer(axi4Interface)
  ClockDomain.current.clock.setName("aclk")
  ClockDomain.current.reset.setName("aresetn")
}

case class Stream2Axi4WriteOnlyMasterInterfaceAddFifo(addressWidth: Int = 32, maxBurstLen: Int = 256, dataWidth: Int = 32) extends Component {
  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth = dataWidth,
    useId = false,
    useLock = false
  )
  val streamInterface = slave Stream Bits(dataWidth bits)
  // rename streamInterface
  val bundleName = streamInterface.getName()
  streamInterface.flatten.foreach { port =>
    port.setName(port.getName().replace(bundleName, "s_axis"))
  }
  val axi4WriteOnlyMasterInterface = master(Axi4WriteOnly(config))
  Axi4WriteOnlyMasterSpecRenamer(axi4WriteOnlyMasterInterface)

  val axi4Interconnection = Stream2Axi4WriteOnlyMasterInterface(addressWidth, maxBurstLen, dataWidth)
  val fifoInstance = StreamFifo(Bits(dataWidth bits), maxBurstLen)
  val start = in Bool()
  val burstLen = in UInt (8 bits)
  val offset = in UInt (addressWidth bits)
  val transInterrupt = out Bool()
  streamInterface >> fifoInstance.io.push
  fifoInstance.io.pop >> axi4Interconnection.axi4Interface.stream
  axi4Interconnection.axi4Interface.start := start
  axi4Interconnection.axi4Interface.burstLen := burstLen
  axi4Interconnection.axi4Interface.offset := offset
  transInterrupt := axi4Interconnection.axi4Interface.transInterrupt
  axi4Interconnection.axi4Interface.writeOnlyMasterInterface >> axi4WriteOnlyMasterInterface

  ClockDomain.current.clock.setName("aclk")
  ClockDomain.current.reset.setName("aresetn")

}

object TestAxi4WriteOnlyMasterInterface extends App {

  import scala.collection.mutable._
  import scala.util.Random

  SimConfig.withWave.allOptimisation
    .withConfig(SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetActiveLevel = LOW)))
    .compile(
      Stream2Axi4WriteOnlyMasterInterfaceAddFifo(32).setDefinitionName("Stream2Axi4WriteOnlyMasterInterfaceAddFifo")
    )
    .doSim { dut =>

      val testCase = ArrayBuffer[BigInt]()
      val writeData = ArrayBuffer[BigInt]()
      var isLastHandshake = false
      dut.axi4WriteOnlyMasterInterface.w.ready #= false
      dut.axi4WriteOnlyMasterInterface.aw.ready #= false
      dut.axi4WriteOnlyMasterInterface.b.resp #= 0
      dut.axi4WriteOnlyMasterInterface.b.valid #= false

      dut.start #= false
      dut.offset #= 0
      dut.burstLen #= 128


      dut.streamInterface.payload #= 32
      dut.streamInterface.valid #= false

      dut.clockDomain.assertReset()
      dut.clockDomain.forkStimulus(10)
      dut.clockDomain.waitSampling()

      sleep(20)
      dut.start #= true
      sleep(5)
      dut.start #= false


      def doSim(): Unit = {
        val readySignal = Random.nextBoolean()
        if (dut.axi4WriteOnlyMasterInterface.b.valid.toBoolean && dut.axi4WriteOnlyMasterInterface.b.ready.toBoolean) {
          dut.offset #= Random.nextInt(256)
          sleep(5)
          dut.start #= true
          sleep(4)
          dut.start #= false

        }
        dut.streamInterface.payload #= Random.nextInt(256)
        dut.streamInterface.valid #= Random.nextBoolean()
        dut.axi4WriteOnlyMasterInterface.aw.ready #= readySignal
        dut.axi4WriteOnlyMasterInterface.w.ready #= readySignal
        if (dut.axi4WriteOnlyMasterInterface.w.payload.last.toBoolean && dut.axi4WriteOnlyMasterInterface.w.valid.toBoolean
          && dut.axi4WriteOnlyMasterInterface.w.ready.toBoolean) {
          dut.axi4WriteOnlyMasterInterface.b.valid #= true
        }
        if (dut.axi4WriteOnlyMasterInterface.b.valid.toBoolean) {
          dut.axi4WriteOnlyMasterInterface.b.valid #= false
        }
        if (dut.streamInterface.valid.toBoolean & dut.streamInterface.ready.toBoolean) {
          testCase += dut.streamInterface.payload.toBigInt
        }
        if (dut.axi4WriteOnlyMasterInterface.w.valid.toBoolean & dut.axi4WriteOnlyMasterInterface.w.ready.toBoolean) {
          writeData += dut.axi4WriteOnlyMasterInterface.w.payload.data.toBigInt
        }
        dut.clockDomain.waitSampling()
      }

      for (i <- 0 to 256 * 10) {
        if (i != 256 * 10) {
          doSim()
        }
      }
      println(s"the testCase is :${testCase.mkString(",")}")
      println(s"the writeData is ${writeData.mkString(",")}")

    }
}
