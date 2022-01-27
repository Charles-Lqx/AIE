// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"


VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_init_sub__TOP__0(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+153,"streamIn_valid", false,-1);
    tracep->declBit(c+154,"streamIn_ready", false,-1);
    tracep->declBus(c+155,"streamIn_payload", false,-1, 31,0);
    tracep->declBit(c+156,"startIn", false,-1);
    tracep->declBus(c+157,"bufferDepthIn", false,-1, 7,0);
    tracep->declBit(c+158,"interruptOut", false,-1);
    tracep->declBus(c+159,"startAddr", false,-1, 31,0);
    tracep->declBus(c+160,"offset", false,-1, 31,0);
    tracep->declBus(c+161,"pathNumb", false,-1, 7,0);
    tracep->declBit(c+162,"full_aw_valid", false,-1);
    tracep->declBit(c+163,"full_aw_ready", false,-1);
    tracep->declBus(c+164,"full_aw_payload_addr", false,-1, 31,0);
    tracep->declBus(c+165,"full_aw_payload_region", false,-1, 3,0);
    tracep->declBus(c+166,"full_aw_payload_len", false,-1, 7,0);
    tracep->declBus(c+167,"full_aw_payload_size", false,-1, 2,0);
    tracep->declBus(c+168,"full_aw_payload_burst", false,-1, 1,0);
    tracep->declBus(c+169,"full_aw_payload_cache", false,-1, 3,0);
    tracep->declBus(c+170,"full_aw_payload_qos", false,-1, 3,0);
    tracep->declBus(c+171,"full_aw_payload_prot", false,-1, 2,0);
    tracep->declBit(c+172,"full_w_valid", false,-1);
    tracep->declBit(c+173,"full_w_ready", false,-1);
    tracep->declBus(c+174,"full_w_payload_data", false,-1, 31,0);
    tracep->declBus(c+175,"full_w_payload_strb", false,-1, 3,0);
    tracep->declBit(c+176,"full_w_payload_last", false,-1);
    tracep->declBit(c+177,"full_b_valid", false,-1);
    tracep->declBit(c+178,"full_b_ready", false,-1);
    tracep->declBus(c+179,"full_b_payload_resp", false,-1, 1,0);
    tracep->declBit(c+180,"aresetn", false,-1);
    tracep->declBit(c+181,"aclk", false,-1);
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_init_sub__TOP__PingPongBufferWithWriteOnlyMaster__0(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_init_sub__TOP__PingPongBufferWithWriteOnlyMaster__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+153,"streamIn_valid", false,-1);
    tracep->declBit(c+150,"streamIn_ready", false,-1);
    tracep->declBus(c+155,"streamIn_payload", false,-1, 31,0);
    tracep->declBit(c+156,"startIn", false,-1);
    tracep->declBus(c+157,"bufferDepthIn", false,-1, 7,0);
    tracep->declBit(c+10,"interruptOut", false,-1);
    tracep->declBus(c+159,"startAddr", false,-1, 31,0);
    tracep->declBus(c+160,"offset", false,-1, 31,0);
    tracep->declBus(c+161,"pathNumb", false,-1, 7,0);
    tracep->declBit(c+11,"full_aw_valid", false,-1);
    tracep->declBit(c+163,"full_aw_ready", false,-1);
    tracep->declBus(c+12,"full_aw_payload_addr", false,-1, 31,0);
    tracep->declBus(c+195,"full_aw_payload_region", false,-1, 3,0);
    tracep->declBus(c+13,"full_aw_payload_len", false,-1, 7,0);
    tracep->declBus(c+196,"full_aw_payload_size", false,-1, 2,0);
    tracep->declBus(c+197,"full_aw_payload_burst", false,-1, 1,0);
    tracep->declBus(c+195,"full_aw_payload_cache", false,-1, 3,0);
    tracep->declBus(c+195,"full_aw_payload_qos", false,-1, 3,0);
    tracep->declBus(c+198,"full_aw_payload_prot", false,-1, 2,0);
    tracep->declBit(c+124,"full_w_valid", false,-1);
    tracep->declBit(c+173,"full_w_ready", false,-1);
    tracep->declBus(c+125,"full_w_payload_data", false,-1, 31,0);
    tracep->declBus(c+199,"full_w_payload_strb", false,-1, 3,0);
    tracep->declBit(c+14,"full_w_payload_last", false,-1);
    tracep->declBit(c+177,"full_b_valid", false,-1);
    tracep->declBit(c+15,"full_b_ready", false,-1);
    tracep->declBus(c+179,"full_b_payload_resp", false,-1, 1,0);
    tracep->declBit(c+180,"aresetn", false,-1);
    tracep->declBit(c+181,"aclk", false,-1);
    tracep->declBit(c+150,"pingPongBuffer_1_s_axis_ready", false,-1);
    tracep->declBit(c+10,"pingPongBuffer_1_interruptOut", false,-1);
    tracep->declBit(c+16,"pingPongBuffer_1_m_axis_valid", false,-1);
    tracep->declBus(c+17,"pingPongBuffer_1_m_axis_payload", false,-1, 31,0);
    tracep->declBit(c+18,"pingPongBuffer_1_startOut", false,-1);
    tracep->declBus(c+19,"pingPongBuffer_1_bufferDepthOut", false,-1, 7,0);
    tracep->declBit(c+126,"writeOnlyMater_s_axis_ready", false,-1);
    tracep->declBit(c+11,"writeOnlyMater_m_axi_awvalid", false,-1);
    tracep->declBus(c+12,"writeOnlyMater_m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+195,"writeOnlyMater_m_axi_awregion", false,-1, 3,0);
    tracep->declBus(c+13,"writeOnlyMater_m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+196,"writeOnlyMater_m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+197,"writeOnlyMater_m_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+195,"writeOnlyMater_m_axi_awcache", false,-1, 3,0);
    tracep->declBus(c+195,"writeOnlyMater_m_axi_awqos", false,-1, 3,0);
    tracep->declBus(c+198,"writeOnlyMater_m_axi_awprot", false,-1, 2,0);
    tracep->declBit(c+124,"writeOnlyMater_m_axi_wvalid", false,-1);
    tracep->declBus(c+125,"writeOnlyMater_m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+199,"writeOnlyMater_m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+14,"writeOnlyMater_m_axi_wlast", false,-1);
    tracep->declBit(c+15,"writeOnlyMater_m_axi_bready", false,-1);
    tracep->declBit(c+1,"writeOnlyMater_transInterrupt", false,-1);
    tracep->pushNamePrefix("pingPongBuffer_1 ");
    tracep->declBit(c+153,"s_axis_valid", false,-1);
    tracep->declBit(c+150,"s_axis_ready", false,-1);
    tracep->declBus(c+155,"s_axis_payload", false,-1, 31,0);
    tracep->declBit(c+156,"startIn", false,-1);
    tracep->declBus(c+157,"bufferDepthIn", false,-1, 7,0);
    tracep->declBit(c+10,"interruptOut", false,-1);
    tracep->declBit(c+16,"m_axis_valid", false,-1);
    tracep->declBit(c+126,"m_axis_ready", false,-1);
    tracep->declBus(c+17,"m_axis_payload", false,-1, 31,0);
    tracep->declBit(c+18,"startOut", false,-1);
    tracep->declBus(c+19,"bufferDepthOut", false,-1, 7,0);
    tracep->declBit(c+1,"interruptIn", false,-1);
    tracep->declBit(c+180,"aresetn", false,-1);
    tracep->declBit(c+181,"aclk", false,-1);
    tracep->declBus(c+200,"pingPongBufferStateMachine_enumDef_BOOT", false,-1, 1,0);
    tracep->declBus(c+197,"pingPongBufferStateMachine_enumDef_EMPTY", false,-1, 1,0);
    tracep->declBus(c+201,"pingPongBufferStateMachine_enumDef_HALF", false,-1, 1,0);
    tracep->declBus(c+202,"pingPongBufferStateMachine_enumDef_FULL", false,-1, 1,0);
    tracep->declBit(c+99,"bufferFifoA_io_push_valid", false,-1);
    tracep->declBus(c+100,"bufferFifoA_io_push_payload", false,-1, 31,0);
    tracep->declBit(c+127,"bufferFifoA_io_pop_ready", false,-1);
    tracep->declBit(c+101,"bufferFifoB_io_push_valid", false,-1);
    tracep->declBus(c+102,"bufferFifoB_io_push_payload", false,-1, 31,0);
    tracep->declBit(c+128,"bufferFifoB_io_pop_ready", false,-1);
    tracep->declBit(c+20,"bufferFifoA_io_push_ready", false,-1);
    tracep->declBit(c+21,"bufferFifoA_io_pop_valid", false,-1);
    tracep->declBus(c+2,"bufferFifoA_io_pop_payload", false,-1, 31,0);
    tracep->declBus(c+22,"bufferFifoA_io_occupancy", false,-1, 8,0);
    tracep->declBus(c+23,"bufferFifoA_io_availability", false,-1, 8,0);
    tracep->declBit(c+24,"bufferFifoB_io_push_ready", false,-1);
    tracep->declBit(c+25,"bufferFifoB_io_pop_valid", false,-1);
    tracep->declBus(c+3,"bufferFifoB_io_pop_payload", false,-1, 31,0);
    tracep->declBus(c+26,"bufferFifoB_io_occupancy", false,-1, 8,0);
    tracep->declBus(c+27,"bufferFifoB_io_availability", false,-1, 8,0);
    tracep->declBus(c+19,"bufferDepthReg", false,-1, 7,0);
    tracep->declBit(c+103,"inCounter_willIncrement", false,-1);
    tracep->declBit(c+104,"inCounter_willClear", false,-1);
    tracep->declBus(c+105,"inCounter_valueNext", false,-1, 7,0);
    tracep->declBus(c+28,"inCounter_value", false,-1, 7,0);
    tracep->declBit(c+29,"inCounter_willOverflowIfInc", false,-1);
    tracep->declBit(c+86,"inCounter_willOverflow", false,-1);
    tracep->declBit(c+129,"outCounter_willIncrement", false,-1);
    tracep->declBit(c+130,"outCounter_willClear", false,-1);
    tracep->declBus(c+131,"outCounter_valueNext", false,-1, 7,0);
    tracep->declBus(c+30,"outCounter_value", false,-1, 7,0);
    tracep->declBit(c+31,"outCounter_willOverflowIfInc", false,-1);
    tracep->declBit(c+93,"outCounter_willOverflow", false,-1);
    tracep->declBit(c+32,"isWriteBufferA", false,-1);
    tracep->declBit(c+33,"isReadBufferA", false,-1);
    tracep->declBit(c+182,"streamIn_fire", false,-1);
    tracep->declBit(c+106,"inCounterWillOverflow", false,-1);
    tracep->declBit(c+94,"streamOut_fire", false,-1);
    tracep->declBit(c+132,"outCounterWillOverflow", false,-1);
    tracep->declBit(c+182,"streamIn_fire_1", false,-1);
    tracep->declBit(c+94,"streamOut_fire_1", false,-1);
    tracep->declBit(c+107,"startReceiveResetSignal", false,-1);
    tracep->declBit(c+183,"startReceiveSignal", false,-1);
    tracep->declBit(c+4,"startReceiveSignal_regNext", false,-1);
    tracep->declBit(c+184,"realStartSignal", false,-1);
    tracep->declBit(c+185,"lastBurstCompleteSignal", false,-1);
    tracep->declBit(c+34,"isAfterResetState", false,-1);
    tracep->declBit(c+35,"pipedBufferAPop_valid", false,-1);
    tracep->declBit(c+133,"pipedBufferAPop_ready", false,-1);
    tracep->declBus(c+5,"pipedBufferAPop_payload", false,-1, 31,0);
    tracep->declBit(c+35,"bufferFifoA_io_pop_rValid", false,-1);
    tracep->declBus(c+5,"bufferFifoA_io_pop_rData", false,-1, 31,0);
    tracep->declBit(c+36,"when_Stream_l342", false,-1);
    tracep->declBit(c+37,"pipedBufferBPop_valid", false,-1);
    tracep->declBit(c+134,"pipedBufferBPop_ready", false,-1);
    tracep->declBus(c+6,"pipedBufferBPop_payload", false,-1, 31,0);
    tracep->declBit(c+37,"bufferFifoB_io_pop_rValid", false,-1);
    tracep->declBus(c+6,"bufferFifoB_io_pop_rData", false,-1, 31,0);
    tracep->declBit(c+38,"when_Stream_l342_1", false,-1);
    tracep->declBit(c+203,"pingPongBufferStateMachine_wantExit", false,-1);
    tracep->declBit(c+39,"pingPongBufferStateMachine_wantStart", false,-1);
    tracep->declBit(c+203,"pingPongBufferStateMachine_wantKill", false,-1);
    tracep->declBit(c+10,"outputInterruptSignalState", false,-1);
    tracep->declBus(c+40,"currentState", false,-1, 1,0);
    tracep->declBit(c+41,"canReadData", false,-1);
    tracep->declBit(c+42,"readyForNextTransfer", false,-1);
    tracep->declBit(c+18,"outputStartSignalReg", false,-1);
    tracep->declBit(c+43,"when_PingPongBuffer_l226", false,-1);
    tracep->declBit(c+44,"when_PingPongBuffer_l231", false,-1);
    tracep->declBus(c+40,"pingPongBufferStateMachine_stateReg", false,-1, 1,0);
    tracep->declBus(c+108,"pingPongBufferStateMachine_stateNext", false,-1, 1,0);
    tracep->declBit(c+151,"when_PingPongBuffer_l146", false,-1);
    tracep->declBit(c+152,"when_PingPongBuffer_l153", false,-1);
    tracep->declBit(c+109,"when_PingPongBuffer_l166", false,-1);
    tracep->declBit(c+45,"when_PingPongBuffer_l175", false,-1);
    tracep->declBit(c+151,"when_PingPongBuffer_l178", false,-1);
    tracep->declBit(c+152,"when_PingPongBuffer_l179", false,-1);
    tracep->declBit(c+46,"when_PingPongBuffer_l190", false,-1);
    tracep->declBit(c+87,"when_StateMachine_l219", false,-1);
    tracep->declBit(c+88,"when_StateMachine_l219_1", false,-1);
    tracep->declBit(c+89,"when_StateMachine_l235", false,-1);
    tracep->declQuad(c+47,"pingPongBufferStateMachine_stateReg_string", false,-1, 39,0);
    tracep->declQuad(c+110,"pingPongBufferStateMachine_stateNext_string", false,-1, 39,0);
    tracep->pushNamePrefix("bufferFifoA ");
    tracep->declBit(c+99,"io_push_valid", false,-1);
    tracep->declBit(c+20,"io_push_ready", false,-1);
    tracep->declBus(c+100,"io_push_payload", false,-1, 31,0);
    tracep->declBit(c+21,"io_pop_valid", false,-1);
    tracep->declBit(c+127,"io_pop_ready", false,-1);
    tracep->declBus(c+2,"io_pop_payload", false,-1, 31,0);
    tracep->declBit(c+203,"io_flush", false,-1);
    tracep->declBus(c+22,"io_occupancy", false,-1, 8,0);
    tracep->declBus(c+23,"io_availability", false,-1, 8,0);
    tracep->declBit(c+181,"aclk", false,-1);
    tracep->declBit(c+180,"aresetn", false,-1);
    tracep->declBit(c+112,"logic_pushPtr_willIncrement", false,-1);
    tracep->declBit(c+203,"logic_pushPtr_willClear", false,-1);
    tracep->declBus(c+113,"logic_pushPtr_valueNext", false,-1, 7,0);
    tracep->declBus(c+49,"logic_pushPtr_value", false,-1, 7,0);
    tracep->declBit(c+50,"logic_pushPtr_willOverflowIfInc", false,-1);
    tracep->declBit(c+90,"logic_pushPtr_willOverflow", false,-1);
    tracep->declBit(c+135,"logic_popPtr_willIncrement", false,-1);
    tracep->declBit(c+203,"logic_popPtr_willClear", false,-1);
    tracep->declBus(c+136,"logic_popPtr_valueNext", false,-1, 7,0);
    tracep->declBus(c+51,"logic_popPtr_value", false,-1, 7,0);
    tracep->declBit(c+52,"logic_popPtr_willOverflowIfInc", false,-1);
    tracep->declBit(c+95,"logic_popPtr_willOverflow", false,-1);
    tracep->declBit(c+53,"logic_ptrMatch", false,-1);
    tracep->declBit(c+54,"logic_risingOccupancy", false,-1);
    tracep->declBit(c+114,"logic_pushing", false,-1);
    tracep->declBit(c+137,"logic_popping", false,-1);
    tracep->declBit(c+55,"logic_empty", false,-1);
    tracep->declBit(c+56,"logic_full", false,-1);
    tracep->declBit(c+186,"when_Stream_l946", false,-1);
    tracep->declBus(c+57,"logic_ptrDif", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bufferFifoB ");
    tracep->declBit(c+101,"io_push_valid", false,-1);
    tracep->declBit(c+24,"io_push_ready", false,-1);
    tracep->declBus(c+102,"io_push_payload", false,-1, 31,0);
    tracep->declBit(c+25,"io_pop_valid", false,-1);
    tracep->declBit(c+128,"io_pop_ready", false,-1);
    tracep->declBus(c+3,"io_pop_payload", false,-1, 31,0);
    tracep->declBit(c+203,"io_flush", false,-1);
    tracep->declBus(c+26,"io_occupancy", false,-1, 8,0);
    tracep->declBus(c+27,"io_availability", false,-1, 8,0);
    tracep->declBit(c+181,"aclk", false,-1);
    tracep->declBit(c+180,"aresetn", false,-1);
    tracep->declBit(c+115,"logic_pushPtr_willIncrement", false,-1);
    tracep->declBit(c+203,"logic_pushPtr_willClear", false,-1);
    tracep->declBus(c+116,"logic_pushPtr_valueNext", false,-1, 7,0);
    tracep->declBus(c+58,"logic_pushPtr_value", false,-1, 7,0);
    tracep->declBit(c+59,"logic_pushPtr_willOverflowIfInc", false,-1);
    tracep->declBit(c+91,"logic_pushPtr_willOverflow", false,-1);
    tracep->declBit(c+138,"logic_popPtr_willIncrement", false,-1);
    tracep->declBit(c+203,"logic_popPtr_willClear", false,-1);
    tracep->declBus(c+139,"logic_popPtr_valueNext", false,-1, 7,0);
    tracep->declBus(c+60,"logic_popPtr_value", false,-1, 7,0);
    tracep->declBit(c+61,"logic_popPtr_willOverflowIfInc", false,-1);
    tracep->declBit(c+96,"logic_popPtr_willOverflow", false,-1);
    tracep->declBit(c+62,"logic_ptrMatch", false,-1);
    tracep->declBit(c+63,"logic_risingOccupancy", false,-1);
    tracep->declBit(c+117,"logic_pushing", false,-1);
    tracep->declBit(c+140,"logic_popping", false,-1);
    tracep->declBit(c+64,"logic_empty", false,-1);
    tracep->declBit(c+65,"logic_full", false,-1);
    tracep->declBit(c+187,"when_Stream_l946", false,-1);
    tracep->declBus(c+66,"logic_ptrDif", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_init_sub__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__0(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_init_sub__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+18,"start", false,-1);
    tracep->declBus(c+19,"burstLen", false,-1, 7,0);
    tracep->declBus(c+159,"startAddr", false,-1, 31,0);
    tracep->declBus(c+160,"offset", false,-1, 31,0);
    tracep->declBus(c+161,"pathNumb", false,-1, 7,0);
    tracep->declBit(c+16,"s_axis_valid", false,-1);
    tracep->declBit(c+126,"s_axis_ready", false,-1);
    tracep->declBus(c+17,"s_axis_payload", false,-1, 31,0);
    tracep->declBit(c+11,"m_axi_awvalid", false,-1);
    tracep->declBit(c+163,"m_axi_awready", false,-1);
    tracep->declBus(c+12,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+195,"m_axi_awregion", false,-1, 3,0);
    tracep->declBus(c+13,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+196,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+197,"m_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+195,"m_axi_awcache", false,-1, 3,0);
    tracep->declBus(c+195,"m_axi_awqos", false,-1, 3,0);
    tracep->declBus(c+198,"m_axi_awprot", false,-1, 2,0);
    tracep->declBit(c+124,"m_axi_wvalid", false,-1);
    tracep->declBit(c+173,"m_axi_wready", false,-1);
    tracep->declBus(c+125,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+199,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+14,"m_axi_wlast", false,-1);
    tracep->declBit(c+177,"m_axi_bvalid", false,-1);
    tracep->declBit(c+15,"m_axi_bready", false,-1);
    tracep->declBus(c+179,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1,"transInterrupt", false,-1);
    tracep->declBit(c+180,"aresetn", false,-1);
    tracep->declBit(c+181,"aclk", false,-1);
    tracep->declBit(c+141,"streamFifo_3_io_push_valid", false,-1);
    tracep->declBus(c+142,"streamFifo_3_io_push_payload", false,-1, 31,0);
    tracep->declBit(c+118,"streamFifo_3_io_pop_ready", false,-1);
    tracep->declBit(c+67,"streamFifo_3_io_push_ready", false,-1);
    tracep->declBit(c+68,"streamFifo_3_io_pop_valid", false,-1);
    tracep->declBus(c+7,"streamFifo_3_io_pop_payload", false,-1, 31,0);
    tracep->declBus(c+69,"streamFifo_3_io_occupancy", false,-1, 8,0);
    tracep->declBus(c+70,"streamFifo_3_io_availability", false,-1, 8,0);
    tracep->declBus(c+204,"axi4Interface_transferDataType", false,-1, 31,0);
    tracep->declBit(c+8,"m_axi_wlast_regNext", false,-1);
    tracep->declBit(c+188,"axi4Interface_resetStartSendSignal", false,-1);
    tracep->declBit(c+189,"startSendSignal", false,-1);
    tracep->declBus(c+71,"burstLengthReg", false,-1, 7,0);
    tracep->declBit(c+143,"when_Axi4WriteOnlyMaster_l105", false,-1);
    tracep->declBit(c+97,"streamFifo_3_io_push_fire", false,-1);
    tracep->declBit(c+190,"axi4Interface_full_b_fire", false,-1);
    tracep->declBit(c+72,"axi4Interface_newBurst", false,-1);
    tracep->declBit(c+190,"axi4Interface_full_b_fire_1", false,-1);
    tracep->declBit(c+11,"axi4Interface_controlAwValidSignal", false,-1);
    tracep->declBit(c+119,"when_Axi4WriteOnlyMaster_l131", false,-1);
    tracep->declBit(c+120,"axi4Interface_full_aw_fire", false,-1);
    tracep->declBit(c+191,"axi4Interface_isInitialIterate", false,-1);
    tracep->declBit(c+73,"axi4Interface_isRefreshAddr", false,-1);
    tracep->declBit(c+190,"axi4Interface_full_b_fire_2", false,-1);
    tracep->declBit(c+190,"axi4Interface_full_b_fire_3", false,-1);
    tracep->declBit(c+190,"axi4Interface_full_b_fire_4", false,-1);
    tracep->declBit(c+192,"when_Axi4WriteOnlyMaster_l152", false,-1);
    tracep->declBus(c+74,"offsetAddressReg", false,-1, 31,0);
    tracep->declBus(c+12,"axi4Interface_finalAddressReg", false,-1, 31,0);
    tracep->declBit(c+144,"when_Axi4WriteOnlyMaster_l159", false,-1);
    tracep->declBit(c+145,"when_Axi4WriteOnlyMaster_l164", false,-1);
    tracep->declBit(c+146,"when_Axi4WriteOnlyMaster_l187", false,-1);
    tracep->declBit(c+75,"streamFifo_3_io_pop_m2sPipe_valid", false,-1);
    tracep->declBit(c+173,"streamFifo_3_io_pop_m2sPipe_ready", false,-1);
    tracep->declBus(c+9,"streamFifo_3_io_pop_m2sPipe_payload", false,-1, 31,0);
    tracep->declBit(c+75,"streamFifo_3_io_pop_rValid", false,-1);
    tracep->declBus(c+9,"streamFifo_3_io_pop_rData", false,-1, 31,0);
    tracep->declBit(c+76,"when_Stream_l342", false,-1);
    tracep->declBit(c+193,"axi4Interface_full_w_fire", false,-1);
    tracep->declBit(c+190,"axi4Interface_full_b_fire_5", false,-1);
    tracep->declBit(c+15,"axi4Interface_controlBReady", false,-1);
    tracep->declBit(c+190,"axi4Interface_full_b_fire_6", false,-1);
    tracep->declBit(c+190,"axi4Interface_full_b_fire_7", false,-1);
    tracep->declBit(c+1,"axi4Interface_isBurstComplete", false,-1);
    tracep->pushNamePrefix("streamFifo_3 ");
    tracep->declBit(c+141,"io_push_valid", false,-1);
    tracep->declBit(c+67,"io_push_ready", false,-1);
    tracep->declBus(c+142,"io_push_payload", false,-1, 31,0);
    tracep->declBit(c+68,"io_pop_valid", false,-1);
    tracep->declBit(c+118,"io_pop_ready", false,-1);
    tracep->declBus(c+7,"io_pop_payload", false,-1, 31,0);
    tracep->declBit(c+203,"io_flush", false,-1);
    tracep->declBus(c+69,"io_occupancy", false,-1, 8,0);
    tracep->declBus(c+70,"io_availability", false,-1, 8,0);
    tracep->declBit(c+181,"aclk", false,-1);
    tracep->declBit(c+180,"aresetn", false,-1);
    tracep->declBit(c+147,"logic_pushPtr_willIncrement", false,-1);
    tracep->declBit(c+203,"logic_pushPtr_willClear", false,-1);
    tracep->declBus(c+148,"logic_pushPtr_valueNext", false,-1, 7,0);
    tracep->declBus(c+77,"logic_pushPtr_value", false,-1, 7,0);
    tracep->declBit(c+78,"logic_pushPtr_willOverflowIfInc", false,-1);
    tracep->declBit(c+98,"logic_pushPtr_willOverflow", false,-1);
    tracep->declBit(c+121,"logic_popPtr_willIncrement", false,-1);
    tracep->declBit(c+203,"logic_popPtr_willClear", false,-1);
    tracep->declBus(c+122,"logic_popPtr_valueNext", false,-1, 7,0);
    tracep->declBus(c+79,"logic_popPtr_value", false,-1, 7,0);
    tracep->declBit(c+80,"logic_popPtr_willOverflowIfInc", false,-1);
    tracep->declBit(c+92,"logic_popPtr_willOverflow", false,-1);
    tracep->declBit(c+81,"logic_ptrMatch", false,-1);
    tracep->declBit(c+82,"logic_risingOccupancy", false,-1);
    tracep->declBit(c+149,"logic_pushing", false,-1);
    tracep->declBit(c+123,"logic_popping", false,-1);
    tracep->declBit(c+83,"logic_empty", false,-1);
    tracep->declBit(c+84,"logic_full", false,-1);
    tracep->declBit(c+194,"when_Stream_l946", false,-1);
    tracep->declBus(c+85,"logic_ptrDif", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_init_top(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_init_top\n"); );
    // Body
    VPingPongBufferWithWriteOnlyMaster___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("PingPongBufferWithWriteOnlyMaster ");
    VPingPongBufferWithWriteOnlyMaster___024root__trace_init_sub__TOP__PingPongBufferWithWriteOnlyMaster__0(vlSelf, tracep);
    tracep->pushNamePrefix("writeOnlyMater ");
    VPingPongBufferWithWriteOnlyMaster___024root__trace_init_sub__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPingPongBufferWithWriteOnlyMaster___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_register(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPingPongBufferWithWriteOnlyMaster___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPingPongBufferWithWriteOnlyMaster___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPingPongBufferWithWriteOnlyMaster___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_full_sub_0(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_full_sub_1(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_full_top_0\n"); );
    // Init
    VPingPongBufferWithWriteOnlyMaster___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPingPongBufferWithWriteOnlyMaster___024root*>(voidSelf);
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPingPongBufferWithWriteOnlyMaster___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
    VPingPongBufferWithWriteOnlyMaster___024root__trace_full_sub_1((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_full_sub_0(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_isBurstComplete));
    tracep->fullIData(oldp+2,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0),32);
    tracep->fullIData(oldp+3,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0),32);
    tracep->fullBit(oldp+4,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__startReceiveSignal_regNext));
    tracep->fullIData(oldp+5,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rData),32);
    tracep->fullIData(oldp+6,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rData),32);
    tracep->fullIData(oldp+7,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT___zz_logic_ram_port0),32);
    tracep->fullBit(oldp+8,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wlast_regNext));
    tracep->fullIData(oldp+9,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_pop_rData),32);
    tracep->fullBit(oldp+10,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState));
    tracep->fullBit(oldp+11,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlAwValidSignal));
    tracep->fullIData(oldp+12,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_finalAddressReg),32);
    tracep->fullCData(oldp+13,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__burstLengthReg) 
                                         - (IData)(1U)))),8);
    tracep->fullBit(oldp+14,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wlast));
    tracep->fullBit(oldp+15,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlBReady));
    tracep->fullBit(oldp+16,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_m_axis_valid));
    tracep->fullIData(oldp+17,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_m_axis_payload),32);
    tracep->fullBit(oldp+18,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outputStartSignalReg));
    tracep->fullCData(oldp+19,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferDepthReg),8);
    tracep->fullBit(oldp+20,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))));
    tracep->fullBit(oldp+21,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid));
    tracep->fullSData(oldp+22,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy) 
                                  & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch)) 
                                 << 8U) | (0xffU & 
                                           ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value))))),9);
    tracep->fullSData(oldp+23,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)) 
                                  & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch)) 
                                 << 8U) | (0xffU & 
                                           ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value) 
                                            - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value))))),9);
    tracep->fullBit(oldp+24,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))));
    tracep->fullBit(oldp+25,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid));
    tracep->fullSData(oldp+26,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy) 
                                  & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch)) 
                                 << 8U) | (0xffU & 
                                           ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value))))),9);
    tracep->fullSData(oldp+27,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)) 
                                  & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch)) 
                                 << 8U) | (0xffU & 
                                           ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value) 
                                            - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value))))),9);
    tracep->fullCData(oldp+28,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_value),8);
    tracep->fullBit(oldp+29,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_value))));
    tracep->fullCData(oldp+30,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_value),8);
    tracep->fullBit(oldp+31,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_value))));
    tracep->fullBit(oldp+32,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__isWriteBufferA));
    tracep->fullBit(oldp+33,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__isReadBufferA));
    tracep->fullBit(oldp+34,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__isAfterResetState));
    tracep->fullBit(oldp+35,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rValid));
    tracep->fullBit(oldp+36,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rValid)))));
    tracep->fullBit(oldp+37,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rValid));
    tracep->fullBit(oldp+38,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rValid)))));
    tracep->fullBit(oldp+39,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart));
    tracep->fullCData(oldp+40,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg),2);
    tracep->fullBit(oldp+41,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__canReadData));
    tracep->fullBit(oldp+42,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__readyForNextTransfer));
    tracep->fullBit(oldp+43,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l226));
    tracep->fullBit(oldp+44,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l231));
    tracep->fullBit(oldp+45,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__isReadBufferA)))));
    tracep->fullBit(oldp+46,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__isWriteBufferA)))));
    tracep->fullQData(oldp+47,(((2U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
                                 ? ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
                                     ? 0x46554c4c20ULL
                                     : 0x48414c4620ULL)
                                 : ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
                                     ? 0x454d505459ULL
                                     : 0x424f4f5420ULL))),40);
    tracep->fullCData(oldp+49,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value),8);
    tracep->fullBit(oldp+50,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value))));
    tracep->fullCData(oldp+51,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value),8);
    tracep->fullBit(oldp+52,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+53,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch));
    tracep->fullBit(oldp+54,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy));
    tracep->fullBit(oldp+55,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)))));
    tracep->fullBit(oldp+56,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full));
    tracep->fullCData(oldp+57,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
                                         - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value)))),8);
    tracep->fullCData(oldp+58,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value),8);
    tracep->fullBit(oldp+59,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value))));
    tracep->fullCData(oldp+60,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value),8);
    tracep->fullBit(oldp+61,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+62,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch));
    tracep->fullBit(oldp+63,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy));
    tracep->fullBit(oldp+64,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)))));
    tracep->fullBit(oldp+65,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full));
    tracep->fullCData(oldp+66,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
                                         - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value)))),8);
    tracep->fullBit(oldp+67,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_full)))));
    tracep->fullBit(oldp+68,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_pop_valid));
    tracep->fullSData(oldp+69,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_risingOccupancy) 
                                  & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_ptrMatch)) 
                                 << 8U) | (0xffU & 
                                           ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value))))),9);
    tracep->fullSData(oldp+70,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_risingOccupancy)) 
                                  & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_ptrMatch)) 
                                 << 8U) | (0xffU & 
                                           ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value) 
                                            - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value))))),9);
    tracep->fullCData(oldp+71,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__burstLengthReg),8);
    tracep->fullBit(oldp+72,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_newBurst));
    tracep->fullBit(oldp+73,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_isRefreshAddr));
    tracep->fullIData(oldp+74,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__offsetAddressReg),32);
    tracep->fullBit(oldp+75,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_pop_rValid));
    tracep->fullBit(oldp+76,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_pop_rValid)))));
    tracep->fullCData(oldp+77,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value),8);
    tracep->fullBit(oldp+78,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value))));
    tracep->fullCData(oldp+79,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value),8);
    tracep->fullBit(oldp+80,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value))));
    tracep->fullBit(oldp+81,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_ptrMatch));
    tracep->fullBit(oldp+82,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_risingOccupancy));
    tracep->fullBit(oldp+83,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_risingOccupancy)))));
    tracep->fullBit(oldp+84,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_full));
    tracep->fullCData(oldp+85,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value) 
                                         - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value)))),8);
    tracep->fullBit(oldp+86,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_value)) 
                              & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_willIncrement))));
    tracep->fullBit(oldp+87,(((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
                              & (1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))));
    tracep->fullBit(oldp+88,(((3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
                              & (3U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))));
    tracep->fullBit(oldp+89,(((1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
                              & (1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))));
    tracep->fullBit(oldp+90,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value)) 
                              & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement))));
    tracep->fullBit(oldp+91,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value)) 
                              & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement))));
    tracep->fullBit(oldp+92,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_value)) 
                              & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_willIncrement))));
    tracep->fullBit(oldp+93,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_value)) 
                              & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_willIncrement))));
    tracep->fullBit(oldp+94,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_m_axis_valid) 
                              & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__s_axis_ready))));
    tracep->fullBit(oldp+95,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value)) 
                              & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement))));
    tracep->fullBit(oldp+96,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value)) 
                              & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement))));
    tracep->fullBit(oldp+97,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_push_valid) 
                              & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_full)))));
    tracep->fullBit(oldp+98,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_value)) 
                              & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_willIncrement))));
    tracep->fullBit(oldp+99,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid));
    tracep->fullIData(oldp+100,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload),32);
    tracep->fullBit(oldp+101,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid));
    tracep->fullIData(oldp+102,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload),32);
    tracep->fullBit(oldp+103,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_willIncrement));
    tracep->fullBit(oldp+104,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_willClear));
    tracep->fullCData(oldp+105,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounter_valueNext),8);
    tracep->fullBit(oldp+106,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__inCounterWillOverflow));
    tracep->fullBit(oldp+107,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__startReceiveResetSignal));
    tracep->fullCData(oldp+108,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext),2);
    tracep->fullBit(oldp+109,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l166));
    tracep->fullQData(oldp+110,(((2U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext))
                                  ? ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext))
                                      ? 0x46554c4c20ULL
                                      : 0x48414c4620ULL)
                                  : ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext))
                                      ? 0x454d505459ULL
                                      : 0x424f4f5420ULL))),40);
    tracep->fullBit(oldp+112,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement));
    tracep->fullCData(oldp+113,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext),8);
    tracep->fullBit(oldp+114,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing));
    tracep->fullBit(oldp+115,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement));
    tracep->fullCData(oldp+116,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext),8);
    tracep->fullBit(oldp+117,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing));
    tracep->fullBit(oldp+118,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_pop_ready));
    tracep->fullBit(oldp+119,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__when_Axi4WriteOnlyMaster_l131));
    tracep->fullBit(oldp+120,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_full_aw_fire));
    tracep->fullBit(oldp+121,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_willIncrement));
    tracep->fullCData(oldp+122,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popPtr_valueNext),8);
    tracep->fullBit(oldp+123,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popping));
    tracep->fullBit(oldp+124,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wvalid));
    tracep->fullIData(oldp+125,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wdata),32);
    tracep->fullBit(oldp+126,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__s_axis_ready));
    tracep->fullBit(oldp+127,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready));
    tracep->fullBit(oldp+128,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready));
    tracep->fullBit(oldp+129,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_willIncrement));
    tracep->fullBit(oldp+130,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_willClear));
    tracep->fullCData(oldp+131,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounter_valueNext),8);
    tracep->fullBit(oldp+132,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__outCounterWillOverflow));
    tracep->fullBit(oldp+133,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pipedBufferAPop_ready));
    tracep->fullBit(oldp+134,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__pipedBufferBPop_ready));
    tracep->fullBit(oldp+135,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement));
    tracep->fullCData(oldp+136,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext),8);
    tracep->fullBit(oldp+137,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping));
    tracep->fullBit(oldp+138,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement));
    tracep->fullCData(oldp+139,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext),8);
    tracep->fullBit(oldp+140,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping));
    tracep->fullBit(oldp+141,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_push_valid));
    tracep->fullIData(oldp+142,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3_io_push_payload),32);
    tracep->fullBit(oldp+143,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__when_Axi4WriteOnlyMaster_l105));
    tracep->fullBit(oldp+144,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__when_Axi4WriteOnlyMaster_l159));
    tracep->fullBit(oldp+145,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__when_Axi4WriteOnlyMaster_l164));
    tracep->fullBit(oldp+146,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__when_Axi4WriteOnlyMaster_l187));
    tracep->fullBit(oldp+147,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_willIncrement));
    tracep->fullCData(oldp+148,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushPtr_valueNext),8);
    tracep->fullBit(oldp+149,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushing));
    tracep->fullBit(oldp+150,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_s_axis_ready));
    tracep->fullBit(oldp+151,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l146));
    tracep->fullBit(oldp+152,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l153));
    tracep->fullBit(oldp+153,(vlSelf->streamIn_valid));
    tracep->fullBit(oldp+154,(vlSelf->streamIn_ready));
    tracep->fullIData(oldp+155,(vlSelf->streamIn_payload),32);
    tracep->fullBit(oldp+156,(vlSelf->startIn));
    tracep->fullCData(oldp+157,(vlSelf->bufferDepthIn),8);
    tracep->fullBit(oldp+158,(vlSelf->interruptOut));
    tracep->fullIData(oldp+159,(vlSelf->startAddr),32);
    tracep->fullIData(oldp+160,(vlSelf->offset),32);
    tracep->fullCData(oldp+161,(vlSelf->pathNumb),8);
    tracep->fullBit(oldp+162,(vlSelf->full_aw_valid));
    tracep->fullBit(oldp+163,(vlSelf->full_aw_ready));
    tracep->fullIData(oldp+164,(vlSelf->full_aw_payload_addr),32);
    tracep->fullCData(oldp+165,(vlSelf->full_aw_payload_region),4);
    tracep->fullCData(oldp+166,(vlSelf->full_aw_payload_len),8);
    tracep->fullCData(oldp+167,(vlSelf->full_aw_payload_size),3);
}

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster___024root__trace_full_sub_1(VPingPongBufferWithWriteOnlyMaster___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster___024root__trace_full_sub_1\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+168,(vlSelf->full_aw_payload_burst),2);
    tracep->fullCData(oldp+169,(vlSelf->full_aw_payload_cache),4);
    tracep->fullCData(oldp+170,(vlSelf->full_aw_payload_qos),4);
    tracep->fullCData(oldp+171,(vlSelf->full_aw_payload_prot),3);
    tracep->fullBit(oldp+172,(vlSelf->full_w_valid));
    tracep->fullBit(oldp+173,(vlSelf->full_w_ready));
    tracep->fullIData(oldp+174,(vlSelf->full_w_payload_data),32);
    tracep->fullCData(oldp+175,(vlSelf->full_w_payload_strb),4);
    tracep->fullBit(oldp+176,(vlSelf->full_w_payload_last));
    tracep->fullBit(oldp+177,(vlSelf->full_b_valid));
    tracep->fullBit(oldp+178,(vlSelf->full_b_ready));
    tracep->fullCData(oldp+179,(vlSelf->full_b_payload_resp),2);
    tracep->fullBit(oldp+180,(vlSelf->aresetn));
    tracep->fullBit(oldp+181,(vlSelf->aclk));
    tracep->fullBit(oldp+182,(((IData)(vlSelf->streamIn_valid) 
                               & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1_s_axis_ready))));
    tracep->fullBit(oldp+183,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__startReceiveSignal));
    tracep->fullBit(oldp+184,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__realStartSignal));
    tracep->fullBit(oldp+185,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__lastBurstCompleteSignal));
    tracep->fullBit(oldp+186,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) 
                               != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping))));
    tracep->fullBit(oldp+187,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) 
                               != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping))));
    tracep->fullBit(oldp+188,(((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wlast)) 
                               & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wlast_regNext))));
    tracep->fullBit(oldp+189,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__startSendSignal));
    tracep->fullBit(oldp+190,(((IData)(vlSelf->full_b_valid) 
                               & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlBReady))));
    tracep->fullBit(oldp+191,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.axi4Interface_isInitialIterate));
    tracep->fullBit(oldp+192,((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT___zz_axi4Interface_isInitialIterate_2) 
                                == (IData)(vlSelf->pathNumb)) 
                               & ((IData)(vlSelf->full_b_valid) 
                                  & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_controlBReady)))));
    tracep->fullBit(oldp+193,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__m_axi_wvalid) 
                               & (IData)(vlSelf->full_w_ready))));
    tracep->fullBit(oldp+194,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_pushing) 
                               != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__streamFifo_3__DOT__logic_popping))));
    tracep->fullCData(oldp+195,(0U),4);
    tracep->fullCData(oldp+196,(2U),3);
    tracep->fullCData(oldp+197,(1U),2);
    tracep->fullCData(oldp+198,(0U),3);
    tracep->fullCData(oldp+199,(0xfU),4);
    tracep->fullCData(oldp+200,(0U),2);
    tracep->fullCData(oldp+201,(2U),2);
    tracep->fullCData(oldp+202,(3U),2);
    tracep->fullBit(oldp+203,(0U));
    tracep->fullIData(oldp+204,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__PVT__axi4Interface_transferDataType),32);
}
