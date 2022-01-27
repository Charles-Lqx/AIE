// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO__SYMS_H_
#define VERILATED_VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h"

// INCLUDE MODULE CLASSES
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo___024root TOP;
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo;
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection;

    // SCOPE NAMES
    VerilatedScope __Vscope_Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection;

    // CONSTRUCTORS
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms(VerilatedContext* contextp, const char* namep, VStream2Axi4WriteOnlyMasterInterfaceAddFifo* modelp);
    ~VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
