// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "VPingPongBufferWithWriteOnlyMaster_PingPongBuffer.h" // For This
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__3\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__bufferFifoA__DOT__logic_ram__v0,7,0);
    VL_SIG8(__Vdlyvset__bufferFifoA__DOT__logic_ram__v0,0,0);
    VL_SIG8(__Vdlyvdim0__bufferFifoB__DOT__logic_ram__v0,7,0);
    VL_SIG8(__Vdlyvset__bufferFifoB__DOT__logic_ram__v0,0,0);
    VL_SIG(__Vdlyvval__bufferFifoA__DOT__logic_ram__v0,31,0);
    VL_SIG(__Vdlyvval__bufferFifoB__DOT__logic_ram__v0,31,0);
    // Body
    __Vdlyvset__bufferFifoA__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__bufferFifoB__DOT__logic_ram__v0 = 0U;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1153
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_logic_ram_port0 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ram
	[vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1153
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_logic_ram_port0 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ram
	[vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1159
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_1) {
	__Vdlyvval__bufferFifoA__DOT__logic_ram__v0 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_payload;
	__Vdlyvset__bufferFifoA__DOT__logic_ram__v0 = 1U;
	__Vdlyvdim0__bufferFifoA__DOT__logic_ram__v0 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1159
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_1) {
	__Vdlyvval__bufferFifoB__DOT__logic_ram__v0 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_payload;
	__Vdlyvset__bufferFifoB__DOT__logic_ram__v0 = 1U;
	__Vdlyvdim0__bufferFifoB__DOT__logic_ram__v0 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1082
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal_regNext_1 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1082
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal_regNext 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal;
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1161
    if (__Vdlyvset__bufferFifoA__DOT__logic_ram__v0) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ram[__Vdlyvdim0__bufferFifoA__DOT__logic_ram__v0] 
	    = __Vdlyvval__bufferFifoA__DOT__logic_ram__v0;
    }
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1161
    if (__Vdlyvset__bufferFifoB__DOT__logic_ram__v0) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ram[__Vdlyvdim0__bufferFifoB__DOT__logic_ram__v0] 
	    = __Vdlyvval__bufferFifoB__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__4\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isAfterResetState 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isAfterResetState;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__offsetA 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__offsetA;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__offsetB 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__offsetB;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__readyForNextTransfer 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isReadBufferA 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__pingPongBufferStateMachine_stateReg 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isWriteBufferA 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__outputStartSignalReg 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__bufferFifoA__DOT__logic_pushPtr_value 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__bufferFifoB__DOT__logic_pushPtr_value 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:974
    if (vlTOPp->aresetn) {
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isReadBufferA 
		= (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA)));
	}
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferDepthReg 
	    = vlTOPp->bufferDepthIn;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_valueNext;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_valueNext;
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isAfterResetState) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__readyForNextTransfer = 1U;
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isWriteBufferA 
		= (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA)));
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__lastBurstCompleteSignal) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__readyForNextTransfer = 1U;
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l224) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__outputStartSignalReg 
		= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer;
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputDataOffsetReg 
		= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__offsetA;
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__readyForNextTransfer = 0U;
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l229) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__outputStartSignalReg 
		= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer;
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputDataOffsetReg 
		= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__offsetB;
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__readyForNextTransfer = 0U;
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__outputStartSignalReg = 0U;
	}
	if ((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState = 0U;
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144) {
		if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow) {
		    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState = 1U;
		}
	    }
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151) {
		if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow) {
		    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState = 1U;
		}
	    }
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState = 0U;
		if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l164) {
		    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState = 1U;
		}
	    } else {
		if ((3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
		    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA) {
			if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow) {
			    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState = 1U;
			}
		    }
		    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l209) {
			if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow) {
			    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState = 1U;
			}
		    }
		}
	    }
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_StateMachine_l235) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isAfterResetState) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState = 1U;
	    }
	}
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__pingPongBufferStateMachine_stateReg 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext;
	if (vlTOPp->aresetn) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isAfterResetState = 0U;
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__realStartSignal) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__offsetA 
		    = vlTOPp->dataOffsetIn;
	    }
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l209) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__offsetB 
		    = vlTOPp->dataOffsetIn;
	    }
	}
    } else {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__outputStartSignalReg = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferDepthReg = 0xffU;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isWriteBufferA = 1U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isReadBufferA = 1U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isAfterResetState = 1U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__offsetA = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__offsetB = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__readyForNextTransfer = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputDataOffsetReg = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__pingPongBufferStateMachine_stateReg = 0U;
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__5\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1230
    if (vlTOPp->aresetn) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_valueNext;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_io_pop_valid 
	    = ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value));
	if (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushing) 
	     != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popping))) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy 
		= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushing;
	}
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__bufferFifoA__DOT__logic_pushPtr_value 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_valueNext;
    } else {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__bufferFifoA__DOT__logic_pushPtr_value = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_io_pop_valid = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1230
    if (vlTOPp->aresetn) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_valueNext;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_io_pop_valid 
	    = ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value));
	if (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushing) 
	     != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popping))) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy 
		= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushing;
	}
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__bufferFifoB__DOT__logic_pushPtr_value 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_valueNext;
    } else {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__bufferFifoB__DOT__logic_pushPtr_value = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_io_pop_valid = 0U;
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isAfterResetState 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isAfterResetState;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__offsetA 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__offsetA;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__offsetB 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__offsetB;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__readyForNextTransfer;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isReadBufferA;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__pingPongBufferStateMachine_stateReg;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__isWriteBufferA;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__outputStartSignalReg;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__bufferFifoA__DOT__logic_pushPtr_value;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vdly__bufferFifoB__DOT__logic_pushPtr_value;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData 
	= ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)) 
	   | (3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:886
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_wantStart = 0U;
    if ((1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if ((2U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if ((3U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_wantStart = 1U;
	    }
	}
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l209 
	= (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:833
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_payload 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_logic_ram_port0;
    if ((1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_payload 
		    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_logic_ram_port0;
	    }
	    if ((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA)))) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_payload 
		    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_logic_ram_port0;
	    }
	} else {
	    if ((3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
		if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA) {
		    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_payload 
			= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_logic_ram_port0;
		}
		if ((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA)))) {
		    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_payload 
			= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_logic_ram_port0;
		}
	    }
	}
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l224 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer) 
	    & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData)) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l229 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer) 
	    & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData)) 
	   & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA)));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full))))));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full))))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:807
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vtableidx1 
	= ((0x40U & ((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA)) 
		     << 6U)) | (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_valid) 
				 << 5U) | ((0x10U & 
					    ((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA)) 
					     << 4U)) 
					   | (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_valid) 
					       << 3U) 
					      | (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA) 
						  << 2U) 
						 | (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))))));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_valid 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vtable1___PVT__m_axis_valid
	[vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vtableidx1];
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__6(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__6\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1073
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal 
	= (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_1)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__7(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__7\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1086
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__lastBurstCompleteSignal 
	= (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_2)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_combo__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__8(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_combo__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__8\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_2 
	= (1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__9(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__9\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.fallSignal 
	= ((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal)) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal_regNext_1));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__realStartSignal 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal) 
	   | (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal_regNext));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__10(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__10\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:631
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willIncrement = 0U;
    if (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_valid) 
	 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:767
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_ready = 0U;
    if ((1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_ready 
		    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready;
	    }
	} else {
	    if ((3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
		if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA) {
		    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_ready 
			= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready;
		}
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:787
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_ready = 0U;
    if ((1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA)))) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_ready 
		    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready;
	    }
	} else {
	    if ((3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA)))) {
		    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_ready 
			= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready;
		}
	    }
	}
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value) 
	    == (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferDepthReg) 
			 - (IData)(1U)))) & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_valid) 
					     & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready)));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_ready));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_ready));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:638
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willClear = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willClear = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1195
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popping) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1195
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popping) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:647
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willIncrement)));
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willClear) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_valueNext = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1211
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1211
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__11(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__11\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__realStartSignal) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__realStartSignal) 
	   & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:859
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready = 0U;
    if ((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready 
		= (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full)));
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready 
		= (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full)));
	}
    } else {
	if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready 
		    = (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full)));
	    }
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready 
		    = (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full)));
	    }
	}
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_combo__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__12(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_combo__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__12\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:707
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_payload 
	= vlTOPp->streamIn_payload;
    if ((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_payload 
		= vlTOPp->streamIn_payload;
	}
    } else {
	if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_payload 
		    = vlTOPp->streamIn_payload;
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:687
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_valid = 0U;
    if ((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_valid 
		= vlTOPp->streamIn_valid;
	}
    } else {
	if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_valid 
		    = vlTOPp->streamIn_valid;
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:747
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_payload 
	= vlTOPp->streamIn_payload;
    if ((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_payload 
		= vlTOPp->streamIn_payload;
	}
    } else {
	if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_payload 
		    = vlTOPp->streamIn_payload;
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:727
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_valid = 0U;
    if ((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_valid 
		= vlTOPp->streamIn_valid;
	}
    } else {
	if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_valid 
		    = vlTOPp->streamIn_valid;
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:608
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willIncrement = 0U;
    if (((IData)(vlTOPp->streamIn_valid) & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willIncrement = 1U;
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value) 
	    == (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferDepthReg) 
			 - (IData)(1U)))) & ((IData)(vlTOPp->streamIn_valid) 
					     & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready)));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushing 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_valid) 
	   & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full)));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushing 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_valid) 
	   & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:615
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willClear = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willClear = 1U;
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l164 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1165
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushing) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1172
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushing) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1165
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushing) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1172
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushing) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:624
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willIncrement)));
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willClear) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_valueNext = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:912
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg;
    if ((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext = 2U;
	    }
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext = 2U;
	    }
	}
    } else {
	if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l164) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext = 2U;
	    } else {
		if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow) {
		    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext = 3U;
		} else {
		    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow) {
			vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext = 1U;
		    }
		}
	    }
	} else {
	    if ((3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
		if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA) {
		    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow) {
			vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext = 2U;
		    }
		}
		if ((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA)))) {
		    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow) {
			vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext = 2U;
		    }
		}
	    }
	}
    }
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_wantStart) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1188
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1188
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_willIncrement)));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_StateMachine_l235 
	= ((1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)) 
	   & (1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:660
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveResetSignal = 0U;
    if ((1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	if ((2U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l164) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveResetSignal = 1U;
	    }
	}
    }
    if (((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)) 
	 & (1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext)))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveResetSignal = 1U;
    }
    if (((3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)) 
	 & (3U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext)))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveResetSignal = 1U;
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_1 
	= (1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveResetSignal)));
}
