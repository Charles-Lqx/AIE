// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "VPingPongBufferWithWriteOnlyMaster.h" // For This
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"


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

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_combo__TOP__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_combo__TOP__3\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->full_aw_payload_addr = vlTOPp->offset;
    vlTOPp->full_aw_payload_len = (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
					    - (IData)(1U)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__4\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0,7,0);
    VL_SIG8(__Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vdlyvdim0__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0,7,0);
    VL_SIG8(__Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__Vdlyvdim0__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0,7,0);
    VL_SIG8(__Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0,0,0);
    VL_SIG(__Vdlyvval__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0,31,0);
    VL_SIG(__Vdlyvval__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0,31,0);
    VL_SIG(__Vdlyvval__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0,31,0);
    // Body
    __Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0 = 0U;
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
    __Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0 = 0U;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:385
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__m_axi_wlast_regNext 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1070
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram
	[vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1070
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram
	[vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1070
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram
	[vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1076
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1) {
	__Vdlyvval__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload;
	__Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0 = 1U;
	__Vdlyvdim0__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:385
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= ((IData)(vlTOPp->full_b_valid) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady));
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete) {
	__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1076
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1) {
	__Vdlyvval__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload;
	__Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0 = 1U;
	__Vdlyvdim0__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1076
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1) {
	__Vdlyvval__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload;
	__Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0 = 1U;
	__Vdlyvdim0__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value;
    }
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1078
    if (__Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram[__Vdlyvdim0__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0] 
	    = __Vdlyvval__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1078
    if (__Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram[__Vdlyvdim0__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0] 
	    = __Vdlyvval__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram__v0;
    }
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1078
    if (__Vdlyvset__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram[__Vdlyvdim0__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0] 
	    = __Vdlyvval__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__5\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:995
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal 
	= (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__6(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__6\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete;
    vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value;
    vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState;
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__7(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__7\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA,0,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA,0,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg,1,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value,7,0);
    // Body
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA;
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg;
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA;
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value;
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:349
    if (vlTOPp->aresetn) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_2 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_1;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_1;
	if (vlTOPp->aresetn) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset = 0U;
	}
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady = 1U;
	}
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l119) {
	    vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete = 1U;
	}
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_b_fire_3) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady = 0U;
	}
	if (((IData)(vlTOPp->aresetn) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_aw_fire) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal = 0U;
	    }
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal = 1U;
		vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete = 0U;
	    }
	}
    } else {
	vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_2 = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2 = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset = 1U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1147
    if (vlTOPp->aresetn) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) 
	     != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping))) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy 
		= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing;
	}
	vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext;
    } else {
	vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:924
    if (vlTOPp->aresetn) {
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
	    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA 
		= (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA)));
	}
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
	    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA 
		= (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA)));
	}
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_valueNext;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_value 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_valueNext;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState 
	    = ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState) 
	       | (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal));
	if ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState = 0U;
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135) {
		if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
		}
	    }
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142) {
		if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
		}
	    }
	} else {
	    if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState = 0U;
		if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l155) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
		}
	    } else {
		if ((3U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
		    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA) {
			if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
			    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
			}
		    }
		    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l179) {
			if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
			    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
			}
		    }
		}
	    }
	}
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_StateMachine_l235) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState = 1U;
	    }
	}
	__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext;
	if (vlTOPp->aresetn) {
	    vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState = 0U;
	}
    } else {
	__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA = 1U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_value = 0U;
	__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA = 1U;
	vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState = 1U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState = 0U;
	__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1147
    if (vlTOPp->aresetn) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) 
	     != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping))) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy 
		= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing;
	}
	__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext;
    } else {
	__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1147
    if (vlTOPp->aresetn) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) 
	     != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping))) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy 
		= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing;
	}
	__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext;
    } else {
	__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy = 0U;
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid = 0U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete 
	= vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value 
	= vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState 
	= vlTOPp->__Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA 
	= __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg 
	= __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA 
	= __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value 
	= __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value 
	= __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value;
    vlTOPp->full_aw_valid = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal;
    vlTOPp->full_b_ready = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value));
    vlTOPp->interruptOut = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:842
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = 0U;
    if ((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if ((2U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if ((3U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = 1U;
	    }
	}
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l179 
	= (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:789
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0;
    if ((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload 
		    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0;
	    }
	    if ((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA)))) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload 
		    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0;
	    }
	} else {
	    if ((3U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
		if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload 
			= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0;
		}
		if ((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA)))) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload 
			= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0;
		}
	    }
	}
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full))))));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__8(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__8\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full))))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full))))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:763
    vlTOPp->__Vtableidx1 = ((0x40U & ((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA)) 
				      << 6U)) | (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid) 
						  << 5U) 
						 | ((0x10U 
						     & ((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA)) 
							<< 4U)) 
						    | (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid) 
							<< 3U) 
						       | (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA) 
							   << 2U) 
							  | (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid 
	= vlTOPp->__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__9(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__9\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1003
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal 
	= (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_combo__TOP__10(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_combo__TOP__10\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_aw_fire 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal) 
	   & (IData)(vlTOPp->full_aw_ready));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_b_fire_3 
	= ((IData)(vlTOPp->full_b_valid) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l119 
	= (((IData)(vlTOPp->full_b_valid) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady)) 
	   | (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:233
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_1 = 0U;
    if (((IData)(vlTOPp->full_b_valid) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:262
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_5 = 0U;
    if (((IData)(vlTOPp->full_b_valid) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_5 = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_2) 
	   == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			- (IData)(1U))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__realStartSignal 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal) 
	   | ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value) 
	      == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			   - (IData)(1U)))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 
	= (1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState)));
    vlTOPp->full_w_payload_last = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__realStartSignal) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__realStartSignal) 
	   & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:663
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload 
	= vlTOPp->streamIn_payload;
    if ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload 
		= vlTOPp->streamIn_payload;
	}
    } else {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload 
		    = vlTOPp->streamIn_payload;
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:643
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid = 0U;
    if ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid 
		= vlTOPp->streamIn_valid;
	}
    } else {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid 
		    = vlTOPp->streamIn_valid;
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:703
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload 
	= vlTOPp->streamIn_payload;
    if ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload 
		= vlTOPp->streamIn_payload;
	}
    } else {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload 
		    = vlTOPp->streamIn_payload;
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:683
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid = 0U;
    if ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid 
		= vlTOPp->streamIn_valid;
	}
    } else {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid 
		    = vlTOPp->streamIn_valid;
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:815
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready = 0U;
    if ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready 
		= (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)));
	}
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready 
		= (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)));
	}
    } else {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready 
		    = (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)));
	    }
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready 
		    = (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)));
	    }
	}
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid) 
	   & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid) 
	   & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)));
    vlTOPp->streamIn_ready = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:565
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willIncrement = 0U;
    if (((IData)(vlTOPp->streamIn_valid) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willIncrement = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value) 
	    == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			 - (IData)(1U)))) & ((IData)(vlTOPp->streamIn_valid) 
					     & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1082
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1 = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1089
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1082
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1 = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1089
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:572
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willClear = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willClear = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1105
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1105
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:581
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willIncrement)));
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willClear) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_valueNext = 0U;
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__11(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_sequent__TOP__11\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:392
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal 
	= (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster::_combo__TOP__12(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_combo__TOP__12\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 
	= (1U & (((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast)) 
		  & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__m_axi_wlast_regNext)) 
		 | (~ (IData)(vlTOPp->aresetn))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_2) 
	    < (IData)(vlTOPp->bufferDepthIn)) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2) 
	    < (IData)(vlTOPp->bufferDepthIn)) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:326
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wdata 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wdata 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:319
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:333
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready 
	    = vlTOPp->full_w_ready;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:289
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:296
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:282
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready 
	    = (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)));
    }
    vlTOPp->full_w_payload_data = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wdata;
    vlTOPp->full_w_valid = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:226
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast = 0U;
    if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid) 
	 & (IData)(vlTOPp->full_w_ready))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:255
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93 = 0U;
    if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
	 & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93 = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
	   & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:588
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willIncrement = 0U;
    if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid) 
	 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:723
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready = 0U;
    if ((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready 
		    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready;
	    }
	} else {
	    if ((3U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
		if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready 
			= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready;
		}
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:743
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready = 0U;
    if ((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if ((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA)))) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready 
		    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready;
	    }
	} else {
	    if ((3U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
		if ((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA)))) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready 
			= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready;
		}
	    }
	}
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_value) 
	    == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			 - (IData)(1U)))) & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid) 
					     & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:242
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_1 
	= (0x1ffU & (((0x100U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_2)) 
		      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast))
		      ? 0U : ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_2) 
			      + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast))));
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_1) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1112
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:271
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_1 
	= (0x1ffU & (((0x100U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2)) 
		      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93))
		      ? 0U : ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2) 
			      + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93))));
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_5) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1082
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1 = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1089
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:595
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willClear = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willClear = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l155 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1128
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1105
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1112
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1112
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:604
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willIncrement)));
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willClear) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_valueNext = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:863
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg;
    if ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 2U;
	    }
	}
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 2U;
	    }
	}
    } else {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l155) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 2U;
	    } else {
		if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 3U;
		} else {
		    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
			vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 1U;
		    }
		}
	    }
	} else {
	    if ((3U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
		if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA) {
		    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
			vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 2U;
		    }
		}
		if ((1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA)))) {
		    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
			vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 2U;
		    }
		}
	    }
	}
    }
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1128
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1128
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement)));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_StateMachine_l235 
	= ((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
	   & (1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:617
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal = 0U;
    if ((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l155) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal = 1U;
	    }
	}
    }
    if (((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
	 & (1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal = 1U;
    }
    if (((3U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
	 & (3U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext)))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 
	= (1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal)));
}

void VPingPongBufferWithWriteOnlyMaster::_eval(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_eval\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1))) 
	 | ((IData)(vlTOPp->startIn) & (~ (IData)(vlTOPp->__Vclklast__TOP__startIn))))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk))) 
	 | ((~ (IData)(vlTOPp->aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__aresetn)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete))))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4))))) {
	vlTOPp->_sequent__TOP__11(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__12(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__aclk = vlTOPp->aclk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 
	= vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1;
    vlTOPp->__Vclklast__TOP__startIn = vlTOPp->startIn;
    vlTOPp->__Vclklast__TOP__aresetn = vlTOPp->aresetn;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 
	= vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState 
	= vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 
	= vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4;
    vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1;
    vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2;
    vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
    vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState;
    vlTOPp->__VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4;
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
    __req |= ((vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1)
	 | (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2)
	 | (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState)
	 | (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4)
	 | (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete));
    VL_DEBUG_IF( if(__req && ((vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:474: PingPongBufferWithWriteOnlyMaster.pingPongBuffer_1._zz_1\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:477: PingPongBufferWithWriteOnlyMaster.pingPongBuffer_1._zz_2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:483: PingPongBufferWithWriteOnlyMaster.pingPongBuffer_1.outputStartSignalState\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:179: PingPongBufferWithWriteOnlyMaster.writeOnlyMater._zz_4\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete ^ vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete))) VL_DBG_MSGF("        CHANGE: /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:203: PingPongBufferWithWriteOnlyMaster.writeOnlyMater.axi4Interface_isBurstComplete\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1;
    vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2;
    vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState;
    vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4;
    vlTOPp->__Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
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
