// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPingPongBufferWithWriteOnlyMaster__Syms.h"


//======================

void VPingPongBufferWithWriteOnlyMaster::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPingPongBufferWithWriteOnlyMaster* t=(VPingPongBufferWithWriteOnlyMaster*)userthis;
    VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VPingPongBufferWithWriteOnlyMaster::traceChgThis(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity 
					      >> 2U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 5U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 8U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 5U)) | (vlTOPp->__Vm_traceActivity 
					      >> 8U))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__2(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast)) 
			     & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__m_axi_wlast_regNext))));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__3(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wlast));
	vcdp->chgBit  (c+3,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_valid));
	vcdp->chgBus  (c+4,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_payload),32);
	vcdp->chgBit  (c+5,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))));
	vcdp->chgBit  (c+6,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_valid));
	vcdp->chgBus  (c+7,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch)) 
			      << 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
						 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value))))),9);
	vcdp->chgBus  (c+8,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch)) 
			      << 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value) 
						 - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value))))),9);
	vcdp->chgBit  (c+9,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+10,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+11,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full));
	vcdp->chgBit  (c+12,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full)))));
	vcdp->chgBit  (c+13,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_valid));
	vcdp->chgBus  (c+14,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value) 
						  - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value))))),9);
	vcdp->chgBus  (c+15,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy)) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value) 
						  - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value))))),9);
	vcdp->chgBit  (c+16,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full)))));
	vcdp->chgBit  (c+17,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_valid));
	vcdp->chgBus  (c+18,(((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value) 
						  - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value))))),9);
	vcdp->chgBus  (c+19,(((((~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy)) 
				& (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch)) 
			       << 8U) | (0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value) 
						  - (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value))))),9);
	vcdp->chgBit  (c+20,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_wantStart));
	vcdp->chgBit  (c+21,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData));
	vcdp->chgBit  (c+22,((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData)) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA))));
	vcdp->chgBit  (c+23,((((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__canReadData)) 
			      & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA)))));
	vcdp->chgBit  (c+24,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+25,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+26,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_full));
	vcdp->chgBit  (c+27,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+28,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+29,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_full));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__4(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+30,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value)) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+31,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value)) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willIncrement))));
	vcdp->chgBit  (c+32,(((1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)) 
			      & (1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext)))));
	vcdp->chgBit  (c+33,(((3U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)) 
			      & (3U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext)))));
	vcdp->chgBit  (c+34,(((1U != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg)) 
			      & (1U == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext)))));
	vcdp->chgBit  (c+35,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value)) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+36,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value)) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_willIncrement))));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__5(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+37,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid) 
			      & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_full)))));
	vcdp->chgBit  (c+38,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value)) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+39,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value)) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willIncrement))));
	vcdp->chgBit  (c+40,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__m_axis_valid) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready))));
	vcdp->chgBit  (c+41,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value)) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+42,(((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value)) 
			      & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement))));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__6(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+43,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_ready));
	vcdp->chgBit  (c+44,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+45,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_valueNext),8);
	vcdp->chgBit  (c+46,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping));
	vcdp->chgBit  (c+47,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_valid));
	vcdp->chgBus  (c+48,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_push_payload),32);
	vcdp->chgBit  (c+49,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_valid));
	vcdp->chgBus  (c+50,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_push_payload),32);
	vcdp->chgBit  (c+51,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willIncrement));
	vcdp->chgBit  (c+52,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_willClear));
	vcdp->chgBus  (c+53,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_valueNext),8);
	vcdp->chgBit  (c+54,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounterWillOverflow));
	vcdp->chgBit  (c+55,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveResetSignal));
	vcdp->chgBus  (c+56,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext),2);
	vcdp->chgBit  (c+57,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l164));
	vcdp->chgQuad (c+58,(((2U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext))
			       ? ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext))
				   ? VL_ULL(0x46554c4c20)
				   : VL_ULL(0x48414c4620))
			       : ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateNext))
				   ? VL_ULL(0x454d505459)
				   : VL_ULL(0x424f4f5420)))),40);
	vcdp->chgBit  (c+60,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+61,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_valueNext),8);
	vcdp->chgBit  (c+62,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushing));
	vcdp->chgBit  (c+63,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+64,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_valueNext),8);
	vcdp->chgBit  (c+65,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushing));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__7(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+66,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing) 
			      != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popping))));
	vcdp->chgBit  (c+67,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushing) 
			      != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popping))));
	vcdp->chgBit  (c+68,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushing) 
			      != (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popping))));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__8(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+69,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__realStartSignal));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__9(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+70,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid));
	vcdp->chgBus  (c+71,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wdata),32);
	vcdp->chgBit  (c+72,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_s_axis_ready));
	vcdp->chgBit  (c+73,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_valid));
	vcdp->chgBus  (c+74,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_push_payload),32);
	vcdp->chgBit  (c+75,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l97));
	vcdp->chgBit  (c+76,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__when_Axi4WriteOnlyMaster_l160));
	vcdp->chgBit  (c+77,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+78,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_valueNext),8);
	vcdp->chgBit  (c+79,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushing));
	vcdp->chgBit  (c+80,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA_io_pop_ready));
	vcdp->chgBit  (c+81,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB_io_pop_ready));
	vcdp->chgBit  (c+82,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willIncrement));
	vcdp->chgBit  (c+83,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_willClear));
	vcdp->chgBus  (c+84,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_valueNext),8);
	vcdp->chgBit  (c+85,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounterWillOverflow));
	vcdp->chgBit  (c+86,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+87,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_valueNext),8);
	vcdp->chgBit  (c+88,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popping));
	vcdp->chgBit  (c+89,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+90,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_valueNext),8);
	vcdp->chgBit  (c+91,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popping));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__10(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+92,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready));
	vcdp->chgBit  (c+93,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l144));
	vcdp->chgBit  (c+94,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__when_PingPongBuffer_l151));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__11(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+95,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_isBurstComplete));
	vcdp->chgBus  (c+96,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT___zz_logic_ram_port0),32);
	vcdp->chgBit  (c+97,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__m_axi_wlast_regNext));
	vcdp->chgBus  (c+98,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rData),32);
	vcdp->chgBus  (c+99,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT___zz_logic_ram_port0),32);
	vcdp->chgBus  (c+100,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT___zz_logic_ram_port0),32);
	vcdp->chgBit  (c+101,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal_regNext));
	vcdp->chgBit  (c+102,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal_regNext_1));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__12(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+103,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputInterruptSignalState));
	vcdp->chgBit  (c+104,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal));
	vcdp->chgBus  (c+105,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startOffsetReg),32);
	vcdp->chgBus  (c+106,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg) 
					- (IData)(1U)))),8);
	vcdp->chgBit  (c+107,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady));
	vcdp->chgBit  (c+108,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputStartSignalReg));
	vcdp->chgBus  (c+109,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferDepthReg),8);
	vcdp->chgBus  (c+110,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outputDataOffsetReg),32);
	vcdp->chgBus  (c+111,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__burstLengthReg),8);
	vcdp->chgBit  (c+112,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_newBurst));
	vcdp->chgBit  (c+113,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid));
	vcdp->chgBit  (c+114,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3_io_pop_rValid)))));
	vcdp->chgBus  (c+115,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value),8);
	vcdp->chgBit  (c+116,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+117,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value),8);
	vcdp->chgBit  (c+118,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+119,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+120,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_pushPtr_value) 
					- (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__streamFifo_3__DOT__logic_popPtr_value)))),8);
	vcdp->chgBus  (c+121,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value),8);
	vcdp->chgBit  (c+122,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__inCounter_value))));
	vcdp->chgBus  (c+123,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value),8);
	vcdp->chgBit  (c+124,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__outCounter_value))));
	vcdp->chgBit  (c+125,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA));
	vcdp->chgBit  (c+126,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA));
	vcdp->chgBit  (c+127,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isAfterResetState));
	vcdp->chgBus  (c+128,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__offsetA),32);
	vcdp->chgBus  (c+129,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__offsetB),32);
	vcdp->chgBit  (c+130,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isWriteBufferA)))));
	vcdp->chgBus  (c+131,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg),2);
	vcdp->chgBit  (c+132,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__readyForNextTransfer));
	vcdp->chgBit  (c+133,((1U & (~ (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__isReadBufferA)))));
	vcdp->chgQuad (c+134,(((2U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))
			        ? ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))
				    ? VL_ULL(0x46554c4c20)
				    : VL_ULL(0x48414c4620))
			        : ((1U & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__pingPongBufferStateMachine_stateReg))
				    ? VL_ULL(0x454d505459)
				    : VL_ULL(0x424f4f5420)))),40);
	vcdp->chgBus  (c+136,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value),8);
	vcdp->chgBit  (c+137,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+138,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value),8);
	vcdp->chgBit  (c+139,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+140,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+141,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_pushPtr_value) 
					- (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoA__DOT__logic_popPtr_value)))),8);
	vcdp->chgBus  (c+142,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value),8);
	vcdp->chgBit  (c+143,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+144,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value),8);
	vcdp->chgBit  (c+145,((0xffU == (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+146,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+147,((0xffU & ((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_pushPtr_value) 
					- (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__bufferFifoB__DOT__logic_popPtr_value)))),8);
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__13(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+148,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__startReceiveSignal));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__14(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+149,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__lastBurstCompleteSignal));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__15(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+150,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal));
    }
}

