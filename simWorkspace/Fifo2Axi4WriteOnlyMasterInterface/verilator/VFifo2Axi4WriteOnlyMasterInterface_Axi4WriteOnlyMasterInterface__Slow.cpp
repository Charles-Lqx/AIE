// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFifo2Axi4WriteOnlyMasterInterface.h for the primary calling header

#include "VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface.h" // For This
#include "VFifo2Axi4WriteOnlyMasterInterface__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::__Vconfigure(VFifo2Axi4WriteOnlyMasterInterface__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::~VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface() {
}

//--------------------
// Internal Methods

void VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_settle__TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection__1(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_settle__TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection__1\n"); );
    VFifo2Axi4WriteOnlyMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMaster_l92 
	= (0x20U == (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter));
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5 
	= ((IData)(1U) << (0x1fU & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.handshakeCounter)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:613
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__Axi4Incr_result 
	= ((0xfffff000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.debugAddress) 
	   | (0xfffU & ((IData)(4U) + (0xffcU & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.debugAddress))));
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_t_aw_fire 
	= ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_controlAwValid) 
	   & (IData)(vlTOPp->aw_ready));
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__when_Axi4WriteOnlyMaster_l92 
	= ((0x20U == (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter)) 
	   | (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_isTransferAfterReset));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:531
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_1 = 0U;
    if ((0x20U == (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:558
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_3 = 0U;
    if ((0x20U == (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_3 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:653
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__wValid = 0U;
    if ((((0U < (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.handshakeCounter)) 
	  & ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter) 
	     < (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.handshakeCounter))) 
	 & (0x20U != (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter)))) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__wValid = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:580
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoReady = 0U;
    if ((0x20U != (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.handshakeCounter))) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoReady = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:524
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_writeCounter = 0U;
    if (((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__wValid) 
	 & (IData)(vlTOPp->w_ready))) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_writeCounter = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:645
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__wdata = 0U;
    if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__wValid) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__wdata 
	    = ((0x10U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
	        ? ((8U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
		    ? ((4U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
		        ? ((2U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			    ? ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_31
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_30)
			    : ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_29
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_28))
		        : ((2U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			    ? ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_27
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_26)
			    : ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_25
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_24)))
		    : ((4U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
		        ? ((2U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			    ? ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_23
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_22)
			    : ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_21
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_20))
		        : ((2U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			    ? ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_19
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_18)
			    : ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_17
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_16))))
	        : ((8U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
		    ? ((4U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
		        ? ((2U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			    ? ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_15
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_14)
			    : ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_13
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_12))
		        : ((2U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			    ? ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_11
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_10)
			    : ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_9
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_8)))
		    : ((4U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
		        ? ((2U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			    ? ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_7
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_6)
			    : ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_5
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_4))
		        : ((2U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			    ? ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_3
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_2)
			    : ((1U & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_1
			        : vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_0)))));
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:540
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_writeCounter_1 
	= (0x3fU & (((0x20U == (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter)) 
		     & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_writeCounter))
		     ? 0U : ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter) 
			     + (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_writeCounter))));
    if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_1) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_writeCounter_1 = 0U;
    }
}

void VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_ctor_var_reset\n"); );
    // Body
    __PVT__fifoValid = VL_RAND_RESET_I(1);
    __PVT__fifoReady = VL_RAND_RESET_I(1);
    __PVT__fifoPayload = VL_RAND_RESET_I(32);
    __PVT__awValid = VL_RAND_RESET_I(1);
    __PVT__awReady = VL_RAND_RESET_I(1);
    __PVT__awaddr = VL_RAND_RESET_I(32);
    __PVT__awregion = VL_RAND_RESET_I(4);
    __PVT__awlen = VL_RAND_RESET_I(8);
    __PVT__awsize = VL_RAND_RESET_I(3);
    __PVT__awburst = VL_RAND_RESET_I(2);
    __PVT__awcache = VL_RAND_RESET_I(4);
    __PVT__awqos = VL_RAND_RESET_I(4);
    __PVT__awprot = VL_RAND_RESET_I(3);
    __PVT__wValid = VL_RAND_RESET_I(1);
    __PVT__wReady = VL_RAND_RESET_I(1);
    __PVT__wdata = VL_RAND_RESET_I(32);
    __PVT__wstrb = VL_RAND_RESET_I(4);
    __PVT__wlast = VL_RAND_RESET_I(1);
    __PVT__bValid = VL_RAND_RESET_I(1);
    __PVT__bReady = VL_RAND_RESET_I(1);
    __PVT__bresp = VL_RAND_RESET_I(2);
    __PVT__resetn = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT___zz_writeCounter = VL_RAND_RESET_I(1);
    __PVT___zz_1 = VL_RAND_RESET_I(1);
    __PVT___zz_writeCounter_1 = VL_RAND_RESET_I(6);
    writeCounter = VL_RAND_RESET_I(6);
    __PVT___zz_when_Axi4WriteOnlyMaster_l92 = VL_RAND_RESET_I(1);
    __PVT___zz_handshakeCounter = VL_RAND_RESET_I(1);
    __PVT___zz_3 = VL_RAND_RESET_I(1);
    __PVT___zz_handshakeCounter_1 = VL_RAND_RESET_I(6);
    handshakeCounter = VL_RAND_RESET_I(6);
    __PVT__fifoDataBuffer_0 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_1 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_2 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_3 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_4 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_5 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_6 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_7 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_8 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_9 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_10 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_11 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_12 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_13 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_14 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_15 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_16 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_17 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_18 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_19 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_20 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_21 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_22 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_23 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_24 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_25 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_26 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_27 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_28 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_29 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_30 = VL_RAND_RESET_I(32);
    __PVT__fifoDataBuffer_31 = VL_RAND_RESET_I(32);
    __PVT__axi4Interface_fifo_fire = VL_RAND_RESET_I(1);
    __PVT___zz_5 = VL_RAND_RESET_I(32);
    debugAddress = VL_RAND_RESET_I(32);
    __PVT__Axi4Incr_result = VL_RAND_RESET_I(32);
    __PVT__axi4Interface_controlAwValid = VL_RAND_RESET_I(1);
    __PVT__axi4Interface_isTransferAfterReset = VL_RAND_RESET_I(1);
    __PVT__axi4Interface_t_aw_fire = VL_RAND_RESET_I(1);
    __PVT__when_Axi4WriteOnlyMaster_l92 = VL_RAND_RESET_I(1);
    __PVT__axi4Interface_initialAddress = VL_RAND_RESET_I(32);
    __Vdly__debugAddress = VL_RAND_RESET_I(32);
}
