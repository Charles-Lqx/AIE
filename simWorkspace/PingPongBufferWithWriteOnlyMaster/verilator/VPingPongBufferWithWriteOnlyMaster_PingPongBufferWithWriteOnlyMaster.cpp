// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster.h" // For This
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__3\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__writeOnlyMater__DOT__axi4Interface_isBurstComplete,0,0);
    VL_SIG8(__Vdlyvdim0__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0,7,0);
    VL_SIG8(__Vdlyvset__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0,0,0);
    VL_SIG(__Vdlyvval__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0,31,0);
    // Body
    __Vdlyvset__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0 = 0U;
    __Vdly__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:403
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__m_axi_wlast_regNext 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:428
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rData 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1159
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1) {
	__Vdlyvval__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_payload;
	__Vdlyvset__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0 = 1U;
	__Vdlyvdim0__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:403
    __Vdly__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= ((IData)(vlTOPp->full_b_valid) & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady));
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete) {
	__Vdly__writeOnlyMater__DOT__axi4Interface_isBurstComplete = 0U;
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete 
	= __Vdly__writeOnlyMater__DOT__axi4Interface_isBurstComplete;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1153
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram
	[vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext];
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1161
    if (__Vdlyvset__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram[__Vdlyvdim0__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0] 
	    = __Vdlyvval__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__4\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__writeOnlyMater__DOT__axi4Interface_newBurst,0,0);
    VL_SIG8(__Vdly__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value,7,0);
    // Body
    __Vdly__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value;
    __Vdly__writeOnlyMater__DOT__axi4Interface_newBurst 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_newBurst;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:418
    if (vlTOPp->aresetn) {
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid 
		= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid;
	}
    } else {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1230
    if (vlTOPp->aresetn) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid 
	    = ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value));
	if (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) 
	     != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping))) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy 
		= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing;
	}
	__Vdly__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext;
    } else {
	__Vdly__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:364
    if (vlTOPp->aresetn) {
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_full_b_fire_1) {
	    __Vdly__writeOnlyMater__DOT__axi4Interface_newBurst = 1U;
	}
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_2 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_1;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_1;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferDepthReg;
	if (((IData)(vlTOPp->aresetn) & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal))) {
	    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_full_aw_fire) {
		vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal = 0U;
		__Vdly__writeOnlyMater__DOT__axi4Interface_newBurst = 0U;
	    } else {
		if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_newBurst) {
		    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal = 1U;
		}
	    }
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startOffsetReg 
		= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputDataOffsetReg;
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady = 1U;
	}
	if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_full_b_fire_1) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady = 0U;
	}
    } else {
	__Vdly__writeOnlyMater__DOT__axi4Interface_newBurst = 1U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_2 = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2 = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg = 0xffU;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startOffsetReg = 0U;
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady = 0U;
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value 
	= __Vdly__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_newBurst 
	= __Vdly__writeOnlyMater__DOT__axi4Interface_newBurst;
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_2) 
	   == (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg) 
			- (IData)(1U))));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full))))));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_combo__TOP__PingPongBufferWithWriteOnlyMaster__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_combo__TOP__PingPongBufferWithWriteOnlyMaster__5\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_full_aw_fire 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal) 
	   & (IData)(vlTOPp->full_aw_ready));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_full_b_fire_1 
	= ((IData)(vlTOPp->full_b_valid) & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:242
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_1 = 0U;
    if (((IData)(vlTOPp->full_b_valid) & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:271
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_5 = 0U;
    if (((IData)(vlTOPp->full_b_valid) & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_5 = 1U;
    }
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__6(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_sequent__TOP__PingPongBufferWithWriteOnlyMaster__6\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:410
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal 
	= (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_4)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_combo__TOP__PingPongBufferWithWriteOnlyMaster__7(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_combo__TOP__PingPongBufferWithWriteOnlyMaster__7\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_4 
	= (1U & (((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast)) 
		  & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__m_axi_wlast_regNext)) 
		 | (~ (IData)(vlTOPp->aresetn))));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_multiclk__TOP__PingPongBufferWithWriteOnlyMaster__8(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_multiclk__TOP__PingPongBufferWithWriteOnlyMaster__8\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_2) 
	    < (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg)) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2) 
	    < (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg)) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:334
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wdata 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wdata 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rData;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:327
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:298
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_payload 
	= vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_payload;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_payload 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_payload;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:305
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid 
	    = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_valid;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:291
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready 
	    = (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)));
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:264
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97 = 0U;
    if (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
	 & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97 = 1U;
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
	   & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1165
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1172
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1188
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_combo__TOP__PingPongBufferWithWriteOnlyMaster__9(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_combo__TOP__PingPongBufferWithWriteOnlyMaster__9\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:341
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready 
	    = vlTOPp->full_w_ready;
	if ((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid)))) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready = 1U;
	}
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:235
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast = 0U;
    if (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid) 
	 & (IData)(vlTOPp->full_w_ready))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:280
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_1 
	= (0x1ffU & (((0x100U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2)) 
		      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97))
		      ? 0U : ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2) 
			      + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97))));
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_5) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_1 = 0U;
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:251
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_1 
	= (0x1ffU & (((0x100U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_2)) 
		      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast))
		      ? 0U : ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_2) 
			      + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast))));
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_1) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1195
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:1211
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement)));
}
