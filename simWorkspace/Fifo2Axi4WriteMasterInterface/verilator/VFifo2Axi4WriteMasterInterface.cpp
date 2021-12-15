// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFifo2Axi4WriteMasterInterface.h for the primary calling header

#include "VFifo2Axi4WriteMasterInterface.h" // For This
#include "VFifo2Axi4WriteMasterInterface__Syms.h"

#include "verilated_dpi.h"


//--------------------


void VFifo2Axi4WriteMasterInterface::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFifo2Axi4WriteMasterInterface::eval\n"); );
    VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VFifo2Axi4WriteMasterInterface::_eval_initial_loop(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VFifo2Axi4WriteMasterInterface::_sequent__TOP__3(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::_sequent__TOP__3\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->fifoInterface_ready = (1U & (~ (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface.__PVT__fifoInstance__DOT__logic_full)));
    vlTOPp->aw_valid = vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT__axi4Interface_controlAwValid;
    vlTOPp->w_payload_last = (0xffU == (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT___zz_wdata_2));
    vlTOPp->aw_payload_addr = ((0x100U == (IData)(vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT___zz_wdata_2))
			        ? vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.axi4Interface_address
			        : vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT__axi4Interface_initialAddress);
    vlTOPp->w_valid = vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT__wValid;
    vlTOPp->w_payload_data = vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__PVT__wdata;
}

void VFifo2Axi4WriteMasterInterface::_eval(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::_eval\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface._sequent__TOP__Fifo2Axi4WriteMasterInterface__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface._sequent__TOP__Fifo2Axi4WriteMasterInterface__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection._sequent__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__8(vlSymsp);
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection._sequent__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__10(vlSymsp);
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection._sequent__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__11(vlSymsp);
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection._sequent__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__12(vlSymsp);
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection._sequent__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__13(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface._sequent__TOP__Fifo2Axi4WriteMasterInterface__4(vlSymsp);
    }
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface._combo__TOP__Fifo2Axi4WriteMasterInterface__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection._combo__TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection__14(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface._sequent__TOP__Fifo2Axi4WriteMasterInterface__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlSymsp->TOP__Fifo2Axi4WriteMasterInterface._sequent__TOP__Fifo2Axi4WriteMasterInterface__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VFifo2Axi4WriteMasterInterface::_change_request(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::_change_request\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VFifo2Axi4WriteMasterInterface::_change_request_1(VFifo2Axi4WriteMasterInterface__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::_change_request_1\n"); );
    VFifo2Axi4WriteMasterInterface* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFifo2Axi4WriteMasterInterface::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFifo2Axi4WriteMasterInterface::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((fifoInterface_valid & 0xfeU))) {
	Verilated::overWidthError("fifoInterface_valid");}
    if (VL_UNLIKELY((aw_ready & 0xfeU))) {
	Verilated::overWidthError("aw_ready");}
    if (VL_UNLIKELY((w_ready & 0xfeU))) {
	Verilated::overWidthError("w_ready");}
    if (VL_UNLIKELY((b_valid & 0xfeU))) {
	Verilated::overWidthError("b_valid");}
    if (VL_UNLIKELY((b_payload_resp & 0xfcU))) {
	Verilated::overWidthError("b_payload_resp");}
    if (VL_UNLIKELY((ar_ready & 0xfeU))) {
	Verilated::overWidthError("ar_ready");}
    if (VL_UNLIKELY((r_valid & 0xfeU))) {
	Verilated::overWidthError("r_valid");}
    if (VL_UNLIKELY((r_payload_resp & 0xfcU))) {
	Verilated::overWidthError("r_payload_resp");}
    if (VL_UNLIKELY((r_payload_last & 0xfeU))) {
	Verilated::overWidthError("r_payload_last");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
}
#endif // VL_DEBUG
