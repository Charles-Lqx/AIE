// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface.h"
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"

void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___ctor_var_reset(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface* vlSelf);

VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface::VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface___ctor_var_reset(this);
}

void VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface::__Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface::~VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface() {
}
