// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestFifo2Axi4WriteOnlyMaster.h for the primary calling header

#include "VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster.h" // For This
#include "VTestFifo2Axi4WriteOnlyMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_sequent__TOP__TestFifo2Axi4WriteOnlyMaster__2(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_sequent__TOP__TestFifo2Axi4WriteOnlyMaster__2\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__Vdlyvset__fifoInstance__DOT__logic_ram__v0 = 0U;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:176
    if (vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT___zz_1) {
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__Vdlyvval__fifoInstance__DOT__logic_ram__v0 
	    = vlTOPp->fifoInterface_payload;
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__Vdlyvset__fifoInstance__DOT__logic_ram__v0 = 1U;
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0 
	    = vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value;
    }
}

VL_INLINE_OPT void VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_sequent__TOP__TestFifo2Axi4WriteOnlyMaster__3(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_sequent__TOP__TestFifo2Axi4WriteOnlyMaster__3\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__fifoInstance__DOT__logic_pushPtr_value,4,0);
    // Body
    __Vdly__fifoInstance__DOT__logic_pushPtr_value 
	= vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:247
    if (vlTOPp->resetn) {
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value 
	    = vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext;
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT___zz_io_pop_valid 
	    = ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value));
	if (((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushing) 
	     != (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popping))) {
	    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy 
		= vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushing;
	}
	__Vdly__fifoInstance__DOT__logic_pushPtr_value 
	    = vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext;
    } else {
	__Vdly__fifoInstance__DOT__logic_pushPtr_value = 0U;
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value = 0U;
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy = 0U;
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT___zz_io_pop_valid = 0U;
    }
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value 
	= __Vdly__fifoInstance__DOT__logic_pushPtr_value;
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value));
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy));
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full))))));
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoReady));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:212
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popping) {
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_sequent__TOP__TestFifo2Axi4WriteOnlyMaster__4(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_sequent__TOP__TestFifo2Axi4WriteOnlyMaster__4\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:170
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT___zz_logic_ram_port0 
	= vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram
	[vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext];
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:178
    if (vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__Vdlyvset__fifoInstance__DOT__logic_ram__v0) {
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0] 
	    = vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__Vdlyvval__fifoInstance__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_combo__TOP__TestFifo2Axi4WriteOnlyMaster__5(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_combo__TOP__TestFifo2Axi4WriteOnlyMaster__5\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushing 
	= ((IData)(vlTOPp->fifoInterface_valid) & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:182
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushing) {
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:189
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushing) {
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:205
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext 
	= (0x1fU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_sequent__TOP__TestFifo2Axi4WriteOnlyMaster__6(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_sequent__TOP__TestFifo2Axi4WriteOnlyMaster__6\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:228
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext 
	= (0x1fU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement)));
}
