// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "VPingPongBufferWithWriteOnlyMaster.h" // For This
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIGW(VPingPongBufferWithWriteOnlyMaster::__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[4],151,0,5);
VL_ST_SIGW(VPingPongBufferWithWriteOnlyMaster::__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[4],151,0,5);
VL_ST_SIG8(VPingPongBufferWithWriteOnlyMaster::__Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[128],0,0);

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
    vlTOPp->interruptOut = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputInterrupt;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:562
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = 0U;
    if ((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if ((2U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = 1U;
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:510
    vlTOPp->__Vtableidx1 = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[0U] 
	= vlTOPp->__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[1U] 
	= vlTOPp->__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[2U] 
	= vlTOPp->__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string
	[vlTOPp->__Vtableidx1][2U];
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[3U] 
	= vlTOPp->__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string
	[vlTOPp->__Vtableidx1][3U];
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[4U] 
	= vlTOPp->__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string
	[vlTOPp->__Vtableidx1][4U];
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:653
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_streamOut_payload 
	= ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
	    ? vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0
	    : ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
	        ? vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0
	        : 0U));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value));
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:227
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_1 = 0U;
    if (((IData)(vlTOPp->full_b_valid) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:256
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_5 = 0U;
    if (((IData)(vlTOPp->full_b_valid) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_controlBReady))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_5 = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_last 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last_2) 
	   == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			- (IData)(1U))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 
	= (1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal)));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last_2) 
	    < (IData)(vlTOPp->bufferDepthIn)) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2) 
	    < (IData)(vlTOPp->bufferDepthIn)) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy 
	= ((((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy) 
	     & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch)) 
	    << 7U) | (0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
			       - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy 
	= ((((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy) 
	     & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch)) 
	    << 7U) | (0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
			       - (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value))));
    vlTOPp->full_w_payload_last = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_last;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 
	= (1U & (((~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_last)) 
		  & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_w_payload_last_regNext)) 
		 | (~ (IData)(vlTOPp->aresetn))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:320
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_data 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_data 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:327
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready 
	    = vlTOPp->full_w_ready;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:283
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_streamOut_payload;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_streamOut_payload;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full))))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:276
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready 
	    = (1U & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)));
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full))))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal) 
	    | ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy) 
	       == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			    - (IData)(1U))))) & (1U 
						 == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l167 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy) 
	    == (IData)(vlTOPp->bufferDepthIn)) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full))))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal) 
	    | ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy) 
	       == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			    - (IData)(1U))))) & (1U 
						 != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l214 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy) 
	    == (IData)(vlTOPp->bufferDepthIn)) & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal));
    vlTOPp->full_w_payload_data = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_data;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:313
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_valid = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l156) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_valid 
	    = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid) 
	   & ((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
	      & ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
		 & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:689
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid 
	= ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
	   & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal) 
	      & (IData)(vlTOPp->streamIn_valid)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:290
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l93) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid 
	    = ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
	        ? (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid)
	        : ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
		   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid)));
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid) 
	   & ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
	      & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready)));
    vlTOPp->streamIn_ready = ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
			       ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal) 
				  & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))
			       : ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
				   ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) 
				      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))
				   : ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) 
				      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:528
    vlTOPp->__Vtableidx3 = ((((0xffU & ((IData)(vlTOPp->bufferDepthIn) 
					- (IData)(1U))) 
			      <= (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy)) 
			     << 6U) | ((((0xffU & ((IData)(vlTOPp->bufferDepthIn) 
						   - (IData)(1U))) 
					 <= (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy)) 
					<< 5U) | (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) 
						   << 4U) 
						  | ((((0xffU 
							& ((IData)(vlTOPp->bufferDepthIn) 
							   - (IData)(1U))) 
						       <= (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy)) 
						      << 3U) 
						     | (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal) 
							 << 2U) 
							| (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal 
	= vlTOPp->__Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal
	[vlTOPp->__Vtableidx3];
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:767
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid 
	= ((1U != (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg)) 
	   & ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))
	       ? ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) 
		  & (IData)(vlTOPp->streamIn_valid))
	       : ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) 
		  & (IData)(vlTOPp->streamIn_valid))));
    vlTOPp->full_w_valid = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_valid;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:220
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last = 0U;
    if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_valid) 
	 & (IData)(vlTOPp->full_w_ready))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1002
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1155
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid) 
	   & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l159 
	= ((((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy) 
	     == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			  - (IData)(1U)))) & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid) 
					      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full)))) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal));
}

