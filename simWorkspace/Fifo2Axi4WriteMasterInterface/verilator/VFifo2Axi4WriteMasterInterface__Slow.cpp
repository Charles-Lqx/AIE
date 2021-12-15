// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFifo2Axi4WriteMasterInterface.h for the primary calling header

#include "VFifo2Axi4WriteMasterInterface.h" // For This
#include "VFifo2Axi4WriteMasterInterface__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VFifo2Axi4WriteMasterInterface) {
    VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp = __VlSymsp = new VFifo2Axi4WriteMasterInterface__Syms(this, name());
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (Fifo2Axi4WriteMasterInterface, VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFifo2Axi4WriteMasterInterface::__Vconfigure(VFifo2Axi4WriteMasterInterface__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VFifo2Axi4WriteMasterInterface::~VFifo2Axi4WriteMasterInterface() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VFifo2Axi4WriteMasterInterface::_settle__TOP__1(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::_settle__TOP__1\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->aw_payload_region = 0U;
    vlTOPp->aw_payload_len = 0xffU;
    vlTOPp->aw_payload_size = 2U;
    vlTOPp->aw_payload_burst = 1U;
    vlTOPp->aw_payload_cache = 0U;
    vlTOPp->aw_payload_qos = 0U;
    vlTOPp->aw_payload_prot = 0U;
    vlTOPp->w_payload_strb = 0xfU;
    vlTOPp->b_ready = 1U;
    vlTOPp->ar_valid = 0U;
    vlTOPp->ar_payload_addr = 0U;
    vlTOPp->ar_payload_region = 0U;
    vlTOPp->ar_payload_len = 0xffU;
    vlTOPp->ar_payload_size = 4U;
    vlTOPp->ar_payload_burst = 1U;
    vlTOPp->ar_payload_cache = 0U;
    vlTOPp->ar_payload_qos = 0U;
    vlTOPp->ar_payload_prot = 0U;
    vlTOPp->r_ready = 0U;
    vlTOPp->aw_valid = vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT__axi4Interface_controlAwValid;
    vlTOPp->w_payload_last = (0xffU == (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT___zz_wdata_2));
    vlTOPp->aw_payload_addr = ((0x100U == (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT___zz_wdata_2))
			        ? vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.axi4Interface_address
			        : vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT__axi4Interface_initialAddress);
}

void VFifo2Axi4WriteMasterInterface::_settle__TOP__2(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::_settle__TOP__2\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->w_valid = vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT__wValid;
    vlTOPp->w_payload_data = vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT__wdata;
    vlTOPp->fifoInterface_ready = (1U & (~ (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_full)));
}

void VFifo2Axi4WriteMasterInterface::_eval_initial(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::_eval_initial\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFifo2Axi4WriteMasterInterface::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::final\n"); );
    // Variables
    VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFifo2Axi4WriteMasterInterface::_eval_settle(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::_eval_settle\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection._settle__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__1(vlSymsp);
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection._settle__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__2(vlSymsp);
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface._settle__TOP__Fifo2Axi4WriteMasterInterface__1(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection._settle__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__3(vlSymsp);
}

void VFifo2Axi4WriteMasterInterface::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::_ctor_var_reset\n"); );
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
    ar_valid = VL_RAND_RESET_I(1);
    ar_ready = VL_RAND_RESET_I(1);
    ar_payload_addr = VL_RAND_RESET_I(32);
    ar_payload_region = VL_RAND_RESET_I(4);
    ar_payload_len = VL_RAND_RESET_I(8);
    ar_payload_size = VL_RAND_RESET_I(3);
    ar_payload_burst = VL_RAND_RESET_I(2);
    ar_payload_cache = VL_RAND_RESET_I(4);
    ar_payload_qos = VL_RAND_RESET_I(4);
    ar_payload_prot = VL_RAND_RESET_I(3);
    r_valid = VL_RAND_RESET_I(1);
    r_ready = VL_RAND_RESET_I(1);
    r_payload_data = VL_RAND_RESET_I(32);
    r_payload_resp = VL_RAND_RESET_I(2);
    r_payload_last = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
