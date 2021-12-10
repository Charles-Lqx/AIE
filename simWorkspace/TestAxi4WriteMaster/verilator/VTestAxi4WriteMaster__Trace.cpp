// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestAxi4WriteMaster__Syms.h"


//======================

void VTestAxi4WriteMaster::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTestAxi4WriteMaster* t=(VTestAxi4WriteMaster*)userthis;
    VTestAxi4WriteMaster__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTestAxi4WriteMaster::traceChgThis(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTestAxi4WriteMaster::traceChgThis__2(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase),3);
    }
}

void VTestAxi4WriteMaster::traceChgThis__3(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+2,(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base),12);
	vcdp->chgBus  (c+3,(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr),12);
    }
}

void VTestAxi4WriteMaster::traceChgThis__4(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+4,(vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_fifo_fire));
    }
}

void VTestAxi4WriteMaster::traceChgThis__5(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_0),32);
	vcdp->chgBus  (c+6,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_1),32);
	vcdp->chgBus  (c+7,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_2),32);
	vcdp->chgBus  (c+8,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_3),32);
	vcdp->chgBus  (c+9,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_4),32);
	vcdp->chgBus  (c+10,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_5),32);
	vcdp->chgBus  (c+11,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_6),32);
	vcdp->chgBus  (c+12,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_7),32);
	vcdp->chgBus  (c+13,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_8),32);
	vcdp->chgBus  (c+14,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_9),32);
	vcdp->chgBus  (c+15,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_10),32);
	vcdp->chgBus  (c+16,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_11),32);
	vcdp->chgBus  (c+17,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_12),32);
	vcdp->chgBus  (c+18,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_13),32);
	vcdp->chgBus  (c+19,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_14),32);
	vcdp->chgBus  (c+20,(vlTOPp->TestAxi4WriteMaster__DOT__fifoDataBuffer_15),32);
	vcdp->chgBit  (c+21,((0x10U != (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2))));
	vcdp->chgBus  (c+22,(vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address),32);
	vcdp->chgBus  (c+23,((0xfffffU & (vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address 
					  >> 0xcU))),20);
	vcdp->chgBus  (c+24,(vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_initialAddress),32);
	vcdp->chgBit  (c+25,((0U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2))));
	vcdp->chgBit  (c+26,(((0U < (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_when_Axi4WriteMaster_l53_2)) 
			      & (0x10U != (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2)))));
    }
}

