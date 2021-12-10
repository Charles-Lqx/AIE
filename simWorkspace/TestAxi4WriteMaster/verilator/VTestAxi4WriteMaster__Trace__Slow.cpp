// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestAxi4WriteMaster__Syms.h"


//======================

void VTestAxi4WriteMaster::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VTestAxi4WriteMaster::traceInit, &VTestAxi4WriteMaster::traceFull, &VTestAxi4WriteMaster::traceChg, this);
}
void VTestAxi4WriteMaster::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTestAxi4WriteMaster* t=(VTestAxi4WriteMaster*)userthis;
    VTestAxi4WriteMaster__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTestAxi4WriteMaster::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTestAxi4WriteMaster* t=(VTestAxi4WriteMaster*)userthis;
    VTestAxi4WriteMaster__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VTestAxi4WriteMaster::traceInitThis(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTestAxi4WriteMaster::traceFullThis(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTestAxi4WriteMaster::traceInitThis__1(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+27,"fifoValid",-1);
	vcdp->declBit  (c+28,"fifoReady",-1);
	vcdp->declBus  (c+29,"fifoPayload",-1,31,0);
	vcdp->declBit  (c+30,"awValid",-1);
	vcdp->declBit  (c+31,"awReady",-1);
	vcdp->declBus  (c+32,"awaddr",-1,31,0);
	vcdp->declBus  (c+33,"awid",-1,0,0);
	vcdp->declBus  (c+34,"awregion",-1,3,0);
	vcdp->declBus  (c+35,"awlen",-1,7,0);
	vcdp->declBus  (c+36,"awsize",-1,2,0);
	vcdp->declBus  (c+37,"awburst",-1,1,0);
	vcdp->declBus  (c+38,"awlock",-1,0,0);
	vcdp->declBus  (c+39,"awcache",-1,3,0);
	vcdp->declBus  (c+40,"awqos",-1,3,0);
	vcdp->declBus  (c+41,"awprot",-1,2,0);
	vcdp->declBit  (c+42,"wValid",-1);
	vcdp->declBit  (c+43,"wReady",-1);
	vcdp->declBus  (c+44,"wdata",-1,31,0);
	vcdp->declBus  (c+45,"wstrb",-1,3,0);
	vcdp->declBit  (c+46,"wlast",-1);
	vcdp->declBit  (c+47,"bValid",-1);
	vcdp->declBit  (c+48,"bReady",-1);
	vcdp->declBus  (c+49,"bid",-1,0,0);
	vcdp->declBus  (c+50,"bresp",-1,1,0);
	vcdp->declBit  (c+51,"arValid",-1);
	vcdp->declBit  (c+52,"arReady",-1);
	vcdp->declBus  (c+53,"araddr",-1,31,0);
	vcdp->declBus  (c+54,"arid",-1,0,0);
	vcdp->declBus  (c+55,"arregion",-1,3,0);
	vcdp->declBus  (c+56,"arlen",-1,7,0);
	vcdp->declBus  (c+57,"arsize",-1,2,0);
	vcdp->declBus  (c+58,"arburst",-1,1,0);
	vcdp->declBus  (c+59,"arlock",-1,0,0);
	vcdp->declBus  (c+60,"arcache",-1,3,0);
	vcdp->declBus  (c+61,"arqos",-1,3,0);
	vcdp->declBus  (c+62,"arprot",-1,2,0);
	vcdp->declBit  (c+63,"rValid",-1);
	vcdp->declBit  (c+64,"rReady",-1);
	vcdp->declBus  (c+65,"rdata",-1,31,0);
	vcdp->declBus  (c+66,"rid",-1,0,0);
	vcdp->declBus  (c+67,"rresp",-1,1,0);
	vcdp->declBit  (c+68,"rlast",-1);
	vcdp->declBit  (c+69,"clk",-1);
	vcdp->declBit  (c+70,"reset",-1);
	vcdp->declBit  (c+27,"TestAxi4WriteMaster fifoValid",-1);
	vcdp->declBit  (c+28,"TestAxi4WriteMaster fifoReady",-1);
	vcdp->declBus  (c+29,"TestAxi4WriteMaster fifoPayload",-1,31,0);
	vcdp->declBit  (c+30,"TestAxi4WriteMaster awValid",-1);
	vcdp->declBit  (c+31,"TestAxi4WriteMaster awReady",-1);
	vcdp->declBus  (c+32,"TestAxi4WriteMaster awaddr",-1,31,0);
	vcdp->declBus  (c+33,"TestAxi4WriteMaster awid",-1,0,0);
	vcdp->declBus  (c+34,"TestAxi4WriteMaster awregion",-1,3,0);
	vcdp->declBus  (c+35,"TestAxi4WriteMaster awlen",-1,7,0);
	vcdp->declBus  (c+36,"TestAxi4WriteMaster awsize",-1,2,0);
	vcdp->declBus  (c+37,"TestAxi4WriteMaster awburst",-1,1,0);
	vcdp->declBus  (c+38,"TestAxi4WriteMaster awlock",-1,0,0);
	vcdp->declBus  (c+39,"TestAxi4WriteMaster awcache",-1,3,0);
	vcdp->declBus  (c+40,"TestAxi4WriteMaster awqos",-1,3,0);
	vcdp->declBus  (c+41,"TestAxi4WriteMaster awprot",-1,2,0);
	vcdp->declBit  (c+42,"TestAxi4WriteMaster wValid",-1);
	vcdp->declBit  (c+43,"TestAxi4WriteMaster wReady",-1);
	vcdp->declBus  (c+44,"TestAxi4WriteMaster wdata",-1,31,0);
	vcdp->declBus  (c+45,"TestAxi4WriteMaster wstrb",-1,3,0);
	vcdp->declBit  (c+46,"TestAxi4WriteMaster wlast",-1);
	vcdp->declBit  (c+47,"TestAxi4WriteMaster bValid",-1);
	vcdp->declBit  (c+48,"TestAxi4WriteMaster bReady",-1);
	vcdp->declBus  (c+49,"TestAxi4WriteMaster bid",-1,0,0);
	vcdp->declBus  (c+50,"TestAxi4WriteMaster bresp",-1,1,0);
	vcdp->declBit  (c+51,"TestAxi4WriteMaster arValid",-1);
	vcdp->declBit  (c+52,"TestAxi4WriteMaster arReady",-1);
	vcdp->declBus  (c+53,"TestAxi4WriteMaster araddr",-1,31,0);
	vcdp->declBus  (c+54,"TestAxi4WriteMaster arid",-1,0,0);
	vcdp->declBus  (c+55,"TestAxi4WriteMaster arregion",-1,3,0);
	vcdp->declBus  (c+56,"TestAxi4WriteMaster arlen",-1,7,0);
	vcdp->declBus  (c+57,"TestAxi4WriteMaster arsize",-1,2,0);
	vcdp->declBus  (c+58,"TestAxi4WriteMaster arburst",-1,1,0);
	vcdp->declBus  (c+59,"TestAxi4WriteMaster arlock",-1,0,0);
	vcdp->declBus  (c+60,"TestAxi4WriteMaster arcache",-1,3,0);
	vcdp->declBus  (c+61,"TestAxi4WriteMaster arqos",-1,3,0);
	vcdp->declBus  (c+62,"TestAxi4WriteMaster arprot",-1,2,0);
	vcdp->declBit  (c+63,"TestAxi4WriteMaster rValid",-1);
	vcdp->declBit  (c+64,"TestAxi4WriteMaster rReady",-1);
	vcdp->declBus  (c+65,"TestAxi4WriteMaster rdata",-1,31,0);
	vcdp->declBus  (c+66,"TestAxi4WriteMaster rid",-1,0,0);
	vcdp->declBus  (c+67,"TestAxi4WriteMaster rresp",-1,1,0);
	vcdp->declBit  (c+68,"TestAxi4WriteMaster rlast",-1);
	vcdp->declBit  (c+69,"TestAxi4WriteMaster clk",-1);
	vcdp->declBit  (c+70,"TestAxi4WriteMaster reset",-1);
	// Tracing: TestAxi4WriteMaster _zz__zz_wdata_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:53
	// Tracing: TestAxi4WriteMaster _zz__zz_wdata_1_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:54
	// Tracing: TestAxi4WriteMaster _zz__zz_when_Axi4WriteMaster_l53_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:55
	// Tracing: TestAxi4WriteMaster _zz__zz_when_Axi4WriteMaster_l53_1_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:56
	// Tracing: TestAxi4WriteMaster _zz__zz_5 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:57
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_alignMask // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:58
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_base // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:59
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_base_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:60
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_baseIncr // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:61
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_wrapCase_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:62
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_wrapCase_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:63
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:64
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:65
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:66
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:67
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_4 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:68
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_5 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:69
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_6 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:70
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_7 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:71
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_8 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:72
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_9 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:73
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_10 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:74
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_11 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:75
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_result_12 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:76
	// Tracing: TestAxi4WriteMaster _zz_wdata_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:77
	// Tracing: TestAxi4WriteMaster _zz_wdata_4 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:78
	// Tracing: TestAxi4WriteMaster _zz_wdata // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:79
	// Tracing: TestAxi4WriteMaster _zz_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:80
	// Tracing: TestAxi4WriteMaster _zz_wdata_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:81
	// Tracing: TestAxi4WriteMaster _zz_wdata_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:82
	// Tracing: TestAxi4WriteMaster _zz_when_Axi4WriteMaster_l61 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:83
	// Tracing: TestAxi4WriteMaster _zz_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:84
	// Tracing: TestAxi4WriteMaster _zz_when_Axi4WriteMaster_l53 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:85
	// Tracing: TestAxi4WriteMaster _zz_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:86
	// Tracing: TestAxi4WriteMaster _zz_when_Axi4WriteMaster_l53_1 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:87
	// Tracing: TestAxi4WriteMaster _zz_when_Axi4WriteMaster_l53_2 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:88
	// Tracing: TestAxi4WriteMaster _zz_when_Axi4WriteMaster_l53_3 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:89
	// Tracing: TestAxi4WriteMaster _zz_4 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:90
	vcdp->declBus  (c+5,"TestAxi4WriteMaster fifoDataBuffer_0",-1,31,0);
	vcdp->declBus  (c+6,"TestAxi4WriteMaster fifoDataBuffer_1",-1,31,0);
	vcdp->declBus  (c+7,"TestAxi4WriteMaster fifoDataBuffer_2",-1,31,0);
	vcdp->declBus  (c+8,"TestAxi4WriteMaster fifoDataBuffer_3",-1,31,0);
	vcdp->declBus  (c+9,"TestAxi4WriteMaster fifoDataBuffer_4",-1,31,0);
	vcdp->declBus  (c+10,"TestAxi4WriteMaster fifoDataBuffer_5",-1,31,0);
	vcdp->declBus  (c+11,"TestAxi4WriteMaster fifoDataBuffer_6",-1,31,0);
	vcdp->declBus  (c+12,"TestAxi4WriteMaster fifoDataBuffer_7",-1,31,0);
	vcdp->declBus  (c+13,"TestAxi4WriteMaster fifoDataBuffer_8",-1,31,0);
	vcdp->declBus  (c+14,"TestAxi4WriteMaster fifoDataBuffer_9",-1,31,0);
	vcdp->declBus  (c+15,"TestAxi4WriteMaster fifoDataBuffer_10",-1,31,0);
	vcdp->declBus  (c+16,"TestAxi4WriteMaster fifoDataBuffer_11",-1,31,0);
	vcdp->declBus  (c+17,"TestAxi4WriteMaster fifoDataBuffer_12",-1,31,0);
	vcdp->declBus  (c+18,"TestAxi4WriteMaster fifoDataBuffer_13",-1,31,0);
	vcdp->declBus  (c+19,"TestAxi4WriteMaster fifoDataBuffer_14",-1,31,0);
	vcdp->declBus  (c+20,"TestAxi4WriteMaster fifoDataBuffer_15",-1,31,0);
	vcdp->declBit  (c+4,"TestAxi4WriteMaster axi4Interface_fifo_fire",-1);
	// Tracing: TestAxi4WriteMaster _zz_5 // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:108
	vcdp->declBit  (c+21,"TestAxi4WriteMaster when_Axi4WriteMaster_l53",-1);
	vcdp->declBit  (c+71,"TestAxi4WriteMaster when_Axi4WriteMaster_l61",-1);
	vcdp->declBus  (c+22,"TestAxi4WriteMaster axi4Interface_address",-1,31,0);
	vcdp->declBit  (c+72,"TestAxi4WriteMaster axi4Interface_t_aw_fire",-1);
	vcdp->declBus  (c+73,"TestAxi4WriteMaster Axi4Incr_validSize",-1,1,0);
	vcdp->declBus  (c+74,"TestAxi4WriteMaster Axi4Incr_result",-1,31,0);
	vcdp->declBus  (c+23,"TestAxi4WriteMaster Axi4Incr_highCat",-1,19,0);
	vcdp->declBus  (c+75,"TestAxi4WriteMaster Axi4Incr_sizeValue",-1,2,0);
	vcdp->declBus  (c+76,"TestAxi4WriteMaster Axi4Incr_alignMask",-1,11,0);
	vcdp->declBus  (c+2,"TestAxi4WriteMaster Axi4Incr_base",-1,11,0);
	vcdp->declBus  (c+3,"TestAxi4WriteMaster Axi4Incr_baseIncr",-1,11,0);
	// Tracing: TestAxi4WriteMaster _zz_Axi4Incr_wrapCase // Ignored: Inlined leading underscore at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:120
	vcdp->declBus  (c+1,"TestAxi4WriteMaster Axi4Incr_wrapCase",-1,2,0);
	vcdp->declBus  (c+24,"TestAxi4WriteMaster axi4Interface_initialAddress",-1,31,0);
	vcdp->declBit  (c+25,"TestAxi4WriteMaster when_Axi4WriteMaster_l87",-1);
	vcdp->declBit  (c+77,"TestAxi4WriteMaster axi4Interface_t_w_fire",-1);
	vcdp->declBit  (c+26,"TestAxi4WriteMaster when_Axi4WriteMaster_l124",-1);
    }
}

