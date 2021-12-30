// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "VPingPongBufferWithWriteOnlyMaster.h" // For This
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VPingPongBufferWithWriteOnlyMaster) {
    VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp = __VlSymsp = new VPingPongBufferWithWriteOnlyMaster__Syms(this, name());
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (PingPongBufferWithWriteOnlyMaster, VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPingPongBufferWithWriteOnlyMaster::__Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPingPongBufferWithWriteOnlyMaster::~VPingPongBufferWithWriteOnlyMaster() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VPingPongBufferWithWriteOnlyMaster::_settle__TOP__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_settle__TOP__1\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->full_aw_payload_region = 0U;
    vlTOPp->full_aw_payload_size = 2U;
    vlTOPp->full_aw_payload_burst = 1U;
    vlTOPp->full_aw_payload_cache = 0U;
    vlTOPp->full_aw_payload_qos = 0U;
    vlTOPp->full_aw_payload_prot = 0U;
    vlTOPp->full_w_payload_strb = 0xfU;
    vlTOPp->full_aw_valid = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal;
    vlTOPp->full_aw_payload_addr = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startOffsetReg;
    vlTOPp->full_aw_payload_len = (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg) 
					    - (IData)(1U)));
    vlTOPp->full_b_ready = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady;
    vlTOPp->interruptOut = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState;
}

void VPingPongBufferWithWriteOnlyMaster::_settle__TOP__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_settle__TOP__2\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->full_w_payload_last = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast;
    vlTOPp->full_w_payload_data = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wdata;
    vlTOPp->full_w_valid = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid;
    vlTOPp->streamIn_ready = vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready;
}

void VPingPongBufferWithWriteOnlyMaster::_eval_initial(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_eval_initial\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPingPongBufferWithWriteOnlyMaster::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::final\n"); );
    // Variables
    VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPingPongBufferWithWriteOnlyMaster::_eval_settle(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_eval_settle\n"); );
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster._settle__TOP__PingPongBufferWithWriteOnlyMaster__1(vlSymsp);
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._settle__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__1(vlSymsp);
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1._settle__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__2(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster._settle__TOP__PingPongBufferWithWriteOnlyMaster__2(vlSymsp);
}

void VPingPongBufferWithWriteOnlyMaster::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPingPongBufferWithWriteOnlyMaster::_ctor_var_reset\n"); );
    // Body
    streamIn_valid = VL_RAND_RESET_I(1);
    streamIn_ready = VL_RAND_RESET_I(1);
    streamIn_payload = VL_RAND_RESET_I(32);
    startIn = VL_RAND_RESET_I(1);
    bufferDepthIn = VL_RAND_RESET_I(8);
    interruptOut = VL_RAND_RESET_I(1);
    dataOffsetIn = VL_RAND_RESET_I(32);
    full_aw_valid = VL_RAND_RESET_I(1);
    full_aw_ready = VL_RAND_RESET_I(1);
    full_aw_payload_addr = VL_RAND_RESET_I(32);
    full_aw_payload_region = VL_RAND_RESET_I(4);
    full_aw_payload_len = VL_RAND_RESET_I(8);
    full_aw_payload_size = VL_RAND_RESET_I(3);
    full_aw_payload_burst = VL_RAND_RESET_I(2);
    full_aw_payload_cache = VL_RAND_RESET_I(4);
    full_aw_payload_qos = VL_RAND_RESET_I(4);
    full_aw_payload_prot = VL_RAND_RESET_I(3);
    full_w_valid = VL_RAND_RESET_I(1);
    full_w_ready = VL_RAND_RESET_I(1);
    full_w_payload_data = VL_RAND_RESET_I(32);
    full_w_payload_strb = VL_RAND_RESET_I(4);
    full_w_payload_last = VL_RAND_RESET_I(1);
    full_b_valid = VL_RAND_RESET_I(1);
    full_b_ready = VL_RAND_RESET_I(1);
    full_b_payload_resp = VL_RAND_RESET_I(2);
    aresetn = VL_RAND_RESET_I(1);
    aclk = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1 = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_2 = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg = VL_RAND_RESET_I(1);
    __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__aclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__aresetn = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_1 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__startIn = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT___zz_2 = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1____PVT__outputStartSignalReg = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__DOT___zz_4 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__DOT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1___zz_1 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1___zz_2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__outputStartSignalReg = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
