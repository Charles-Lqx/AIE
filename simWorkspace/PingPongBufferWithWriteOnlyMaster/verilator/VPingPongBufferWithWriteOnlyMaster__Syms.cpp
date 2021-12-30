// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"
#include "VPingPongBufferWithWriteOnlyMaster.h"
#include "VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster.h"
#include "VPingPongBufferWithWriteOnlyMaster_PingPongBuffer.h"

// FUNCTIONS
VPingPongBufferWithWriteOnlyMaster__Syms::VPingPongBufferWithWriteOnlyMaster__Syms(VPingPongBufferWithWriteOnlyMaster* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__PingPongBufferWithWriteOnlyMaster (Verilated::catName(topp->name(),"PingPongBufferWithWriteOnlyMaster"))
	, TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1 (Verilated::catName(topp->name(),"PingPongBufferWithWriteOnlyMaster.pingPongBuffer_1"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->PingPongBufferWithWriteOnlyMaster  = &TOP__PingPongBufferWithWriteOnlyMaster;
    TOPp->PingPongBufferWithWriteOnlyMaster->pingPongBuffer_1  = &TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__PingPongBufferWithWriteOnlyMaster.__Vconfigure(this, true);
    TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.configure(this,name(),"PingPongBufferWithWriteOnlyMaster.pingPongBuffer_1");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.varInsert(__Vfinal,"fallSignal", &(TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.fallSignal), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