void VTestAxi4WriteMaster::traceChgThis__6(VTestAxi4WriteMaster__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAxi4WriteMaster* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+27,(vlTOPp->fifoValid));
	vcdp->chgBit  (c+28,(vlTOPp->fifoReady));
	vcdp->chgBus  (c+29,(vlTOPp->fifoPayload),32);
	vcdp->chgBit  (c+30,(vlTOPp->awValid));
	vcdp->chgBit  (c+31,(vlTOPp->awReady));
	vcdp->chgBus  (c+32,(vlTOPp->awaddr),32);
	vcdp->chgBus  (c+33,(vlTOPp->awid),1);
	vcdp->chgBus  (c+34,(vlTOPp->awregion),4);
	vcdp->chgBus  (c+35,(vlTOPp->awlen),8);
	vcdp->chgBus  (c+36,(vlTOPp->awsize),3);
	vcdp->chgBus  (c+37,(vlTOPp->awburst),2);
	vcdp->chgBus  (c+38,(vlTOPp->awlock),1);
	vcdp->chgBus  (c+39,(vlTOPp->awcache),4);
	vcdp->chgBus  (c+40,(vlTOPp->awqos),4);
	vcdp->chgBus  (c+41,(vlTOPp->awprot),3);
	vcdp->chgBit  (c+42,(vlTOPp->wValid));
	vcdp->chgBit  (c+43,(vlTOPp->wReady));
	vcdp->chgBus  (c+44,(vlTOPp->wdata),32);
	vcdp->chgBus  (c+45,(vlTOPp->wstrb),4);
	vcdp->chgBit  (c+46,(vlTOPp->wlast));
	vcdp->chgBit  (c+47,(vlTOPp->bValid));
	vcdp->chgBit  (c+48,(vlTOPp->bReady));
	vcdp->chgBus  (c+49,(vlTOPp->bid),1);
	vcdp->chgBus  (c+50,(vlTOPp->bresp),2);
	vcdp->chgBit  (c+51,(vlTOPp->arValid));
	vcdp->chgBit  (c+52,(vlTOPp->arReady));
	vcdp->chgBus  (c+53,(vlTOPp->araddr),32);
	vcdp->chgBus  (c+54,(vlTOPp->arid),1);
	vcdp->chgBus  (c+55,(vlTOPp->arregion),4);
	vcdp->chgBus  (c+56,(vlTOPp->arlen),8);
	vcdp->chgBus  (c+57,(vlTOPp->arsize),3);
	vcdp->chgBus  (c+58,(vlTOPp->arburst),2);
	vcdp->chgBus  (c+59,(vlTOPp->arlock),1);
	vcdp->chgBus  (c+60,(vlTOPp->arcache),4);
	vcdp->chgBus  (c+61,(vlTOPp->arqos),4);
	vcdp->chgBus  (c+62,(vlTOPp->arprot),3);
	vcdp->chgBit  (c+63,(vlTOPp->rValid));
	vcdp->chgBit  (c+64,(vlTOPp->rReady));
	vcdp->chgBus  (c+65,(vlTOPp->rdata),32);
	vcdp->chgBus  (c+66,(vlTOPp->rid),1);
	vcdp->chgBus  (c+67,(vlTOPp->rresp),2);
	vcdp->chgBit  (c+68,(vlTOPp->rlast));
	vcdp->chgBit  (c+69,(vlTOPp->clk));
	vcdp->chgBit  (c+70,(vlTOPp->reset));
	vcdp->chgBit  (c+71,(((0x10U == (IData)(vlTOPp->TestAxi4WriteMaster__DOT___zz_wdata_2)) 
			      & (0U == (IData)(vlTOPp->bresp)))));
	vcdp->chgBit  (c+72,(((IData)(vlTOPp->awValid) 
			      & (IData)(vlTOPp->awReady))));
	vcdp->chgBus  (c+73,((3U & (IData)(vlTOPp->awsize))),2);
	vcdp->chgBus  (c+74,(((0U == (IData)(vlTOPp->awburst))
			       ? vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address
			       : ((2U == (IData)(vlTOPp->awburst))
				   ? ((0xfffff000U 
				       & vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address) 
				      | ((4U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
					  ? ((2U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
					      ? ((0xfc0U 
						  & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						 | (0x3fU 
						    & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))
					      : ((1U 
						  & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
						  ? 
						 ((0xfc0U 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						  | (0x3fU 
						     & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))
						  : 
						 ((0xfe0U 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						  | (0x1fU 
						     & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))))
					  : ((2U & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
					      ? ((1U 
						  & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
						  ? 
						 ((0xff0U 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						  | (0xfU 
						     & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))
						  : 
						 ((0xff8U 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						  | (7U 
						     & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr))))
					      : ((1U 
						  & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_wrapCase))
						  ? 
						 ((0xffcU 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						  | (3U 
						     & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))
						  : 
						 ((0xffeU 
						   & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_base)) 
						  | (1U 
						     & (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr)))))))
				   : ((0xfffff000U 
				       & vlTOPp->TestAxi4WriteMaster__DOT__axi4Interface_address) 
				      | (IData)(vlTOPp->TestAxi4WriteMaster__DOT__Axi4Incr_baseIncr))))),32);
	vcdp->chgBus  (c+75,((((2U == (3U & (IData)(vlTOPp->awsize))) 
			       << 2U) | (((1U == (3U 
						  & (IData)(vlTOPp->awsize))) 
					  << 1U) | 
					 (0U == (3U 
						 & (IData)(vlTOPp->awsize)))))),3);
	vcdp->chgBus  (c+76,((((1U < (3U & (IData)(vlTOPp->awsize))) 
			       << 1U) | (0U < (3U & (IData)(vlTOPp->awsize))))),12);
	vcdp->chgBit  (c+77,(((IData)(vlTOPp->wValid) 
			      & (IData)(vlTOPp->wReady))));
    }
}
