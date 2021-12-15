// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestFifo2Axi4WriteOnlyMaster__Syms.h"


//======================

void VTestFifo2Axi4WriteOnlyMaster::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTestFifo2Axi4WriteOnlyMaster* t=(VTestFifo2Axi4WriteOnlyMaster*)userthis;
    VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTestFifo2Axi4WriteOnlyMaster::traceChgThis(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity 
					      >> 3U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTestFifo2Axi4WriteOnlyMaster::traceChgThis__2(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,((1U & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full)))));
	vcdp->chgBit  (c+2,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__wValid));
	vcdp->chgBus  (c+3,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__wdata),32);
	vcdp->chgBit  (c+4,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoReady));
	vcdp->chgBit  (c+5,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance_io_pop_valid));
	vcdp->chgBus  (c+6,(((((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy) 
			       & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch)) 
			      << 5U) | (0x1fU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
						 - (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value))))),6);
	vcdp->chgBus  (c+7,(((((~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy)) 
			       & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch)) 
			      << 5U) | (0x1fU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value) 
						 - (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value))))),6);
	vcdp->chgBit  (c+8,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement));
	vcdp->chgBit  (c+9,(((0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value)) 
			     & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+10,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+11,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popping));
	vcdp->chgBit  (c+12,(((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+13,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_full));
	vcdp->chgBit  (c+14,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_fifo_fire));
    }
}

void VTestFifo2Axi4WriteOnlyMaster::traceChgThis__3(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+15,(((0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value)) 
			      & (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+16,(((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushing) 
			      != (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popping))));
    }
}

void VTestFifo2Axi4WriteOnlyMaster::traceChgThis__4(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+17,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+18,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext),5);
	vcdp->chgBit  (c+19,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushing));
    }
}

void VTestFifo2Axi4WriteOnlyMaster::traceChgThis__5(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+20,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_valueNext),5);
    }
}

void VTestFifo2Axi4WriteOnlyMaster::traceChgThis__6(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+21,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_controlAwValid));
	vcdp->chgBus  (c+22,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value),5);
	vcdp->chgBit  (c+23,((0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+24,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value),5);
	vcdp->chgBit  (c+25,((0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+26,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+27,((0x1fU & ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
				       - (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_popPtr_value)))),5);
	vcdp->chgBus  (c+28,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_0),32);
	vcdp->chgBus  (c+29,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_1),32);
	vcdp->chgBus  (c+30,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_2),32);
	vcdp->chgBus  (c+31,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_3),32);
	vcdp->chgBus  (c+32,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_4),32);
	vcdp->chgBus  (c+33,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_5),32);
	vcdp->chgBus  (c+34,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_6),32);
	vcdp->chgBus  (c+35,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_7),32);
	vcdp->chgBus  (c+36,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_8),32);
	vcdp->chgBus  (c+37,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_9),32);
	vcdp->chgBus  (c+38,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_10),32);
	vcdp->chgBus  (c+39,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_11),32);
	vcdp->chgBus  (c+40,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_12),32);
	vcdp->chgBus  (c+41,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_13),32);
	vcdp->chgBus  (c+42,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_14),32);
	vcdp->chgBus  (c+43,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_15),32);
	vcdp->chgBus  (c+44,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_16),32);
	vcdp->chgBus  (c+45,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_17),32);
	vcdp->chgBus  (c+46,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_18),32);
	vcdp->chgBus  (c+47,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_19),32);
	vcdp->chgBus  (c+48,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_20),32);
	vcdp->chgBus  (c+49,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_21),32);
	vcdp->chgBus  (c+50,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_22),32);
	vcdp->chgBus  (c+51,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_23),32);
	vcdp->chgBus  (c+52,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_24),32);
	vcdp->chgBus  (c+53,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_25),32);
	vcdp->chgBus  (c+54,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_26),32);
	vcdp->chgBus  (c+55,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_27),32);
	vcdp->chgBus  (c+56,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_28),32);
	vcdp->chgBus  (c+57,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_29),32);
	vcdp->chgBus  (c+58,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_30),32);
	vcdp->chgBus  (c+59,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__fifoDataBuffer_31),32);
	vcdp->chgBit  (c+60,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_isTransferAfterReset));
	vcdp->chgBus  (c+61,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_initialAddress),32);
    }
}

void VTestFifo2Axi4WriteOnlyMaster::traceChgThis__7(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+62,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT___zz_logic_ram_port0),32);
	vcdp->chgBus  (c+63,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[0]),32);
	vcdp->chgBus  (c+64,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[1]),32);
	vcdp->chgBus  (c+65,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[2]),32);
	vcdp->chgBus  (c+66,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[3]),32);
	vcdp->chgBus  (c+67,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[4]),32);
	vcdp->chgBus  (c+68,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[5]),32);
	vcdp->chgBus  (c+69,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[6]),32);
	vcdp->chgBus  (c+70,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[7]),32);
	vcdp->chgBus  (c+71,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[8]),32);
	vcdp->chgBus  (c+72,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[9]),32);
	vcdp->chgBus  (c+73,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[10]),32);
	vcdp->chgBus  (c+74,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[11]),32);
	vcdp->chgBus  (c+75,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[12]),32);
	vcdp->chgBus  (c+76,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[13]),32);
	vcdp->chgBus  (c+77,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[14]),32);
	vcdp->chgBus  (c+78,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[15]),32);
	vcdp->chgBus  (c+79,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[16]),32);
	vcdp->chgBus  (c+80,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[17]),32);
	vcdp->chgBus  (c+81,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[18]),32);
	vcdp->chgBus  (c+82,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[19]),32);
	vcdp->chgBus  (c+83,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[20]),32);
	vcdp->chgBus  (c+84,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[21]),32);
	vcdp->chgBus  (c+85,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[22]),32);
	vcdp->chgBus  (c+86,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[23]),32);
	vcdp->chgBus  (c+87,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[24]),32);
	vcdp->chgBus  (c+88,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[25]),32);
	vcdp->chgBus  (c+89,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[26]),32);
	vcdp->chgBus  (c+90,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[27]),32);
	vcdp->chgBus  (c+91,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[28]),32);
	vcdp->chgBus  (c+92,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[29]),32);
	vcdp->chgBus  (c+93,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[30]),32);
	vcdp->chgBus  (c+94,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster.__PVT__fifoInstance__DOT__logic_ram[31]),32);
    }
}

