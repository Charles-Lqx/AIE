// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h" // For This
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"


//--------------------


void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStream2Axi4WriteOnlyMasterInterfaceAddFifo::eval\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_initial_loop(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_combo__TOP__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_combo__TOP__2\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_axi_awaddr = vlTOPp->offset;
    vlTOPp->m_axi_awlen = (0xffU & ((IData)(vlTOPp->burstLen) 
				    - (IData)(1U)));
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__3(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__3\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__Vdlyvdim0__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram__v0,7,0);
    VL_SIG8(__Vdlyvset__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vdlyvdim0__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram__v0,7,0);
    VL_SIG8(__Vdlyvset__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram__v0,0,0);
    VL_SIG(__Vdlyvval__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram__v0,31,0);
    VL_SIG(__Vdlyvval__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram__v0,31,0);
    // Body
    __Vdlyvset__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram__v0 = 0U;
    __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:450
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_logic_ram_port0 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram
	[vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:381
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__m_axi_wlast_regNext 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:450
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_logic_ram_port0 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram
	[vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:456
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_1) {
	__Vdlyvval__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram__v0 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_payload;
	__Vdlyvset__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram__v0 = 1U;
	__Vdlyvdim0__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram__v0 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:456
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_1) {
	__Vdlyvval__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram__v0 
	    = vlTOPp->s_axis_payload;
	__Vdlyvset__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram__v0 = 1U;
	__Vdlyvdim0__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram__v0 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:381
    __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete 
	= ((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady));
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete) {
	__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete = 0U;
    }
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:458
    if (__Vdlyvset__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram__v0) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram[__Vdlyvdim0__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram__v0] 
	    = __Vdlyvval__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram__v0;
    }
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:458
    if (__Vdlyvset__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram__v0) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram[__Vdlyvdim0__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram__v0] 
	    = __Vdlyvval__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram__v0;
    }
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete 
	= __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete;
    vlTOPp->transInterrupt = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete;
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__5\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete,0,0);
    VL_SIG8(__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value,7,0);
    // Body
    __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete;
    __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value;
    __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:345
    if (vlTOPp->aresetn) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_1;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_2 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_1;
	if (vlTOPp->aresetn) {
	    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isTransferAfterReset = 0U;
	}
	if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid) {
	    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady = 1U;
	}
	if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l115) {
	    __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete = 1U;
	}
	if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_full_b_fire_3) {
	    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady = 0U;
	}
	if (((IData)(vlTOPp->aresetn) & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal))) {
	    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_full_aw_fire) {
		vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal = 0U;
	    }
	    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete) {
		vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal = 1U;
		__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete = 0U;
	    }
	}
    } else {
	__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete = 0U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2 = 0U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_2 = 0U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isTransferAfterReset = 1U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal = 0U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:527
    if (vlTOPp->aresetn) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_valueNext;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing) 
	     != (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping))) {
	    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy 
		= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing;
	}
	__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_valueNext;
    } else {
	__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value = 0U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value = 0U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy = 0U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_io_pop_valid = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:527
    if (vlTOPp->aresetn) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_valueNext;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing) 
	     != (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping))) {
	    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy 
		= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing;
	}
	__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_valueNext;
    } else {
	__Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value = 0U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value = 0U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy = 0U;
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_io_pop_valid = 0U;
    }
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete 
	= __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete;
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value 
	= __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value;
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value 
	= __Vdly__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value;
    vlTOPp->m_axi_awvalid = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal;
    vlTOPp->m_axi_bready = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady;
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full))))));
    vlTOPp->s_axis_ready = (1U & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full)));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full))))));
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__6(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__6\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:388
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal 
	= (1U & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4)));
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_combo__TOP__7(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_combo__TOP__7\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_full_aw_fire 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal) 
	   & (IData)(vlTOPp->m_axi_awready));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_full_b_fire_3 
	= ((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l115 
	= (((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady)) 
	   | (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isTransferAfterReset));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:229
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_1 = 0U;
    if (((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady))) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:258
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_5 = 0U;
    if (((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady))) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_5 = 1U;
    }
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2) 
	   == (0xffU & ((IData)(vlTOPp->burstLen) - (IData)(1U))));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing 
	= ((IData)(vlTOPp->s_axis_valid) & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full)));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l152 
	= (((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2) 
	    < (IData)(vlTOPp->burstLen)) & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l89 
	= (((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_2) 
	    < (IData)(vlTOPp->burstLen)) & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal));
    vlTOPp->m_axi_wlast = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast;
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 
	= (1U & (((~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast)) 
		  & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__m_axi_wlast_regNext)) 
		 | (~ (IData)(vlTOPp->aresetn))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:462
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_1 = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:469
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:322
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wdata 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_logic_ram_port0;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l152) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wdata 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_logic_ram_port0;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:315
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l152) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:329
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_ready = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l152) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_ready 
	    = vlTOPp->m_axi_wready;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:285
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_payload 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_logic_ram_port0;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l89) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_payload 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_logic_ram_port0;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:278
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_s_axis_ready = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l89) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_s_axis_ready 
	    = (1U & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full)));
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:292
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l89) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance_io_pop_valid;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:485
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->m_axi_wdata = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wdata;
    vlTOPp->m_axi_wvalid = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:222
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast = 0U;
    if (((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid) 
	 & (IData)(vlTOPp->m_axi_wready))) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast = 1U;
    }
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid) 
	   & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_ready));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance_io_pop_valid) 
	   & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_s_axis_ready));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:251
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89 = 0U;
    if (((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid) 
	 & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full)))) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89 = 1U;
    }
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid) 
	   & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:238
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_1 
	= (0x1ffU & (((0x100U == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2)) 
		      & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast))
		      ? 0U : ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2) 
			      + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast))));
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_1) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:492
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:492
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:267
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_1 
	= (0x1ffU & (((0x100U == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_2)) 
		      & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89))
		      ? 0U : ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_2) 
			      + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89))));
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_5) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:462
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_1 = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:469
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:508
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:508
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:485
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement)));
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk))) 
	 | ((~ (IData)(vlTOPp->aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__aresetn)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4))) 
	 | ((IData)(vlTOPp->start) & (~ (IData)(vlTOPp->__Vclklast__TOP__start))))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__aclk = vlTOPp->aclk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 
	= vlTOPp->__VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4;
    vlTOPp->__Vclklast__TOP__start = vlTOPp->start;
    vlTOPp->__Vclklast__TOP__aresetn = vlTOPp->aresetn;
    vlTOPp->__VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4;
}

