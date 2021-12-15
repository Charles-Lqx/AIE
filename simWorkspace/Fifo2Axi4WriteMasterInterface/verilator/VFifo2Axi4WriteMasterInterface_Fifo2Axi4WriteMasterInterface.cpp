// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFifo2Axi4WriteMasterInterface.h for the primary calling header

#include "VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface.h" // For This
#include "VFifo2Axi4WriteMasterInterface__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_sequent__TOP__Fifo2Axi4WriteMasterInterface__2(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_sequent__TOP__Fifo2Axi4WriteMasterInterface__2\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__Vdlyvset__fifoInstance__DOT__logic_ram__v0 = 0U;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteMasterInterface.v:216
    if (vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT___zz_1) {
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__Vdlyvval__fifoInstance__DOT__logic_ram__v0 
	    = vlTOPp->fifoInterface_payload;
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__Vdlyvset__fifoInstance__DOT__logic_ram__v0 = 1U;
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0 
	    = vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_value;
    }
}

VL_INLINE_OPT void VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_sequent__TOP__Fifo2Axi4WriteMasterInterface__3(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_sequent__TOP__Fifo2Axi4WriteMasterInterface__3\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__fifoInstance__DOT__logic_pushPtr_value,7,0);
    // Body
    __Vdly__fifoInstance__DOT__logic_pushPtr_value 
	= vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_value;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteMasterInterface.v:287
    if (vlTOPp->reset) {
	__Vdly__fifoInstance__DOT__logic_pushPtr_value = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_value = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_risingOccupancy = 0U;
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT___zz_io_pop_valid = 0U;
    } else {
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_value 
	    = vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_valueNext;
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT___zz_io_pop_valid 
	    = ((IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_value));
	if (((IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushing) 
	     != (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popping))) {
	    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_risingOccupancy 
		= vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushing;
	}
	__Vdly__fifoInstance__DOT__logic_pushPtr_value 
	    = vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext;
    }
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_value 
	= __Vdly__fifoInstance__DOT__logic_pushPtr_value;
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_value));
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_risingOccupancy));
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_full))))));
}

VL_INLINE_OPT void VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_sequent__TOP__Fifo2Axi4WriteMasterInterface__4(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_sequent__TOP__Fifo2Axi4WriteMasterInterface__4\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT__fifoReady));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteMasterInterface.v:252
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popping) {
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_combo__TOP__Fifo2Axi4WriteMasterInterface__5(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_combo__TOP__Fifo2Axi4WriteMasterInterface__5\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushing 
	= ((IData)(vlTOPp->fifoInterface_valid) & (~ (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteMasterInterface.v:222
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushing) {
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteMasterInterface.v:229
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushing) {
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteMasterInterface.v:245
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_sequent__TOP__Fifo2Axi4WriteMasterInterface__6(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_sequent__TOP__Fifo2Axi4WriteMasterInterface__6\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteMasterInterface.v:210
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT___zz_logic_ram_port0 
	= vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_ram
	[vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_valueNext];
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteMasterInterface.v:218
    if (vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__Vdlyvset__fifoInstance__DOT__logic_ram__v0) {
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_ram[vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0] 
	    = vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__Vdlyvval__fifoInstance__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_sequent__TOP__Fifo2Axi4WriteMasterInterface__7(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface::_sequent__TOP__Fifo2Axi4WriteMasterInterface__7\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteMasterInterface.v:268
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement)));
}
