// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestFifo2Axi4WriteOnlyMaster.h for the primary calling header

#include "VTestFifo2Axi4WriteOnlyMaster.h" // For This
#include "VTestFifo2Axi4WriteOnlyMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------


void VTestFifo2Axi4WriteOnlyMaster::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestFifo2Axi4WriteOnlyMaster::eval\n"); );
    VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VTestFifo2Axi4WriteOnlyMaster::_eval_initial_loop(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VTestFifo2Axi4WriteOnlyMaster::_sequent__TOP__3(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::_sequent__TOP__3\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axi4WriteOnlyMasterInterface_aw_valid = vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_controlAwValid;
    vlTOPp->axi4WriteOnlyMasterInterface_w_payload_last 
	= (0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter));
    vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_addr 
	= ((0x20U == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter))
	    ? vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress
	    : vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_initialAddress);
    vlTOPp->axi4WriteOnlyMasterInterface_w_valid = vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__wValid;
    vlTOPp->axi4WriteOnlyMasterInterface_w_payload_data 
	= vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__wdata;
    vlTOPp->fifoInterface_ready = (1U & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full)));
}

void VTestFifo2Axi4WriteOnlyMaster::_eval(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::_eval\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster._sequent__TOP__TestFifo2Axi4WriteOnlyMaster__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((~ (IData)(vlTOPp->resetn)) & (IData)(vlTOPp->__Vclklast__TOP__resetn)))) {
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection._sequent__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__4(vlSymsp);
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection._sequent__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__5(vlSymsp);
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster._sequent__TOP__TestFifo2Axi4WriteOnlyMaster__3(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection._settle__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__2(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster._sequent__TOP__TestFifo2Axi4WriteOnlyMaster__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection._combo__TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster._combo__TOP__TestFifo2Axi4WriteOnlyMaster__5(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((~ (IData)(vlTOPp->resetn)) & (IData)(vlTOPp->__Vclklast__TOP__resetn)))) {
	vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster._sequent__TOP__TestFifo2Axi4WriteOnlyMaster__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__resetn = vlTOPp->resetn;
}

VL_INLINE_OPT QData VTestFifo2Axi4WriteOnlyMaster::_change_request(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::_change_request\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTestFifo2Axi4WriteOnlyMaster::_change_request_1(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::_change_request_1\n"); );
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTestFifo2Axi4WriteOnlyMaster::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteOnlyMaster::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((fifoInterface_valid & 0xfeU))) {
	Verilated::overWidthError("fifoInterface_valid");}
    if (VL_UNLIKELY((axi4WriteOnlyMasterInterface_aw_ready 
		     & 0xfeU))) {
	Verilated::overWidthError("axi4WriteOnlyMasterInterface_aw_ready");}
    if (VL_UNLIKELY((axi4WriteOnlyMasterInterface_w_ready 
		     & 0xfeU))) {
	Verilated::overWidthError("axi4WriteOnlyMasterInterface_w_ready");}
    if (VL_UNLIKELY((axi4WriteOnlyMasterInterface_b_valid 
		     & 0xfeU))) {
	Verilated::overWidthError("axi4WriteOnlyMasterInterface_b_valid");}
    if (VL_UNLIKELY((axi4WriteOnlyMasterInterface_b_payload_id 
		     & 0xfeU))) {
	Verilated::overWidthError("axi4WriteOnlyMasterInterface_b_payload_id");}
    if (VL_UNLIKELY((axi4WriteOnlyMasterInterface_b_payload_resp 
		     & 0xfcU))) {
	Verilated::overWidthError("axi4WriteOnlyMasterInterface_b_payload_resp");}
    if (VL_UNLIKELY((resetn & 0xfeU))) {
	Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
}
#endif // VL_DEBUG
