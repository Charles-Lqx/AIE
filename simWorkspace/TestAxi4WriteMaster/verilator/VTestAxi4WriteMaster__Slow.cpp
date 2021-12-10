// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestAxi4WriteMaster.h for the primary calling header

#include "VTestAxi4WriteMaster.h" // For This
#include "VTestAxi4WriteMaster__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTestAxi4WriteMaster) {
    VTestAxi4WriteMaster__Syms* __restrict vlSymsp = __VlSymsp = new VTestAxi4WriteMaster__Syms(this, name());
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTestAxi4WriteMaster::__Vconfigure(VTestAxi4WriteMaster__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTestAxi4WriteMaster::~VTestAxi4WriteMaster() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VTestAxi4WriteMaster::_initial__TOP__1(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_initial__TOP__1\n"); );
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:341
    vlTOPp->awid = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:342
    vlTOPp->awregion = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:346
    vlTOPp->awlock = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:347
    vlTOPp->awcache = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:348
    vlTOPp->awqos = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:349
    vlTOPp->awprot = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:366
    vlTOPp->wstrb = 0xfU;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:368
    vlTOPp->bReady = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:369
    vlTOPp->araddr = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:370
    vlTOPp->arid = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:371
    vlTOPp->arregion = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:372
    vlTOPp->arburst = 1U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:373
    vlTOPp->arlen = 0xfU;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:374
    vlTOPp->arsize = 4U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:375
    vlTOPp->arlock = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:376
    vlTOPp->arcache = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:377
    vlTOPp->arqos = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:378
    vlTOPp->arprot = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:379
    vlTOPp->arValid = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:380
    vlTOPp->rReady = 0U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:343
    vlTOPp->awburst = 1U;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:344
    vlTOPp->awlen = 0xfU;
    // INITIAL at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:345
    vlTOPp->awsize = 4U;
    vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase 
	= (7U & ((3U & (IData)(vlTOPp->awsize)) + (
						   (8U 
						    == 
						    (8U 
						     & (IData)(vlTOPp->awlen)))
						    ? 3U
						    : 
						   ((4U 
						     == 
						     (0xcU 
						      & (IData)(vlTOPp->awlen)))
						     ? 2U
						     : 
						    ((2U 
						      == 
						      (0xeU 
						       & (IData)(vlTOPp->awlen)))
						      ? 1U
						      : 0U)))));
}

void VTestAxi4WriteMaster::_settle__TOP__4(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_settle__TOP__4\n"); );
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestAxi4WriteMaster__DOT___zz_5 = (0xffffU 
					       & ((IData)(1U) 
						  << 
						  (0xfU 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2))));
    vlTOPp->TestAxi4WriteMaster__DOT__when_Axi4WriteMaster_l87 
	= (0U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2));
    vlTOPp->wlast = (0xfU == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:333
    vlTOPp->awaddr = ((0x10U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
		       ? vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address
		       : vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_initialAddress);
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:234
    vlTOPp->TestAxi4WriteMaster__DOT___zz_1 = 0U;
    if ((0x10U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))) {
	vlTOPp->TestAxi4WriteMaster__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:261
    vlTOPp->TestAxi4WriteMaster__DOT___zz_3 = 0U;
    if (((0x10U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2)) 
	 & (0U == (IData)(vlTOPp->bresp)))) {
	vlTOPp->TestAxi4WriteMaster__DOT___zz_3 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:283
    vlTOPp->fifoReady = 0U;
    if ((0x10U != (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2))) {
	vlTOPp->fifoReady = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:358
    vlTOPp->wValid = 0U;
    if (((0U < (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2)) 
	 & (0x10U != (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2)))) {
	vlTOPp->wValid = 1U;
    }
    vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase 
	= (7U & ((3U & (IData)(vlTOPp->awsize)) + (
						   (8U 
						    == 
						    (8U 
						     & (IData)(vlTOPp->awlen)))
						    ? 3U
						    : 
						   ((4U 
						     == 
						     (0xcU 
						      & (IData)(vlTOPp->awlen)))
						     ? 2U
						     : 
						    ((2U 
						      == 
						      (0xeU 
						       & (IData)(vlTOPp->awlen)))
						      ? 1U
						      : 0U)))));
    vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base 
	= (0xfffU & (vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address 
		     & (~ (((1U < (3U & (IData)(vlTOPp->awsize))) 
			    << 1U) | (0U < (3U & (IData)(vlTOPp->awsize)))))));
    vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_fifo_fire 
	= ((IData)(vlTOPp->fifoValid) & (IData)(vlTOPp->fifoReady));
    vlTOPp->awValid = vlTOPp->wValid;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:227
    vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata = 0U;
    if (((IData)(vlTOPp->wValid) & (IData)(vlTOPp->wReady))) {
	vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:350
    vlTOPp->wdata = 0U;
    if (vlTOPp->wValid) {
	vlTOPp->wdata = ((8U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
			  ? ((4U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
			      ? ((2U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				  ? ((1U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				      ? vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_15
				      : vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_14)
				  : ((1U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				      ? vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_13
				      : vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_12))
			      : ((2U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				  ? ((1U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				      ? vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_11
				      : vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_10)
				  : ((1U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				      ? vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_9
				      : vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_8)))
			  : ((4U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
			      ? ((2U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				  ? ((1U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				      ? vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_7
				      : vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_6)
				  : ((1U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				      ? vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_5
				      : vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_4))
			      : ((2U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				  ? ((1U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				      ? vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_3
				      : vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_2)
				  : ((1U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))
				      ? vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_1
				      : vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_0))));
    }
    vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr 
	= (0xfffU & ((IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base) 
		     + (((2U == (3U & (IData)(vlTOPp->awsize))) 
			 << 2U) | (((1U == (3U & (IData)(vlTOPp->awsize))) 
				    << 1U) | (0U == 
					      (3U & (IData)(vlTOPp->awsize)))))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:254
    vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53 = 0U;
    if (vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_fifo_fire) {
	vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:243
    vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_1 = 
	(0x1fU & (((0x10U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2)) 
		   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata))
		   ? 0U : ((IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2) 
			   + (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata))));
    if (vlTOPp->TestAxi4WriteMaster__DOT___zz_1) {
	vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:317
    vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_result 
	= ((0U == (IData)(vlTOPp->awburst)) ? vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address
	    : ((2U == (IData)(vlTOPp->awburst)) ? (
						   (0xfffff000U 
						    & vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address) 
						   | ((4U 
						       & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
						        ? 
						       ((0xfc0U 
							 & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
							| (0x3fU 
							   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))
						        : 
						       ((1U 
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
						       : 
						      ((2U 
							& (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
						        ? 
						       ((1U 
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
						        : 
						       ((1U 
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
	        : ((0xfffff000U & vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address) 
		   | (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:270
    vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_1 
	= (0x1fU & (((0x10U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2)) 
		     & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53))
		     ? 0U : ((IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2) 
			     + (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53))));
    if (vlTOPp->TestAxi4WriteMaster__DOT___zz_3) {
	vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_1 = 0U;
    }
}

void VTestAxi4WriteMaster::_eval_initial(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_eval_initial\n"); );
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VTestAxi4WriteMaster::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::final\n"); );
    // Variables
    VTestAxi4WriteMaster__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTestAxi4WriteMaster::_eval_settle(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_eval_settle\n"); );
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VTestAxi4WriteMaster::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_ctor_var_reset\n"); );
    // Body
    fifoValid = VL_RAND_RESET_I(1);
    fifoReady = VL_RAND_RESET_I(1);
    fifoPayload = VL_RAND_RESET_I(32);
    awValid = VL_RAND_RESET_I(1);
    awReady = VL_RAND_RESET_I(1);
    awaddr = VL_RAND_RESET_I(32);
    awid = VL_RAND_RESET_I(1);
    awregion = VL_RAND_RESET_I(4);
    awlen = VL_RAND_RESET_I(8);
    awsize = VL_RAND_RESET_I(3);
    awburst = VL_RAND_RESET_I(2);
    awlock = VL_RAND_RESET_I(1);
    awcache = VL_RAND_RESET_I(4);
    awqos = VL_RAND_RESET_I(4);
    awprot = VL_RAND_RESET_I(3);
    wValid = VL_RAND_RESET_I(1);
    wReady = VL_RAND_RESET_I(1);
    wdata = VL_RAND_RESET_I(32);
    wstrb = VL_RAND_RESET_I(4);
    wlast = VL_RAND_RESET_I(1);
    bValid = VL_RAND_RESET_I(1);
    bReady = VL_RAND_RESET_I(1);
    bid = VL_RAND_RESET_I(1);
    bresp = VL_RAND_RESET_I(2);
    arValid = VL_RAND_RESET_I(1);
    arReady = VL_RAND_RESET_I(1);
    araddr = VL_RAND_RESET_I(32);
    arid = VL_RAND_RESET_I(1);
    arregion = VL_RAND_RESET_I(4);
    arlen = VL_RAND_RESET_I(8);
    arsize = VL_RAND_RESET_I(3);
    arburst = VL_RAND_RESET_I(2);
    arlock = VL_RAND_RESET_I(1);
    arcache = VL_RAND_RESET_I(4);
    arqos = VL_RAND_RESET_I(4);
    arprot = VL_RAND_RESET_I(3);
    rValid = VL_RAND_RESET_I(1);
    rReady = VL_RAND_RESET_I(1);
    rdata = VL_RAND_RESET_I(32);
    rid = VL_RAND_RESET_I(1);
    rresp = VL_RAND_RESET_I(2);
    rlast = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    TestAxi4WriteMaster__DOT___zz_wdata = VL_RAND_RESET_I(1);
    TestAxi4WriteMaster__DOT___zz_1 = VL_RAND_RESET_I(1);
    TestAxi4WriteMaster__DOT___zz_wdata_1 = VL_RAND_RESET_I(5);
    TestAxi4WriteMaster__DOT___zz_wdata_2 = VL_RAND_RESET_I(5);
    TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53 = VL_RAND_RESET_I(1);
    TestAxi4WriteMaster__DOT___zz_3 = VL_RAND_RESET_I(1);
    TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_1 = VL_RAND_RESET_I(5);
    TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2 = VL_RAND_RESET_I(5);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_0 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_1 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_2 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_3 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_4 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_5 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_6 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_7 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_8 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_9 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_10 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_11 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_12 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_13 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_14 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__fifoDataBuffer_15 = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__axi4Interface_fifo_fire = VL_RAND_RESET_I(1);
    TestAxi4WriteMaster__DOT___zz_5 = VL_RAND_RESET_I(16);
    TestAxi4WriteMaster__DOT__axi4Interface_address = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__Axi4Incr_result = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__Axi4Incr_base = VL_RAND_RESET_I(12);
    TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr = VL_RAND_RESET_I(12);
    TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase = VL_RAND_RESET_I(3);
    TestAxi4WriteMaster__DOT__axi4Interface_initialAddress = VL_RAND_RESET_I(32);
    TestAxi4WriteMaster__DOT__when_Axi4WriteMaster_l87 = VL_RAND_RESET_I(1);
    __Vdly__TestAxi4WriteMaster__DOT__axi4Interface_address = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