void VTestAxi4WriteMaster::traceFullThis__1(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase),3);
	vcdp->fullBus  (c+2,(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base),12);
	vcdp->fullBus  (c+3,(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr),12);
	vcdp->fullBit  (c+4,(vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_fifo_fire));
	vcdp->fullBus  (c+5,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_0),32);
	vcdp->fullBus  (c+6,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_1),32);
	vcdp->fullBus  (c+7,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_2),32);
	vcdp->fullBus  (c+8,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_3),32);
	vcdp->fullBus  (c+9,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_4),32);
	vcdp->fullBus  (c+10,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_5),32);
	vcdp->fullBus  (c+11,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_6),32);
	vcdp->fullBus  (c+12,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_7),32);
	vcdp->fullBus  (c+13,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_8),32);
	vcdp->fullBus  (c+14,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_9),32);
	vcdp->fullBus  (c+15,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_10),32);
	vcdp->fullBus  (c+16,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_11),32);
	vcdp->fullBus  (c+17,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_12),32);
	vcdp->fullBus  (c+18,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_13),32);
	vcdp->fullBus  (c+19,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_14),32);
	vcdp->fullBus  (c+20,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_15),32);
	vcdp->fullBit  (c+21,((0x10U != (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2))));
	vcdp->fullBus  (c+22,(vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address),32);
	vcdp->fullBus  (c+23,((0xfffffU & (vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address 
					   >> 0xcU))),20);
	vcdp->fullBus  (c+24,(vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_initialAddress),32);
	vcdp->fullBit  (c+25,((0U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))));
	vcdp->fullBit  (c+26,(((0U < (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2)) 
			       & (0x10U != (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2)))));
	vcdp->fullBit  (c+27,(vlTOPp->fifoValid));
	vcdp->fullBit  (c+28,(vlTOPp->fifoReady));
	vcdp->fullBus  (c+29,(vlTOPp->fifoPayload),32);
	vcdp->fullBit  (c+30,(vlTOPp->awValid));
	vcdp->fullBit  (c+31,(vlTOPp->awReady));
	vcdp->fullBus  (c+32,(vlTOPp->awaddr),32);
	vcdp->fullBus  (c+33,(vlTOPp->awid),1);
	vcdp->fullBus  (c+34,(vlTOPp->awregion),4);
	vcdp->fullBus  (c+35,(vlTOPp->awlen),8);
	vcdp->fullBus  (c+36,(vlTOPp->awsize),3);
	vcdp->fullBus  (c+37,(vlTOPp->awburst),2);
	vcdp->fullBus  (c+38,(vlTOPp->awlock),1);
	vcdp->fullBus  (c+39,(vlTOPp->awcache),4);
	vcdp->fullBus  (c+40,(vlTOPp->awqos),4);
	vcdp->fullBus  (c+41,(vlTOPp->awprot),3);
	vcdp->fullBit  (c+42,(vlTOPp->wValid));
	vcdp->fullBit  (c+43,(vlTOPp->wReady));
	vcdp->fullBus  (c+44,(vlTOPp->wdata),32);
	vcdp->fullBus  (c+45,(vlTOPp->wstrb),4);
	vcdp->fullBit  (c+46,(vlTOPp->wlast));
	vcdp->fullBit  (c+47,(vlTOPp->bValid));
	vcdp->fullBit  (c+48,(vlTOPp->bReady));
	vcdp->fullBus  (c+49,(vlTOPp->bid),1);
	vcdp->fullBus  (c+50,(vlTOPp->bresp),2);
	vcdp->fullBit  (c+51,(vlTOPp->arValid));
	vcdp->fullBit  (c+52,(vlTOPp->arReady));
	vcdp->fullBus  (c+53,(vlTOPp->araddr),32);
	vcdp->fullBus  (c+54,(vlTOPp->arid),1);
	vcdp->fullBus  (c+55,(vlTOPp->arregion),4);
	vcdp->fullBus  (c+56,(vlTOPp->arlen),8);
	vcdp->fullBus  (c+57,(vlTOPp->arsize),3);
	vcdp->fullBus  (c+58,(vlTOPp->arburst),2);
	vcdp->fullBus  (c+59,(vlTOPp->arlock),1);
	vcdp->fullBus  (c+60,(vlTOPp->arcache),4);
	vcdp->fullBus  (c+61,(vlTOPp->arqos),4);
	vcdp->fullBus  (c+62,(vlTOPp->arprot),3);
	vcdp->fullBit  (c+63,(vlTOPp->rValid));
	vcdp->fullBit  (c+64,(vlTOPp->rReady));
	vcdp->fullBus  (c+65,(vlTOPp->rdata),32);
	vcdp->fullBus  (c+66,(vlTOPp->rid),1);
	vcdp->fullBus  (c+67,(vlTOPp->rresp),2);
	vcdp->fullBit  (c+68,(vlTOPp->rlast));
	vcdp->fullBit  (c+69,(vlTOPp->clk));
	vcdp->fullBit  (c+70,(vlTOPp->reset));
	vcdp->fullBit  (c+71,(((0x10U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2)) 
			       & (0U == (IData)(vlTOPp->bresp)))));
	vcdp->fullBit  (c+72,(((IData)(vlTOPp->awValid) 
			       & (IData)(vlTOPp->awReady))));
	vcdp->fullBus  (c+73,((3U & (IData)(vlTOPp->awsize))),2);
	vcdp->fullBus  (c+74,(((0U == (IData)(vlTOPp->awburst))
			        ? vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address
			        : ((2U == (IData)(vlTOPp->awburst))
				    ? ((0xfffff000U 
					& vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address) 
				       | ((4U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
					   ? ((2U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
					       ? ((0xfc0U 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						  | (0x3fU 
						     & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))
					       : ((1U 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
						   ? 
						  ((0xfc0U 
						    & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						   | (0x3fU 
						      & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))
						   : 
						  ((0xfe0U 
						    & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						   | (0x1fU 
						      & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))))
					   : ((2U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
					       ? ((1U 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
						   ? 
						  ((0xff0U 
						    & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						   | (0xfU 
						      & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))
						   : 
						  ((0xff8U 
						    & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						   | (7U 
						      & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr))))
					       : ((1U 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
						   ? 
						  ((0xffcU 
						    & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						   | (3U 
						      & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))
						   : 
						  ((0xffeU 
						    & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						   | (1U 
						      & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))))))
				    : ((0xfffff000U 
					& vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address) 
				       | (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr))))),32);
	vcdp->fullBus  (c+75,((((2U == (3U & (IData)(vlTOPp->awsize))) 
				<< 2U) | (((1U == (3U 
						   & (IData)(vlTOPp->awsize))) 
					   << 1U) | 
					  (0U == (3U 
						  & (IData)(vlTOPp->awsize)))))),3);
	vcdp->fullBus  (c+76,((((1U < (3U & (IData)(vlTOPp->awsize))) 
				<< 1U) | (0U < (3U 
						& (IData)(vlTOPp->awsize))))),12);
	vcdp->fullBit  (c+77,(((IData)(vlTOPp->wValid) 
			       & (IData)(vlTOPp->wReady))));
    }
}