VL_INLINE_OPT QData VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_change_request(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_change_request\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_change_request_1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_change_request_1\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 ^ vlTOPp->__Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4));
    VL_DEBUG_IF( if(__req && ((vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 ^ vlTOPp->__Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:175: Stream2Axi4WriteOnlyMasterInterfaceAddFifo.axi4Interconnection._zz_4\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4;
    return __req;
}

#ifdef VL_DEBUG
void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((s_axis_valid & 0xfeU))) {
	Verilated::overWidthError("s_axis_valid");}
    if (VL_UNLIKELY((m_axi_awready & 0xfeU))) {
	Verilated::overWidthError("m_axi_awready");}
    if (VL_UNLIKELY((m_axi_wready & 0xfeU))) {
	Verilated::overWidthError("m_axi_wready");}
    if (VL_UNLIKELY((m_axi_bvalid & 0xfeU))) {
	Verilated::overWidthError("m_axi_bvalid");}
    if (VL_UNLIKELY((m_axi_bresp & 0xfcU))) {
	Verilated::overWidthError("m_axi_bresp");}
    if (VL_UNLIKELY((aresetn & 0xfeU))) {
	Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((start & 0xfeU))) {
	Verilated::overWidthError("start");}
    if (VL_UNLIKELY((aclk & 0xfeU))) {
	Verilated::overWidthError("aclk");}
}
#endif // VL_DEBUG
