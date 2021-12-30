// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster.h" // For This
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster) {
    VL_CELL (pingPongBuffer_1, VPingPongBufferWithWriteOnlyMaster_PingPongBuffer);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::__Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::~VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster() {
}

//--------------------
// Internal Methods

void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_settle__TOP__PingPongBufferWithWriteOnlyMaster__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_settle__TOP__PingPongBufferWithWriteOnlyMaster__1\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_full_b_fire_1 
	= ((IData)(vlTOPp->full_b_valid) & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_full_aw_fire 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal) 
	   & (IData)(vlTOPp->full_aw_ready));
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
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_2) 
	   == (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg) 
			- (IData)(1U))));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast_2) 
	    < (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg)) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97 
	= (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2) 
	    < (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg)) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy));
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_4 
	= (1U & (((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast)) 
		  & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__m_axi_wlast_regNext)) 
		 | (~ (IData)(vlTOPp->aresetn))));
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:341
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready 
	    = vlTOPp->full_w_ready;
	if ((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid)))) {
	    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready = 1U;
	}
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full))))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:291
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready = 0U;
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready 
	    = (1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)));
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:235
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast = 0U;
    if (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid) 
	 & (IData)(vlTOPp->full_w_ready))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_m_axi_wlast = 1U;
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

void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_settle__TOP__PingPongBufferWithWriteOnlyMaster__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_settle__TOP__PingPongBufferWithWriteOnlyMaster__2\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:264
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97 = 0U;
    if (((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
	 & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97 = 1U;
    }
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing 
	= ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
	   & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/PingPongBufferWithWriteOnlyMaster.v:280
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_1 
	= (0x1ffU & (((0x100U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2)) 
		      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97))
		      ? 0U : ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2) 
			      + (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97))));
    if (vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_5) {
	vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_1 = 0U;
    }
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

void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::_ctor_var_reset\n"); );
    // Body
    streamIn_valid = VL_RAND_RESET_I(1);
    streamIn_ready = VL_RAND_RESET_I(1);
    streamIn_payload = VL_RAND_RESET_I(32);
    startIn = VL_RAND_RESET_I(1);
    bufferDepthIn = VL_RAND_RESET_I(8);
    interruptOut = VL_RAND_RESET_I(1);
    dataOffsetIn = VL_RAND_RESET_I(32);
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
    aresetn = VL_RAND_RESET_I(1);
    aclk = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater_s_axis_ready = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater_m_axi_wvalid = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater_m_axi_wdata = VL_RAND_RESET_I(32);
    __PVT__writeOnlyMater_m_axi_wlast = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3_io_push_payload = VL_RAND_RESET_I(32);
    __PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__axi4Interface_transferDataType = VL_RAND_RESET_I(32);
    __PVT__writeOnlyMater__DOT___zz_m_axi_wlast = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT___zz_m_axi_wlast_1 = VL_RAND_RESET_I(9);
    __PVT__writeOnlyMater__DOT___zz_m_axi_wlast_2 = VL_RAND_RESET_I(9);
    __PVT__writeOnlyMater__DOT__m_axi_wlast_regNext = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__startSendSignal = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97 = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT___zz_5 = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_1 = VL_RAND_RESET_I(9);
    __PVT__writeOnlyMater__DOT___zz_when_Axi4WriteOnlyMaster_l97_2 = VL_RAND_RESET_I(9);
    __PVT__writeOnlyMater__DOT__burstLengthReg = VL_RAND_RESET_I(8);
    __PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97 = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__axi4Interface_newBurst = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__axi4Interface_full_b_fire_1 = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__axi4Interface_full_aw_fire = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__startOffsetReg = VL_RAND_RESET_I(32);
    __PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160 = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rData = VL_RAND_RESET_I(32);
    __PVT__writeOnlyMater__DOT__axi4Interface_controlBReady = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full = VL_RAND_RESET_I(1);
    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    __PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
