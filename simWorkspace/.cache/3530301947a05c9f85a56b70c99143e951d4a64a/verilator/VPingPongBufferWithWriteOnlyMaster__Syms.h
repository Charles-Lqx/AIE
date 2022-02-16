// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VPingPongBufferWithWriteOnlyMaster__Syms_H_
#define _VPingPongBufferWithWriteOnlyMaster__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VPingPongBufferWithWriteOnlyMaster.h"
#include "VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster.h"
#include "VPingPongBufferWithWriteOnlyMaster_PingPongBuffer.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VPingPongBufferWithWriteOnlyMaster__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VPingPongBufferWithWriteOnlyMaster* TOPp;
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster TOP__PingPongBufferWithWriteOnlyMaster;
    VPingPongBufferWithWriteOnlyMaster_PingPongBuffer TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1;
    
    // CREATORS
    VPingPongBufferWithWriteOnlyMaster__Syms(VPingPongBufferWithWriteOnlyMaster* topp, const char* namep);
    ~VPingPongBufferWithWriteOnlyMaster__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard