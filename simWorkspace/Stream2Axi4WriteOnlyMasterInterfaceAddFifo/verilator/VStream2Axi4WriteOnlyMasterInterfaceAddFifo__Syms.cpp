// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h"

// FUNCTIONS
VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms::VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms(VStream2Axi4WriteOnlyMasterInterfaceAddFifo* topp, const char* namep)
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
