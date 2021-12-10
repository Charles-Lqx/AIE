// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestAxi4WriteMaster.h for the primary calling header

#include "VTestAxi4WriteMaster.h" // For This
#include "VTestAxi4WriteMaster__Syms.h"


//--------------------


void VTestAxi4WriteMaster::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestAxi4WriteMaster::eval\n"); );
    VTestAxi4WriteMaster__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VTestAxi4WriteMaster::_eval_initial_loop(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestAxi4WriteMaster::_sequent__TOP__2(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_sequent__TOP__2\n"); );
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestAxi4WriteMaster__DOT__axi4Interface_address 
	= vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:381
    if (vlTOPp->reset) {
	vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_0 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_1 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_2 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_3 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_4 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_5 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_6 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_7 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_8 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_9 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_10 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_11 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_12 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_13 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_14 = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_15 = 0U;
	vlTOPp->__Vdly__TestAxi4WriteMaster__DOT__axi4Interface_address = 0U;
	vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_initialAddress = 0U;
    } else {
	vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2 
	    = vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_1;
	vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2 
	    = vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_1;
	if (vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_fifo_fire) {
	    if ((1U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_0 
		    = vlTOPp->fifoPayload;
	    }
	    if ((2U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_1 
		    = vlTOPp->fifoPayload;
	    }
	    if ((4U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_2 
		    = vlTOPp->fifoPayload;
	    }
	    if ((8U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_3 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x10U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_4 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x20U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_5 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x40U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_6 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x80U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_7 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x100U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_8 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x200U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_9 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x400U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_10 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x800U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_11 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x1000U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_12 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x2000U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_13 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x4000U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_14 
		    = vlTOPp->fifoPayload;
	    }
	    if ((0x8000U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_5))) {
		vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_15 
		    = vlTOPp->fifoPayload;
	    }
	}
	if (vlTOPp->TestAxi4WriteMaster__DOT__when_Axi4WriteMaster_l87) {
	    vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_initialAddress 
		= vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address;
	}
	if (((IData)(vlTOPp->awValid) & (IData)(vlTOPp->awReady))) {
	    vlTOPp->__Vdly__TestAxi4WriteMaster__DOT__axi4Interface_address 
		= vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_result;
	}
    }
}

VL_INLINE_OPT void VTestAxi4WriteMaster::_sequent__TOP__3(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_sequent__TOP__3\n"); );
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address 
	= vlTOPp->__Vdly__TestAxi4WriteMaster__DOT__axi4Interface_address;
    vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base 
	= (0xfffU & (vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address 
		     & (~ (((1U < (3U & (IData)(vlTOPp->awsize))) 
			    << 1U) | (0U < (3U & (IData)(vlTOPp->awsize)))))));
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
    vlTOPp->TestAxi4WriteMaster__DOT___zz_5 = (0xffffU 
					       & ((IData)(1U) 
						  << 
						  (0xfU 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2))));
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
    vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr 
	= (0xfffU & ((IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base) 
		     + (((2U == (3U & (IData)(vlTOPp->awsize))) 
			 << 2U) | (((1U == (3U & (IData)(vlTOPp->awsize))) 
				    << 1U) | (0U == 
					      (3U & (IData)(vlTOPp->awsize)))))));
    vlTOPp->awValid = vlTOPp->wValid;
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
}

VL_INLINE_OPT void VTestAxi4WriteMaster::_combo__TOP__5(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_combo__TOP__5\n"); );
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:261
    vlTOPp->TestAxi4WriteMaster__DOT___zz_3 = 0U;
    if (((0x10U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2)) 
	 & (0U == (IData)(vlTOPp->bresp)))) {
	vlTOPp->TestAxi4WriteMaster__DOT___zz_3 = 1U;
    }
    vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_fifo_fire 
	= ((IData)(vlTOPp->fifoValid) & (IData)(vlTOPp->fifoReady));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestAxi4WriteMaster.v:227
    vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata = 0U;
    if (((IData)(vlTOPp->wValid) & (IData)(vlTOPp->wReady))) {
	vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata = 1U;
    }
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

void VTestAxi4WriteMaster::_eval(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_eval\n"); );
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VTestAxi4WriteMaster::_change_request(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_change_request\n"); );
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTestAxi4WriteMaster::_change_request_1(VTestAxi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_change_request_1\n"); );
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTestAxi4WriteMaster::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAxi4WriteMaster::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((fifoValid & 0xfeU))) {
	Verilated::overWidthError("fifoValid");}
    if (VL_UNLIKELY((awReady & 0xfeU))) {
	Verilated::overWidthError("awReady");}
    if (VL_UNLIKELY((wReady & 0xfeU))) {
	Verilated::overWidthError("wReady");}
    if (VL_UNLIKELY((bValid & 0xfeU))) {
	Verilated::overWidthError("bValid");}
    if (VL_UNLIKELY((bid & 0xfeU))) {
	Verilated::overWidthError("bid");}
    if (VL_UNLIKELY((bresp & 0xfcU))) {
	Verilated::overWidthError("bresp");}
    if (VL_UNLIKELY((arReady & 0xfeU))) {
	Verilated::overWidthError("arReady");}
    if (VL_UNLIKELY((rValid & 0xfeU))) {
	Verilated::overWidthError("rValid");}
    if (VL_UNLIKELY((rid & 0xfeU))) {
	Verilated::overWidthError("rid");}
    if (VL_UNLIKELY((rresp & 0xfcU))) {
	Verilated::overWidthError("rresp");}
    if (VL_UNLIKELY((rlast & 0xfeU))) {
	Verilated::overWidthError("rlast");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG
