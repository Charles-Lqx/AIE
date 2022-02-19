package AIE.TestArraySliceModule

import spinal.core._
import spinal.lib._

import spinal.core.sim._

import AIE.ArraySliceModule._

object TestArraySlice extends App {
  val compiled = SimConfig.withWave.withConfig(SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetActiveLevel = LOW)))
    .allOptimisation.compile(ArraySlice(32, ArraySliceConfig(64, 64, 8, 8)).setDefinitionName("arraySlice"))
  compiled.doSim{dut =>

    dut.clockDomain.assertReset()
    dut.clockDomain.forkStimulus(15)
    dut.clockDomain.waitSampling()
  }

}