// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFifo2Axi4WriteOnlyMasterInterface.h for the primary calling header

#include "VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface.h" // For This
#include "VFifo2Axi4WriteOnlyMasterInterface__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_settle__TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection__2(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_settle__TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection__2\n"); );
    VFifo2Axi4WriteOnlyMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_fifo_fire 
	= ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoReady));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:551
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_handshakeCounter = 0U;
    if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_fifo_fire) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_handshakeCounter = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:567
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_handshakeCounter_1 
	= (0x3fU & (((0x20U == (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.handshakeCounter)) 
		     & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_handshakeCounter))
		     ? 0U : ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.handshakeCounter) 
			     + (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_handshakeCounter))));
    if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_3) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_handshakeCounter_1 = 0U;
    }
}

VL_INLINE_OPT void VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_sequent__TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection__4(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_sequent__TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection__4\n"); );
    VFifo2Axi4WriteOnlyMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__Vdly__debugAddress 
	= vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.debugAddress;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:664
    if (vlTOPp->resetn) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter 
	    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_writeCounter_1;
	if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_fifo_fire) {
	    if ((1U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_0 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((2U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_1 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((4U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_2 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((8U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_3 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x10U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_4 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x20U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_5 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x40U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_6 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x80U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_7 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x100U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_8 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x200U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_9 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x400U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_10 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x800U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_11 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x1000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_12 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x2000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_13 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x4000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_14 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x8000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_15 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x10000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_16 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x20000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_17 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x40000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_18 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x80000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_19 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x100000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_20 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x200000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_21 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x400000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_22 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x800000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_23 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x1000000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_24 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x2000000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_25 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x4000000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_26 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x8000000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_27 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x10000000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_28 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x20000000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_29 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x40000000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_30 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	    if ((0x80000000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5)) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_31 
		    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
	    }
	}
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.handshakeCounter 
	    = vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_handshakeCounter_1;
	if (((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__wValid) 
	     & (IData)(vlTOPp->w_ready))) {
	    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__Vdly__debugAddress 
		= vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__Axi4Incr_result;
	}
	if (vlTOPp->resetn) {
	    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_isTransferAfterReset = 0U;
	}
	if (vlTOPp->resetn) {
	    if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_t_aw_fire) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_controlAwValid = 0U;
	    }
	    if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__when_Axi4WriteOnlyMaster_l92) {
		vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_controlAwValid = 1U;
	    }
	}
	if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMaster_l92) {
	    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_initialAddress 
		= vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.debugAddress;
	}
    } else {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_0 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_1 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_2 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_3 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_4 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_5 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_6 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_7 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_8 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_9 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_10 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_11 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_12 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_13 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_14 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_15 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_16 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_17 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_18 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_19 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_20 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_21 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_22 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_23 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_24 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_25 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_26 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_27 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_28 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_29 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_30 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoDataBuffer_31 = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_controlAwValid = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_isTransferAfterReset = 1U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_initialAddress = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.handshakeCounter = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__Vdly__debugAddress = 0U;
    }
}

VL_INLINE_OPT void VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_sequent__TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection__5(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_sequent__TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection__5\n"); );
    VFifo2Axi4WriteOnlyMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.debugAddress 
	= vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__Vdly__debugAddress;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:613
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__Axi4Incr_result 
	= ((0xfffff000U & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.debugAddress) 
	   | (0xfffU & ((IData)(4U) + (0xffcU & vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.debugAddress))));
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMaster_l92 
	= (0x20U == (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter));
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
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_5 
	= ((IData)(1U) << (0x1fU & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.handshakeCounter)));
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
}

VL_INLINE_OPT void VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_combo__TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection__7(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface::_combo__TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection__7\n"); );
    VFifo2Axi4WriteOnlyMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_t_aw_fire 
	= ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__axi4Interface_controlAwValid) 
	   & (IData)(vlTOPp->aw_ready));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:524
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_writeCounter = 0U;
    if (((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__wValid) 
	 & (IData)(vlTOPp->w_ready))) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT___zz_writeCounter = 1U;
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
