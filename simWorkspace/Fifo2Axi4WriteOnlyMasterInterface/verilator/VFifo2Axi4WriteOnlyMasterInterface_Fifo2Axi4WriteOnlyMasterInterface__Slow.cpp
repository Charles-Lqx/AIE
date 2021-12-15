// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFifo2Axi4WriteOnlyMasterInterface.h for the primary calling header

#include "VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface.h" // For This
#include "VFifo2Axi4WriteOnlyMasterInterface__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface) {
    VL_CELL (axi4Interconnection, VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface::__Vconfigure(VFifo2Axi4WriteOnlyMasterInterface__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface::~VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface() {
}

//--------------------
// Internal Methods

void VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface::_settle__TOP__Fifo2Axi4WriteOnlyMasterInterface__1(VFifo2Axi4WriteOnlyMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface::_settle__TOP__Fifo2Axi4WriteOnlyMasterInterface__1\n"); );
    VFifo2Axi4WriteOnlyMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_value));
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_risingOccupancy));
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_pushing 
	= ((IData)(vlTOPp->fifoInterface_valid) & (~ (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_full)));
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_full))))));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:172
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_pushing) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:179
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_pushing) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__PVT__fifoReady));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:195
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext 
	= (0x1fU & ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:202
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_popping) {
	vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/Fifo2Axi4WriteOnlyMasterInterface.v:218
    vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_valueNext 
	= (0x1fU & ((IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__Fifo2Axi4WriteOnlyMasterInterface.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement)));
}

void VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface::_ctor_var_reset\n"); );
    // Body
    fifoInterface_valid = VL_RAND_RESET_I(1);
    fifoInterface_ready = VL_RAND_RESET_I(1);
    fifoInterface_payload = VL_RAND_RESET_I(32);
    aw_valid = VL_RAND_RESET_I(1);
    aw_ready = VL_RAND_RESET_I(1);
    aw_payload_addr = VL_RAND_RESET_I(32);
    aw_payload_region = VL_RAND_RESET_I(4);
    aw_payload_len = VL_RAND_RESET_I(8);
    aw_payload_size = VL_RAND_RESET_I(3);
    aw_payload_burst = VL_RAND_RESET_I(2);
    aw_payload_cache = VL_RAND_RESET_I(4);
    aw_payload_qos = VL_RAND_RESET_I(4);
    aw_payload_prot = VL_RAND_RESET_I(3);
    w_valid = VL_RAND_RESET_I(1);
    w_ready = VL_RAND_RESET_I(1);
    w_payload_data = VL_RAND_RESET_I(32);
    w_payload_strb = VL_RAND_RESET_I(4);
    w_payload_last = VL_RAND_RESET_I(1);
    b_valid = VL_RAND_RESET_I(1);
    b_ready = VL_RAND_RESET_I(1);
    b_payload_resp = VL_RAND_RESET_I(2);
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
