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
	vlTOPp->traceFullThis__17(vlSymsp, vcdp, code);
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
	vcdp->declBit  (c+151,"streamIn_valid",-1);
	vcdp->declBit  (c+152,"streamIn_ready",-1);
	vcdp->declBus  (c+153,"streamIn_payload",-1,31,0);
	vcdp->declBit  (c+154,"startIn",-1);
	vcdp->declBus  (c+155,"bufferDepthIn",-1,7,0);
	vcdp->declBit  (c+156,"interruptOut",-1);
	vcdp->declBus  (c+157,"dataOffsetIn",-1,31,0);
	vcdp->declBit  (c+158,"full_aw_valid",-1);
	vcdp->declBit  (c+159,"full_aw_ready",-1);
	vcdp->declBus  (c+160,"full_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+161,"full_aw_payload_region",-1,3,0);
	vcdp->declBus  (c+162,"full_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+163,"full_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+164,"full_aw_payload_burst",-1,1,0);
	vcdp->declBus  (c+165,"full_aw_payload_cache",-1,3,0);
	vcdp->declBus  (c+166,"full_aw_payload_qos",-1,3,0);
	vcdp->declBus  (c+167,"full_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+168,"full_w_valid",-1);
	vcdp->declBit  (c+169,"full_w_ready",-1);
	vcdp->declBus  (c+170,"full_w_payload_data",-1,31,0);
	vcdp->declBus  (c+171,"full_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+172,"full_w_payload_last",-1);
	vcdp->declBit  (c+173,"full_b_valid",-1);
	vcdp->declBit  (c+174,"full_b_ready",-1);
	vcdp->declBus  (c+175,"full_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+176,"aresetn",-1);
	vcdp->declBit  (c+177,"aclk",-1);
	vcdp->declBit  (c+151,"PingPongBufferWithWriteOnlyMaster streamIn_valid",-1);
	vcdp->declBit  (c+92,"PingPongBufferWithWriteOnlyMaster streamIn_ready",-1);
	vcdp->declBus  (c+153,"PingPongBufferWithWriteOnlyMaster streamIn_payload",-1,31,0);
	vcdp->declBit  (c+154,"PingPongBufferWithWriteOnlyMaster startIn",-1);
	vcdp->declBus  (c+155,"PingPongBufferWithWriteOnlyMaster bufferDepthIn",-1,7,0);
	vcdp->declBit  (c+103,"PingPongBufferWithWriteOnlyMaster interruptOut",-1);
	vcdp->declBus  (c+157,"PingPongBufferWithWriteOnlyMaster dataOffsetIn",-1,31,0);
	vcdp->declBit  (c+104,"PingPongBufferWithWriteOnlyMaster full_aw_valid",-1);
	vcdp->declBit  (c+159,"PingPongBufferWithWriteOnlyMaster full_aw_ready",-1);
	vcdp->declBus  (c+105,"PingPongBufferWithWriteOnlyMaster full_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+184,"PingPongBufferWithWriteOnlyMaster full_aw_payload_region",-1,3,0);
	vcdp->declBus  (c+106,"PingPongBufferWithWriteOnlyMaster full_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+185,"PingPongBufferWithWriteOnlyMaster full_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+186,"PingPongBufferWithWriteOnlyMaster full_aw_payload_burst",-1,1,0);
	vcdp->declBus  (c+184,"PingPongBufferWithWriteOnlyMaster full_aw_payload_cache",-1,3,0);
	vcdp->declBus  (c+184,"PingPongBufferWithWriteOnlyMaster full_aw_payload_qos",-1,3,0);
	vcdp->declBus  (c+187,"PingPongBufferWithWriteOnlyMaster full_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+70,"PingPongBufferWithWriteOnlyMaster full_w_valid",-1);
	vcdp->declBit  (c+169,"PingPongBufferWithWriteOnlyMaster full_w_ready",-1);
	vcdp->declBus  (c+71,"PingPongBufferWithWriteOnlyMaster full_w_payload_data",-1,31,0);
	vcdp->declBus  (c+188,"PingPongBufferWithWriteOnlyMaster full_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+2,"PingPongBufferWithWriteOnlyMaster full_w_payload_last",-1);
	vcdp->declBit  (c+173,"PingPongBufferWithWriteOnlyMaster full_b_valid",-1);
	vcdp->declBit  (c+107,"PingPongBufferWithWriteOnlyMaster full_b_ready",-1);
	vcdp->declBus  (c+175,"PingPongBufferWithWriteOnlyMaster full_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+176,"PingPongBufferWithWriteOnlyMaster aresetn",-1);
	vcdp->declBit  (c+177,"PingPongBufferWithWriteOnlyMaster aclk",-1);
	vcdp->declBit  (c+92,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_s_axis_ready",-1);
	vcdp->declBit  (c+103,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_interruptOut",-1);
	vcdp->declBit  (c+3,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_m_axis_valid",-1);
	vcdp->declBus  (c+4,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_m_axis_payload",-1,31,0);
	vcdp->declBit  (c+108,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_startOut",-1);
	vcdp->declBus  (c+109,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_bufferDepthOut",-1,7,0);
	vcdp->declBus  (c+110,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1_dataOffsetOut",-1,31,0);
	vcdp->declBit  (c+72,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_s_axis_ready",-1);
	vcdp->declBit  (c+104,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awvalid",-1);
	vcdp->declBus  (c+105,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awaddr",-1,31,0);
	vcdp->declBus  (c+184,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awregion",-1,3,0);
	vcdp->declBus  (c+106,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+185,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+186,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awburst",-1,1,0);
	vcdp->declBus  (c+184,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+184,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awqos",-1,3,0);
	vcdp->declBus  (c+187,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+70,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_wvalid",-1);
	vcdp->declBus  (c+71,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_wdata",-1,31,0);
	vcdp->declBus  (c+188,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_wstrb",-1,3,0);
	vcdp->declBit  (c+2,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_wlast",-1);
	vcdp->declBit  (c+107,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_m_axi_bready",-1);
	vcdp->declBit  (c+95,"PingPongBufferWithWriteOnlyMaster writeOnlyMater_transInterrupt",-1);
	vcdp->declBit  (c+108,"PingPongBufferWithWriteOnlyMaster writeOnlyMater start",-1);
	vcdp->declBus  (c+109,"PingPongBufferWithWriteOnlyMaster writeOnlyMater burstLen",-1,7,0);
	vcdp->declBus  (c+110,"PingPongBufferWithWriteOnlyMaster writeOnlyMater offset",-1,31,0);
	vcdp->declBit  (c+3,"PingPongBufferWithWriteOnlyMaster writeOnlyMater s_axis_valid",-1);
	vcdp->declBit  (c+72,"PingPongBufferWithWriteOnlyMaster writeOnlyMater s_axis_ready",-1);
	vcdp->declBus  (c+4,"PingPongBufferWithWriteOnlyMaster writeOnlyMater s_axis_payload",-1,31,0);
	vcdp->declBit  (c+104,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awvalid",-1);
	vcdp->declBit  (c+159,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awready",-1);
	vcdp->declBus  (c+105,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awaddr",-1,31,0);
	vcdp->declBus  (c+184,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awregion",-1,3,0);
	vcdp->declBus  (c+106,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+185,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+186,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awburst",-1,1,0);
	vcdp->declBus  (c+184,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+184,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awqos",-1,3,0);
	vcdp->declBus  (c+187,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+70,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wvalid",-1);
	vcdp->declBit  (c+169,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wready",-1);
	vcdp->declBus  (c+71,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wdata",-1,31,0);
	vcdp->declBus  (c+188,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wstrb",-1,3,0);
	vcdp->declBit  (c+2,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wlast",-1);
	vcdp->declBit  (c+173,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_bvalid",-1);
	vcdp->declBit  (c+107,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_bready",-1);
	vcdp->declBus  (c+175,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_bresp",-1,1,0);
	vcdp->declBit  (c+95,"PingPongBufferWithWriteOnlyMaster writeOnlyMater transInterrupt",-1);
	vcdp->declBit  (c+176,"PingPongBufferWithWriteOnlyMaster writeOnlyMater aresetn",-1);
	vcdp->declBit  (c+177,"PingPongBufferWithWriteOnlyMaster writeOnlyMater aclk",-1);
	vcdp->declBit  (c+73,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_valid",-1);
	vcdp->declBus  (c+74,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_payload",-1,31,0);
	vcdp->declBit  (c+43,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_ready",-1);
	vcdp->declBit  (c+5,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_ready",-1);
	vcdp->declBit  (c+6,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_valid",-1);
	vcdp->declBus  (c+96,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+7,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_occupancy",-1,8,0);
	vcdp->declBus  (c+8,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_availability",-1,8,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_m_axi_wlast_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:165
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_m_axi_wlast_1_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:166
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_when_Axi4WriteOnlyMaster_l97_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:167
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz__zz_when_Axi4WriteOnlyMaster_l97_1_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:168
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l97_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:169
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l160 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:170
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_m_axi_wlast_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:171
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_m_axi_wlast_4 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:172
	vcdp->declBus  (c+189,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_transferDataType",-1,31,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_m_axi_wlast // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:174
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:175
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_m_axi_wlast_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:176
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_m_axi_wlast_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:177
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:178
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:179
	vcdp->declBit  (c+97,"PingPongBufferWithWriteOnlyMaster writeOnlyMater m_axi_wlast_regNext",-1);
	vcdp->declBit  (c+1,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_resetStartSendSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_4 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:182
	vcdp->declBit  (c+150,"PingPongBufferWithWriteOnlyMaster writeOnlyMater startSendSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l97 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:184
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_5 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:185
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l97_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:186
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_when_Axi4WriteOnlyMaster_l97_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:187
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_6 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:188
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater _zz_7 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:189
	vcdp->declBus  (c+111,"PingPongBufferWithWriteOnlyMaster writeOnlyMater burstLengthReg",-1,7,0);
	vcdp->declBit  (c+75,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l97",-1);
	vcdp->declBit  (c+37,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_push_fire",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire",-1);
	vcdp->declBit  (c+112,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_newBurst",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_1",-1);
	vcdp->declBit  (c+104,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_controlAwValidSignal",-1);
	vcdp->declBit  (c+179,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l123",-1);
	vcdp->declBit  (c+180,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_aw_fire",-1);
	vcdp->declBus  (c+105,"PingPongBufferWithWriteOnlyMaster writeOnlyMater startOffsetReg",-1,31,0);
	vcdp->declBit  (c+76,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Axi4WriteOnlyMaster_l160",-1);
	vcdp->declBit  (c+113,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_m2sPipe_valid",-1);
	vcdp->declBit  (c+169,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_m2sPipe_ready",-1);
	vcdp->declBus  (c+98,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_m2sPipe_payload",-1,31,0);
	vcdp->declBit  (c+113,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_rValid",-1);
	vcdp->declBus  (c+98,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3_io_pop_rData",-1,31,0);
	vcdp->declBit  (c+114,"PingPongBufferWithWriteOnlyMaster writeOnlyMater when_Stream_l342",-1);
	vcdp->declBit  (c+181,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_w_fire",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_2",-1);
	vcdp->declBit  (c+107,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_controlBReady",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_3",-1);
	vcdp->declBit  (c+178,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_full_b_fire_4",-1);
	vcdp->declBit  (c+95,"PingPongBufferWithWriteOnlyMaster writeOnlyMater axi4Interface_isBurstComplete",-1);
	vcdp->declBit  (c+73,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_push_valid",-1);
	vcdp->declBit  (c+5,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_push_ready",-1);
	vcdp->declBus  (c+74,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_push_payload",-1,31,0);
	vcdp->declBit  (c+6,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_pop_valid",-1);
	vcdp->declBit  (c+43,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_pop_ready",-1);
	vcdp->declBus  (c+96,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_pop_payload",-1,31,0);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_flush",-1);
	vcdp->declBus  (c+7,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_occupancy",-1,8,0);
	vcdp->declBus  (c+8,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 io_availability",-1,8,0);
	vcdp->declBit  (c+177,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 aclk",-1);
	vcdp->declBit  (c+176,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 aresetn",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1115
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1116
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1117
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1118
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1119
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1120
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1121
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1122
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1123
	vcdp->declBit  (c+77,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+78,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+115,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_value",-1,7,0);
	vcdp->declBit  (c+116,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+38,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+44,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willClear",-1);
	vcdp->declBus  (c+45,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+117,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_value",-1,7,0);
	vcdp->declBit  (c+118,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+30,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+9,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_ptrMatch",-1);
	vcdp->declBit  (c+119,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_risingOccupancy",-1);
	vcdp->declBit  (c+79,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_pushing",-1);
	vcdp->declBit  (c+46,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_popping",-1);
	vcdp->declBit  (c+10,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_empty",-1);
	vcdp->declBit  (c+11,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_full",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1142
	vcdp->declBit  (c+66,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 when_Stream_l946",-1);
	vcdp->declBus  (c+120,"PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_ptrDif",-1,7,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster writeOnlyMater streamFifo_3 logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1145
	vcdp->declBit  (c+151,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 s_axis_valid",-1);
	vcdp->declBit  (c+92,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 s_axis_ready",-1);
	vcdp->declBus  (c+153,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 s_axis_payload",-1,31,0);
	vcdp->declBit  (c+154,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startIn",-1);
	vcdp->declBus  (c+155,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferDepthIn",-1,7,0);
	vcdp->declBit  (c+103,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 interruptOut",-1);
	vcdp->declBus  (c+157,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 dataOffsetIn",-1,31,0);
	vcdp->declBit  (c+3,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 m_axis_valid",-1);
	vcdp->declBit  (c+72,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 m_axis_ready",-1);
	vcdp->declBus  (c+4,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 m_axis_payload",-1,31,0);
	vcdp->declBit  (c+108,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startOut",-1);
	vcdp->declBus  (c+109,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferDepthOut",-1,7,0);
	vcdp->declBit  (c+95,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 interruptIn",-1);
	vcdp->declBus  (c+110,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 dataOffsetOut",-1,31,0);
	vcdp->declBit  (c+176,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 aresetn",-1);
	vcdp->declBit  (c+177,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 aclk",-1);
	vcdp->declBus  (c+191,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_BOOT",-1,1,0);
	vcdp->declBus  (c+186,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_EMPTY",-1,1,0);
	vcdp->declBus  (c+192,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_HALF",-1,1,0);
	vcdp->declBus  (c+193,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_enumDef_FULL",-1,1,0);
	vcdp->declBit  (c+47,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_valid",-1);
	vcdp->declBus  (c+48,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_payload",-1,31,0);
	vcdp->declBit  (c+80,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_pop_ready",-1);
	vcdp->declBit  (c+49,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_push_valid",-1);
	vcdp->declBus  (c+50,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_push_payload",-1,31,0);
	vcdp->declBit  (c+81,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_pop_ready",-1);
	vcdp->declBit  (c+12,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_push_ready",-1);
	vcdp->declBit  (c+13,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_pop_valid",-1);
	vcdp->declBus  (c+99,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+14,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_occupancy",-1,8,0);
	vcdp->declBus  (c+15,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA_io_availability",-1,8,0);
	vcdp->declBit  (c+16,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_push_ready",-1);
	vcdp->declBit  (c+17,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_pop_valid",-1);
	vcdp->declBus  (c+100,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+18,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_occupancy",-1,8,0);
	vcdp->declBus  (c+19,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB_io_availability",-1,8,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_inCounter_valueNext // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:476
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_inCounter_valueNext_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:477
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_outCounter_valueNext // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:478
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_outCounter_valueNext_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:479
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_inCounterWillOverflow // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:480
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_inCounterWillOverflow_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:481
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_inCounterWillOverflow_2 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:482
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_outCounterWillOverflow // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:483
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_outCounterWillOverflow_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:484
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_outCounterWillOverflow_2 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:485
	vcdp->declBus  (c+109,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferDepthReg",-1,7,0);
	vcdp->declBit  (c+51,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_willIncrement",-1);
	vcdp->declBit  (c+52,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_willClear",-1);
	vcdp->declBus  (c+53,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_valueNext",-1,7,0);
	vcdp->declBus  (c+121,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_value",-1,7,0);
	vcdp->declBit  (c+122,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_willOverflowIfInc",-1);
	vcdp->declBit  (c+31,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounter_willOverflow",-1);
	vcdp->declBit  (c+82,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_willIncrement",-1);
	vcdp->declBit  (c+83,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_willClear",-1);
	vcdp->declBus  (c+84,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_valueNext",-1,7,0);
	vcdp->declBus  (c+123,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_value",-1,7,0);
	vcdp->declBit  (c+124,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_willOverflowIfInc",-1);
	vcdp->declBit  (c+39,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounter_willOverflow",-1);
	vcdp->declBit  (c+125,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 isWriteBufferA",-1);
	vcdp->declBit  (c+126,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 isReadBufferA",-1);
	vcdp->declBit  (c+182,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamIn_fire",-1);
	vcdp->declBit  (c+54,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 inCounterWillOverflow",-1);
	vcdp->declBit  (c+40,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamOut_fire",-1);
	vcdp->declBit  (c+85,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outCounterWillOverflow",-1);
	vcdp->declBit  (c+182,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamIn_fire_1",-1);
	vcdp->declBit  (c+40,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 streamOut_fire_1",-1);
	vcdp->declBit  (c+55,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startReceiveResetSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:508
	vcdp->declBit  (c+148,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startReceiveSignal",-1);
	vcdp->declBit  (c+101,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startReceiveSignal_regNext",-1);
	vcdp->declBit  (c+69,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 realStartSignal",-1);
	vcdp->declBit  (c+102,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 startReceiveSignal_regNext_1",-1);
	vcdp->declBit  (c+183,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 fallSignal",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_2 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:514
	vcdp->declBit  (c+149,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 lastBurstCompleteSignal",-1);
	vcdp->declBit  (c+127,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 isAfterResetState",-1);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_wantExit",-1);
	vcdp->declBit  (c+20,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_wantStart",-1);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_wantKill",-1);
	vcdp->declBit  (c+103,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outputInterruptSignalState",-1);
	vcdp->declBus  (c+128,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 offsetA",-1,31,0);
	vcdp->declBus  (c+129,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 offsetB",-1,31,0);
	vcdp->declBit  (c+130,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l209",-1);
	vcdp->declBus  (c+131,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 currentState",-1,1,0);
	vcdp->declBit  (c+21,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 canReadData",-1);
	vcdp->declBit  (c+132,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 readyForNextTransfer",-1);
	vcdp->declBus  (c+110,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outputDataOffsetReg",-1,31,0);
	vcdp->declBit  (c+108,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 outputStartSignalReg",-1);
	vcdp->declBit  (c+22,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l224",-1);
	vcdp->declBit  (c+23,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l229",-1);
	vcdp->declBus  (c+131,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateReg",-1,1,0);
	vcdp->declBus  (c+56,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateNext",-1,1,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_when_StateMachine_l219 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:533
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 _zz_when_StateMachine_l219_1 // Ignored: Leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:534
	vcdp->declBit  (c+93,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l144",-1);
	vcdp->declBit  (c+94,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l151",-1);
	vcdp->declBit  (c+57,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l164",-1);
	vcdp->declBit  (c+133,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l173",-1);
	vcdp->declBit  (c+93,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l176",-1);
	vcdp->declBit  (c+94,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l177",-1);
	vcdp->declBit  (c+130,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_PingPongBuffer_l188",-1);
	vcdp->declBit  (c+32,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_StateMachine_l219",-1);
	vcdp->declBit  (c+33,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_StateMachine_l219_1",-1);
	vcdp->declBit  (c+34,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 when_StateMachine_l235",-1);
	vcdp->declQuad (c+134,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateReg_string",-1,39,0);
	vcdp->declQuad (c+58,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 pingPongBufferStateMachine_stateNext_string",-1,39,0);
	vcdp->declBit  (c+47,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_push_valid",-1);
	vcdp->declBit  (c+12,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_push_ready",-1);
	vcdp->declBus  (c+48,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_push_payload",-1,31,0);
	vcdp->declBit  (c+13,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_pop_valid",-1);
	vcdp->declBit  (c+80,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_pop_ready",-1);
	vcdp->declBus  (c+99,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_pop_payload",-1,31,0);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_flush",-1);
	vcdp->declBus  (c+14,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_occupancy",-1,8,0);
	vcdp->declBus  (c+15,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA io_availability",-1,8,0);
	vcdp->declBit  (c+177,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA aclk",-1);
	vcdp->declBit  (c+176,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA aresetn",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1115
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1116
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1117
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1118
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1119
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1120
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1121
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1122
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1123
	vcdp->declBit  (c+60,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+61,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+136,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_value",-1,7,0);
	vcdp->declBit  (c+137,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+35,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+86,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willClear",-1);
	vcdp->declBus  (c+87,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+138,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_value",-1,7,0);
	vcdp->declBit  (c+139,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+41,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+24,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_ptrMatch",-1);
	vcdp->declBit  (c+140,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_risingOccupancy",-1);
	vcdp->declBit  (c+62,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_pushing",-1);
	vcdp->declBit  (c+88,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_popping",-1);
	vcdp->declBit  (c+25,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_empty",-1);
	vcdp->declBit  (c+26,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_full",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1142
	vcdp->declBit  (c+67,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA when_Stream_l946",-1);
	vcdp->declBus  (c+141,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_ptrDif",-1,7,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoA logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1145
	vcdp->declBit  (c+49,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_push_valid",-1);
	vcdp->declBit  (c+16,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_push_ready",-1);
	vcdp->declBus  (c+50,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_push_payload",-1,31,0);
	vcdp->declBit  (c+17,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_pop_valid",-1);
	vcdp->declBit  (c+81,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_pop_ready",-1);
	vcdp->declBus  (c+100,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_pop_payload",-1,31,0);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_flush",-1);
	vcdp->declBus  (c+18,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_occupancy",-1,8,0);
	vcdp->declBus  (c+19,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB io_availability",-1,8,0);
	vcdp->declBit  (c+177,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB aclk",-1);
	vcdp->declBit  (c+176,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB aresetn",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1115
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1116
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1117
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1118
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1119
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1120
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1121
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1122
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1123
	vcdp->declBit  (c+63,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+64,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+142,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_value",-1,7,0);
	vcdp->declBit  (c+143,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+36,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+89,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+190,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willClear",-1);
	vcdp->declBus  (c+90,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+144,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_value",-1,7,0);
	vcdp->declBit  (c+145,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+42,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+27,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_ptrMatch",-1);
	vcdp->declBit  (c+146,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_risingOccupancy",-1);
	vcdp->declBit  (c+65,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_pushing",-1);
	vcdp->declBit  (c+91,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_popping",-1);
	vcdp->declBit  (c+28,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_empty",-1);
	vcdp->declBit  (c+29,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_full",-1);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1142
	vcdp->declBit  (c+68,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB when_Stream_l946",-1);
	vcdp->declBus  (c+147,"PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_ptrDif",-1,7,0);
	// Tracing: PingPongBufferWithWriteOnlyMaster pingPongBuffer_1 bufferFifoB logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1145
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceFullThis__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast)) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__m_axi_wlast_regNext))));
	vcdp->fullBit  (c+2,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast));
	vcdp->fullBit  (c+3,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_valid));
	vcdp->fullBus  (c+4,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_payload),32);
	vcdp->fullBit  (c+5,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))));
	vcdp->fullBit  (c+6,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid));
	vcdp->fullBus  (c+7,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
						  - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value))))),9);
	vcdp->fullBus  (c+8,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value) 
						  - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value))))),9);
	vcdp->fullBit  (c+9,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+10,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+11,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full));
	vcdp->fullBit  (c+12,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full)))));
	vcdp->fullBit  (c+13,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_valid));
	vcdp->fullBus  (c+14,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy) 
				 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value) 
						   - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value))))),9);
	vcdp->fullBus  (c+15,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy)) 
				 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value) 
						   - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value))))),9);
	vcdp->fullBit  (c+16,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full)))));
	vcdp->fullBit  (c+17,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_valid));
	vcdp->fullBus  (c+18,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy) 
				 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value) 
						   - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value))))),9);
	vcdp->fullBus  (c+19,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy)) 
				 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value) 
						   - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value))))),9);
	vcdp->fullBit  (c+20,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_wantStart));
	vcdp->fullBit  (c+21,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData));
	vcdp->fullBit  (c+22,((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData)) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA))));
	vcdp->fullBit  (c+23,((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData)) 
			       & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA)))));
	vcdp->fullBit  (c+24,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+25,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+26,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full));
	vcdp->fullBit  (c+27,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+28,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+29,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full));
	vcdp->fullBit  (c+30,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value)) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+31,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value)) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willIncrement))));
	vcdp->fullBit  (c+32,(((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)) 
			       & (1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext)))));
	vcdp->fullBit  (c+33,(((3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)) 
			       & (3U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext)))));
	vcdp->fullBit  (c+34,(((1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)) 
			       & (1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext)))));
	vcdp->fullBit  (c+35,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value)) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+36,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value)) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+37,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
			       & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))));
	vcdp->fullBit  (c+38,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value)) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+39,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value)) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willIncrement))));
	vcdp->fullBit  (c+40,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_valid) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready))));
	vcdp->fullBit  (c+41,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value)) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+42,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value)) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+43,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready));
	vcdp->fullBit  (c+44,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+45,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext),8);
	vcdp->fullBit  (c+46,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping));
	vcdp->fullBit  (c+47,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_valid));
	vcdp->fullBus  (c+48,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_payload),32);
	vcdp->fullBit  (c+49,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_valid));
	vcdp->fullBus  (c+50,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_payload),32);
	vcdp->fullBit  (c+51,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willIncrement));
	vcdp->fullBit  (c+52,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willClear));
	vcdp->fullBus  (c+53,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_valueNext),8);
	vcdp->fullBit  (c+54,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow));
	vcdp->fullBit  (c+55,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveResetSignal));
	vcdp->fullBus  (c+56,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext),2);
	vcdp->fullBit  (c+57,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l164));
	vcdp->fullQuad (c+58,(((2U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext))
			        ? ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext))
				    ? VL_ULL(0x46554c4c20)
				    : VL_ULL(0x48414c4620))
			        : ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext))
				    ? VL_ULL(0x454d505459)
				    : VL_ULL(0x424f4f5420)))),40);
	vcdp->fullBit  (c+60,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+61,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_valueNext),8);
	vcdp->fullBit  (c+62,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushing));
	vcdp->fullBit  (c+63,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+64,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_valueNext),8);
	vcdp->fullBit  (c+65,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushing));
	vcdp->fullBit  (c+66,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) 
			       != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping))));
	vcdp->fullBit  (c+67,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushing) 
			       != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popping))));
	vcdp->fullBit  (c+68,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushing) 
			       != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popping))));
	vcdp->fullBit  (c+69,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__realStartSignal));
	vcdp->fullBit  (c+70,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid));
	vcdp->fullBus  (c+71,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wdata),32);
	vcdp->fullBit  (c+72,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready));
	vcdp->fullBit  (c+73,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid));
	vcdp->fullBus  (c+74,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_payload),32);
	vcdp->fullBit  (c+75,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97));
	vcdp->fullBit  (c+76,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160));
	vcdp->fullBit  (c+77,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+78,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext),8);
	vcdp->fullBit  (c+79,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing));
	vcdp->fullBit  (c+80,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_ready));
	vcdp->fullBit  (c+81,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_ready));
	vcdp->fullBit  (c+82,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willIncrement));
	vcdp->fullBit  (c+83,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willClear));
	vcdp->fullBus  (c+84,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_valueNext),8);
	vcdp->fullBit  (c+85,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow));
	vcdp->fullBit  (c+86,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+87,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_valueNext),8);
	vcdp->fullBit  (c+88,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popping));
	vcdp->fullBit  (c+89,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+90,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_valueNext),8);
	vcdp->fullBit  (c+91,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popping));
	vcdp->fullBit  (c+92,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready));
	vcdp->fullBit  (c+93,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144));
	vcdp->fullBit  (c+94,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151));
	vcdp->fullBit  (c+95,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete));
	vcdp->fullBus  (c+96,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0),32);
	vcdp->fullBit  (c+97,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__m_axi_wlast_regNext));
	vcdp->fullBus  (c+98,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rData),32);
	vcdp->fullBus  (c+99,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_logic_ram_port0),32);
	vcdp->fullBus  (c+100,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_logic_ram_port0),32);
	vcdp->fullBit  (c+101,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal_regNext));
	vcdp->fullBit  (c+102,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal_regNext_1));
	vcdp->fullBit  (c+103,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState));
	vcdp->fullBit  (c+104,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal));
	vcdp->fullBus  (c+105,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startOffsetReg),32);
	vcdp->fullBus  (c+106,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg) 
					 - (IData)(1U)))),8);
	vcdp->fullBit  (c+107,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady));
	vcdp->fullBit  (c+108,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg));
	vcdp->fullBus  (c+109,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferDepthReg),8);
	vcdp->fullBus  (c+110,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputDataOffsetReg),32);
	vcdp->fullBus  (c+111,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg),8);
	vcdp->fullBit  (c+112,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_newBurst));
	vcdp->fullBit  (c+113,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid));
	vcdp->fullBit  (c+114,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid)))));
	vcdp->fullBus  (c+115,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value),8);
	vcdp->fullBit  (c+116,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+117,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value),8);
	vcdp->fullBit  (c+118,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+119,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+120,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
					 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value)))),8);
	vcdp->fullBus  (c+121,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value),8);
	vcdp->fullBit  (c+122,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value))));
	vcdp->fullBus  (c+123,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value),8);
	vcdp->fullBit  (c+124,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value))));
	vcdp->fullBit  (c+125,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA));
	vcdp->fullBit  (c+126,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA));
	vcdp->fullBit  (c+127,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isAfterResetState));
	vcdp->fullBus  (c+128,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__offsetA),32);
	vcdp->fullBus  (c+129,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__offsetB),32);
	vcdp->fullBit  (c+130,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA)))));
	vcdp->fullBus  (c+131,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg),2);
	vcdp->fullBit  (c+132,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer));
	vcdp->fullBit  (c+133,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA)))));
	vcdp->fullQuad (c+134,(((2U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))
				 ? ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))
				     ? VL_ULL(0x46554c4c20)
				     : VL_ULL(0x48414c4620))
				 : ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))
				     ? VL_ULL(0x454d505459)
				     : VL_ULL(0x424f4f5420)))),40);
	vcdp->fullBus  (c+136,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value),8);
	vcdp->fullBit  (c+137,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+138,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value),8);
	vcdp->fullBit  (c+139,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+140,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+141,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value) 
					 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value)))),8);
	vcdp->fullBus  (c+142,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value),8);
	vcdp->fullBit  (c+143,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+144,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value),8);
	vcdp->fullBit  (c+145,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+146,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+147,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value) 
					 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value)))),8);
	vcdp->fullBit  (c+148,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal));
	vcdp->fullBit  (c+149,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__lastBurstCompleteSignal));
	vcdp->fullBit  (c+150,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal));
	vcdp->fullBit  (c+151,(vlTOPp->streamIn_valid));
	vcdp->fullBit  (c+152,(vlTOPp->streamIn_ready));
	vcdp->fullBus  (c+153,(vlTOPp->streamIn_payload),32);
	vcdp->fullBit  (c+154,(vlTOPp->startIn));
	vcdp->fullBus  (c+155,(vlTOPp->bufferDepthIn),8);
	vcdp->fullBit  (c+156,(vlTOPp->interruptOut));
	vcdp->fullBus  (c+157,(vlTOPp->dataOffsetIn),32);
	vcdp->fullBit  (c+158,(vlTOPp->full_aw_valid));
	vcdp->fullBit  (c+159,(vlTOPp->full_aw_ready));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceFullThis__17(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+160,(vlTOPp->full_aw_payload_addr),32);
	vcdp->fullBus  (c+161,(vlTOPp->full_aw_payload_region),4);
	vcdp->fullBus  (c+162,(vlTOPp->full_aw_payload_len),8);
	vcdp->fullBus  (c+163,(vlTOPp->full_aw_payload_size),3);
	vcdp->fullBus  (c+164,(vlTOPp->full_aw_payload_burst),2);
	vcdp->fullBus  (c+165,(vlTOPp->full_aw_payload_cache),4);
	vcdp->fullBus  (c+166,(vlTOPp->full_aw_payload_qos),4);
	vcdp->fullBus  (c+167,(vlTOPp->full_aw_payload_prot),3);
	vcdp->fullBit  (c+168,(vlTOPp->full_w_valid));
	vcdp->fullBit  (c+169,(vlTOPp->full_w_ready));
	vcdp->fullBus  (c+170,(vlTOPp->full_w_payload_data),32);
	vcdp->fullBus  (c+171,(vlTOPp->full_w_payload_strb),4);
	vcdp->fullBit  (c+172,(vlTOPp->full_w_payload_last));
	vcdp->fullBit  (c+173,(vlTOPp->full_b_valid));
	vcdp->fullBit  (c+174,(vlTOPp->full_b_ready));
	vcdp->fullBus  (c+175,(vlTOPp->full_b_payload_resp),2);
	vcdp->fullBit  (c+176,(vlTOPp->aresetn));
	vcdp->fullBit  (c+177,(vlTOPp->aclk));
	vcdp->fullBit  (c+178,(((IData)(vlTOPp->full_b_valid) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady))));
	vcdp->fullBit  (c+179,(((IData)(vlTOPp->aresetn) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal))));
	vcdp->fullBit  (c+180,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal) 
				& (IData)(vlTOPp->full_aw_ready))));
	vcdp->fullBit  (c+181,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid) 
				& (IData)(vlTOPp->full_w_ready))));
	vcdp->fullBit  (c+182,(((IData)(vlTOPp->streamIn_valid) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready))));
	vcdp->fullBit  (c+183,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.fallSignal));
	vcdp->fullBus  (c+184,(0U),4);
	vcdp->fullBus  (c+185,(2U),3);
	vcdp->fullBus  (c+186,(1U),2);
	vcdp->fullBus  (c+187,(0U),3);
	vcdp->fullBus  (c+188,(0xfU),4);
	vcdp->fullBus  (c+189,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_transferDataType),32);
	vcdp->fullBit  (c+190,(0U));
	vcdp->fullBus  (c+191,(0U),2);
	vcdp->fullBus  (c+192,(2U),2);
	vcdp->fullBus  (c+193,(3U),2);
    }
}
