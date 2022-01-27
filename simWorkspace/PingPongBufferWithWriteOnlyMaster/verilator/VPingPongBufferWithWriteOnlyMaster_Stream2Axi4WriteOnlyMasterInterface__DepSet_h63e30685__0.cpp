// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface.h"

VL_INLINE_OPT void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__6(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___sequent__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__6\n"); );
    // Body
    vlSelf->__PVT__startSendSignal = (1U & (~ (IData)(vlSelf->__PVT___zz_4)));
}
