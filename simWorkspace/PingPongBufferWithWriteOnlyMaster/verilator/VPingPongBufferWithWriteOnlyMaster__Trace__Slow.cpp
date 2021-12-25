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
	vcdp->declBit  (c+124,"streamIn_valid",-1);
	vcdp->declBit  (c+125,"streamIn_ready",-1);
	vcdp->declBus  (c+126,"streamIn_payload",-1,31,0);
	vcdp->declBit  (c+127,"startIn",-1);
	vcdp->declBus  (c+128,"bufferDepthIn",-1,7,0);
	vcdp->declBit  (c+129,"interruptOut",-1);
	vcdp->declBit  (c+130,"full_aw_valid",-1);
	vcdp->declBit  (c+131,"full_aw_ready",-1);
	vcdp->declBus  (c+132,"full_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+133,"full_aw_payload_region",-1,3,0);
	vcdp->declBus  (c+134,"full_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+135,"full_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+136,"full_aw_payload_burst",-1,1,0);
	vcdp->declBus  (c+137,"full_aw_payload_cache",-1,3,0);
	vcdp->declBus  (c+138,"full_aw_payload_qos",-1,3,0);
	vcdp->declBus  (c+139,"full_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+140,"full_w_valid",-1);
	vcdp->declBit  (c+141,"full_w_ready",-1);
	vcdp->declBus  (c+142,"full_w_payload_data",-1,31,0);
	vcdp->declBus  (c+143,"full_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+144,"full_w_payload_last",-1);
	vcdp->declBit  (c+145,"full_b_valid",-1);
	vcdp->declBit  (c+146,"full_b_ready",-1);
	vcdp->declBus  (c+147,"full_b_payload_resp",-1,1,0);
	vcdp->declBus  (c+148,"offset",-1,31,0);
	vcdp->declBit  (c+149,"aresetn",-1);
	vcdp->declBit  (c+150,"aclk",-1);
	vcdp->declBit  (c+124,"PingPongBufferWithWriteOnlyMaster streamIn_valid",-1);
	vcdp->declBit  (c+125,"PingPongBufferWithWriteOnlyMaster streamIn_ready",-1);
	vcdp->declBus  (c+126,"PingPongBufferWithWriteOnlyMaster streamIn_payload",-1,31,0);
	vcdp->declBit  (c+127,"PingPongBufferWithWriteOnlyMaster startIn",-1);
	vcdp->declBus  (c+128,"PingPongBufferWithWriteOnlyMaster bufferDepthIn",-1,7,0);
	vcdp->declBit  (c+129,"PingPongBufferWithWriteOnlyMaster interruptOut",-1);
	vcdp->declBit  (c+130,"PingPongBufferWithWriteOnlyMaster full_aw_valid",-1);
	vcdp->declBit  (c+131,"PingPongBufferWithWriteOnlyMaster full_aw_ready",-1);
	vcdp->declBus  (c+132,"PingPongBufferWithWriteOnlyMaster full_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+133,"PingPongBufferWithWriteOnlyMaster full_aw_payload_region",-1,3,0);
	vcdp->declBus  (c+134,"PingPongBufferWithWriteOnlyMaster full_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+135,"PingPongBufferWithWriteOnlyMaster full_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+136,"PingPongBufferWithWriteOnlyMaster full_aw_payload_burst",-1,1,0);
	vcdp->declBus  (c+137,"PingPongBufferWithWriteOnlyMaster full_aw_payload_cache",-1,3,0);
	vcdp->declBus  (c+138,"PingPongBufferWithWriteOnlyMaster full_aw_payload_qos",-1,3,0);
	vcdp->declBus  (c+139,"PingPongBufferWithWriteOnlyMaster full_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+140,"PingPongBufferWithWriteOnlyMaster full_w_valid",-1);
	vcdp->declBit  (c+141,"PingPongBufferWithWriteOnlyMaster full_w_ready",-1);
	vcdp->declBus  (c+142,"PingPongBufferWithWriteOnlyMaster full_w_payload_data",-1,31,0);
	vcdp->declBus  (c+143,"PingPongBufferWithWriteOnlyMaster full_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+144,"PingPongBufferWithWriteOnlyMaster full_w_payload_last",-1);
	vcdp->declBit  (c+145,"PingPongBufferWithWriteOnlyMaster full_b_valid",-1);
	vcdp->declBit  (c+146,"PingPongBufferWithWriteOnlyMaster full_b_ready",-1);
	vcdp->declBus  (c+147,"PingPongBufferWithWriteOnlyMaster full_b_payload_resp",-1,1,0);
	vcdp->declBus  (c+148,"PingPongBufferWithWriteOnlyMaster offset",-1,31,0);
	vcdp->declBit  (c+149,"PingPongBufferWithWriteOnlyMaster aresetn",-1);
	vcdp->declBit  (c+150,"PingPongBufferWithWriteOnlyMaster aclk",-1);
	vcdp->declBit  (c+48,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_streamIn_ready",-1);
	vcdp->declBit  (c+95,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_interruptOut",-1);
	vcdp->declBit  (c+60,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_streamOut_valid",-1);
	vcdp->declBus  (c+61,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_streamOut_payload",-1,31,0);
	vcdp->declBit  (c+96,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_startOut",-1);
	vcdp->declBus  (c+128,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_bufferDepthOut",-1,7,0);
	vcdp->declBit  (c+1,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_stream_ready",-1);
	vcdp->declBit  (c+97,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_aw_valid",-1);
	vcdp->declBus  (c+148,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+161,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_aw_payload_region",-1,3,0);
	vcdp->declBus  (c+151,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+162,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+163,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_aw_payload_burst",-1,1,0);
	vcdp->declBus  (c+161,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_aw_payload_cache",-1,3,0);
	vcdp->declBus  (c+161,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_aw_payload_qos",-1,3,0);
	vcdp->declBus  (c+164,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+2,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_w_valid",-1);
	vcdp->declBus  (c+3,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_w_payload_data",-1,31,0);
	vcdp->declBus  (c+165,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+4,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_w_payload_last",-1);
	vcdp->declBit  (c+98,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_full_b_ready",-1);
	vcdp->declBit  (c+89,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_axi4Interface_transInterrupt",-1);
	vcdp->declBit  (c+124,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamIn_valid",-1);
	vcdp->declBit  (c+48,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamIn_ready",-1);
	vcdp->declBus  (c+126,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamIn_payload",-1,31,0);
	vcdp->declBit  (c+127,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startIn",-1);
	vcdp->declBus  (c+128,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferDepthIn",-1,7,0);
	vcdp->declBit  (c+95,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 interruptOut",-1);
	vcdp->declBit  (c+60,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamOut_valid",-1);
	vcdp->declBit  (c+1,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamOut_ready",-1);
	vcdp->declBus  (c+61,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamOut_payload",-1,31,0);
	vcdp->declBit  (c+96,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startOut",-1);
	vcdp->declBus  (c+128,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferDepthOut",-1,7,0);
	vcdp->declBit  (c+89,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 interruptIn",-1);
	vcdp->declBit  (c+149,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 aresetn",-1);
	vcdp->declBit  (c+150,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 aclk",-1);
	vcdp->declBus  (c+166,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_writeFifoA",-1,1,0);
	vcdp->declBus  (c+163,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_writeFifoBReadFifoA",-1,1,0);
	vcdp->declBus  (c+167,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_writeFifoAReadFifoB",-1,1,0);
	vcdp->declBit  (c+5,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_valid",-1);
	vcdp->declBus  (c+152,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_payload",-1,31,0);
	vcdp->declBit  (c+49,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_pop_ready",-1);
	vcdp->declBit  (c+6,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_push_valid",-1);
	vcdp->declBus  (c+153,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_push_payload",-1,31,0);
	vcdp->declBit  (c+50,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_pop_ready",-1);
	vcdp->declBit  (c+62,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_ready",-1);
	vcdp->declBit  (c+63,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_pop_valid",-1);
	vcdp->declBus  (c+90,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+64,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_occupancy",-1,7,0);
	vcdp->declBus  (c+65,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_availability",-1,7,0);
	vcdp->declBit  (c+66,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_push_ready",-1);
	vcdp->declBit  (c+67,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_pop_valid",-1);
	vcdp->declBus  (c+91,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+68,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_occupancy",-1,7,0);
	vcdp->declBus  (c+69,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_availability",-1,7,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_startFifoASignal // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:433
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_startFifoBSignal // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:434
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_when_PingPongBuffer_l155 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:435
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_when_PingPongBuffer_l159 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:436
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_when_PingPongBuffer_l202 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:437
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_when_PingPongBuffer_l206 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:438
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_when_PingPongBuffer_l108 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:439
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_when_PingPongBuffer_l111 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:440
	vcdp->declBit  (c+7,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startReceiveResetSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:442
	vcdp->declBit  (c+94,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startReceiveSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:444
	vcdp->declBit  (c+122,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 lastBurstCompleteSignal",-1);
	vcdp->declBit  (c+95,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 controlOutputInterrupt",-1);
	vcdp->declBit  (c+96,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 controlOutputStartSignal",-1);
	vcdp->declBus  (c+99,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 currentState",-1,1,0);
	vcdp->declBit  (c+100,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 activeFifoA",-1);
	vcdp->declBit  (c+101,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 activeFifoB",-1);
	vcdp->declBit  (c+8,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startFifoASignal",-1);
	vcdp->declBit  (c+9,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startFifoBSignal",-1);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_wantExit",-1);
	vcdp->declBit  (c+70,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_wantStart",-1);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_wantKill",-1);
	vcdp->declBus  (c+99,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateReg",-1,1,0);
	vcdp->declBus  (c+10,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateNext",-1,1,0);
	vcdp->declBit  (c+154,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l155",-1);
	vcdp->declBit  (c+51,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_push_fire",-1);
	vcdp->declBit  (c+11,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l159",-1);
	vcdp->declBit  (c+12,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l167",-1);
	vcdp->declBit  (c+155,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l202",-1);
	vcdp->declBit  (c+52,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_fire",-1);
	vcdp->declBit  (c+13,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l206",-1);
	vcdp->declBit  (c+14,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l214",-1);
	vcdp->declBit  (c+155,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l108",-1);
	vcdp->declBit  (c+52,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_fire_1",-1);
	vcdp->declBit  (c+15,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l111",-1);
	vcdp->declArray(c+71,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateReg_string",-1,151,0);
	vcdp->declArray(c+16,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateNext_string",-1,151,0);
	vcdp->declBit  (c+5,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_push_valid",-1);
	vcdp->declBit  (c+62,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_push_ready",-1);
	vcdp->declBus  (c+152,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_push_payload",-1,31,0);
	vcdp->declBit  (c+63,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_pop_valid",-1);
	vcdp->declBit  (c+49,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_pop_ready",-1);
	vcdp->declBus  (c+90,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_pop_payload",-1,31,0);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_flush",-1);
	vcdp->declBus  (c+64,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_occupancy",-1,7,0);
	vcdp->declBus  (c+65,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_availability",-1,7,0);
	vcdp->declBit  (c+150,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA aclk",-1);
	vcdp->declBit  (c+149,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA aresetn",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1075
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1076
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1077
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1078
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1079
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1080
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1081
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1082
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1083
	vcdp->declBit  (c+21,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+22,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_valueNext",-1,6,0);
	vcdp->declBus  (c+102,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_value",-1,6,0);
	vcdp->declBit  (c+103,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+53,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+23,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willClear",-1);
	vcdp->declBus  (c+24,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_valueNext",-1,6,0);
	vcdp->declBus  (c+104,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_value",-1,6,0);
	vcdp->declBit  (c+105,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+54,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+76,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_ptrMatch",-1);
	vcdp->declBit  (c+106,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_risingOccupancy",-1);
	vcdp->declBit  (c+25,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushing",-1);
	vcdp->declBit  (c+26,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popping",-1);
	vcdp->declBit  (c+77,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_empty",-1);
	vcdp->declBit  (c+78,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_full",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1102
	vcdp->declBit  (c+27,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA when_Stream_l946",-1);
	vcdp->declBus  (c+107,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_ptrDif",-1,6,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1105
	vcdp->declBit  (c+6,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_push_valid",-1);
	vcdp->declBit  (c+66,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_push_ready",-1);
	vcdp->declBus  (c+153,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_push_payload",-1,31,0);
	vcdp->declBit  (c+67,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_pop_valid",-1);
	vcdp->declBit  (c+50,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_pop_ready",-1);
	vcdp->declBus  (c+91,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_pop_payload",-1,31,0);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_flush",-1);
	vcdp->declBus  (c+68,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_occupancy",-1,7,0);
	vcdp->declBus  (c+69,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_availability",-1,7,0);
	vcdp->declBit  (c+150,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB aclk",-1);
	vcdp->declBit  (c+149,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB aresetn",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1075
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1076
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1077
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1078
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1079
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1080
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1081
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1082
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1083
	vcdp->declBit  (c+28,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+29,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_valueNext",-1,6,0);
	vcdp->declBus  (c+108,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_value",-1,6,0);
	vcdp->declBit  (c+109,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+55,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+30,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willClear",-1);
	vcdp->declBus  (c+31,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_valueNext",-1,6,0);
	vcdp->declBus  (c+110,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_value",-1,6,0);
	vcdp->declBit  (c+111,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+56,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+79,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_ptrMatch",-1);
	vcdp->declBit  (c+112,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_risingOccupancy",-1);
	vcdp->declBit  (c+32,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushing",-1);
	vcdp->declBit  (c+33,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popping",-1);
	vcdp->declBit  (c+80,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_empty",-1);
	vcdp->declBit  (c+81,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_full",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1102
	vcdp->declBit  (c+34,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB when_Stream_l946",-1);
	vcdp->declBus  (c+113,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_ptrDif",-1,6,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1105
	vcdp->declBit  (c+96,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_start",-1);
	vcdp->declBus  (c+128,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_burstLen",-1,7,0);
	vcdp->declBus  (c+148,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_offset",-1,31,0);
	vcdp->declBit  (c+60,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_stream_valid",-1);
	vcdp->declBit  (c+1,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_stream_ready",-1);
	vcdp->declBus  (c+61,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_stream_payload",-1,31,0);
	vcdp->declBit  (c+97,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_valid",-1);
	vcdp->declBit  (c+131,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_ready",-1);
	vcdp->declBus  (c+148,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+161,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_payload_region",-1,3,0);
	vcdp->declBus  (c+151,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+162,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+163,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_payload_burst",-1,1,0);
	vcdp->declBus  (c+161,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_payload_cache",-1,3,0);
	vcdp->declBus  (c+161,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_payload_qos",-1,3,0);
	vcdp->declBus  (c+164,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+2,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_w_valid",-1);
	vcdp->declBit  (c+141,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_w_ready",-1);
	vcdp->declBus  (c+3,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_w_payload_data",-1,31,0);
	vcdp->declBus  (c+165,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+4,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_w_payload_last",-1);
	vcdp->declBit  (c+145,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_valid",-1);
	vcdp->declBit  (c+98,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_ready",-1);
	vcdp->declBus  (c+147,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+89,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_transInterrupt",-1);
	vcdp->declBit  (c+149,"PingPongBufferWithWriteOnlyMaster writeOnlyMater aresetn",-1);
	vcdp->declBit  (c+150,"PingPongBufferWithWriteOnlyMaster writeOnlyMater aclk",-1);
	vcdp->declBit  (c+35,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_valid",-1);
	vcdp->declBus  (c+36,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_payload",-1,31,0);
	vcdp->declBit  (c+37,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_ready",-1);
	vcdp->declBit  (c+82,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_ready",-1);
	vcdp->declBit  (c+83,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_valid",-1);
	vcdp->declBus  (c+92,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+84,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_occupancy",-1,8,0);
	vcdp->declBus  (c+85,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_availability",-1,8,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_axi4Interface_full_w_payload_last_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:162
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_axi4Interface_full_w_payload_last_1_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:163
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_when_Axi4WriteOnlyMaster_l93_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:164
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_when_Axi4WriteOnlyMaster_l93_1_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:165
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_axi4Interface_full_w_payload_last_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:166
	vcdp->declBus  (c+169,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_transferDataType",-1,31,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_axi4Interface_full_w_payload_last // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:168
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:169
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_axi4Interface_full_w_payload_last_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:170
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_axi4Interface_full_w_payload_last_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:171
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:172
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:173
	vcdp->declBit  (c+93,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_w_payload_last_regNext",-1);
	vcdp->declBit  (c+47,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_resetStartSendSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_4 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:176
	vcdp->declBit  (c+123,"PingPongBufferWithWriteOnlyMaster writeOnlyMater startSendSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l93 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:178
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_5 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:179
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l93_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:180
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l93_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:181
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_6 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:182
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_7 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:183
	vcdp->declBit  (c+38,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l93",-1);
	vcdp->declBit  (c+57,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_fire",-1);
	vcdp->declBit  (c+156,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire",-1);
	vcdp->declBit  (c+114,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_isTransferAfterReset",-1);
	vcdp->declBit  (c+156,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_1",-1);
	vcdp->declBit  (c+157,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l119",-1);
	vcdp->declBit  (c+115,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_lastBurstComplete",-1);
	vcdp->declBit  (c+97,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_controlAwValidSignal",-1);
	vcdp->declBit  (c+158,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l122",-1);
	vcdp->declBit  (c+159,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_fire",-1);
	vcdp->declBit  (c+39,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l156",-1);
	vcdp->declBit  (c+160,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_w_fire",-1);
	vcdp->declBit  (c+156,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_2",-1);
	vcdp->declBit  (c+98,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_controlBReady",-1);
	vcdp->declBit  (c+156,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_3",-1);
	vcdp->declBit  (c+156,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_4",-1);
	vcdp->declBit  (c+89,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_isBurstComplete",-1);
	vcdp->declBit  (c+35,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_push_valid",-1);
	vcdp->declBit  (c+82,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_push_ready",-1);
	vcdp->declBus  (c+36,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_push_payload",-1,31,0);
	vcdp->declBit  (c+83,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_pop_valid",-1);
	vcdp->declBit  (c+37,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_pop_ready",-1);
	vcdp->declBus  (c+92,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_pop_payload",-1,31,0);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_flush",-1);
	vcdp->declBus  (c+84,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_occupancy",-1,8,0);
	vcdp->declBus  (c+85,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_availability",-1,8,0);
	vcdp->declBit  (c+150,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 aclk",-1);
	vcdp->declBit  (c+149,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 aresetn",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:922
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:923
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:924
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:925
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:926
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:927
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:928
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:929
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:930
	vcdp->declBit  (c+40,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+41,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+116,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_value",-1,7,0);
	vcdp->declBit  (c+117,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+58,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+42,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+168,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willClear",-1);
	vcdp->declBus  (c+43,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+118,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_value",-1,7,0);
	vcdp->declBit  (c+119,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+59,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+86,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_ptrMatch",-1);
	vcdp->declBit  (c+120,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_risingOccupancy",-1);
	vcdp->declBit  (c+44,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushing",-1);
	vcdp->declBit  (c+45,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popping",-1);
	vcdp->declBit  (c+87,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_empty",-1);
	vcdp->declBit  (c+88,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_full",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:949
	vcdp->declBit  (c+46,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 when_Stream_l946",-1);
	vcdp->declBus  (c+121,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_ptrDif",-1,7,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:952
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceFullThis__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready));
	vcdp->fullBit  (c+2,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_valid));
	vcdp->fullBus  (c+3,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_data),32);
	vcdp->fullBit  (c+4,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_last));
	vcdp->fullBit  (c+5,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid));
	vcdp->fullBit  (c+6,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid));
	vcdp->fullBit  (c+7,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal));
	vcdp->fullBit  (c+8,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal));
	vcdp->fullBit  (c+9,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal));
	vcdp->fullBus  (c+10,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext),2);
	vcdp->fullBit  (c+11,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l159));
	vcdp->fullBit  (c+12,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l167));
	vcdp->fullBit  (c+13,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l206));
	vcdp->fullBit  (c+14,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l214));
	vcdp->fullBit  (c+15,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l111));
	vcdp->fullArray(c+16,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string),152);
	vcdp->fullBit  (c+21,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+22,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext),7);
	vcdp->fullBit  (c+23,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+24,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext),7);
	vcdp->fullBit  (c+25,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing));
	vcdp->fullBit  (c+26,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping));
	vcdp->fullBit  (c+27,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) 
			       != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping))));
	vcdp->fullBit  (c+28,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+29,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext),7);
	vcdp->fullBit  (c+30,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+31,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext),7);
	vcdp->fullBit  (c+32,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing));
	vcdp->fullBit  (c+33,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping));
	vcdp->fullBit  (c+34,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) 
			       != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping))));
	vcdp->fullBit  (c+35,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid));
	vcdp->fullBus  (c+36,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload),32);
	vcdp->fullBit  (c+37,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready));
	vcdp->fullBit  (c+38,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93));
	vcdp->fullBit  (c+39,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156));
	vcdp->fullBit  (c+40,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+41,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext),8);
	vcdp->fullBit  (c+42,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+43,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext),8);
	vcdp->fullBit  (c+44,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing));
	vcdp->fullBit  (c+45,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping));
	vcdp->fullBit  (c+46,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) 
			       != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping))));
	vcdp->fullBit  (c+47,(((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_last)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_w_payload_last_regNext))));
	vcdp->fullBit  (c+48,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
			        ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal) 
				   & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))
			        : ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
				    ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) 
				       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))
				    : ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) 
				       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))))));
	vcdp->fullBit  (c+49,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready))));
	vcdp->fullBit  (c+50,(((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
			       & ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
				  & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready)))));
	vcdp->fullBit  (c+51,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid) 
			       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))));
	vcdp->fullBit  (c+52,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid) 
			       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))));
	vcdp->fullBit  (c+53,(((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+54,(((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+55,(((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+56,(((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+57,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
			       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))));
	vcdp->fullBit  (c+58,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+59,(((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+60,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
			        ? (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid)
			        : ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
				   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid)))));
	vcdp->fullBus  (c+61,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_streamOut_payload),32);
	vcdp->fullBit  (c+62,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))));
	vcdp->fullBit  (c+63,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid));
	vcdp->fullBus  (c+64,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy),8);
	vcdp->fullBus  (c+65,(((((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch)) 
				<< 7U) | (0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value) 
						   - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value))))),8);
	vcdp->fullBit  (c+66,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))));
	vcdp->fullBit  (c+67,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid));
	vcdp->fullBus  (c+68,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy),8);
	vcdp->fullBus  (c+69,(((((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch)) 
				<< 7U) | (0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value) 
						   - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value))))),8);
	vcdp->fullBit  (c+70,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart));
	vcdp->fullArray(c+71,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string),152);
	vcdp->fullBit  (c+76,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+77,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+78,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full));
	vcdp->fullBit  (c+79,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+80,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+81,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full));
	vcdp->fullBit  (c+82,((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))));
	vcdp->fullBit  (c+83,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid));
	vcdp->fullBus  (c+84,(((((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
						   - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value))))),9);
	vcdp->fullBus  (c+85,(((((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value) 
						   - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value))))),9);
	vcdp->fullBit  (c+86,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+87,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+88,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full));
	vcdp->fullBit  (c+89,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete));
	vcdp->fullBus  (c+90,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0),32);
	vcdp->fullBus  (c+91,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0),32);
	vcdp->fullBus  (c+92,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0),32);
	vcdp->fullBit  (c+93,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_w_payload_last_regNext));
	vcdp->fullBit  (c+94,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal));
	vcdp->fullBit  (c+95,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputInterrupt));
	vcdp->fullBit  (c+96,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal));
	vcdp->fullBit  (c+97,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal));
	vcdp->fullBit  (c+98,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady));
	vcdp->fullBus  (c+99,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg),2);
	vcdp->fullBit  (c+100,((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))));
	vcdp->fullBit  (c+101,((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))));
	vcdp->fullBus  (c+102,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value),7);
	vcdp->fullBit  (c+103,((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+104,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value),7);
	vcdp->fullBit  (c+105,((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+106,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+107,((0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
					 - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value)))),7);
	vcdp->fullBus  (c+108,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value),7);
	vcdp->fullBit  (c+109,((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+110,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value),7);
	vcdp->fullBit  (c+111,((0x7fU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+112,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+113,((0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
					 - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value)))),7);
	vcdp->fullBit  (c+114,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset));
	vcdp->fullBit  (c+115,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete));
	vcdp->fullBus  (c+116,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value),8);
	vcdp->fullBit  (c+117,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+118,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value),8);
	vcdp->fullBit  (c+119,((0xffU == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+120,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+121,((0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
					 - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value)))),8);
	vcdp->fullBit  (c+122,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal));
	vcdp->fullBit  (c+123,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal));
	vcdp->fullBit  (c+124,(vlTOPp->streamIn_valid));
	vcdp->fullBit  (c+125,(vlTOPp->streamIn_ready));
	vcdp->fullBus  (c+126,(vlTOPp->streamIn_payload),32);
	vcdp->fullBit  (c+127,(vlTOPp->startIn));
	vcdp->fullBus  (c+128,(vlTOPp->bufferDepthIn),8);
	vcdp->fullBit  (c+129,(vlTOPp->interruptOut));
	vcdp->fullBit  (c+130,(vlTOPp->full_aw_valid));
	vcdp->fullBit  (c+131,(vlTOPp->full_aw_ready));
	vcdp->fullBus  (c+132,(vlTOPp->full_aw_payload_addr),32);
	vcdp->fullBus  (c+133,(vlTOPp->full_aw_payload_region),4);
	vcdp->fullBus  (c+134,(vlTOPp->full_aw_payload_len),8);
	vcdp->fullBus  (c+135,(vlTOPp->full_aw_payload_size),3);
	vcdp->fullBus  (c+136,(vlTOPp->full_aw_payload_burst),2);
	vcdp->fullBus  (c+137,(vlTOPp->full_aw_payload_cache),4);
	vcdp->fullBus  (c+138,(vlTOPp->full_aw_payload_qos),4);
	vcdp->fullBus  (c+139,(vlTOPp->full_aw_payload_prot),3);
	vcdp->fullBit  (c+140,(vlTOPp->full_w_valid));
	vcdp->fullBit  (c+141,(vlTOPp->full_w_ready));
	vcdp->fullBus  (c+142,(vlTOPp->full_w_payload_data),32);
	vcdp->fullBus  (c+143,(vlTOPp->full_w_payload_strb),4);
	vcdp->fullBit  (c+144,(vlTOPp->full_w_payload_last));
	vcdp->fullBit  (c+145,(vlTOPp->full_b_valid));
	vcdp->fullBit  (c+146,(vlTOPp->full_b_ready));
	vcdp->fullBus  (c+147,(vlTOPp->full_b_payload_resp),2);
	vcdp->fullBus  (c+148,(vlTOPp->offset),32);
	vcdp->fullBit  (c+149,(vlTOPp->aresetn));
	vcdp->fullBit  (c+150,(vlTOPp->aclk));
	vcdp->fullBus  (c+151,((0xffU & ((IData)(vlTOPp->bufferDepthIn) 
					 - (IData)(1U)))),8);
	vcdp->fullBus  (c+152,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
				 ? 0U : ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
					  ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal)
					      ? vlTOPp->streamIn_payload
					      : 0U)
					  : ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal)
					      ? vlTOPp->streamIn_payload
					      : 0U)))),32);
	vcdp->fullBus  (c+153,(((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
				 ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal)
				     ? vlTOPp->streamIn_payload
				     : 0U) : 0U)),32);
	vcdp->fullBit  (c+154,(((0xffU & ((IData)(vlTOPp->bufferDepthIn) 
					  - (IData)(1U))) 
				<= (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy))));
	vcdp->fullBit  (c+155,(((0xffU & ((IData)(vlTOPp->bufferDepthIn) 
					  - (IData)(1U))) 
				<= (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy))));
	vcdp->fullBit  (c+156,(((IData)(vlTOPp->full_b_valid) 
				& (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady))));
	vcdp->fullBit  (c+157,((((IData)(vlTOPp->full_b_valid) 
				 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady)) 
				| (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset))));
	vcdp->fullBit  (c+158,(((IData)(vlTOPp->aresetn) 
				& (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal))));
	vcdp->fullBit  (c+159,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal) 
				& (IData)(vlTOPp->full_aw_ready))));
	vcdp->fullBit  (c+160,(((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_valid) 
				& (IData)(vlTOPp->full_w_ready))));
	vcdp->fullBus  (c+161,(0U),4);
	vcdp->fullBus  (c+162,(2U),3);
	vcdp->fullBus  (c+163,(1U),2);
	vcdp->fullBus  (c+164,(0U),3);
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceFullThis__12(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+165,(0xfU),4);
	vcdp->fullBus  (c+166,(0U),2);
	vcdp->fullBus  (c+167,(2U),2);
	vcdp->fullBit  (c+168,(0U));
	vcdp->fullBus  (c+169,(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_transferDataType),32);
    }
}
