// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


VL_ATTR_COLD void Vsigdelay___024root__trace_init_sub__TOP__0(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBit(c+7,"wr_en", false,-1);
    tracep->declBit(c+8,"rd_en", false,-1);
    tracep->declBus(c+9,"din", false,-1, 8,0);
    tracep->declBus(c+10,"offset", false,-1, 8,0);
    tracep->declBus(c+11,"incr", false,-1, 7,0);
    tracep->declBus(c+12,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("sigdelay ");
    tracep->declBus(c+14,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBit(c+7,"wr_en", false,-1);
    tracep->declBit(c+8,"rd_en", false,-1);
    tracep->declBus(c+9,"din", false,-1, 8,0);
    tracep->declBus(c+10,"offset", false,-1, 8,0);
    tracep->declBus(c+11,"incr", false,-1, 7,0);
    tracep->declBus(c+12,"dout", false,-1, 7,0);
    tracep->declBus(c+1,"address", false,-1, 8,0);
    tracep->declBit(c+16,"offest", false,-1);
    tracep->pushNamePrefix("addrCounter ");
    tracep->declBus(c+15,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+11,"incr", false,-1, 7,0);
    tracep->declBus(c+2,"count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("voiceRam2ports ");
    tracep->declBus(c+14,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+7,"wr_en", false,-1);
    tracep->declBit(c+8,"rd_en", false,-1);
    tracep->declBus(c+3,"wr_addr", false,-1, 8,0);
    tracep->declBus(c+1,"rd_addr", false,-1, 8,0);
    tracep->declBus(c+13,"din", false,-1, 7,0);
    tracep->declBus(c+12,"dout", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_init_top(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_top\n"); );
    // Body
    Vsigdelay___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsigdelay___024root__trace_register(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsigdelay___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsigdelay___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsigdelay___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsigdelay___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->sigdelay__DOT____Vcellout__addrCounter__count),9);
    bufp->fullCData(oldp+2,(vlSelf->sigdelay__DOT____Vcellout__addrCounter__count),8);
    bufp->fullSData(oldp+3,((0x1ffU & ((IData)(vlSelf->sigdelay__DOT____Vcellout__addrCounter__count) 
                                       + (IData)(vlSelf->sigdelay__DOT__offest)))),9);
    bufp->fullBit(oldp+4,(vlSelf->clk));
    bufp->fullBit(oldp+5,(vlSelf->rst));
    bufp->fullBit(oldp+6,(vlSelf->en));
    bufp->fullBit(oldp+7,(vlSelf->wr_en));
    bufp->fullBit(oldp+8,(vlSelf->rd_en));
    bufp->fullSData(oldp+9,(vlSelf->din),9);
    bufp->fullSData(oldp+10,(vlSelf->offset),9);
    bufp->fullCData(oldp+11,(vlSelf->incr),8);
    bufp->fullCData(oldp+12,(vlSelf->dout),8);
    bufp->fullCData(oldp+13,((0xffU & (IData)(vlSelf->din))),8);
    bufp->fullIData(oldp+14,(9U),32);
    bufp->fullIData(oldp+15,(8U),32);
    bufp->fullBit(oldp+16,(vlSelf->sigdelay__DOT__offest));
}