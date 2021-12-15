// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VTestFifo2Axi4WriteMaster__Syms_H_
#define _VTestFifo2Axi4WriteMaster__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VTestFifo2Axi4WriteMaster.h"
#include "VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster.h"
#include "VTestFifo2Axi4WriteMaster_TestAxi4WriteMaster.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VTestFifo2Axi4WriteMaster__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTestFifo2Axi4WriteMaster*     TOPp;
    VTestFifo2Axi4WriteMaster_TestFifo2Axi4WriteMaster TOP__TestFifo2Axi4WriteMaster;
    VTestFifo2Axi4WriteMaster_TestAxi4WriteMaster TOP__TestFifo2Axi4WriteMaster__axi4Interconnection;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_TestFifo2Axi4WriteMaster__axi4Interconnection;
    
    // CREATORS
    VTestFifo2Axi4WriteMaster__Syms(VTestFifo2Axi4WriteMaster* topp, const char* namep);
    ~VTestFifo2Axi4WriteMaster__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
