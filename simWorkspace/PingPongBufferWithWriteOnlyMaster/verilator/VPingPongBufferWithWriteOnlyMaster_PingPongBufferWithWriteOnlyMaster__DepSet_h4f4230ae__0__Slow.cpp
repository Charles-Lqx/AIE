// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster.h"

VL_ATTR_COLD void VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___ctor_var_reset(VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPingPongBufferWithWriteOnlyMaster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster___ctor_var_reset\n"); );
    // Body
    vlSelf->streamIn_valid = VL_RAND_RESET_I(1);
    vlSelf->streamIn_ready = VL_RAND_RESET_I(1);
    vlSelf->streamIn_payload = VL_RAND_RESET_I(32);
    vlSelf->startIn = VL_RAND_RESET_I(1);
    vlSelf->bufferDepthIn = VL_RAND_RESET_I(8);
    vlSelf->interruptOut = VL_RAND_RESET_I(1);
    vlSelf->startAddr = VL_RAND_RESET_I(32);
    vlSelf->offset = VL_RAND_RESET_I(32);
    vlSelf->pathNumb = VL_RAND_RESET_I(8);
    vlSelf->full_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->full_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->full_aw_payload_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__full_aw_payload_region = VL_RAND_RESET_I(4);
    vlSelf->full_aw_payload_len = VL_RAND_RESET_I(8);
    vlSelf->__PVT__full_aw_payload_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__full_aw_payload_burst = VL_RAND_RESET_I(2);
    vlSelf->__PVT__full_aw_payload_cache = VL_RAND_RESET_I(4);
    vlSelf->__PVT__full_aw_payload_qos = VL_RAND_RESET_I(4);
    vlSelf->__PVT__full_aw_payload_prot = VL_RAND_RESET_I(3);
    vlSelf->full_w_valid = VL_RAND_RESET_I(1);
    vlSelf->full_w_ready = VL_RAND_RESET_I(1);
    vlSelf->full_w_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__full_w_payload_strb = VL_RAND_RESET_I(4);
    vlSelf->full_w_payload_last = VL_RAND_RESET_I(1);
    vlSelf->full_b_valid = VL_RAND_RESET_I(1);
    vlSelf->full_b_ready = VL_RAND_RESET_I(1);
    vlSelf->full_b_payload_resp = VL_RAND_RESET_I(2);
    vlSelf->aresetn = VL_RAND_RESET_I(1);
    vlSelf->aclk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1_s_axis_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1_m_axis_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1_m_axis_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_push_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_push_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferDepthReg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_willClear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_valueNext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__inCounter_value = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_willClear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_valueNext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__outCounter_value = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__isWriteBufferA = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__isReadBufferA = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__inCounterWillOverflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__outCounterWillOverflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveResetSignal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveSignal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__startReceiveSignal_regNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__realStartSignal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__lastBurstCompleteSignal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__isAfterResetState = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferAPop_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA_io_pop_rData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pingPongBuffer_1__DOT__pipedBufferBPop_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB_io_pop_rData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_wantStart = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__outputInterruptSignalState = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__canReadData = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__readyForNextTransfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__outputStartSignalReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l226 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l231 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateReg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pingPongBuffer_1__DOT__pingPongBufferStateMachine_stateNext = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l146 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l153 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__when_PingPongBuffer_l166 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_pushing = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_popping = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoA__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_pushing = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_popping = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->__PVT__pingPongBuffer_1__DOT__bufferFifoB__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdly__pingPongBuffer_1__DOT__isReadBufferA = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pingPongBuffer_1__DOT__isWriteBufferA = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pingPongBuffer_1__DOT__outputStartSignalReg = VL_RAND_RESET_I(1);
}
