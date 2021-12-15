// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTestFifo2Axi4WriteMaster__Syms.h"
#include "VTestFifo2Axi4WriteMaster.h"
#include "VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster.h"
#include "VTestFifo2Axi4WriteMaster_TestAxi4WriteMaster.h"

// FUNCTIONS
VTestFifo2Axi4WriteMaster__Syms::VTestFifo2Axi4WriteMaster__Syms(VTestFifo2Axi4WriteMaster* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__TestFifo2Axi4WriteMaster  (Verilated::catName(topp->name(),"TestFifo2Axi4WriteMaster"))
	, TOP__TestFifo2Axi4WriteMaster__axi4Interconnection (Verilated::catName(topp->name(),"TestFifo2Axi4WriteMaster.axi4Interconnection"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->TestFifo2Axi4WriteMaster  = &TOP__TestFifo2Axi4WriteMaster;
    TOPp->TestFifo2Axi4WriteMaster->axi4Interconnection  = &TOP__TestFifo2Axi4WriteMaster__axi4Interconnection;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__TestFifo2Axi4WriteMaster.__Vconfigure(this, true);
    TOP__TestFifo2Axi4WriteMaster__axi4Interconnection.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_TestFifo2Axi4WriteMaster__axi4Interconnection.configure(this,name(),"TestFifo2Axi4WriteMaster.axi4Interconnection");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_TestFifo2Axi4WriteMaster__axi4Interconnection.varInsert(__Vfinal,"axi4Interface_address", &(TOP__TestFifo2Axi4WriteMaster__axi4Interconnection.axi4Interface_address), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
    }
}
