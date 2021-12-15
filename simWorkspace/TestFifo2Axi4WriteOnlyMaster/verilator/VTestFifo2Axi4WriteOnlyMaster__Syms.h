// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VTestFifo2Axi4WriteOnlyMaster__Syms_H_
#define _VTestFifo2Axi4WriteOnlyMaster__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VTestFifo2Axi4WriteOnlyMaster.h"
#include "VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster.h"
#include "VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VTestFifo2Axi4WriteOnlyMaster__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTestFifo2Axi4WriteOnlyMaster* TOPp;
    VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster TOP__TestFifo2Axi4WriteOnlyMaster;
    VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_TestFifo2Axi4WriteOnlyMaster__axi4Interconnection;
    
    // CREATORS
    VTestFifo2Axi4WriteOnlyMaster__Syms(VTestFifo2Axi4WriteOnlyMaster* topp, const char* namep);
    ~VTestFifo2Axi4WriteOnlyMaster__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
