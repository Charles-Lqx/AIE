// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestFifo2Axi4WriteOnlyMaster.h for the primary calling header

#ifndef _VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster_H_
#define _VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster_H_

#include "verilated.h"
#include "VTestFifo2Axi4WriteOnlyMaster__Dpi.h"

class VTestFifo2Axi4WriteOnlyMaster__Syms;
class VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster;
class VerilatedVcd;

//----------

VL_MODULE(VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster) {
  public:
    // CELLS
    VTestFifo2Axi4WriteOnlyMaster_TestAxi4WriteOnlyMaster*	axi4Interconnection;
    
    // PORTS
    VL_IN8(resetn,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(fifoInterface_valid,0,0);
    VL_OUT8(fifoInterface_ready,0,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_aw_valid,0,0);
    VL_IN8(axi4WriteOnlyMasterInterface_aw_ready,0,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_aw_payload_id,0,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_aw_payload_region,3,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_aw_payload_len,7,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_aw_payload_size,2,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_aw_payload_burst,1,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_aw_payload_lock,0,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_aw_payload_cache,3,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_aw_payload_qos,3,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_aw_payload_prot,2,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_w_valid,0,0);
    VL_IN8(axi4WriteOnlyMasterInterface_w_ready,0,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_w_payload_strb,3,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_w_payload_last,0,0);
    VL_IN8(axi4WriteOnlyMasterInterface_b_valid,0,0);
    VL_OUT8(axi4WriteOnlyMasterInterface_b_ready,0,0);
    VL_IN8(axi4WriteOnlyMasterInterface_b_payload_id,0,0);
    VL_IN8(axi4WriteOnlyMasterInterface_b_payload_resp,1,0);
    VL_IN(fifoInterface_payload,31,0);
    VL_OUT(axi4WriteOnlyMasterInterface_aw_payload_addr,31,0);
    VL_OUT(axi4WriteOnlyMasterInterface_w_payload_data,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__fifoInstance_io_pop_valid,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT___zz_1,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_pushPtr_valueNext,4,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_pushPtr_value,4,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_popPtr_valueNext,4,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_popPtr_value,4,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_ptrMatch,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_pushing,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_popping,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT__logic_full,0,0);
    VL_SIG8(__PVT__fifoInstance__DOT___zz_io_pop_valid,0,0);
    VL_SIG(__PVT__fifoInstance__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(__PVT__fifoInstance__DOT__logic_ram[32],31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0,4,0);
    VL_SIG8(__Vdlyvset__fifoInstance__DOT__logic_ram__v0,0,0);
    VL_SIG(__Vdlyvval__fifoInstance__DOT__logic_ram__v0,31,0);
    
    // INTERNAL VARIABLES
  private:
    VTestFifo2Axi4WriteOnlyMaster__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster& operator= (const VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster&);  ///< Copying not allowed
    VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster(const VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster&);  ///< Copying not allowed
  public:
    VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster(const char* name="TOP");
    ~VTestFifo2Axi4WriteOnlyMaster_TestFifo2Axi4WriteOnlyMaster();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VTestFifo2Axi4WriteOnlyMaster__Syms* symsp, bool first);
    static void _combo__TOP__TestFifo2Axi4WriteOnlyMaster__5(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__TestFifo2Axi4WriteOnlyMaster__2(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__TestFifo2Axi4WriteOnlyMaster__3(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__TestFifo2Axi4WriteOnlyMaster__4(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__TestFifo2Axi4WriteOnlyMaster__6(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__TestFifo2Axi4WriteOnlyMaster__1(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
