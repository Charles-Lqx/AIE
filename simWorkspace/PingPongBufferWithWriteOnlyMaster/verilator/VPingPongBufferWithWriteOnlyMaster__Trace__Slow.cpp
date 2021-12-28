// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"


//======================

void VPingPongBufferWithWriteOnlyMaster::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VPingPongBufferWithWriteOnlyMaster::traceInit, &VPingPongBufferWithWriteOnlyMaster::traceFull, &VPingPongBufferWithWriteOnlyMaster::traceChg, this);
}
void VPingPongBufferWithWriteOnlyMaster::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPingPongBufferWithWriteOnlyMaster* t=(VPingPongBufferWithWriteOnlyMaster*)userthis;
    VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPingPongBufferWithWriteOnlyMaster::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPingPongBufferWithWriteOnlyMaster* t=(VPingPongBufferWithWriteOnlyMaster*)userthis;
    VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VPingPongBufferWithWriteOnlyMaster::traceInitThis(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceFullThis(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
	vlTOPp->traceFullThis__12(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPingPongBufferWithWriteOnlyMaster::traceInitThis__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+136,"streamIn_valid",-1);
	vcdp->declBit  (c+137,"streamIn_ready",-1);
	vcdp->declBus  (c+138,"streamIn_payload",-1,31,0);
	vcdp->declBit  (c+139,"startIn",-1);
	vcdp->declBus  (c+140,"bufferDepthIn",-1,7,0);
	vcdp->declBit  (c+141,"interruptOut",-1);
	vcdp->declBit  (c+142,"full_aw_valid",-1);
	vcdp->declBit  (c+143,"full_aw_ready",-1);
	vcdp->declBus  (c+144,"full_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+145,"full_aw_payload_region",-1,3,0);
	vcdp->declBus  (c+146,"full_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+147,"full_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+148,"full_aw_payload_burst",-1,1,0);
	vcdp->declBus  (c+149,"full_aw_payload_cache",-1,3,0);
	vcdp->declBus  (c+150,"full_aw_payload_qos",-1,3,0);
	vcdp->declBus  (c+151,"full_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+152,"full_w_valid",-1);
	vcdp->declBit  (c+153,"full_w_ready",-1);
	vcdp->declBus  (c+154,"full_w_payload_data",-1,31,0);
	vcdp->declBus  (c+155,"full_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+156,"full_w_payload_last",-1);
	vcdp->declBit  (c+157,"full_b_valid",-1);
	vcdp->declBit  (c+158,"full_b_ready",-1);
	vcdp->declBus  (c+159,"full_b_payload_resp",-1,1,0);
	vcdp->declBus  (c+160,"offset",-1,31,0);
	vcdp->declBit  (c+161,"aresetn",-1);
	vcdp->declBit  (c+162,"aclk",-1);
	vcdp->declBit  (c+136,"PingPongBufferWithWriteOnlyMaster streamIn_valid",-1);
	vcdp->declBit  (c+137,"PingPongBufferWithWriteOnlyMaster streamIn_ready",-1);
	vcdp->declBus  (c+138,"PingPongBufferWithWriteOnlyMaster streamIn_payload",-1,31,0);
	vcdp->declBit  (c+139,"PingPongBufferWithWriteOnlyMaster startIn",-1);
	vcdp->declBus  (c+140,"PingPongBufferWithWriteOnlyMaster bufferDepthIn",-1,7,0);
	vcdp->declBit  (c+141,"PingPongBufferWithWriteOnlyMaster interruptOut",-1);
	vcdp->declBit  (c+142,"PingPongBufferWithWriteOnlyMaster full_aw_valid",-1);
	vcdp->declBit  (c+143,"PingPongBufferWithWriteOnlyMaster full_aw_ready",-1);
	vcdp->declBus  (c+144,"PingPongBufferWithWriteOnlyMaster full_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+145,"PingPongBufferWithWriteOnlyMaster full_aw_payload_region",-1,3,0);
	vcdp->declBus  (c+146,"PingPongBufferWithWriteOnlyMaster full_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+147,"PingPongBufferWithWriteOnlyMaster full_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+148,"PingPongBufferWithWriteOnlyMaster full_aw_payload_burst",-1,1,0);
	vcdp->declBus  (c+149,"PingPongBufferWithWriteOnlyMaster full_aw_payload_cache",-1,3,0);
	vcdp->declBus  (c+150,"PingPongBufferWithWriteOnlyMaster full_aw_payload_qos",-1,3,0);
	vcdp->declBus  (c+151,"PingPongBufferWithWriteOnlyMaster full_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+152,"PingPongBufferWithWriteOnlyMaster full_w_valid",-1);
	vcdp->declBit  (c+153,"PingPongBufferWithWriteOnlyMaster full_w_ready",-1);
	vcdp->declBus  (c+154,"PingPongBufferWithWriteOnlyMaster full_w_payload_data",-1,31,0);
	vcdp->declBus  (c+155,"PingPongBufferWithWriteOnlyMaster full_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+156,"PingPongBufferWithWriteOnlyMaster full_w_payload_last",-1);
	vcdp->declBit  (c+157,"PingPongBufferWithWriteOnlyMaster full_b_valid",-1);
	vcdp->declBit  (c+158,"PingPongBufferWithWriteOnlyMaster full_b_ready",-1);
	vcdp->declBus  (c+159,"PingPongBufferWithWriteOnlyMaster full_b_payload_resp",-1,1,0);
	vcdp->declBus  (c+160,"PingPongBufferWithWriteOnlyMaster offset",-1,31,0);
	vcdp->declBit  (c+161,"PingPongBufferWithWriteOnlyMaster aresetn",-1);
	vcdp->declBit  (c+162,"PingPongBufferWithWriteOnlyMaster aclk",-1);
	vcdp->declBit  (c+1,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_s_axis_ready",-1);
	vcdp->declBit  (c+98,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_interruptOut",-1);
	vcdp->declBit  (c+68,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_m_axis_valid",-1);
	vcdp->declBus  (c+69,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_m_axis_payload",-1,31,0);
	vcdp->declBit  (c+99,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_startOut",-1);
	vcdp->declBus  (c+140,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_bufferDepthOut",-1,7,0);
	vcdp->declBit  (c+2,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_s_axis_ready",-1);
	vcdp->declBit  (c+100,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awvalid",-1);
	vcdp->declBus  (c+160,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awaddr",-1,31,0);
	vcdp->declBus  (c+170,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awregion",-1,3,0);
	vcdp->declBus  (c+163,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+171,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+172,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awburst",-1,1,0);
	vcdp->declBus  (c+170,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+170,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awqos",-1,3,0);
	vcdp->declBus  (c+173,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+3,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_wvalid",-1);
	vcdp->declBus  (c+4,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_wdata",-1,31,0);
	vcdp->declBus  (c+174,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_wstrb",-1,3,0);
	vcdp->declBit  (c+5,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_wlast",-1);
	vcdp->declBit  (c+101,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_bready",-1);
	vcdp->declBit  (c+92,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_transInterrupt",-1);
	vcdp->declBit  (c+136,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 s_axis_valid",-1);
	vcdp->declBit  (c+1,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 s_axis_ready",-1);
	vcdp->declBus  (c+138,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 s_axis_payload",-1,31,0);
	vcdp->declBit  (c+139,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startIn",-1);
	vcdp->declBus  (c+140,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferDepthIn",-1,7,0);
	vcdp->declBit  (c+98,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 interruptOut",-1);
	vcdp->declBit  (c+68,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 m_axis_valid",-1);
	vcdp->declBit  (c+2,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 m_axis_ready",-1);
	vcdp->declBus  (c+69,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 m_axis_payload",-1,31,0);
	vcdp->declBit  (c+99,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startOut",-1);
	vcdp->declBus  (c+140,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferDepthOut",-1,7,0);
	vcdp->declBit  (c+92,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 interruptIn",-1);
	vcdp->declBit  (c+161,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 aresetn",-1);
	vcdp->declBit  (c+162,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 aclk",-1);
	vcdp->declBus  (c+175,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_BOOT",-1,1,0);
	vcdp->declBus  (c+172,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_EMPTY",-1,1,0);
	vcdp->declBus  (c+176,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_HALF",-1,1,0);
	vcdp->declBus  (c+177,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_FULL",-1,1,0);
	vcdp->declBit  (c+6,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_valid",-1);
	vcdp->declBus  (c+7,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_payload",-1,31,0);
	vcdp->declBit  (c+8,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_pop_ready",-1);
	vcdp->declBit  (c+9,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_push_valid",-1);
	vcdp->declBus  (c+10,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_push_payload",-1,31,0);
	vcdp->declBit  (c+11,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_pop_ready",-1);
	vcdp->declBit  (c+70,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_ready",-1);
	vcdp->declBit  (c+71,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_pop_valid",-1);
	vcdp->declBus  (c+93,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+72,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_occupancy",-1,8,0);
	vcdp->declBus  (c+73,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_availability",-1,8,0);
	vcdp->declBit  (c+74,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_push_ready",-1);
	vcdp->declBit  (c+75,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_pop_valid",-1);
	vcdp->declBus  (c+94,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+76,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_occupancy",-1,8,0);
	vcdp->declBus  (c+77,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_availability",-1,8,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_inCounter_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:440
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_inCounter_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:441
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_outCounter_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:442
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_outCounter_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:443
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_inCounterWillOverflow // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:444
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_inCounterWillOverflow_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:445
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_inCounterWillOverflow_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:446
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_outCounterWillOverflow // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:447
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_outCounterWillOverflow_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:448
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_outCounterWillOverflow_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:449
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_realStartSignal // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:450
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_realStartSignal_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:451
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_realStartSignal_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:452
	vcdp->declBit  (c+12,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_willIncrement",-1);
	vcdp->declBit  (c+13,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_willClear",-1);
	vcdp->declBus  (c+14,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_valueNext",-1,7,0);
	vcdp->declBus  (c+102,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_value",-1,7,0);
	vcdp->declBit  (c+103,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_willOverflowIfInc",-1);
	vcdp->declBit  (c+55,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_willOverflow",-1);
	vcdp->declBit  (c+15,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_willIncrement",-1);
	vcdp->declBit  (c+16,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_willClear",-1);
	vcdp->declBus  (c+17,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_valueNext",-1,7,0);
	vcdp->declBus  (c+104,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_value",-1,7,0);
	vcdp->declBit  (c+105,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_willOverflowIfInc",-1);
	vcdp->declBit  (c+56,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_willOverflow",-1);
	vcdp->declBit  (c+106,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 isWriteBufferA",-1);
	vcdp->declBit  (c+107,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 isReadBufferA",-1);
	vcdp->declBit  (c+164,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamIn_fire",-1);
	vcdp->declBit  (c+18,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounterWillOverflow",-1);
	vcdp->declBit  (c+57,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamOut_fire",-1);
	vcdp->declBit  (c+19,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounterWillOverflow",-1);
	vcdp->declBit  (c+164,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamIn_fire_1",-1);
	vcdp->declBit  (c+57,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamOut_fire_1",-1);
	vcdp->declBit  (c+20,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startReceiveResetSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:474
	vcdp->declBit  (c+97,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startReceiveSignal",-1);
	vcdp->declBit  (c+21,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 realStartSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:477
	vcdp->declBit  (c+134,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 lastBurstCompleteSignal",-1);
	vcdp->declBit  (c+108,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 isAfterResetState",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_wantExit",-1);
	vcdp->declBit  (c+78,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_wantStart",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_wantKill",-1);
	vcdp->declBit  (c+99,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outputStartSignalState",-1);
	vcdp->declBit  (c+98,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outputInterruptSignalState",-1);
	vcdp->declBus  (c+109,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateReg",-1,1,0);
	vcdp->declBus  (c+22,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateNext",-1,1,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_when_StateMachine_l219 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:487
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_when_StateMachine_l219_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:488
	vcdp->declBit  (c+23,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l135",-1);
	vcdp->declBit  (c+24,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l142",-1);
	vcdp->declBit  (c+25,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l155",-1);
	vcdp->declBit  (c+110,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l164",-1);
	vcdp->declBit  (c+23,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l167",-1);
	vcdp->declBit  (c+24,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l168",-1);
	vcdp->declBit  (c+111,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l179",-1);
	vcdp->declBit  (c+58,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_StateMachine_l219",-1);
	vcdp->declBit  (c+59,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_StateMachine_l219_1",-1);
	vcdp->declBit  (c+60,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_StateMachine_l235",-1);
	vcdp->declQuad (c+112,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateReg_string",-1,39,0);
	vcdp->declQuad (c+26,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateNext_string",-1,39,0);
	vcdp->declBit  (c+6,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_push_valid",-1);
	vcdp->declBit  (c+70,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_push_ready",-1);
	vcdp->declBus  (c+7,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_push_payload",-1,31,0);
	vcdp->declBit  (c+71,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_pop_valid",-1);
	vcdp->declBit  (c+8,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_pop_ready",-1);
	vcdp->declBus  (c+93,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_pop_payload",-1,31,0);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_flush",-1);
	vcdp->declBus  (c+72,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_occupancy",-1,8,0);
	vcdp->declBus  (c+73,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_availability",-1,8,0);
	vcdp->declBit  (c+162,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA aclk",-1);
	vcdp->declBit  (c+161,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA aresetn",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1032
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1033
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1034
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1035
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1036
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1037
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1038
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1039
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1040
	vcdp->declBit  (c+28,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+29,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+114,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_value",-1,7,0);
	vcdp->declBit  (c+115,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+61,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+30,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willClear",-1);
	vcdp->declBus  (c+31,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+116,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_value",-1,7,0);
	vcdp->declBit  (c+117,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+62,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+79,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_ptrMatch",-1);
	vcdp->declBit  (c+118,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_risingOccupancy",-1);
	vcdp->declBit  (c+32,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushing",-1);
	vcdp->declBit  (c+33,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popping",-1);
	vcdp->declBit  (c+80,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_empty",-1);
	vcdp->declBit  (c+81,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_full",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1059
	vcdp->declBit  (c+34,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA when_Stream_l946",-1);
	vcdp->declBus  (c+119,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_ptrDif",-1,7,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1062
	vcdp->declBit  (c+9,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_push_valid",-1);
	vcdp->declBit  (c+74,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_push_ready",-1);
	vcdp->declBus  (c+10,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_push_payload",-1,31,0);
	vcdp->declBit  (c+75,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_pop_valid",-1);
	vcdp->declBit  (c+11,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_pop_ready",-1);
	vcdp->declBus  (c+94,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_pop_payload",-1,31,0);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_flush",-1);
	vcdp->declBus  (c+76,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_occupancy",-1,8,0);
	vcdp->declBus  (c+77,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_availability",-1,8,0);
	vcdp->declBit  (c+162,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB aclk",-1);
	vcdp->declBit  (c+161,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB aresetn",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1032
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1033
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1034
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1035
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1036
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1037
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1038
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1039
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1040
	vcdp->declBit  (c+35,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+36,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+120,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_value",-1,7,0);
	vcdp->declBit  (c+121,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+63,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+37,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willClear",-1);
	vcdp->declBus  (c+38,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+122,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_value",-1,7,0);
	vcdp->declBit  (c+123,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+64,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+82,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_ptrMatch",-1);
	vcdp->declBit  (c+124,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_risingOccupancy",-1);
	vcdp->declBit  (c+39,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushing",-1);
	vcdp->declBit  (c+40,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popping",-1);
	vcdp->declBit  (c+83,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_empty",-1);
	vcdp->declBit  (c+84,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_full",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1059
	vcdp->declBit  (c+41,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB when_Stream_l946",-1);
	vcdp->declBus  (c+125,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_ptrDif",-1,7,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1062
	vcdp->declBit  (c+99,"PingPongBufferWithWriteOnlyMaster writeOnlyMater start",-1);
	vcdp->declBus  (c+140,"PingPongBufferWithWriteOnlyMaster writeOnlyMater burstLen",-1,7,0);
	vcdp->declBus  (c+160,"PingPongBufferWithWriteOnlyMaster writeOnlyMater offset",-1,31,0);
	vcdp->declBit  (c+68,"PingPongBufferWithWriteOnlyMaster writeOnlyMater s_axis_valid",-1);
	vcdp->declBit  (c+2,"PingPongBufferWithWriteOnlyMaster writeOnlyMater s_axis_ready",-1);
	vcdp->declBus  (c+69,"PingPongBufferWithWriteOnlyMaster writeOnlyMater s_axis_payload",-1,31,0);
	vcdp->declBit  (c+100,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awvalid",-1);
	vcdp->declBit  (c+143,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awready",-1);
	vcdp->declBus  (c+160,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awaddr",-1,31,0);
	vcdp->declBus  (c+170,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awregion",-1,3,0);
	vcdp->declBus  (c+163,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+171,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+172,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awburst",-1,1,0);
	vcdp->declBus  (c+170,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+170,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awqos",-1,3,0);
	vcdp->declBus  (c+173,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+3,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wvalid",-1);
	vcdp->declBit  (c+153,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wready",-1);
	vcdp->declBus  (c+4,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wdata",-1,31,0);
	vcdp->declBus  (c+174,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wstrb",-1,3,0);
	vcdp->declBit  (c+5,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wlast",-1);
	vcdp->declBit  (c+157,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_bvalid",-1);
	vcdp->declBit  (c+101,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_bready",-1);
	vcdp->declBus  (c+159,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_bresp",-1,1,0);
	vcdp->declBit  (c+92,"PingPongBufferWithWriteOnlyMaster writeOnlyMater transInterrupt",-1);
	vcdp->declBit  (c+161,"PingPongBufferWithWriteOnlyMaster writeOnlyMater aresetn",-1);
	vcdp->declBit  (c+162,"PingPongBufferWithWriteOnlyMaster writeOnlyMater aclk",-1);
	vcdp->declBit  (c+42,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_valid",-1);
	vcdp->declBus  (c+43,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_payload",-1,31,0);
	vcdp->declBit  (c+44,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_ready",-1);
	vcdp->declBit  (c+85,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_ready",-1);
	vcdp->declBit  (c+86,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_valid",-1);
	vcdp->declBus  (c+95,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+87,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_occupancy",-1,8,0);
	vcdp->declBus  (c+88,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_availability",-1,8,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_m_axi_wlast_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:162
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_m_axi_wlast_1_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:163
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_when_Axi4WriteOnlyMaster_l93_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:164
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_when_Axi4WriteOnlyMaster_l93_1_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:165
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l93_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:166
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l156 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:167
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_m_axi_wlast_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:168
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_m_axi_wlast_4 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:169
	vcdp->declBus  (c+179,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_transferDataType",-1,31,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_m_axi_wlast // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:171
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:172
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_m_axi_wlast_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:173
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_m_axi_wlast_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:174
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:175
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:176
	vcdp->declBit  (c+96,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wlast_regNext",-1);
	vcdp->declBit  (c+54,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_resetStartSendSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_4 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:179
	vcdp->declBit  (c+135,"PingPongBufferWithWriteOnlyMaster writeOnlyMater startSendSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l93 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:181
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_5 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:182
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l93_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:183
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l93_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:184
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_6 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:185
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_7 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:186
	vcdp->declBit  (c+45,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l93",-1);
	vcdp->declBit  (c+65,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_fire",-1);
	vcdp->declBit  (c+165,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire",-1);
	vcdp->declBit  (c+126,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_isTransferAfterReset",-1);
	vcdp->declBit  (c+165,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_1",-1);
	vcdp->declBit  (c+166,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l119",-1);
	vcdp->declBit  (c+127,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_lastBurstComplete",-1);
	vcdp->declBit  (c+100,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_controlAwValidSignal",-1);
	vcdp->declBit  (c+167,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l122",-1);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_fire",-1);
	vcdp->declBit  (c+46,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l156",-1);
	vcdp->declBit  (c+169,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_w_fire",-1);
	vcdp->declBit  (c+165,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_2",-1);
	vcdp->declBit  (c+101,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_controlBReady",-1);
	vcdp->declBit  (c+165,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_3",-1);
	vcdp->declBit  (c+165,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_4",-1);
	vcdp->declBit  (c+92,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_isBurstComplete",-1);
	vcdp->declBit  (c+42,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_push_valid",-1);
	vcdp->declBit  (c+85,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_push_ready",-1);
	vcdp->declBus  (c+43,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_push_payload",-1,31,0);
	vcdp->declBit  (c+86,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_pop_valid",-1);
	vcdp->declBit  (c+44,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_pop_ready",-1);
	vcdp->declBus  (c+95,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_pop_payload",-1,31,0);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_flush",-1);
	vcdp->declBus  (c+87,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_occupancy",-1,8,0);
	vcdp->declBus  (c+88,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_availability",-1,8,0);
	vcdp->declBit  (c+162,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 aclk",-1);
	vcdp->declBit  (c+161,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 aresetn",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1032
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1033
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1034
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1035
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1036
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1037
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1038
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1039
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1040
	vcdp->declBit  (c+47,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+48,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+128,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_value",-1,7,0);
	vcdp->declBit  (c+129,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+66,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+49,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willClear",-1);
	vcdp->declBus  (c+50,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+130,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_value",-1,7,0);
	vcdp->declBit  (c+131,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+67,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+89,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_ptrMatch",-1);
	vcdp->declBit  (c+132,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_risingOccupancy",-1);
	vcdp->declBit  (c+51,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushing",-1);
	vcdp->declBit  (c+52,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popping",-1);
	vcdp->declBit  (c+90,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_empty",-1);
	vcdp->declBit  (c+91,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_full",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1059
	vcdp->declBit  (c+53,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 when_Stream_l946",-1);
	vcdp->declBus  (c+133,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_ptrDif",-1,7,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1062
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceFullThis__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready));
	vcdp->fullBit  (c+2,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready));
	vcdp->fullBit  (c+3,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid));
	vcdp->fullBus  (c+4,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wdata),32);
	vcdp->fullBit  (c+5,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast));
	vcdp->fullBit  (c+6,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid));
	vcdp->fullBus  (c+7,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload),32);
	vcdp->fullBit  (c+8,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready));
	vcdp->fullBit  (c+9,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid));
	vcdp->fullBus  (c+10,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload),32);
	vcdp->fullBit  (c+11,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready));
	vcdp->fullBit  (c+12,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willIncrement));
	vcdp->fullBit  (c+13,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willClear));
	vcdp->fullBus  (c+14,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_valueNext),8);
	vcdp->fullBit  (c+15,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willIncrement));
	vcdp->fullBit  (c+16,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willClear));
	vcdp->fullBus  (c+17,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_valueNext),8);
	vcdp->fullBit  (c+18,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow));
	vcdp->fullBit  (c+19,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow));
	vcdp->fullBit  (c+20,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal));
	vcdp->fullBit  (c+21,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__realStartSignal));
	vcdp->fullBus  (c+22,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext),2);
	vcdp->fullBit  (c+23,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135));
	vcdp->fullBit  (c+24,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142));
	vcdp->fullBit  (c+25,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l155));
	vcdp->fullQuad (c+26,(((2U & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext))
			        ? ((1U & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext))
				    ? VL_ULL(0x46554c4c20)
				    : VL_ULL(0x48414c4620))
			        : ((1U & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext))
				    ? VL_ULL(0x454d505459)
				    : VL_ULL(0x424f4f5420)))),40);
	vcdp->fullBit  (c+28,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+29,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext),8);
	vcdp->fullBit  (c+30,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+31,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext),8);
	vcdp->fullBit  (c+32,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing));
	vcdp->fullBit  (c+33,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping));
	vcdp->fullBit  (c+34,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) 
			       != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping))));
	vcdp->fullBit  (c+35,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+36,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext),8);
	vcdp->fullBit  (c+37,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+38,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext),8);
	vcdp->fullBit  (c+39,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing));
	vcdp->fullBit  (c+40,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping));
	vcdp->fullBit  (c+41,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) 
			       != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping))));
	vcdp->fullBit  (c+42,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid));
	vcdp->fullBus  (c+43,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload),32);
	vcdp->fullBit  (c+44,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready));
	vcdp->fullBit  (c+45,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93));
	vcdp->fullBit  (c+46,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156));
	vcdp->fullBit  (c+47,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+48,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext),8);
	vcdp->fullBit  (c+49,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+50,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext),8);
	vcdp->fullBit  (c+51,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing));
	vcdp->fullBit  (c+52,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping));
	vcdp->fullBit  (c+53,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) 
			       != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping))));
	vcdp->fullBit  (c+54,(((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__m_axi_wlast_regNext))));
	vcdp->fullBit  (c+55,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willIncrement))));
	vcdp->fullBit  (c+56,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willIncrement))));
	vcdp->fullBit  (c+57,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready))));
	vcdp->fullBit  (c+58,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
			       & (1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))));
	vcdp->fullBit  (c+59,(((3U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
			       & (3U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))));
	vcdp->fullBit  (c+60,(((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
			       & (1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))));
	vcdp->fullBit  (c+61,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+62,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+63,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+64,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+65,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
			       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))));
	vcdp->fullBit  (c+66,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+67,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+68,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid));
	vcdp->fullBus  (c+69,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload),32);
	vcdp->fullBit  (c+70,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))));
	vcdp->fullBit  (c+71,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid));
	vcdp->fullBus  (c+72,(((((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
						   - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value))))),9);
	vcdp->fullBus  (c+73,(((((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value) 
						   - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value))))),9);
	vcdp->fullBit  (c+74,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))));
	vcdp->fullBit  (c+75,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid));
	vcdp->fullBus  (c+76,(((((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
						   - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value))))),9);
	vcdp->fullBus  (c+77,(((((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value) 
						   - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value))))),9);
	vcdp->fullBit  (c+78,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart));
	vcdp->fullBit  (c+79,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+80,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+81,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full));
	vcdp->fullBit  (c+82,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+83,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+84,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full));
	vcdp->fullBit  (c+85,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))));
	vcdp->fullBit  (c+86,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid));
	vcdp->fullBus  (c+87,(((((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
						   - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value))))),9);
	vcdp->fullBus  (c+88,(((((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value) 
						   - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value))))),9);
	vcdp->fullBit  (c+89,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+90,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+91,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full));
	vcdp->fullBit  (c+92,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete));
	vcdp->fullBus  (c+93,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0),32);
	vcdp->fullBus  (c+94,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0),32);
	vcdp->fullBus  (c+95,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0),32);
	vcdp->fullBit  (c+96,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__m_axi_wlast_regNext));
	vcdp->fullBit  (c+97,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal));
	vcdp->fullBit  (c+98,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState));
	vcdp->fullBit  (c+99,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState));
	vcdp->fullBit  (c+100,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal));
	vcdp->fullBit  (c+101,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady));
	vcdp->fullBus  (c+102,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value),8);
	vcdp->fullBit  (c+103,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value))));
	vcdp->fullBus  (c+104,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_value),8);
	vcdp->fullBit  (c+105,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_value))));
	vcdp->fullBit  (c+106,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA));
	vcdp->fullBit  (c+107,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA));
	vcdp->fullBit  (c+108,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState));
	vcdp->fullBus  (c+109,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg),2);
	vcdp->fullBit  (c+110,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA)))));
	vcdp->fullBit  (c+111,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA)))));
	vcdp->fullQuad (c+112,(((2U & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
				 ? ((1U & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
				     ? VL_ULL(0x46554c4c20)
				     : VL_ULL(0x48414c4620))
				 : ((1U & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
				     ? VL_ULL(0x454d505459)
				     : VL_ULL(0x424f4f5420)))),40);
	vcdp->fullBus  (c+114,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value),8);
	vcdp->fullBit  (c+115,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+116,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value),8);
	vcdp->fullBit  (c+117,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+118,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+119,((0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
					 - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value)))),8);
	vcdp->fullBus  (c+120,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value),8);
	vcdp->fullBit  (c+121,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+122,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value),8);
	vcdp->fullBit  (c+123,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+124,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+125,((0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
					 - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value)))),8);
	vcdp->fullBit  (c+126,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset));
	vcdp->fullBit  (c+127,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete));
	vcdp->fullBus  (c+128,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value),8);
	vcdp->fullBit  (c+129,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+130,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value),8);
	vcdp->fullBit  (c+131,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+132,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+133,((0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
					 - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value)))),8);
	vcdp->fullBit  (c+134,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal));
	vcdp->fullBit  (c+135,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal));
	vcdp->fullBit  (c+136,(vlTOPp->streamIn_valid));
	vcdp->fullBit  (c+137,(vlTOPp->streamIn_ready));
	vcdp->fullBus  (c+138,(vlTOPp->streamIn_payload),32);
	vcdp->fullBit  (c+139,(vlTOPp->startIn));
	vcdp->fullBus  (c+140,(vlTOPp->bufferDepthIn),8);
	vcdp->fullBit  (c+141,(vlTOPp->interruptOut));
	vcdp->fullBit  (c+142,(vlTOPp->full_aw_valid));
	vcdp->fullBit  (c+143,(vlTOPp->full_aw_ready));
	vcdp->fullBus  (c+144,(vlTOPp->full_aw_payload_addr),32);
	vcdp->fullBus  (c+145,(vlTOPp->full_aw_payload_region),4);
	vcdp->fullBus  (c+146,(vlTOPp->full_aw_payload_len),8);
	vcdp->fullBus  (c+147,(vlTOPp->full_aw_payload_size),3);
	vcdp->fullBus  (c+148,(vlTOPp->full_aw_payload_burst),2);
	vcdp->fullBus  (c+149,(vlTOPp->full_aw_payload_cache),4);
	vcdp->fullBus  (c+150,(vlTOPp->full_aw_payload_qos),4);
	vcdp->fullBus  (c+151,(vlTOPp->full_aw_payload_prot),3);
	vcdp->fullBit  (c+152,(vlTOPp->full_w_valid));
	vcdp->fullBit  (c+153,(vlTOPp->full_w_ready));
	vcdp->fullBus  (c+154,(vlTOPp->full_w_payload_data),32);
	vcdp->fullBus  (c+155,(vlTOPp->full_w_payload_strb),4);
	vcdp->fullBit  (c+156,(vlTOPp->full_w_payload_last));
	vcdp->fullBit  (c+157,(vlTOPp->full_b_valid));
	vcdp->fullBit  (c+158,(vlTOPp->full_b_ready));
	vcdp->fullBus  (c+159,(vlTOPp->full_b_payload_resp),2);
	vcdp->fullBus  (c+160,(vlTOPp->offset),32);
	vcdp->fullBit  (c+161,(vlTOPp->aresetn));
	vcdp->fullBit  (c+162,(vlTOPp->aclk));
	vcdp->fullBus  (c+163,((0xffU & ((IData)(vlTOPp->bufferDepthIn) 
					 - (IData)(1U)))),8);
	vcdp->fullBit  (c+164,(((IData)(vlTOPp->streamIn_valid) 
				& (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready))));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceFullThis__12(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+165,(((IData)(vlTOPp->full_b_valid) 
				& (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady))));
	vcdp->fullBit  (c+166,((((IData)(vlTOPp->full_b_valid) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady)) 
				| (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset))));
	vcdp->fullBit  (c+167,(((IData)(vlTOPp->aresetn) 
				& (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal))));
	vcdp->fullBit  (c+168,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal) 
				& (IData)(vlTOPp->full_aw_ready))));
	vcdp->fullBit  (c+169,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid) 
				& (IData)(vlTOPp->full_w_ready))));
	vcdp->fullBus  (c+170,(0U),4);
	vcdp->fullBus  (c+171,(2U),3);
	vcdp->fullBus  (c+172,(1U),2);
	vcdp->fullBus  (c+173,(0U),3);
	vcdp->fullBus  (c+174,(0xfU),4);
	vcdp->fullBus  (c+175,(0U),2);
	vcdp->fullBus  (c+176,(2U),2);
	vcdp->fullBus  (c+177,(3U),2);
	vcdp->fullBit  (c+178,(0U));
	vcdp->fullBus  (c+179,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_transferDataType),32);
    }
}
