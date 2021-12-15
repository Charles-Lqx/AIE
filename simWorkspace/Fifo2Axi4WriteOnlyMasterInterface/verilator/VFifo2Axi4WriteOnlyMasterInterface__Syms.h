// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VFifo2Axi4WriteOnlyMasterInterface__Syms_H_
#define _VFifo2Axi4WriteOnlyMasterInterface__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VFifo2Axi4WriteOnlyMasterInterface.h"
#include "VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface.h"
#include "VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VFifo2Axi4WriteOnlyMasterInterface__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VFifo2Axi4WriteOnlyMasterInterface* TOPp;
    VFifo2Axi4WriteOnlyMasterInterface_Fifo2Axi4WriteOnlyMasterInterface TOP__Fifo2Axi4WriteOnlyMasterInterface;
    VFifo2Axi4WriteOnlyMasterInterface_Axi4WriteOnlyMasterInterface TOP__Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_Fifo2Axi4WriteOnlyMasterInterface__axi4Interconnection;
    
    // CREATORS
    VFifo2Axi4WriteOnlyMasterInterface__Syms(VFifo2Axi4WriteOnlyMasterInterface* topp, const char* namep);
    ~VFifo2Axi4WriteOnlyMasterInterface__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
