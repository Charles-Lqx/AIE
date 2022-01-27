// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster.h"
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"

void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___ctor_var_reset(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf);

VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___ctor_var_reset(this);
}

void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::__Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster::~VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster() {
}
