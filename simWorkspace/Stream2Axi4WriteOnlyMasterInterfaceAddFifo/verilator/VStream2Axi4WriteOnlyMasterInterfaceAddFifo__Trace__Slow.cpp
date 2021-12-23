// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"


//======================

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceInit, &VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceFull, &VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChg, this);
}
void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* t=(VStream2Axi4WriteOnlyMasterInterfaceAddFifo*)userthis;
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* t=(VStream2Axi4WriteOnlyMasterInterfaceAddFifo*)userthis;
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceInitThis(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceFullThis(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceInitThis__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+65,"s_axis_valid",-1);
	vcdp->declBit  (c+66,"s_axis_ready",-1);
	vcdp->declBus  (c+67,"s_axis_payload",-1,31,0);
	vcdp->declBit  (c+68,"m_axi_awvalid",-1);
	vcdp->declBit  (c+69,"m_axi_awready",-1);
	vcdp->declBus  (c+70,"m_axi_awaddr",-1,31,0);
	vcdp->declBus  (c+71,"m_axi_awregion",-1,3,0);
	vcdp->declBus  (c+72,"m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+73,"m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+74,"m_axi_awburst",-1,1,0);
	vcdp->declBus  (c+75,"m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+76,"m_axi_awqos",-1,3,0);
	vcdp->declBus  (c+77,"m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+78,"m_axi_wvalid",-1);
	vcdp->declBit  (c+79,"m_axi_wready",-1);
	vcdp->declBus  (c+80,"m_axi_wdata",-1,31,0);
	vcdp->declBus  (c+81,"m_axi_wstrb",-1,3,0);
	vcdp->declBit  (c+82,"m_axi_wlast",-1);
	vcdp->declBit  (c+83,"m_axi_bvalid",-1);
	vcdp->declBit  (c+84,"m_axi_bready",-1);
	vcdp->declBus  (c+85,"m_axi_bresp",-1,1,0);
	vcdp->declBit  (c+86,"aresetn",-1);
	vcdp->declBit  (c+87,"start",-1);
	vcdp->declBus  (c+88,"burstLen",-1,7,0);
	vcdp->declBus  (c+89,"offset",-1,31,0);
	vcdp->declBit  (c+90,"transInterrupt",-1);
	vcdp->declBit  (c+91,"aclk",-1);
	vcdp->declBit  (c+65,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo s_axis_valid",-1);
	vcdp->declBit  (c+66,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo s_axis_ready",-1);
	vcdp->declBus  (c+67,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo s_axis_payload",-1,31,0);
	vcdp->declBit  (c+68,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awvalid",-1);
	vcdp->declBit  (c+69,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awready",-1);
	vcdp->declBus  (c+70,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awaddr",-1,31,0);
	vcdp->declBus  (c+71,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awregion",-1,3,0);
	vcdp->declBus  (c+72,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+73,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+74,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awburst",-1,1,0);
	vcdp->declBus  (c+75,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+76,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awqos",-1,3,0);
	vcdp->declBus  (c+77,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+78,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_wvalid",-1);
	vcdp->declBit  (c+79,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_wready",-1);
	vcdp->declBus  (c+80,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_wdata",-1,31,0);
	vcdp->declBus  (c+81,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_wstrb",-1,3,0);
	vcdp->declBit  (c+82,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_wlast",-1);
	vcdp->declBit  (c+83,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_bvalid",-1);
	vcdp->declBit  (c+84,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_bready",-1);
	vcdp->declBus  (c+85,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_bresp",-1,1,0);
	vcdp->declBit  (c+86,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo aresetn",-1);
	vcdp->declBit  (c+87,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo start",-1);
	vcdp->declBus  (c+88,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo burstLen",-1,7,0);
	vcdp->declBus  (c+89,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo offset",-1,31,0);
	vcdp->declBit  (c+90,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo transInterrupt",-1);
	vcdp->declBit  (c+91,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo aclk",-1);
	vcdp->declBit  (c+1,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_s_axis_ready",-1);
	vcdp->declBit  (c+48,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awvalid",-1);
	vcdp->declBus  (c+89,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awaddr",-1,31,0);
	vcdp->declBus  (c+98,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awregion",-1,3,0);
	vcdp->declBus  (c+92,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+99,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+100,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awburst",-1,1,0);
	vcdp->declBus  (c+98,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+98,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awqos",-1,3,0);
	vcdp->declBus  (c+101,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+2,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_wvalid",-1);
	vcdp->declBus  (c+3,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_wdata",-1,31,0);
	vcdp->declBus  (c+102,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_wstrb",-1,3,0);
	vcdp->declBit  (c+4,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_wlast",-1);
	vcdp->declBit  (c+49,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_bready",-1);
	vcdp->declBit  (c+44,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_transInterrupt",-1);
	vcdp->declBit  (c+30,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance_io_push_ready",-1);
	vcdp->declBit  (c+31,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance_io_pop_valid",-1);
	vcdp->declBus  (c+45,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+32,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance_io_occupancy",-1,8,0);
	vcdp->declBus  (c+33,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance_io_availability",-1,8,0);
	vcdp->declBit  (c+87,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection start",-1);
	vcdp->declBus  (c+88,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection burstLen",-1,7,0);
	vcdp->declBus  (c+89,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection offset",-1,31,0);
	vcdp->declBit  (c+31,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection s_axis_valid",-1);
	vcdp->declBit  (c+1,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection s_axis_ready",-1);
	vcdp->declBus  (c+45,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection s_axis_payload",-1,31,0);
	vcdp->declBit  (c+48,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awvalid",-1);
	vcdp->declBit  (c+69,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awready",-1);
	vcdp->declBus  (c+89,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awaddr",-1,31,0);
	vcdp->declBus  (c+98,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awregion",-1,3,0);
	vcdp->declBus  (c+92,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+99,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+100,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awburst",-1,1,0);
	vcdp->declBus  (c+98,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+98,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awqos",-1,3,0);
	vcdp->declBus  (c+101,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+2,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wvalid",-1);
	vcdp->declBit  (c+79,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wready",-1);
	vcdp->declBus  (c+3,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wdata",-1,31,0);
	vcdp->declBus  (c+102,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wstrb",-1,3,0);
	vcdp->declBit  (c+4,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wlast",-1);
	vcdp->declBit  (c+83,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_bvalid",-1);
	vcdp->declBit  (c+49,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_bready",-1);
	vcdp->declBus  (c+85,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_bresp",-1,1,0);
	vcdp->declBit  (c+44,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection transInterrupt",-1);
	vcdp->declBit  (c+86,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection aresetn",-1);
	vcdp->declBit  (c+91,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection aclk",-1);
	vcdp->declBit  (c+5,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_push_valid",-1);
	vcdp->declBus  (c+6,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_push_payload",-1,31,0);
	vcdp->declBit  (c+7,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_ready",-1);
	vcdp->declBit  (c+34,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_push_ready",-1);
	vcdp->declBit  (c+35,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_valid",-1);
	vcdp->declBus  (c+46,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_payload",-1,31,0);
	vcdp->declBus  (c+36,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_occupancy",-1,8,0);
	vcdp->declBus  (c+37,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_availability",-1,8,0);
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz__zz_m_axi_wlast_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:158
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz__zz_m_axi_wlast_1_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:159
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz__zz_when_Axi4WriteOnlyMaster_l93_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:160
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz__zz_when_Axi4WriteOnlyMaster_l93_1_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:161
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_when_Axi4WriteOnlyMaster_l93_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:162
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_when_Axi4WriteOnlyMaster_l156 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:163
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_m_axi_wlast_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:164
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_m_axi_wlast_4 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:165
	vcdp->declBus  (c+103,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_transferDataType",-1,31,0);
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_m_axi_wlast // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:167
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:168
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_m_axi_wlast_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:169
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_m_axi_wlast_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:170
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:171
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:172
	vcdp->declBit  (c+47,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wlast_regNext",-1);
	vcdp->declBit  (c+24,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_resetStartSendSignal",-1);
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_4 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:175
	vcdp->declBit  (c+64,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection startSendSignal",-1);
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_when_Axi4WriteOnlyMaster_l93 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:177
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_5 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:178
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_when_Axi4WriteOnlyMaster_l93_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:179
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_when_Axi4WriteOnlyMaster_l93_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:180
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_6 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:181
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection _zz_7 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:182
	vcdp->declBit  (c+8,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Axi4WriteOnlyMaster_l93",-1);
	vcdp->declBit  (c+25,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_push_fire",-1);
	vcdp->declBit  (c+93,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire",-1);
	vcdp->declBit  (c+50,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_isTransferAfterReset",-1);
	vcdp->declBit  (c+93,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_1",-1);
	vcdp->declBit  (c+94,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Axi4WriteOnlyMaster_l119",-1);
	vcdp->declBit  (c+51,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_lastBurstComplete",-1);
	vcdp->declBit  (c+48,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_controlAwValidSignal",-1);
	vcdp->declBit  (c+95,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Axi4WriteOnlyMaster_l122",-1);
	vcdp->declBit  (c+96,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_aw_fire",-1);
	vcdp->declBit  (c+9,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Axi4WriteOnlyMaster_l156",-1);
	vcdp->declBit  (c+97,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_w_fire",-1);
	vcdp->declBit  (c+93,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_2",-1);
	vcdp->declBit  (c+49,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_controlBReady",-1);
	vcdp->declBit  (c+93,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_3",-1);
	vcdp->declBit  (c+93,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_4",-1);
	vcdp->declBit  (c+44,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_isBurstComplete",-1);
	vcdp->declBit  (c+5,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_push_valid",-1);
	vcdp->declBit  (c+34,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_push_ready",-1);
	vcdp->declBus  (c+6,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_push_payload",-1,31,0);
	vcdp->declBit  (c+35,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_pop_valid",-1);
	vcdp->declBit  (c+7,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_pop_ready",-1);
	vcdp->declBus  (c+46,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_pop_payload",-1,31,0);
	vcdp->declBit  (c+104,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_flush",-1);
	vcdp->declBus  (c+36,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_occupancy",-1,8,0);
	vcdp->declBus  (c+37,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_availability",-1,8,0);
	vcdp->declBit  (c+91,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 aclk",-1);
	vcdp->declBit  (c+86,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 aresetn",-1);
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:412
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:413
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:414
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:415
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:416
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:417
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:418
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:419
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:420
	vcdp->declBit  (c+10,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+104,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+11,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+52,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_value",-1,7,0);
	vcdp->declBit  (c+53,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+26,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+12,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+104,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_willClear",-1);
	vcdp->declBus  (c+13,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+54,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_value",-1,7,0);
	vcdp->declBit  (c+55,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+27,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+38,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_ptrMatch",-1);
	vcdp->declBit  (c+56,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_risingOccupancy",-1);
	vcdp->declBit  (c+14,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushing",-1);
	vcdp->declBit  (c+15,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popping",-1);
	vcdp->declBit  (c+39,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_empty",-1);
	vcdp->declBit  (c+40,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_full",-1);
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:439
	vcdp->declBit  (c+16,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 when_Stream_l933",-1);
	vcdp->declBus  (c+57,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_ptrDif",-1,7,0);
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:442
	vcdp->declBit  (c+65,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_push_valid",-1);
	vcdp->declBit  (c+30,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_push_ready",-1);
	vcdp->declBus  (c+67,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_push_payload",-1,31,0);
	vcdp->declBit  (c+31,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_pop_valid",-1);
	vcdp->declBit  (c+1,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_pop_ready",-1);
	vcdp->declBus  (c+45,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_pop_payload",-1,31,0);
	vcdp->declBit  (c+104,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_flush",-1);
	vcdp->declBus  (c+32,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_occupancy",-1,8,0);
	vcdp->declBus  (c+33,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_availability",-1,8,0);
	vcdp->declBit  (c+91,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance aclk",-1);
	vcdp->declBit  (c+86,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance aresetn",-1);
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:412
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:413
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:414
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:415
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:416
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:417
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:418
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance _zz_io_availability // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:419
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:420
	vcdp->declBit  (c+17,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+104,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+18,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+58,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_value",-1,7,0);
	vcdp->declBit  (c+59,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+28,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+19,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+104,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_willClear",-1);
	vcdp->declBus  (c+20,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_valueNext",-1,7,0);
	vcdp->declBus  (c+60,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_value",-1,7,0);
	vcdp->declBit  (c+61,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+29,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+41,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_ptrMatch",-1);
	vcdp->declBit  (c+62,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_risingOccupancy",-1);
	vcdp->declBit  (c+21,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushing",-1);
	vcdp->declBit  (c+22,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popping",-1);
	vcdp->declBit  (c+42,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_empty",-1);
	vcdp->declBit  (c+43,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_full",-1);
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:439
	vcdp->declBit  (c+23,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance when_Stream_l933",-1);
	vcdp->declBus  (c+63,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_ptrDif",-1,7,0);
	// Tracing: Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_ram // Ignored: Wide memory > --trace-max-array ents at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:442
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceFullThis__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_s_axis_ready));
	vcdp->fullBit  (c+2,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid));
	vcdp->fullBus  (c+3,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wdata),32);
	vcdp->fullBit  (c+4,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast));
	vcdp->fullBit  (c+5,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid));
	vcdp->fullBus  (c+6,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_payload),32);
	vcdp->fullBit  (c+7,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_ready));
	vcdp->fullBit  (c+8,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l93));
	vcdp->fullBit  (c+9,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l156));
	vcdp->fullBit  (c+10,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+11,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_valueNext),8);
	vcdp->fullBit  (c+12,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+13,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_valueNext),8);
	vcdp->fullBit  (c+14,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing));
	vcdp->fullBit  (c+15,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping));
	vcdp->fullBit  (c+16,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing) 
			       != (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping))));
	vcdp->fullBit  (c+17,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+18,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_valueNext),8);
	vcdp->fullBit  (c+19,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+20,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_valueNext),8);
	vcdp->fullBit  (c+21,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing));
	vcdp->fullBit  (c+22,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping));
	vcdp->fullBit  (c+23,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing) 
			       != (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping))));
	vcdp->fullBit  (c+24,(((~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast)) 
			       & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__m_axi_wlast_regNext))));
	vcdp->fullBit  (c+25,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid) 
			       & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full)))));
	vcdp->fullBit  (c+26,(((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+27,(((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+28,(((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+29,(((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+30,((1U & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full)))));
	vcdp->fullBit  (c+31,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance_io_pop_valid));
	vcdp->fullBus  (c+32,(((((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy) 
				 & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value) 
						   - (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value))))),9);
	vcdp->fullBus  (c+33,(((((~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy)) 
				 & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value) 
						   - (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value))))),9);
	vcdp->fullBit  (c+34,((1U & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full)))));
	vcdp->fullBit  (c+35,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid));
	vcdp->fullBus  (c+36,(((((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy) 
				 & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value) 
						   - (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value))))),9);
	vcdp->fullBus  (c+37,(((((~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy)) 
				 & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch)) 
				<< 8U) | (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value) 
						   - (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value))))),9);
	vcdp->fullBit  (c+38,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+39,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+40,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full));
	vcdp->fullBit  (c+41,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+42,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+43,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full));
	vcdp->fullBit  (c+44,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete));
	vcdp->fullBus  (c+45,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_logic_ram_port0),32);
	vcdp->fullBus  (c+46,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_logic_ram_port0),32);
	vcdp->fullBit  (c+47,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__m_axi_wlast_regNext));
	vcdp->fullBit  (c+48,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal));
	vcdp->fullBit  (c+49,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady));
	vcdp->fullBit  (c+50,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isTransferAfterReset));
	vcdp->fullBit  (c+51,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete));
	vcdp->fullBus  (c+52,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value),8);
	vcdp->fullBit  (c+53,((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+54,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value),8);
	vcdp->fullBit  (c+55,((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+56,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+57,((0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value) 
					- (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value)))),8);
	vcdp->fullBus  (c+58,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value),8);
	vcdp->fullBit  (c+59,((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+60,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value),8);
	vcdp->fullBit  (c+61,((0xffU == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+62,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+63,((0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value) 
					- (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value)))),8);
	vcdp->fullBit  (c+64,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal));
	vcdp->fullBit  (c+65,(vlTOPp->s_axis_valid));
	vcdp->fullBit  (c+66,(vlTOPp->s_axis_ready));
	vcdp->fullBus  (c+67,(vlTOPp->s_axis_payload),32);
	vcdp->fullBit  (c+68,(vlTOPp->m_axi_awvalid));
	vcdp->fullBit  (c+69,(vlTOPp->m_axi_awready));
	vcdp->fullBus  (c+70,(vlTOPp->m_axi_awaddr),32);
	vcdp->fullBus  (c+71,(vlTOPp->m_axi_awregion),4);
	vcdp->fullBus  (c+72,(vlTOPp->m_axi_awlen),8);
	vcdp->fullBus  (c+73,(vlTOPp->m_axi_awsize),3);
	vcdp->fullBus  (c+74,(vlTOPp->m_axi_awburst),2);
	vcdp->fullBus  (c+75,(vlTOPp->m_axi_awcache),4);
	vcdp->fullBus  (c+76,(vlTOPp->m_axi_awqos),4);
	vcdp->fullBus  (c+77,(vlTOPp->m_axi_awprot),3);
	vcdp->fullBit  (c+78,(vlTOPp->m_axi_wvalid));
	vcdp->fullBit  (c+79,(vlTOPp->m_axi_wready));
	vcdp->fullBus  (c+80,(vlTOPp->m_axi_wdata),32);
	vcdp->fullBus  (c+81,(vlTOPp->m_axi_wstrb),4);
	vcdp->fullBit  (c+82,(vlTOPp->m_axi_wlast));
	vcdp->fullBit  (c+83,(vlTOPp->m_axi_bvalid));
	vcdp->fullBit  (c+84,(vlTOPp->m_axi_bready));
	vcdp->fullBus  (c+85,(vlTOPp->m_axi_bresp),2);
	vcdp->fullBit  (c+86,(vlTOPp->aresetn));
	vcdp->fullBit  (c+87,(vlTOPp->start));
	vcdp->fullBus  (c+88,(vlTOPp->burstLen),8);
	vcdp->fullBus  (c+89,(vlTOPp->offset),32);
	vcdp->fullBit  (c+90,(vlTOPp->transInterrupt));
	vcdp->fullBit  (c+91,(vlTOPp->aclk));
	vcdp->fullBus  (c+92,((0xffU & ((IData)(vlTOPp->burstLen) 
					- (IData)(1U)))),8);
	vcdp->fullBit  (c+93,(((IData)(vlTOPp->m_axi_bvalid) 
			       & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady))));
	vcdp->fullBit  (c+94,((((IData)(vlTOPp->m_axi_bvalid) 
				& (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady)) 
			       | (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isTransferAfterReset))));
	vcdp->fullBit  (c+95,(((IData)(vlTOPp->aresetn) 
			       & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal))));
	vcdp->fullBit  (c+96,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal) 
			       & (IData)(vlTOPp->m_axi_awready))));
	vcdp->fullBit  (c+97,(((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid) 
			       & (IData)(vlTOPp->m_axi_wready))));
	vcdp->fullBus  (c+98,(0U),4);
	vcdp->fullBus  (c+99,(2U),3);
	vcdp->fullBus  (c+100,(1U),2);
	vcdp->fullBus  (c+101,(0U),3);
	vcdp->fullBus  (c+102,(0xfU),4);
	vcdp->fullBus  (c+103,(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_transferDataType),32);
	vcdp->fullBit  (c+104,(0U));
    }
}
