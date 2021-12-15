// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VFifo2Axi4WriteOnlyMasterInterface__Syms.h"
#include "VFifo2Axi4WriteOnlyMasterInterface.h"
#include "VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface.h"
#include "VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface.h"

// FUNCTIONS
VFifo2Axi4WriteOnlyMasterInterface__Syms::VFifo2Axi4WriteOnlyMasterInterface__Syms(VFifo2Axi4WriteOnlyMasterInterface* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__Fifo2Axi4WriteOnlyMasterInterface (Verilated::catName(topp->name(),"Fifo2Axi4WriteOnlyMasterInterface"))
	, TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection (Verilated::catName(topp->name(),"Fifo2Axi4WriteOnlyMasterInterface.axi4Interconnection"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->Fifo2Axi4WriteOnlyMasterInterface  = &TOP__Fifo2Axi4WriteOnlyMasterInterface;
    TOPp->Fifo2Axi4WriteOnlyMasterInterface->axi4Interconnection  = &TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Fifo2Axi4WriteOnlyMasterInterface.__Vconfigure(this, true);
    TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.configure(this,name(),"Fifo2Axi4WriteOnlyMasterInterface.axi4Interconnection");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.varInsert(__Vfinal,"debugAddress", &(TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.debugAddress), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.varInsert(__Vfinal,"handshakeCounter", &(TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.handshakeCounter), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
	__Vscope_Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.varInsert(__Vfinal,"writeCounter", &(TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection.writeCounter), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
    }
}
