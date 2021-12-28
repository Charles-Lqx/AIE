// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "VPingPongBufferWithWriteOnlyMaster.h" // For This
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIG8(VPingPongBufferWithWriteOnlyMaster::__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[128],0,0);

//--------------------

VL_CTOR_IMP(VPingPongBufferWithWriteOnlyMaster) {
    VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp = __VlSymsp = new VPingPongBufferWithWriteOnlyMaster__Syms(this, name());
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPingPongBufferWithWriteOnlyMaster::__Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPingPongBufferWithWriteOnlyMaster::~VPingPongBufferWithWriteOnlyMaster() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VPingPongBufferWithWriteOnlyMaster::_settle__TOP__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_settle__TOP__1\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->full_aw_payload_region = 0U;
    vlTOPp->full_aw_payload_size = 2U;
    vlTOPp->full_aw_payload_burst = 1U;
    vlTOPp->full_aw_payload_cache = 0U;
    vlTOPp->full_aw_payload_qos = 0U;
    vlTOPp->full_aw_payload_prot = 0U;
    vlTOPp->full_w_payload_strb = 0xfU;
    vlTOPp->full_aw_payload_addr = vlTOPp->offset;
    vlTOPp->full_aw_payload_len = (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
					    - (IData)(1U)));
    vlTOPp->interruptOut = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState;
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:842
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = 0U;
    if ((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if ((2U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if ((3U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = 1U;
	    }
	}
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__realStartSignal 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal) 
	   | ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value) 
	      == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			   - (IData)(1U)))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value));
    vlTOPp->full_aw_valid = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal;
    vlTOPp->full_b_ready = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady;
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
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 
	= (1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState)));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_2) 
	    < (IData)(vlTOPp->bufferDepthIn)) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2) 
	    < (IData)(vlTOPp->bufferDepthIn)) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__realStartSignal) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__realStartSignal) 
	   & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA)));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy));
    vlTOPp->full_w_payload_last = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 
	= (1U & (((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast)) 
		  & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__m_axi_wlast_regNext)) 
		 | (~ (IData)(vlTOPp->aresetn))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:326
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wdata 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wdata 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0;
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
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full))))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:282
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready 
	    = (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)));
    }
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
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full))))));
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
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full))))));
    vlTOPp->full_w_payload_data = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wdata;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:319
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready));
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
}

void VPingPongBufferWithWriteOnlyMaster::_settle__TOP__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_settle__TOP__2\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->full_w_valid = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:226
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast = 0U;
    if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid) 
	 & (IData)(vlTOPp->full_w_ready))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1112
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready));
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:296
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:588
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willIncrement = 0U;
    if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid) 
	 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willIncrement = 1U;
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1128
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement)));
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:255
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93 = 0U;
    if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
	 & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93 = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
	   & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:595
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willClear = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willClear = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l155 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1128
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1128
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement)));
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1105
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement)));
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

void VPingPongBufferWithWriteOnlyMaster::_eval_initial(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_eval_initial\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPingPongBufferWithWriteOnlyMaster::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::final\n"); );
    // Variables
    VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPingPongBufferWithWriteOnlyMaster::_eval_settle(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_eval_settle\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VPingPongBufferWithWriteOnlyMaster::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_ctor_var_reset\n"); );
    // Body
    streamIn_valid = VL_RAND_RESET_I(1);
    streamIn_ready = VL_RAND_RESET_I(1);
    streamIn_payload = VL_RAND_RESET_I(32);
    startIn = VL_RAND_RESET_I(1);
    bufferDepthIn = VL_RAND_RESET_I(8);
    interruptOut = VL_RAND_RESET_I(1);
    full_aw_valid = VL_RAND_RESET_I(1);
    full_aw_ready = VL_RAND_RESET_I(1);
    full_aw_payload_addr = VL_RAND_RESET_I(32);
    full_aw_payload_region = VL_RAND_RESET_I(4);
    full_aw_payload_len = VL_RAND_RESET_I(8);
    full_aw_payload_size = VL_RAND_RESET_I(3);
    full_aw_payload_burst = VL_RAND_RESET_I(2);
    full_aw_payload_cache = VL_RAND_RESET_I(4);
    full_aw_payload_qos = VL_RAND_RESET_I(4);
    full_aw_payload_prot = VL_RAND_RESET_I(3);
    full_w_valid = VL_RAND_RESET_I(1);
    full_w_ready = VL_RAND_RESET_I(1);
    full_w_payload_data = VL_RAND_RESET_I(32);
    full_w_payload_strb = VL_RAND_RESET_I(4);
    full_w_payload_last = VL_RAND_RESET_I(1);
    full_b_valid = VL_RAND_RESET_I(1);
    full_b_ready = VL_RAND_RESET_I(1);
    full_b_payload_resp = VL_RAND_RESET_I(2);
    offset = VL_RAND_RESET_I(32);
    aresetn = VL_RAND_RESET_I(1);
    aclk = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_s_axis_ready = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_payload = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_s_axis_ready = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wvalid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wdata = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_m_axi_wlast = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_willClear = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_valueNext = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounter_value = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_willClear = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_valueNext = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounter_value = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isWriteBufferA = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isReadBufferA = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__inCounterWillOverflow = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outCounterWillOverflow = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__realStartSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputInterruptSignalState = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg = VL_RAND_RESET_I(2);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = VL_RAND_RESET_I(2);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l135 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l142 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l155 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l179 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_StateMachine_l235 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_transferDataType = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_1 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_1 = VL_RAND_RESET_I(9);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_m_axi_wlast_2 = VL_RAND_RESET_I(9);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__m_axi_wlast_regNext = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_5 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_1 = VL_RAND_RESET_I(9);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2 = VL_RAND_RESET_I(9);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isTransferAfterReset = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l119 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_aw_fire = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_b_fire_3 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = VL_RAND_RESET_I(7);
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[0] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[1] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[2] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[3] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[4] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[5] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[6] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[7] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[8] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[9] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[10] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[11] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[12] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[13] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[14] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[15] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[16] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[17] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[18] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[19] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[20] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[21] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[22] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[23] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[24] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[25] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[26] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[27] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[28] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[29] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[30] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[31] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[32] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[33] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[34] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[35] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[36] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[37] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[38] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[39] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[40] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[41] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[42] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[43] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[44] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[45] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[46] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[47] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[48] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[49] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[50] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[51] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[52] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[53] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[54] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[55] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[56] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[57] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[58] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[59] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[60] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[61] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[62] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[63] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[64] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[65] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[66] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[67] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[68] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[69] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[70] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[71] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[72] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[73] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[74] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[75] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[76] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[77] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[78] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[79] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[80] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[81] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[82] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[83] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[84] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[85] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[86] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[87] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[88] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[89] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[90] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[91] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[92] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[93] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[94] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[95] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[96] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[97] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[98] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[99] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[100] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[101] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[102] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[103] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[104] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[105] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[106] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[107] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[108] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[109] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[110] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[111] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[112] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[113] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[114] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[115] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[116] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[117] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[118] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[119] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[120] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[121] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[122] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[123] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[124] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[125] = 0U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[126] = 1U;
    __Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_m_axis_valid[127] = 1U;
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__isAfterResetState = VL_RAND_RESET_I(1);
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete = VL_RAND_RESET_I(1);
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__aclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__startIn = VL_RAND_RESET_I(1);
    __Vclklast__TOP__aresetn = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__outputStartSignalState = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
