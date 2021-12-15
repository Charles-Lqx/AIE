// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestFifo2Axi4WriteOnlyMaster.h for the primary calling header

#include "VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster.h" // For This
#include "VTestFifo2Axi4WriteOnlyMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster) {
    VL_CELL (axi4Interconnection, VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::__Vconfigure(VTestFifo2Axi4WriteOnlyMaster__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::~VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster() {
}

//--------------------
// Internal Methods

void VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_settle__TOP__TestFifo2Axi4WriteOnlyMaster__1(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_settle__TOP__TestFifo2Axi4WriteOnlyMaster__1\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value));
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy));
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushing 
	= ((IData)(vlTOPp->fifoInterface_valid) & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full)));
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full))))));
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
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoReady));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:205
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext 
	= (0x1fU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:212
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popping) {
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v:228
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext 
	= (0x1fU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement)));
}

void VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster::_ctor_var_reset\n"); );
    // Body
    fifoInterface_valid = VL_RAND_RESET_I(1);
    fifoInterface_ready = VL_RAND_RESET_I(1);
    fifoInterface_payload = VL_RAND_RESET_I(32);
    axi4WriteOnlyMasterInterface_aw_valid = VL_RAND_RESET_I(1);
    axi4WriteOnlyMasterInterface_aw_ready = VL_RAND_RESET_I(1);
    axi4WriteOnlyMasterInterface_aw_payload_addr = VL_RAND_RESET_I(32);
    axi4WriteOnlyMasterInterface_aw_payload_id = VL_RAND_RESET_I(1);
    axi4WriteOnlyMasterInterface_aw_payload_region = VL_RAND_RESET_I(4);
    axi4WriteOnlyMasterInterface_aw_payload_len = VL_RAND_RESET_I(8);
    axi4WriteOnlyMasterInterface_aw_payload_size = VL_RAND_RESET_I(3);
    axi4WriteOnlyMasterInterface_aw_payload_burst = VL_RAND_RESET_I(2);
    axi4WriteOnlyMasterInterface_aw_payload_lock = VL_RAND_RESET_I(1);
    axi4WriteOnlyMasterInterface_aw_payload_cache = VL_RAND_RESET_I(4);
    axi4WriteOnlyMasterInterface_aw_payload_qos = VL_RAND_RESET_I(4);
    axi4WriteOnlyMasterInterface_aw_payload_prot = VL_RAND_RESET_I(3);
    axi4WriteOnlyMasterInterface_w_valid = VL_RAND_RESET_I(1);
    axi4WriteOnlyMasterInterface_w_ready = VL_RAND_RESET_I(1);
    axi4WriteOnlyMasterInterface_w_payload_data = VL_RAND_RESET_I(32);
    axi4WriteOnlyMasterInterface_w_payload_strb = VL_RAND_RESET_I(4);
    axi4WriteOnlyMasterInterface_w_payload_last = VL_RAND_RESET_I(1);
    axi4WriteOnlyMasterInterface_b_valid = VL_RAND_RESET_I(1);
    axi4WriteOnlyMasterInterface_b_ready = VL_RAND_RESET_I(1);
    axi4WriteOnlyMasterInterface_b_payload_id = VL_RAND_RESET_I(1);
    axi4WriteOnlyMasterInterface_b_payload_resp = VL_RAND_RESET_I(2);
    resetn = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    __PVT__fifoInstance_io_pop_valid = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    __PVT__fifoInstance__DOT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    __PVT__fifoInstance__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    __PVT__fifoInstance__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    __PVT__fifoInstance__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    __PVT__fifoInstance__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_pushing = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_popping = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_full = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    __PVT__fifoInstance__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vdlyvdim0__fifoInstance__DOT__logic_ram__v0 = VL_RAND_RESET_I(5);
    __Vdlyvval__fifoInstance__DOT__logic_ram__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__fifoInstance__DOT__logic_ram__v0 = VL_RAND_RESET_I(1);
}
