// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "VPingPongBufferWithWriteOnlyMaster_PingPongBuffer.h" // For This
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIG8(VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::__Vtable1___PVT__m_axis_valid[128],0,0);

//--------------------

VL_CTOR_IMP(VPingPongBufferWithWriteOnlyMaster_PingPongBuffer) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::__Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::~VPingPongBufferWithWriteOnlyMaster_PingPongBuffer() {
}

//--------------------
// Internal Methods

void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_settle__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_settle__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__1\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.fallSignal 
	= ((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal)) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal_regNext_1));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__realStartSignal 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal) 
	   | (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal_regNext));
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
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT___zz_2 
	= (1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg)));
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
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__realStartSignal) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__realStartSignal) 
	   & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA)));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l224 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer) 
	    & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData)) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l229 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer) 
	    & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData)) 
	   & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA)));
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
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_ready));
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
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_ready));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushing 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_valid) 
	   & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full)));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushing 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_valid) 
	   & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full)));
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1195
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popping) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:631
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willIncrement = 0U;
    if (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_valid) 
	 & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willIncrement = 1U;
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value) 
	    == (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferDepthReg) 
			 - (IData)(1U)))) & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_valid) 
					     & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1195
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popping) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement = 1U;
    }
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:615
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willClear = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willClear = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1211
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:638
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willClear = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willClear = 1U;
    }
}

void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_settle__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_settle__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__2\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l164 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1211
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1188
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1188
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:624
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willIncrement)));
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willClear) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_valueNext = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:647
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willIncrement)));
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willClear) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_valueNext = 0U;
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

void VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_PingPongBuffer::_ctor_var_reset\n"); );
    // Body
    __PVT__s_axis_valid = VL_RAND_RESET_I(1);
    __PVT__s_axis_ready = VL_RAND_RESET_I(1);
    __PVT__s_axis_payload = VL_RAND_RESET_I(32);
    __PVT__startIn = VL_RAND_RESET_I(1);
    __PVT__bufferDepthIn = VL_RAND_RESET_I(8);
    __PVT__interruptOut = VL_RAND_RESET_I(1);
    __PVT__dataOffsetIn = VL_RAND_RESET_I(32);
    __PVT__m_axis_valid = VL_RAND_RESET_I(1);
    __PVT__m_axis_ready = VL_RAND_RESET_I(1);
    __PVT__m_axis_payload = VL_RAND_RESET_I(32);
    __PVT__startOut = VL_RAND_RESET_I(1);
    __PVT__bufferDepthOut = VL_RAND_RESET_I(8);
    __PVT__interruptIn = VL_RAND_RESET_I(1);
    __PVT__dataOffsetOut = VL_RAND_RESET_I(32);
    __PVT__aresetn = VL_RAND_RESET_I(1);
    __PVT__aclk = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA_io_push_valid = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA_io_push_payload = VL_RAND_RESET_I(32);
    __PVT__bufferFifoA_io_pop_ready = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB_io_push_valid = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB_io_push_payload = VL_RAND_RESET_I(32);
    __PVT__bufferFifoB_io_pop_ready = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA_io_pop_valid = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB_io_pop_valid = VL_RAND_RESET_I(1);
    __PVT__bufferDepthReg = VL_RAND_RESET_I(8);
    __PVT__inCounter_willIncrement = VL_RAND_RESET_I(1);
    __PVT__inCounter_willClear = VL_RAND_RESET_I(1);
    __PVT__inCounter_valueNext = VL_RAND_RESET_I(8);
    __PVT__inCounter_value = VL_RAND_RESET_I(8);
    __PVT__outCounter_willIncrement = VL_RAND_RESET_I(1);
    __PVT__outCounter_willClear = VL_RAND_RESET_I(1);
    __PVT__outCounter_valueNext = VL_RAND_RESET_I(8);
    __PVT__outCounter_value = VL_RAND_RESET_I(8);
    __PVT__isWriteBufferA = VL_RAND_RESET_I(1);
    __PVT__isReadBufferA = VL_RAND_RESET_I(1);
    __PVT__inCounterWillOverflow = VL_RAND_RESET_I(1);
    __PVT__outCounterWillOverflow = VL_RAND_RESET_I(1);
    __PVT__startReceiveResetSignal = VL_RAND_RESET_I(1);
    __PVT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__startReceiveSignal = VL_RAND_RESET_I(1);
    __PVT__startReceiveSignal_regNext = VL_RAND_RESET_I(1);
    __PVT__realStartSignal = VL_RAND_RESET_I(1);
    __PVT__startReceiveSignal_regNext_1 = VL_RAND_RESET_I(1);
    fallSignal = VL_RAND_RESET_I(1);
    __PVT___zz_2 = VL_RAND_RESET_I(1);
    __PVT__lastBurstCompleteSignal = VL_RAND_RESET_I(1);
    __PVT__isAfterResetState = VL_RAND_RESET_I(1);
    __PVT__pingPongBufferStateMachine_wantStart = VL_RAND_RESET_I(1);
    __PVT__outputInterruptSignalState = VL_RAND_RESET_I(1);
    __PVT__offsetA = VL_RAND_RESET_I(32);
    __PVT__offsetB = VL_RAND_RESET_I(32);
    __PVT__when_PingPongBuffer_l209 = VL_RAND_RESET_I(1);
    __PVT__canReadData = VL_RAND_RESET_I(1);
    __PVT__readyForNextTransfer = VL_RAND_RESET_I(1);
    __PVT__outputDataOffsetReg = VL_RAND_RESET_I(32);
    __PVT__outputStartSignalReg = VL_RAND_RESET_I(1);
    __PVT__when_PingPongBuffer_l224 = VL_RAND_RESET_I(1);
    __PVT__when_PingPongBuffer_l229 = VL_RAND_RESET_I(1);
    __PVT__pingPongBufferStateMachine_stateReg = VL_RAND_RESET_I(2);
    __PVT__pingPongBufferStateMachine_stateNext = VL_RAND_RESET_I(2);
    __PVT__when_PingPongBuffer_l144 = VL_RAND_RESET_I(1);
    __PVT__when_PingPongBuffer_l151 = VL_RAND_RESET_I(1);
    __PVT__when_PingPongBuffer_l164 = VL_RAND_RESET_I(1);
    __PVT__when_StateMachine_l235 = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    __PVT__bufferFifoA__DOT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    __PVT__bufferFifoA__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    __PVT__bufferFifoA__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    __PVT__bufferFifoA__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    __PVT__bufferFifoA__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA__DOT__logic_pushing = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA__DOT__logic_popping = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA__DOT__logic_full = VL_RAND_RESET_I(1);
    __PVT__bufferFifoA__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    __PVT__bufferFifoA__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__bufferFifoB__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    __PVT__bufferFifoB__DOT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    __PVT__bufferFifoB__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    __PVT__bufferFifoB__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    __PVT__bufferFifoB__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    __PVT__bufferFifoB__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB__DOT__logic_pushing = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB__DOT__logic_popping = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB__DOT__logic_full = VL_RAND_RESET_I(1);
    __PVT__bufferFifoB__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    __PVT__bufferFifoB__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = VL_RAND_RESET_I(7);
    __Vtable1___PVT__m_axis_valid[0] = 0U;
    __Vtable1___PVT__m_axis_valid[1] = 0U;
    __Vtable1___PVT__m_axis_valid[2] = 0U;
    __Vtable1___PVT__m_axis_valid[3] = 0U;
    __Vtable1___PVT__m_axis_valid[4] = 0U;
    __Vtable1___PVT__m_axis_valid[5] = 0U;
    __Vtable1___PVT__m_axis_valid[6] = 0U;
    __Vtable1___PVT__m_axis_valid[7] = 0U;
    __Vtable1___PVT__m_axis_valid[8] = 0U;
    __Vtable1___PVT__m_axis_valid[9] = 0U;
    __Vtable1___PVT__m_axis_valid[10] = 0U;
    __Vtable1___PVT__m_axis_valid[11] = 0U;
    __Vtable1___PVT__m_axis_valid[12] = 0U;
    __Vtable1___PVT__m_axis_valid[13] = 0U;
    __Vtable1___PVT__m_axis_valid[14] = 1U;
    __Vtable1___PVT__m_axis_valid[15] = 1U;
    __Vtable1___PVT__m_axis_valid[16] = 0U;
    __Vtable1___PVT__m_axis_valid[17] = 0U;
    __Vtable1___PVT__m_axis_valid[18] = 0U;
    __Vtable1___PVT__m_axis_valid[19] = 0U;
    __Vtable1___PVT__m_axis_valid[20] = 0U;
    __Vtable1___PVT__m_axis_valid[21] = 0U;
    __Vtable1___PVT__m_axis_valid[22] = 0U;
    __Vtable1___PVT__m_axis_valid[23] = 0U;
    __Vtable1___PVT__m_axis_valid[24] = 0U;
    __Vtable1___PVT__m_axis_valid[25] = 0U;
    __Vtable1___PVT__m_axis_valid[26] = 0U;
    __Vtable1___PVT__m_axis_valid[27] = 0U;
    __Vtable1___PVT__m_axis_valid[28] = 0U;
    __Vtable1___PVT__m_axis_valid[29] = 0U;
    __Vtable1___PVT__m_axis_valid[30] = 0U;
    __Vtable1___PVT__m_axis_valid[31] = 1U;
    __Vtable1___PVT__m_axis_valid[32] = 0U;
    __Vtable1___PVT__m_axis_valid[33] = 0U;
    __Vtable1___PVT__m_axis_valid[34] = 0U;
    __Vtable1___PVT__m_axis_valid[35] = 0U;
    __Vtable1___PVT__m_axis_valid[36] = 0U;
    __Vtable1___PVT__m_axis_valid[37] = 0U;
    __Vtable1___PVT__m_axis_valid[38] = 0U;
    __Vtable1___PVT__m_axis_valid[39] = 0U;
    __Vtable1___PVT__m_axis_valid[40] = 0U;
    __Vtable1___PVT__m_axis_valid[41] = 0U;
    __Vtable1___PVT__m_axis_valid[42] = 0U;
    __Vtable1___PVT__m_axis_valid[43] = 0U;
    __Vtable1___PVT__m_axis_valid[44] = 0U;
    __Vtable1___PVT__m_axis_valid[45] = 0U;
    __Vtable1___PVT__m_axis_valid[46] = 1U;
    __Vtable1___PVT__m_axis_valid[47] = 1U;
    __Vtable1___PVT__m_axis_valid[48] = 0U;
    __Vtable1___PVT__m_axis_valid[49] = 0U;
    __Vtable1___PVT__m_axis_valid[50] = 1U;
    __Vtable1___PVT__m_axis_valid[51] = 0U;
    __Vtable1___PVT__m_axis_valid[52] = 0U;
    __Vtable1___PVT__m_axis_valid[53] = 0U;
    __Vtable1___PVT__m_axis_valid[54] = 1U;
    __Vtable1___PVT__m_axis_valid[55] = 0U;
    __Vtable1___PVT__m_axis_valid[56] = 0U;
    __Vtable1___PVT__m_axis_valid[57] = 0U;
    __Vtable1___PVT__m_axis_valid[58] = 1U;
    __Vtable1___PVT__m_axis_valid[59] = 0U;
    __Vtable1___PVT__m_axis_valid[60] = 0U;
    __Vtable1___PVT__m_axis_valid[61] = 0U;
    __Vtable1___PVT__m_axis_valid[62] = 1U;
    __Vtable1___PVT__m_axis_valid[63] = 1U;
    __Vtable1___PVT__m_axis_valid[64] = 0U;
    __Vtable1___PVT__m_axis_valid[65] = 0U;
    __Vtable1___PVT__m_axis_valid[66] = 0U;
    __Vtable1___PVT__m_axis_valid[67] = 0U;
    __Vtable1___PVT__m_axis_valid[68] = 0U;
    __Vtable1___PVT__m_axis_valid[69] = 0U;
    __Vtable1___PVT__m_axis_valid[70] = 0U;
    __Vtable1___PVT__m_axis_valid[71] = 0U;
    __Vtable1___PVT__m_axis_valid[72] = 0U;
    __Vtable1___PVT__m_axis_valid[73] = 0U;
    __Vtable1___PVT__m_axis_valid[74] = 0U;
    __Vtable1___PVT__m_axis_valid[75] = 0U;
    __Vtable1___PVT__m_axis_valid[76] = 0U;
    __Vtable1___PVT__m_axis_valid[77] = 0U;
    __Vtable1___PVT__m_axis_valid[78] = 1U;
    __Vtable1___PVT__m_axis_valid[79] = 0U;
    __Vtable1___PVT__m_axis_valid[80] = 0U;
    __Vtable1___PVT__m_axis_valid[81] = 0U;
    __Vtable1___PVT__m_axis_valid[82] = 0U;
    __Vtable1___PVT__m_axis_valid[83] = 0U;
    __Vtable1___PVT__m_axis_valid[84] = 0U;
    __Vtable1___PVT__m_axis_valid[85] = 0U;
    __Vtable1___PVT__m_axis_valid[86] = 0U;
    __Vtable1___PVT__m_axis_valid[87] = 0U;
    __Vtable1___PVT__m_axis_valid[88] = 0U;
    __Vtable1___PVT__m_axis_valid[89] = 0U;
    __Vtable1___PVT__m_axis_valid[90] = 0U;
    __Vtable1___PVT__m_axis_valid[91] = 0U;
    __Vtable1___PVT__m_axis_valid[92] = 0U;
    __Vtable1___PVT__m_axis_valid[93] = 0U;
    __Vtable1___PVT__m_axis_valid[94] = 0U;
    __Vtable1___PVT__m_axis_valid[95] = 0U;
    __Vtable1___PVT__m_axis_valid[96] = 0U;
    __Vtable1___PVT__m_axis_valid[97] = 0U;
    __Vtable1___PVT__m_axis_valid[98] = 0U;
    __Vtable1___PVT__m_axis_valid[99] = 1U;
    __Vtable1___PVT__m_axis_valid[100] = 0U;
    __Vtable1___PVT__m_axis_valid[101] = 0U;
    __Vtable1___PVT__m_axis_valid[102] = 0U;
    __Vtable1___PVT__m_axis_valid[103] = 1U;
    __Vtable1___PVT__m_axis_valid[104] = 0U;
    __Vtable1___PVT__m_axis_valid[105] = 0U;
    __Vtable1___PVT__m_axis_valid[106] = 0U;
    __Vtable1___PVT__m_axis_valid[107] = 1U;
    __Vtable1___PVT__m_axis_valid[108] = 0U;
    __Vtable1___PVT__m_axis_valid[109] = 0U;
    __Vtable1___PVT__m_axis_valid[110] = 1U;
    __Vtable1___PVT__m_axis_valid[111] = 1U;
    __Vtable1___PVT__m_axis_valid[112] = 0U;
    __Vtable1___PVT__m_axis_valid[113] = 0U;
    __Vtable1___PVT__m_axis_valid[114] = 1U;
    __Vtable1___PVT__m_axis_valid[115] = 1U;
    __Vtable1___PVT__m_axis_valid[116] = 0U;
    __Vtable1___PVT__m_axis_valid[117] = 0U;
    __Vtable1___PVT__m_axis_valid[118] = 1U;
    __Vtable1___PVT__m_axis_valid[119] = 1U;
    __Vtable1___PVT__m_axis_valid[120] = 0U;
    __Vtable1___PVT__m_axis_valid[121] = 0U;
    __Vtable1___PVT__m_axis_valid[122] = 1U;
    __Vtable1___PVT__m_axis_valid[123] = 1U;
    __Vtable1___PVT__m_axis_valid[124] = 0U;
    __Vtable1___PVT__m_axis_valid[125] = 0U;
    __Vtable1___PVT__m_axis_valid[126] = 1U;
    __Vtable1___PVT__m_axis_valid[127] = 1U;
    __Vdly__isReadBufferA = VL_RAND_RESET_I(1);
    __Vdly__readyForNextTransfer = VL_RAND_RESET_I(1);
    __Vdly__isWriteBufferA = VL_RAND_RESET_I(1);
    __Vdly__outputStartSignalReg = VL_RAND_RESET_I(1);
    __Vdly__pingPongBufferStateMachine_stateReg = VL_RAND_RESET_I(2);
    __Vdly__isAfterResetState = VL_RAND_RESET_I(1);
    __Vdly__offsetA = VL_RAND_RESET_I(32);
    __Vdly__offsetB = VL_RAND_RESET_I(32);
    __Vdly__bufferFifoA__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    __Vdly__bufferFifoB__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
}
