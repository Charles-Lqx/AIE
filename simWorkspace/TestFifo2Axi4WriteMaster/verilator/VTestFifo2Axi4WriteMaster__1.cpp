// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestFifo2Axi4WriteMaster.h for the primary calling header

#include "VTestFifo2Axi4WriteMaster.h" // For This
#include "VTestFifo2Axi4WriteMaster__Syms.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestFifo2Axi4WriteMaster::_sequent__TOP__12(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteMaster::_sequent__TOP__12\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->fifoInterface_ready = (1U & (~ (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_full)));
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_full))))));
    vlTOPp->axi4MasterInterface_w_payload_data = vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection_wdata;
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT__axi4Interface_fifo_fire 
	= ((IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance_io_pop_valid) 
	   & (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection_fifoReady));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:272
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT__axi4Interface_fifo_fire) {
	vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:1536
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteMaster_l53 = 0U;
    if (vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT__axi4Interface_fifo_fire) {
	vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteMaster_l53 = 1U;
    }
}

VL_INLINE_OPT void VTestFifo2Axi4WriteMaster::_sequent__TOP__13(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteMaster::_sequent__TOP__13\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:230
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT___zz_logic_ram_port0 
	= vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_ram
	[vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_popPtr_valueNext];
    // ALWAYSPOST at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:238
    if (vlTOPp->__Vdlyvset__TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_ram__v0) {
	vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_ram__v0] 
	    = vlTOPp->__Vdlyvval__TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VTestFifo2Axi4WriteMaster::_combo__TOP__14(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteMaster::_combo__TOP__14\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:1543
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_3 = 0U;
    if (((0x100U == (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_wdata_2)) 
	 & (0U == (IData)(vlTOPp->axi4MasterInterface_b_payload_resp)))) {
	vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_3 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:1509
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_wdata = 0U;
    if (((IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection_wValid) 
	 & (IData)(vlTOPp->axi4MasterInterface_w_ready))) {
	vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_wdata = 1U;
    }
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_pushing 
	= ((IData)(vlTOPp->fifoInterface_valid) & (~ (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_full)));
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:1552
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteMaster_l53_1 
	= (0x1ffU & (((0x100U == (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteMaster_l53_2)) 
		      & (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteMaster_l53))
		      ? 0U : ((IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteMaster_l53_2) 
			      + (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteMaster_l53))));
    if (vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_3) {
	vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_when_Axi4WriteMaster_l53_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:1525
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_wdata_1 
	= (0x1ffU & (((0x100U == (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_wdata_2)) 
		      & (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_wdata))
		      ? 0U : ((IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_wdata_2) 
			      + (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_wdata))));
    if (vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_1) {
	vlTOPp->TestFifo2Axi4WriteMaster__DOT__axi4Interconnection__DOT___zz_wdata_1 = 0U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:242
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT___zz_1 = 0U;
    if (vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_pushing) {
	vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:249
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_pushing) {
	vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:265
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VTestFifo2Axi4WriteMaster::_sequent__TOP__15(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteMaster::_sequent__TOP__15\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteMaster.v:288
    vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->TestFifo2Axi4WriteMaster__DOT__fifoInstance__DOT__logic_popPtr_willIncrement)));
}

void VTestFifo2Axi4WriteMaster::_eval(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteMaster::_eval\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->_sequent__TOP__9(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->_sequent__TOP__11(vlSymsp);
	vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__13(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__14(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__15(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VTestFifo2Axi4WriteMaster::_change_request(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteMaster::_change_request\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTestFifo2Axi4WriteMaster::_change_request_1(VTestFifo2Axi4WriteMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteMaster::_change_request_1\n"); );
    VTestFifo2Axi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTestFifo2Axi4WriteMaster::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestFifo2Axi4WriteMaster::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((fifoInterface_valid & 0xfeU))) {
	Verilated::overWidthError("fifoInterface_valid");}
    if (VL_UNLIKELY((axi4MasterInterface_aw_ready & 0xfeU))) {
	Verilated::overWidthError("axi4MasterInterface_aw_ready");}
    if (VL_UNLIKELY((axi4MasterInterface_w_ready & 0xfeU))) {
	Verilated::overWidthError("axi4MasterInterface_w_ready");}
    if (VL_UNLIKELY((axi4MasterInterface_b_valid & 0xfeU))) {
	Verilated::overWidthError("axi4MasterInterface_b_valid");}
    if (VL_UNLIKELY((axi4MasterInterface_b_payload_id 
		     & 0xfeU))) {
	Verilated::overWidthError("axi4MasterInterface_b_payload_id");}
    if (VL_UNLIKELY((axi4MasterInterface_b_payload_resp 
		     & 0xfcU))) {
	Verilated::overWidthError("axi4MasterInterface_b_payload_resp");}
    if (VL_UNLIKELY((axi4MasterInterface_ar_ready & 0xfeU))) {
	Verilated::overWidthError("axi4MasterInterface_ar_ready");}
    if (VL_UNLIKELY((axi4MasterInterface_r_valid & 0xfeU))) {
	Verilated::overWidthError("axi4MasterInterface_r_valid");}
    if (VL_UNLIKELY((axi4MasterInterface_r_payload_id 
		     & 0xfeU))) {
	Verilated::overWidthError("axi4MasterInterface_r_payload_id");}
    if (VL_UNLIKELY((axi4MasterInterface_r_payload_resp 
		     & 0xfcU))) {
	Verilated::overWidthError("axi4MasterInterface_r_payload_resp");}
    if (VL_UNLIKELY((axi4MasterInterface_r_payload_last 
		     & 0xfeU))) {
	Verilated::overWidthError("axi4MasterInterface_r_payload_last");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG
