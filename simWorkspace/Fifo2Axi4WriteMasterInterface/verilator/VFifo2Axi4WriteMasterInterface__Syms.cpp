// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VFifo2Axi4WriteMasterInterface__Syms.h"
#include "VFifo2Axi4WriteMasterInterface.h"
#include "VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface.h"
#include "VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface.h"

// FUNCTIONS
VFifo2Axi4WriteMasterInterface__Syms::VFifo2Axi4WriteMasterInterface__Syms(VFifo2Axi4WriteMasterInterface* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__Fifo2Axi4WriteMasterInterface (Verilated::catName(topp->name(),"Fifo2Axi4WriteMasterInterface"))
	, TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection (Verilated::catName(topp->name(),"Fifo2Axi4WriteMasterInterface.axi4Interconnection"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->Fifo2Axi4WriteMasterInterface  = &TOP__Fifo2Axi4WriteMasterInterface;
    TOPp->Fifo2Axi4WriteMasterInterface->axi4Interconnection  = &TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Fifo2Axi4WriteMasterInterface.__Vconfigure(this, true);
    TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_Fifo2Axi4WriteMasterInterface__axi4Interconnection.configure(this,name(),"Fifo2Axi4WriteMasterInterface.axi4Interconnection");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_Fifo2Axi4WriteMasterInterface__axi4Interconnection.varInsert(__Vfinal,"axi4Interface_address", &(TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection.axi4Interface_address), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
    }
}
