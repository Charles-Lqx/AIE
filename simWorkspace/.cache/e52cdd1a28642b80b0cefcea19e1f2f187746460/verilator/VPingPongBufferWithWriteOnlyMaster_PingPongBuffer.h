// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#ifndef _VPingPongBufferWithWriteOnlyMaster_PingPongBuffer_H_
#define _VPingPongBufferWithWriteOnlyMaster_PingPongBuffer_H_

#include "verilated.h"
#include "VPingPongBufferWithWriteOnlyMaster__Dpi.h"

class VPingPongBufferWithWriteOnlyMaster__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VPingPongBufferWithWriteOnlyMaster_PingPongBuffer) {
  public:
    
    // PORTS
    VL_IN8(__PVT__startIn,0,0);
    VL_OUT8(__PVT__startOut,0,0);
    VL_IN8(__PVT__interruptIn,0,0);
    VL_IN8(__PVT__aresetn,0,0);
    VL_IN8(__PVT__aclk,0,0);
    VL_IN8(__PVT__s_axis_valid,0,0);
    VL_OUT8(__PVT__s_axis_ready,0,0);
    VL_IN8(__PVT__bufferDepthIn,7,0);
    VL_OUT8(__PVT__interruptOut,0,0);
    VL_OUT8(__PVT__m_axis_valid,0,0);
    VL_IN8(__PVT__m_axis_ready,0,0);
    VL_OUT8(__PVT__bufferDepthOut,7,0);
    VL_IN(__PVT__s_axis_payload,31,0);
    VL_IN(__PVT__dataOffsetIn,31,0);
    VL_OUT(__PVT__m_axis_payload,31,0);
    VL_OUT(__PVT__dataOffsetOut,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT___zz_1,0,0);
    VL_SIG8(__PVT___zz_2,0,0);
    VL_SIG8(__PVT__outputStartSignalReg,0,0);
    VL_SIG8(__PVT__bufferFifoA_io_push_valid,0,0);
    VL_SIG8(__PVT__bufferFifoA_io_pop_ready,0,0);
    VL_SIG8(__PVT__bufferFifoB_io_push_valid,0,0);
    VL_SIG8(__PVT__bufferFifoB_io_pop_ready,0,0);
    VL_SIG8(__PVT__bufferFifoA_io_pop_valid,0,0);
    VL_SIG8(__PVT__bufferFifoB_io_pop_valid,0,0);
    VL_SIG8(__PVT__bufferDepthReg,7,0);
    VL_SIG8(__PVT__inCounter_willIncrement,0,0);
    VL_SIG8(__PVT__inCounter_willClear,0,0);
    VL_SIG8(__PVT__inCounter_valueNext,7,0);
    VL_SIG8(__PVT__inCounter_value,7,0);
    VL_SIG8(__PVT__outCounter_willIncrement,0,0);
    VL_SIG8(__PVT__outCounter_willClear,0,0);
    VL_SIG8(__PVT__outCounter_valueNext,7,0);
    VL_SIG8(__PVT__outCounter_value,7,0);
    VL_SIG8(__PVT__isWriteBufferA,0,0);
    VL_SIG8(__PVT__isReadBufferA,0,0);
    VL_SIG8(__PVT__inCounterWillOverflow,0,0);
    VL_SIG8(__PVT__outCounterWillOverflow,0,0);
    VL_SIG8(__PVT__startReceiveResetSignal,0,0);
    VL_SIG8(__PVT__startReceiveSignal,0,0);
    VL_SIG8(__PVT__startReceiveSignal_regNext,0,0);
    VL_SIG8(__PVT__realStartSignal,0,0);
    VL_SIG8(__PVT__startReceiveSignal_regNext_1,0,0);
    VL_SIG8(fallSignal,0,0);
    VL_SIG8(__PVT__lastBurstCompleteSignal,0,0);
    VL_SIG8(__PVT__isAfterResetState,0,0);
    VL_SIG8(__PVT__pingPongBufferStateMachine_wantStart,0,0);
    VL_SIG8(__PVT__outputInterruptSignalState,0,0);
    VL_SIG8(__PVT__when_PingPongBuffer_l209,0,0);
    VL_SIG8(__PVT__canReadData,0,0);
    VL_SIG8(__PVT__readyForNextTransfer,0,0);
    VL_SIG8(__PVT__when_PingPongBuffer_l224,0,0);
    VL_SIG8(__PVT__when_PingPongBuffer_l229,0,0);
    VL_SIG8(__PVT__pingPongBufferStateMachine_stateReg,1,0);
    VL_SIG8(__PVT__pingPongBufferStateMachine_stateNext,1,0);
    VL_SIG8(__PVT__when_PingPongBuffer_l144,0,0);
    VL_SIG8(__PVT__when_PingPongBuffer_l151,0,0);
    VL_SIG8(__PVT__when_PingPongBuffer_l164,0,0);
    VL_SIG8(__PVT__when_StateMachine_l235,0,0);
    VL_SIG8(__PVT__bufferFifoA__DOT___zz_1,0,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_pushPtr_valueNext,7,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_popPtr_valueNext,7,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_popPtr_value,7,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_ptrMatch,0,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_pushing,0,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_popping,0,0);
    VL_SIG8(__PVT__bufferFifoA__DOT__logic_full,0,0);
    VL_SIG8(__PVT__bufferFifoA__DOT___zz_io_pop_valid,0,0);
    VL_SIG8(__PVT__bufferFifoB__DOT___zz_1,0,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_pushPtr_willIncrement,0,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_pushPtr_valueNext,7,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement,0,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_popPtr_valueNext,7,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_popPtr_value,7,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_ptrMatch,0,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_risingOccupancy,0,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_pushing,0,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_popping,0,0);
    VL_SIG8(__PVT__bufferFifoB__DOT__logic_full,0,0);
    VL_SIG8(__PVT__bufferFifoB__DOT___zz_io_pop_valid,0,0);
    VL_SIG(__PVT__bufferFifoA_io_push_payload,31,0);
    VL_SIG(__PVT__bufferFifoB_io_push_payload,31,0);
    VL_SIG(__PVT__offsetA,31,0);
    VL_SIG(__PVT__offsetB,31,0);
    VL_SIG(__PVT__outputDataOffsetReg,31,0);
    VL_SIG(__PVT__bufferFifoA__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(__PVT__bufferFifoB__DOT___zz_logic_ram_port0,31,0);
    VL_SIG(__PVT__bufferFifoA__DOT__logic_ram[256],31,0);
    VL_SIG(__PVT__bufferFifoB__DOT__logic_ram[256],31,0);
    
    // LOCAL VARIABLES
    static VL_ST_SIG8(__Vtable1___PVT__m_axis_valid[128],0,0);
    VL_SIG8(__Vtableidx1,6,0);
    VL_SIG8(__Vdly__isReadBufferA,0,0);
    VL_SIG8(__Vdly__readyForNextTransfer,0,0);
    VL_SIG8(__Vdly__isWriteBufferA,0,0);
    VL_SIG8(__Vdly__outputStartSignalReg,0,0);
    VL_SIG8(__Vdly__pingPongBufferStateMachine_stateReg,1,0);
    VL_SIG8(__Vdly__isAfterResetState,0,0);
    VL_SIG8(__Vdly__bufferFifoA__DOT__logic_pushPtr_value,7,0);
    VL_SIG8(__Vdly__bufferFifoB__DOT__logic_pushPtr_value,7,0);
    VL_SIG(__Vdly__offsetA,31,0);
    VL_SIG(__Vdly__offsetB,31,0);
    
    // INTERNAL VARIABLES
  private:
    VPingPongBufferWithWriteOnlyMaster__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VPingPongBufferWithWriteOnlyMaster_PingPongBuffer& operator= (const VPingPongBufferWithWriteOnlyMaster_PingPongBuffer&);  ///< Copying not allowed
    VPingPongBufferWithWriteOnlyMaster_PingPongBuffer(const VPingPongBufferWithWriteOnlyMaster_PingPongBuffer&);  ///< Copying not allowed
  public:
    VPingPongBufferWithWriteOnlyMaster_PingPongBuffer(const char* name="TOP");
    ~VPingPongBufferWithWriteOnlyMaster_PingPongBuffer();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* symsp, bool first);
    static void _combo__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__11(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _combo__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__13(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _combo__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__9(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__10(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__12(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__8(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__6(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _sequent__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__7(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__1(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void _settle__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