void VPingPongBufferWithWriteOnlyMaster::_settle__TOP__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_settle__TOP__2\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:249
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93 = 0U;
    if (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
	 & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93 = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
	   & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1155
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 
	= (1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal)));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing 
	= ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid) 
	   & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l111 
	= (((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy) 
	    == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			 - (IData)(1U)))) & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid) 
					     & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full))));
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l206 
	= ((((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy) 
	     == (0xffU & ((IData)(vlTOPp->bufferDepthIn) 
			  - (IData)(1U)))) & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid) 
					      & (~ (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full)))) 
	   & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:236
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last_1 
	= (0xffU & (((0x80U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last_2)) 
		     & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last))
		     ? 0U : ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last_2) 
			     + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last))));
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_1) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1018
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1171
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext 
	= (0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1125
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1 = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1132
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:265
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_1 
	= (0xffU & (((0x80U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2)) 
		     & (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93))
		     ? 0U : ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2) 
			     + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93))));
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_5) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:972
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1 = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:979
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1171
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext 
	= (0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1125
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1 = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1132
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing) {
	vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:579
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext 
	= vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg;
    if ((1U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l159) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 2U;
	    }
	} else {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l167) {
		vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 2U;
	    }
	}
    } else {
	if ((2U == (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg))) {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) {
		if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l206) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 1U;
		}
	    } else {
		if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l214) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 1U;
		}
	    }
	} else {
	    if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal) {
		if (vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l111) {
		    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1148
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext 
	= (0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:995
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1148
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext 
	= (0x7fU & ((IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:518
    vlTOPp->__Vtableidx2 = vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext;
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[0U] 
	= vlTOPp->__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string
	[vlTOPp->__Vtableidx2][0U];
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[1U] 
	= vlTOPp->__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string
	[vlTOPp->__Vtableidx2][1U];
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[2U] 
	= vlTOPp->__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string
	[vlTOPp->__Vtableidx2][2U];
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[3U] 
	= vlTOPp->__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string
	[vlTOPp->__Vtableidx2][3U];
    vlTOPp->PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[4U] 
	= vlTOPp->__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string
	[vlTOPp->__Vtableidx2][4U];
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
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1_streamOut_payload = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_stream_ready = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_data = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater_axi4Interface_full_w_payload_last = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA_io_occupancy = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB_io_occupancy = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__lastBurstCompleteSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputInterrupt = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoASignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startFifoBSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg = VL_RAND_RESET_I(2);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = VL_RAND_RESET_I(2);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l159 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l167 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l206 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l214 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__when_PingPongBuffer_l111 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(152,PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string);
    VL_RAND_RESET_W(152,PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(7);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value = VL_RAND_RESET_I(7);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(7);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value = VL_RAND_RESET_I(7);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
	    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(7);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value = VL_RAND_RESET_I(7);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(7);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value = VL_RAND_RESET_I(7);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
	    PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_push_payload = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_transferDataType = VL_RAND_RESET_I(32);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_1 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last_1 = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_axi4Interface_full_w_payload_last_2 = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_full_w_payload_last_regNext = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__startSendSignal = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_5 = VL_RAND_RESET_I(1);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_1 = VL_RAND_RESET_I(8);
    PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l93_2 = VL_RAND_RESET_I(8);
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
    __Vtableidx1 = VL_RAND_RESET_I(2);
    VL_CONST_W_5X(152,__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[0],0x00777269,0x74654669,0x666f4120,0x20202020,0x20202020);
    VL_CONST_W_5X(152,__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[1],0x00777269,0x74654669,0x666f4252,0x65616446,0x69666f41);
    VL_CONST_W_5X(152,__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[2],0x00777269,0x74654669,0x666f4152,0x65616446,0x69666f42);
    VL_CONST_W_5X(152,__Vtable1_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg_string[3],0x003f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    __Vtableidx2 = VL_RAND_RESET_I(2);
    VL_CONST_W_5X(152,__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[0],0x00777269,0x74654669,0x666f4120,0x20202020,0x20202020);
    VL_CONST_W_5X(152,__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[1],0x00777269,0x74654669,0x666f4252,0x65616446,0x69666f41);
    VL_CONST_W_5X(152,__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[2],0x00777269,0x74654669,0x666f4152,0x65616446,0x69666f42);
    VL_CONST_W_5X(152,__Vtable2_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext_string[3],0x003f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    __Vtableidx3 = VL_RAND_RESET_I(7);
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[0] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[1] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[2] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[3] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[4] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[5] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[6] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[7] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[8] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[9] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[10] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[11] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[12] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[13] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[14] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[15] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[16] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[17] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[18] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[19] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[20] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[21] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[22] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[23] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[24] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[25] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[26] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[27] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[28] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[29] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[30] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[31] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[32] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[33] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[34] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[35] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[36] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[37] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[38] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[39] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[40] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[41] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[42] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[43] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[44] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[45] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[46] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[47] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[48] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[49] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[50] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[51] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[52] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[53] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[54] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[55] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[56] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[57] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[58] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[59] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[60] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[61] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[62] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[63] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[64] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[65] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[66] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[67] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[68] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[69] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[70] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[71] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[72] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[73] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[74] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[75] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[76] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[77] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[78] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[79] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[80] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[81] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[82] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[83] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[84] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[85] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[86] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[87] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[88] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[89] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[90] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[91] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[92] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[93] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[94] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[95] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[96] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[97] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[98] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[99] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[100] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[101] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[102] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[103] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[104] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[105] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[106] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[107] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[108] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[109] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[110] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[111] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[112] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[113] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[114] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[115] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[116] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[117] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[118] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[119] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[120] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[121] = 0U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[122] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[123] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[124] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[125] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[126] = 1U;
    __Vtable3_PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__startReceiveResetSignal[127] = 1U;
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputInterrupt = VL_RAND_RESET_I(1);
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal = VL_RAND_RESET_I(1);
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg = VL_RAND_RESET_I(2);
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value = VL_RAND_RESET_I(7);
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value = VL_RAND_RESET_I(7);
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_lastBurstComplete = VL_RAND_RESET_I(1);
    __Vdly__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__aclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__startIn = VL_RAND_RESET_I(1);
    __Vclklast__TOP__aresetn = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__pingPongBuffer_1__DOT__controlOutputStartSignal = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__DOT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
