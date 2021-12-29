// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms_H_
#define _VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h"

// SYMS CLASS
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* TOPp;
    
    // CREATORS
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms(VStream2Axi4WriteOnlyMasterInterfaceAddFifo* topp, const char* namep);
    ~VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
