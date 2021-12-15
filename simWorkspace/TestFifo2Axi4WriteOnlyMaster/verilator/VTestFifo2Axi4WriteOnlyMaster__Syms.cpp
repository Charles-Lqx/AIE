// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTestFifo2Axi4WriteOnlyMaster__Syms.h"
#include "VTestFifo2Axi4WriteOnlyMaster.h"
#include "VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster.h"
#include "VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster.h"

// FUNCTIONS
VTestFifo2Axi4WriteOnlyMaster__Syms::VTestFifo2Axi4WriteOnlyMaster__Syms(VTestFifo2Axi4WriteOnlyMaster* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__TestFifo2Axi4WriteOnlyMaster (Verilated::catName(topp->name(),"TestFifo2Axi4WriteOnlyMaster"))
	, TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection (Verilated::catName(topp->name(),"TestFifo2Axi4WriteOnlyMaster.axi4Interconnection"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->TestFifo2Axi4WriteOnlyMaster  = &TOP__TestFifo2Axi4WriteOnlyMaster;
    TOPp->TestFifo2Axi4WriteOnlyMaster->axi4Interconnection  = &TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__TestFifo2Axi4WriteOnlyMaster.__Vconfigure(this, true);
    TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.configure(this,name(),"TestFifo2Axi4WriteOnlyMaster.axi4Interconnection");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.varInsert(__Vfinal,"debugAddress", &(TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.varInsert(__Vfinal,"handshakeCounter", &(TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.handshakeCounter), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
	__Vscope_TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.varInsert(__Vfinal,"writeCounter", &(TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
    }
}
