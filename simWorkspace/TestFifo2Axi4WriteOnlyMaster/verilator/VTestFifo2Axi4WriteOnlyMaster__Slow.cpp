// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestFifo2Axi4WriteOnlyMaster.h for the primary calling header

#include "VTestFifo2Axi4WriteOnlyMaster.h" // For This
#include "VTestFifo2Axi4WriteOnlyMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTestFifo2Axi4WriteOnlyMaster) {
    VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp = __VlSymsp = new VTestFifo2Axi4WriteOnlyMaster__Syms(this, name());
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (TestFifo2Axi4WriteOnlyMaster, VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTestFifo2Axi4WriteOnlyMaster::__Vconfigure(VTestFifo2Axi4WriteOnlyMaster__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTestFifo2Axi4WriteOnlyMaster::~VTestFifo2Axi4WriteOnlyMaster() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VTestFifo2Axi4WriteOnlyMaster::_settle__TOP__1(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::_settle__TOP__1\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_id = 0U;
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_region = 0U;
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_len = 0x1fU;
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_size = 2U;
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_burst = 1U;
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_lock = 0U;
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_cache = 0U;
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_qos = 0U;
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_prot = 0U;
    vlTOPp->axi4WriteOnlyMasterInterface_w_payload_strb = 0xfU;
    vlTOPp->axi4WriteOnlyMasterInterface_b_ready = 1U;
    vlTOPp->axi4WriteOnlyMasterInterface_aw_valid = vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_controlAwValid;
    vlTOPp->axi4WriteOnlyMasterInterface_w_payload_last 
	= (0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter));
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_addr 
	= ((0x20U == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter))
	    ? vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress
	    : vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_initialAddress);
}

void VTestFifo2Axi4WriteOnlyMaster::_settle__TOP__2(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::_settle__TOP__2\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axi4WriteOnlyMasterInterface_w_valid = vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__wValid;
    vlTOPp->axi4WriteOnlyMasterInterface_w_payload_data 
	= vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__wdata;
    vlTOPp->fifoInterface_ready = (1U & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full)));
}

void VTestFifo2Axi4WriteOnlyMaster::_eval_initial(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::_eval_initial\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTestFifo2Axi4WriteOnlyMaster::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::final\n"); );
    // Variables
    VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTestFifo2Axi4WriteOnlyMaster::_eval_settle(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::_eval_settle\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection._settle__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__1(vlSymsp);
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster._settle__TOP__TestFifo2Axi4WriteOnlyMaster__1(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection._settle__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__2(vlSymsp);
}

void VTestFifo2Axi4WriteOnlyMaster::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::_ctor_var_reset\n"); );
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
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__resetn = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
