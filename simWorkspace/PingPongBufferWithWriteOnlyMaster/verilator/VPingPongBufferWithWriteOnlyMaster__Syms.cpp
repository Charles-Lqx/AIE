// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"
#include "VPingPongBufferWithWriteOnlyMaster.h"
#include "VPingPongBufferWithWriteOnlyMaster___024root.h"
#include "VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster.h"
#include "VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface.h"

// FUNCTIONS
VPingPongBufferWithWriteOnlyMaster__Syms::~VPingPongBufferWithWriteOnlyMaster__Syms()
{
}

VPingPongBufferWithWriteOnlyMaster__Syms::VPingPongBufferWithWriteOnlyMaster__Syms(VerilatedContext* contextp, const char* namep,VPingPongBufferWithWriteOnlyMaster* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP__PingPongBufferWithWriteOnlyMaster(Verilated::catName(namep, "PingPongBufferWithWriteOnlyMaster"))
    , TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater(Verilated::catName(namep, "PingPongBufferWithWriteOnlyMaster.writeOnlyMater"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.PingPongBufferWithWriteOnlyMaster = &TOP__PingPongBufferWithWriteOnlyMaster;
    TOP__PingPongBufferWithWriteOnlyMaster.writeOnlyMater = &TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__PingPongBufferWithWriteOnlyMaster.__Vconfigure(this, true);
    TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_PingPongBufferWithWriteOnlyMaster__writeOnlyMater.configure(this, name(), "PingPongBufferWithWriteOnlyMaster.writeOnlyMater", "writeOnlyMater", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_PingPongBufferWithWriteOnlyMaster__writeOnlyMater.varInsert(__Vfinal,"axi4Interface_isInitialIterate", &(TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater.axi4Interface_isInitialIterate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
