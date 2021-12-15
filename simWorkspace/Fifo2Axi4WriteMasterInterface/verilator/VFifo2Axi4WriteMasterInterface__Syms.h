// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VFifo2Axi4WriteMasterInterface__Syms_H_
#define _VFifo2Axi4WriteMasterInterface__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VFifo2Axi4WriteMasterInterface.h"
#include "VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface.h"
#include "VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VFifo2Axi4WriteMasterInterface__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VFifo2Axi4WriteMasterInterface* TOPp;
    VFifo2Axi4WriteMasterInterface_Fifo2Axi4WriteMasterInterface TOP__Fifo2Axi4WriteMasterInterface;
    VFifo2Axi4WriteMasterInterface_Axi4WriteMasterInterface TOP__Fifo2Axi4WriteMasterInterface__axi4Interconnection;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_Fifo2Axi4WriteMasterInterface__axi4Interconnection;
    
    // CREATORS
    VFifo2Axi4WriteMasterInterface__Syms(VFifo2Axi4WriteMasterInterface* topp, const char* namep);
    ~VFifo2Axi4WriteMasterInterface__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