void VTestFifo2Axi4WriteOnlyMaster::traceChgThis__8(VTestFifo2Axi4WriteOnlyMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestFifo2Axi4WriteOnlyMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+95,(vlTOPp->fifoInterface_valid));
	vcdp->chgBit  (c+96,(vlTOPp->fifoInterface_ready));
	vcdp->chgBus  (c+97,(vlTOPp->fifoInterface_payload),32);
	vcdp->chgBit  (c+98,(vlTOPp->axi4WriteOnlyMasterInterface_aw_valid));
	vcdp->chgBit  (c+99,(vlTOPp->axi4WriteOnlyMasterInterface_aw_ready));
	vcdp->chgBus  (c+100,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_addr),32);
	vcdp->chgBus  (c+101,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_id),1);
	vcdp->chgBus  (c+102,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_region),4);
	vcdp->chgBus  (c+103,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_len),8);
	vcdp->chgBus  (c+104,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_size),3);
	vcdp->chgBus  (c+105,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_burst),2);
	vcdp->chgBus  (c+106,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_lock),1);
	vcdp->chgBus  (c+107,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_cache),4);
	vcdp->chgBus  (c+108,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_qos),4);
	vcdp->chgBus  (c+109,(vlTOPp->axi4WriteOnlyMasterInterface_aw_payload_prot),3);
	vcdp->chgBit  (c+110,(vlTOPp->axi4WriteOnlyMasterInterface_w_valid));
	vcdp->chgBit  (c+111,(vlTOPp->axi4WriteOnlyMasterInterface_w_ready));
	vcdp->chgBus  (c+112,(vlTOPp->axi4WriteOnlyMasterInterface_w_payload_data),32);
	vcdp->chgBus  (c+113,(vlTOPp->axi4WriteOnlyMasterInterface_w_payload_strb),4);
	vcdp->chgBit  (c+114,(vlTOPp->axi4WriteOnlyMasterInterface_w_payload_last));
	vcdp->chgBit  (c+115,(vlTOPp->axi4WriteOnlyMasterInterface_b_valid));
	vcdp->chgBit  (c+116,(vlTOPp->axi4WriteOnlyMasterInterface_b_ready));
	vcdp->chgBus  (c+117,(vlTOPp->axi4WriteOnlyMasterInterface_b_payload_id),1);
	vcdp->chgBus  (c+118,(vlTOPp->axi4WriteOnlyMasterInterface_b_payload_resp),2);
	vcdp->chgBit  (c+119,(vlTOPp->resetn));
	vcdp->chgBit  (c+120,(vlTOPp->clk));
	vcdp->chgBus  (c+121,(((0x20U == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter))
			        ? vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress
			        : vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_initialAddress)),32);
	vcdp->chgBit  (c+122,((0x1fU == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter))));
	vcdp->chgBus  (c+123,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter),6);
	vcdp->chgBus  (c+124,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.handshakeCounter),6);
	vcdp->chgBit  (c+125,((0x20U != (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.handshakeCounter))));
	vcdp->chgBus  (c+126,(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress),32);
	vcdp->chgBit  (c+127,(((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__wValid) 
			       & (IData)(vlTOPp->axi4WriteOnlyMasterInterface_w_ready))));
	vcdp->chgBus  (c+128,(((0xfffff000U & vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress) 
			       | (0xfffU & ((IData)(4U) 
					    + (0xffcU 
					       & vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress))))),32);
	vcdp->chgBus  (c+129,((0xfffffU & (vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress 
					   >> 0xcU))),20);
	vcdp->chgBus  (c+130,((0xffcU & vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress)),12);
	vcdp->chgBus  (c+131,((0xfffU & ((IData)(4U) 
					 + (0xffcU 
					    & vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.debugAddress)))),12);
	vcdp->chgBit  (c+132,(((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_controlAwValid) 
			       & (IData)(vlTOPp->axi4WriteOnlyMasterInterface_aw_ready))));
	vcdp->chgBit  (c+133,(((0x20U == (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter)) 
			       | (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.__PVT__axi4Interface_isTransferAfterReset))));
	vcdp->chgBit  (c+134,((((0U < (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.handshakeCounter)) 
				& ((IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter) 
				   < (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.handshakeCounter))) 
			       & (0x20U != (IData)(vlSymsp->TOP__TestFifo2Axi4WriteOnlyMaster__axi4Interconnection.writeCounter)))));
    }
}
