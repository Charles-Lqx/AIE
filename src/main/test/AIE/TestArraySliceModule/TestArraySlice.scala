package AIE.TestArraySliceModule

import org.slf4j.{Logger, LoggerFactory}
import AIE.ArraySliceModule._
import TestUtil._
import org.scalatest.funsuite.AnyFunSuite

import spinal.core._
import spinal.lib._


import spinal.core.sim._


import scala.collection.mutable._

class TestArraySlice extends AnyFunSuite {



  test("case1: not use all mem depth, but will padding") {

    val compiled = SimConfig.withFstWave.withConfig(SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetActiveLevel = LOW)))
      .compile(ArraySlice(32, ArraySliceConfig(64, 64, 8, 8)).setDefinitionName("arraySlice"))

    compiled.doSim { dut =>

      val logger = LoggerFactory.getLogger(s"Test - $dut")

      val testCase = ArrayBuffer.tabulate(48 * 48)(BigInt(_))
      dut.inputFeatureMapHeight #= 48
      dut.inputFeatureMapWidth #= 48
      dut.outputFeatureMapHeight #= 4
      dut.outputFeatureMapWidth #= 4

      (0 until dut.outputStreamArrayData.size).foreach { i =>
        dut.outputStreamArrayData(i).ready #= true
      }

      dut.inputStreamArrayData.clear()


      dut.clockDomain.assertReset()
      dut.clockDomain.forkStimulus(15)
      dut.clockDomain.waitSampling()


      import dut.{inputStreamArrayData, outputStreamArrayData}
      val latency = 500
      val returnResult = flowPeekPokeFullDataOneToMore[BigInt, BigInt, Bits, Bits](dut, testCase, inputStreamArrayData, outputStreamArrayData, latency)
    }
  }

}