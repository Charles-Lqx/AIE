// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"
#include "VPingPongBufferWithWriteOnlyMaster.h"

// FUNCTIONS
VPingPongBufferWithWriteOnlyMaster__Syms::VPingPongBufferWithWriteOnlyMaster__Syms(VPingPongBufferWithWriteOnlyMaster* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