void VPingPongBufferWithWriteOnlyMaster::traceChgThis__16(VPingPongBufferWithWriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPingPongBufferWithWriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+151,(vlTOPp->streamIn_valid));
	vcdp->chgBit  (c+152,(vlTOPp->streamIn_ready));
	vcdp->chgBus  (c+153,(vlTOPp->streamIn_payload),32);
	vcdp->chgBit  (c+154,(vlTOPp->startIn));
	vcdp->chgBus  (c+155,(vlTOPp->bufferDepthIn),8);
	vcdp->chgBit  (c+156,(vlTOPp->interruptOut));
	vcdp->chgBus  (c+157,(vlTOPp->dataOffsetIn),32);
	vcdp->chgBit  (c+158,(vlTOPp->full_aw_valid));
	vcdp->chgBit  (c+159,(vlTOPp->full_aw_ready));
	vcdp->chgBus  (c+160,(vlTOPp->full_aw_payload_addr),32);
	vcdp->chgBus  (c+161,(vlTOPp->full_aw_payload_region),4);
	vcdp->chgBus  (c+162,(vlTOPp->full_aw_payload_len),8);
	vcdp->chgBus  (c+163,(vlTOPp->full_aw_payload_size),3);
	vcdp->chgBus  (c+164,(vlTOPp->full_aw_payload_burst),2);
	vcdp->chgBus  (c+165,(vlTOPp->full_aw_payload_cache),4);
	vcdp->chgBus  (c+166,(vlTOPp->full_aw_payload_qos),4);
	vcdp->chgBus  (c+167,(vlTOPp->full_aw_payload_prot),3);
	vcdp->chgBit  (c+168,(vlTOPp->full_w_valid));
	vcdp->chgBit  (c+169,(vlTOPp->full_w_ready));
	vcdp->chgBus  (c+170,(vlTOPp->full_w_payload_data),32);
	vcdp->chgBus  (c+171,(vlTOPp->full_w_payload_strb),4);
	vcdp->chgBit  (c+172,(vlTOPp->full_w_payload_last));
	vcdp->chgBit  (c+173,(vlTOPp->full_b_valid));
	vcdp->chgBit  (c+174,(vlTOPp->full_b_ready));
	vcdp->chgBus  (c+175,(vlTOPp->full_b_payload_resp),2);
	vcdp->chgBit  (c+176,(vlTOPp->aresetn));
	vcdp->chgBit  (c+177,(vlTOPp->aclk));
	vcdp->chgBit  (c+178,(((IData)(vlTOPp->full_b_valid) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlBReady))));
	vcdp->chgBit  (c+179,(((IData)(vlTOPp->aresetn) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__startSendSignal))));
	vcdp->chgBit  (c+180,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater__DOT__axi4Interface_controlAwValidSignal) 
			       & (IData)(vlTOPp->full_aw_ready))));
	vcdp->chgBit  (c+181,(((IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster.__PVT__writeOnlyMater_m_axi_wvalid) 
			       & (IData)(vlTOPp->full_w_ready))));
	vcdp->chgBit  (c+182,(((IData)(vlTOPp->streamIn_valid) 
			       & (IData)(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.__PVT__s_axis_ready))));
	vcdp->chgBit  (c+183,(vlSymsp->TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1.fallSignal));
    }
}
