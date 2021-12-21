// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h" // For This
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VStream2Axi4WriteOnlyMasterInterfaceAddFifo) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = __VlSymsp = new VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms(this, name());
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::__Vconfigure(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStream2Axi4WriteOnlyMasterInterfaceAddFifo::~VStream2Axi4WriteOnlyMasterInterfaceAddFifo() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_settle__TOP__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_settle__TOP__1\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_axi_awregion = 0U;
    vlTOPp->m_axi_awsize = 2U;
    vlTOPp->m_axi_awburst = 1U;
    vlTOPp->m_axi_awcache = 0U;
    vlTOPp->m_axi_awqos = 0U;
    vlTOPp->m_axi_awprot = 0U;
    vlTOPp->m_axi_wstrb = 0xfU;
    vlTOPp->m_axi_awaddr = vlTOPp->offset;
    vlTOPp->m_axi_awlen = (0xffU & ((IData)(vlTOPp->burstLen) 
				    - (IData)(1U)));
    vlTOPp->transInterrupt = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete;
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value));
    vlTOPp->m_axi_awvalid = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal;
    vlTOPp->m_axi_bready = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady;
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
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l152 
	= (((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2) 
	    < (IData)(vlTOPp->burstLen)) & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l89 
	= (((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_2) 
	    < (IData)(vlTOPp->burstLen)) & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy));
    vlTOPp->m_axi_wlast = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast;
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 
	= (1U & (((~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast)) 
		  & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__m_axi_wlast_regNext)) 
		 | (~ (IData)(vlTOPp->aresetn))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:322
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wdata 
	= vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_logic_ram_port0;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l152) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wdata 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_logic_ram_port0;
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
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full))))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:278
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_s_axis_ready = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l89) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_s_axis_ready 
	    = (1U & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full)));
    }
    vlTOPp->s_axis_ready = (1U & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full)));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing 
	= ((IData)(vlTOPp->s_axis_valid) & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full)));
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full))))));
    vlTOPp->m_axi_wdata = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wdata;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:315
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l152) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid;
    }
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid) 
	   & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_ready));
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
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:292
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l89) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid 
	    = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance_io_pop_valid;
    }
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance_io_pop_valid) 
	   & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_s_axis_ready));
    vlTOPp->m_axi_wvalid = vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:222
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast = 0U;
    if (((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid) 
	 & (IData)(vlTOPp->m_axi_wready))) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:492
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:485
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:251
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89 = 0U;
    if (((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid) 
	 & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full)))) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89 = 1U;
    }
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing 
	= ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid) 
	   & (~ (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:492
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:238
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_1 
	= (0x1ffU & (((0x100U == (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2)) 
		      & (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast))
		      ? 0U : ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2) 
			      + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast))));
    if (vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_1) {
	vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:508
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement)));
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
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:485
    vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement)));
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_initial(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_initial\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::final\n"); );
    // Variables
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_settle(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_settle\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_ctor_var_reset\n"); );
    // Body
    s_axis_valid = VL_RAND_RESET_I(1);
    s_axis_ready = VL_RAND_RESET_I(1);
    s_axis_payload = VL_RAND_RESET_I(32);
    m_axi_awvalid = VL_RAND_RESET_I(1);
    m_axi_awready = VL_RAND_RESET_I(1);
    m_axi_awaddr = VL_RAND_RESET_I(32);
    m_axi_awregion = VL_RAND_RESET_I(4);
    m_axi_awlen = VL_RAND_RESET_I(8);
    m_axi_awsize = VL_RAND_RESET_I(3);
    m_axi_awburst = VL_RAND_RESET_I(2);
    m_axi_awcache = VL_RAND_RESET_I(4);
    m_axi_awqos = VL_RAND_RESET_I(4);
    m_axi_awprot = VL_RAND_RESET_I(3);
    m_axi_wvalid = VL_RAND_RESET_I(1);
    m_axi_wready = VL_RAND_RESET_I(1);
    m_axi_wdata = VL_RAND_RESET_I(32);
    m_axi_wstrb = VL_RAND_RESET_I(4);
    m_axi_wlast = VL_RAND_RESET_I(1);
    m_axi_bvalid = VL_RAND_RESET_I(1);
    m_axi_bready = VL_RAND_RESET_I(1);
    m_axi_bresp = VL_RAND_RESET_I(2);
    aresetn = VL_RAND_RESET_I(1);
    start = VL_RAND_RESET_I(1);
    burstLen = VL_RAND_RESET_I(8);
    offset = VL_RAND_RESET_I(32);
    transInterrupt = VL_RAND_RESET_I(1);
    aclk = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_s_axis_ready = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wvalid = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wdata = VL_RAND_RESET_I(32);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection_m_axi_wlast = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance_io_pop_valid = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_valid = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_push_payload = VL_RAND_RESET_I(32);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_ready = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2_io_pop_valid = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_transferDataType = VL_RAND_RESET_I(32);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_1 = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_1 = VL_RAND_RESET_I(9);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_m_axi_wlast_2 = VL_RAND_RESET_I(9);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__m_axi_wlast_regNext = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__startSendSignal = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89 = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_5 = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_1 = VL_RAND_RESET_I(9);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteOnlyMaster_l89_2 = VL_RAND_RESET_I(9);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l89 = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isTransferAfterReset = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l115 = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_lastBurstComplete = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlAwValidSignal = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_full_aw_fire = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__when_Axi4WriteOnlyMaster_l152 = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_controlBReady = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_full_b_fire_3 = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_1 = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_pushing = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_popping = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_full = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT__streamFifo_2__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_1 = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_pushing = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_popping = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_full = VL_RAND_RESET_I(1);
    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__fifoInstance__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__aclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__start = VL_RAND_RESET_I(1);
    __Vclklast__TOP__aresetn = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__DOT__axi4Interconnection__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
