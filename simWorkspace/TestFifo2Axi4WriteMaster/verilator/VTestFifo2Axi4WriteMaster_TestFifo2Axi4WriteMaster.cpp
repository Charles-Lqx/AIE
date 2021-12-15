// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestFifo2Axi4WriteMaster.h for the primary calling header

#include "VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster.h" // For This
#include "VTestFifo2Axi4WriteMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_sequent__TOP__TestFifo2Axi4WriteMaster__2(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_sequent__TOP__TestFifo2Axi4WriteMaster__2\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__Vdlyvset__fifoInstance__DOT__logic_ram__v0 = 0U;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:236
    if (vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT___zz_1) {
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__Vdlyvval__fifoInstance__DOT__logic_ram__v0 
	    = vlTOPp->fifoInterface_payload;
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__Vdlyvset__fifoInstance__DOT__logic_ram__v0 = 1U;
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0 
	    = vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value;
    }
}

VL_INLINE_OPT void VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_sequent__TOP__TestFifo2Axi4WriteMaster__3(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_sequent__TOP__TestFifo2Axi4WriteMaster__3\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__fifoInstance__DOT__logic_pushPtr_value,7,0);
    // Body
    __Vdly__fifoInstance__DOT__logic_pushPtr_value 
	= vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value;
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:307
    if (vlTOPp->reset) {
	__Vdly__fifoInstance__DOT__logic_pushPtr_value = 0U;
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_value = 0U;
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy = 0U;
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT___zz_io_pop_valid = 0U;
    } else {
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_value 
	    = vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext;
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT___zz_io_pop_valid 
	    = ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value));
	if (((IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushing) 
	     != (IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popping))) {
	    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy 
		= vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushing;
	}
	__Vdly__fifoInstance__DOT__logic_pushPtr_value 
	    = vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext;
    }
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value 
	= __Vdly__fifoInstance__DOT__logic_pushPtr_value;
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_value));
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy));
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_full))))));
}

VL_INLINE_OPT void VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_sequent__TOP__TestFifo2Axi4WriteMaster__4(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_sequent__TOP__TestFifo2Axi4WriteMaster__4\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster__axi4Interconnection.__PVT__fifoReady));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:272
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popping) {
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_combo__TOP__TestFifo2Axi4WriteMaster__5(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_combo__TOP__TestFifo2Axi4WriteMaster__5\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushing 
	= ((IData)(vlTOPp->fifoInterface_valid) & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:242
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushing) {
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:249
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushing) {
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:265
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_sequent__TOP__TestFifo2Axi4WriteMaster__6(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_sequent__TOP__TestFifo2Axi4WriteMaster__6\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:230
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT___zz_logic_ram_port0 
	= vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_ram
	[vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext];
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:238
    if (vlSymsp->TOP__TestFifo2Axi4WriteMaster.__Vdlyvset__fifoInstance__DOT__logic_ram__v0) {
	vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_ram[vlSymsp->TOP__TestFifo2Axi4WriteMaster.__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0] 
	    = vlSymsp->TOP__TestFifo2Axi4WriteMaster.__Vdlyvval__fifoInstance__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_sequent__TOP__TestFifo2Axi4WriteMaster__7(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster::_sequent__TOP__TestFifo2Axi4WriteMaster__7\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:288
    vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__TestFifo2Axi4WriteMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement)));
}
