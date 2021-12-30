// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "VPingPongBufferWithWriteOnlyMaster.h" // For This
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------


void VPingPongBufferWithWriteOnlyMaster::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPingPongBufferWithWriteOnlyMaster::eval\n"); );
    VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VPingPongBufferWithWriteOnlyMaster::_eval_initial_loop(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__3\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->full_aw_payload_addr = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startOffsetReg;
    vlTOPp->full_aw_valid = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal;
    vlTOPp->full_b_ready = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady;
    vlTOPp->full_aw_payload_len = (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg) 
					    - (IData)(1U)));
    vlTOPp->full_w_payload_last = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast;
    vlTOPp->interruptOut = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState;
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_multiclk__TOP__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_multiclk__TOP__4\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->full_w_payload_data = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wdata;
    vlTOPp->full_w_valid = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid;
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_multiclk__TOP__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_multiclk__TOP__5\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->streamIn_ready = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready;
}

void VPingPongBufferWithWriteOnlyMaster::_eval(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_eval\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster._sequent__TOP__PingPongBufferWithWriteOnlyMaster__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk))) 
	 | ((~ (IData)(vlTOPp->aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__aresetn)))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster._sequent__TOP__PingPongBufferWithWriteOnlyMaster__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__4(vlSymsp);
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__5(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1))) 
	 | ((IData)(vlTOPp->startIn) & (~ (IData)(vlTOPp->__Vclklast__TOP__startIn))))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_2) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_2))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete))))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster._combo__TOP__PingPongBufferWithWriteOnlyMaster__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._combo__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__8(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4))))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster._sequent__TOP__PingPongBufferWithWriteOnlyMaster__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1) 
	   & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1))) 
	  | ((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) 
	 | ((IData)(vlTOPp->startIn) & (~ (IData)(vlTOPp->__Vclklast__TOP__startIn))))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__9(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster._combo__TOP__PingPongBufferWithWriteOnlyMaster__7(vlSymsp);
    if ((((((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg))) 
	   | ((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4)))) 
	  | ((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) 
	 | ((~ (IData)(vlTOPp->aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__aresetn)))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster._multiclk__TOP__PingPongBufferWithWriteOnlyMaster__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x100U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_multiclk__TOP__4(vlSymsp);
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__10(vlSymsp);
    }
    if ((((((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1))) 
	   | ((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) 
	  | ((~ (IData)(vlTOPp->aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__aresetn))) 
	 | ((IData)(vlTOPp->startIn) & (~ (IData)(vlTOPp->__Vclklast__TOP__startIn))))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__11(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x200U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_multiclk__TOP__5(vlSymsp);
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster._combo__TOP__PingPongBufferWithWriteOnlyMaster__9(vlSymsp);
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._combo__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__12(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__aclk = vlTOPp->aclk;
    vlTOPp->__Vclklast__TOP__aresetn = vlTOPp->aresetn;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1 
	= vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1;
    vlTOPp->__Vclklast__TOP__startIn = vlTOPp->startIn;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_2 
	= vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_2;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg 
	= vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4 
	= vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4;
    vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_1;
    vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_2 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_2;
    vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
    vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg;
    vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_4;
}

VL_INLINE_OPT QData VPingPongBufferWithWriteOnlyMaster::_change_request(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_change_request\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPingPongBufferWithWriteOnlyMaster::_change_request_1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_change_request_1\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_4 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__DOT___zz_4)
	 | (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__DOT__axi4Interface_isBurstComplete)
	 | (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_1 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1___zz_1)
	 | (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_2 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1___zz_2)
	 | (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__outputStartSignalReg));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_4 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__DOT___zz_4))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:182: writeOnlyMater._zz_4\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__DOT__axi4Interface_isBurstComplete))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:212: writeOnlyMater.axi4Interface_isBurstComplete\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_1 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1___zz_1))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:508: _zz_1\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_2 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1___zz_2))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:514: _zz_2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__outputStartSignalReg))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:528: outputStartSignalReg\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__DOT___zz_4 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_4;
    vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
    vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1___zz_1 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_1;
    vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1___zz_2 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_2;
    vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__outputStartSignalReg 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg;
    return __req;
}

#ifdef VL_DEBUG
void VPingPongBufferWithWriteOnlyMaster::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((streamIn_valid & 0xfeU))) {
	Verilated::overWidthError("streamIn_valid");}
    if (VL_UNLIKELY((startIn & 0xfeU))) {
	Verilated::overWidthError("startIn");}
    if (VL_UNLIKELY((full_aw_ready & 0xfeU))) {
	Verilated::overWidthError("full_aw_ready");}
    if (VL_UNLIKELY((full_w_ready & 0xfeU))) {
	Verilated::overWidthError("full_w_ready");}
    if (VL_UNLIKELY((full_b_valid & 0xfeU))) {
	Verilated::overWidthError("full_b_valid");}
    if (VL_UNLIKELY((full_b_payload_resp & 0xfcU))) {
	Verilated::overWidthError("full_b_payload_resp");}
    if (VL_UNLIKELY((aresetn & 0xfeU))) {
	Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((aclk & 0xfeU))) {
	Verilated::overWidthError("aclk");}
}
#endif // VL_DEBUG
