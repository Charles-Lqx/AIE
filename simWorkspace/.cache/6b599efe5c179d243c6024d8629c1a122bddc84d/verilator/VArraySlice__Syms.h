// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VARRAYSLICE__SYMS_H_
#define VERILATED_VARRAYSLICE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VArraySlice.h"

// INCLUDE MODULE CLASSES
#include "VArraySlice___024root.h"
#include "VArraySlice_ArraySlice.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VArraySlice__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VArraySlice* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VArraySlice___024root          TOP;
    VArraySlice_ArraySlice         TOP__ArraySlice;

    // SCOPE NAMES
    VerilatedScope __Vscope_ArraySlice;

    // CONSTRUCTORS
    VArraySlice__Syms(VerilatedContext* contextp, const char* namep, VArraySlice* modelp);
    ~VArraySlice__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
