// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceChgSub1(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 3935);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp4466[3];
    WData/*95:0*/ __Vtemp4582[3];
    WData/*95:0*/ __Vtemp4586[3];
    WData/*95:0*/ __Vtemp4630[3];
    WData/*95:0*/ __Vtemp4634[3];
    WData/*95:0*/ __Vtemp4678[3];
    WData/*95:0*/ __Vtemp4682[3];
    WData/*95:0*/ __Vtemp4726[3];
    WData/*95:0*/ __Vtemp4730[3];
    WData/*95:0*/ __Vtemp4810[3];
    WData/*95:0*/ __Vtemp4814[3];
    WData/*95:0*/ __Vtemp4818[3];
    WData/*95:0*/ __Vtemp4862[3];
    WData/*95:0*/ __Vtemp4866[3];
    WData/*95:0*/ __Vtemp4870[3];
    WData/*95:0*/ __Vtemp4914[3];
    WData/*95:0*/ __Vtemp4918[3];
    WData/*95:0*/ __Vtemp4940[3];
    WData/*95:0*/ __Vtemp4944[3];
    WData/*95:0*/ __Vtemp5006[3];
    WData/*95:0*/ __Vtemp5010[3];
    WData/*95:0*/ __Vtemp5014[3];
    WData/*95:0*/ __Vtemp5018[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x47U])) {
            tracep->chgIData(oldp+0,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
            tracep->chgCData(oldp+1,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
            tracep->chgIData(oldp+2,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
            tracep->chgBit(oldp+3,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+4,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
            tracep->chgCData(oldp+5,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
            tracep->chgCData(oldp+6,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
            tracep->chgCData(oldp+7,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
            tracep->chgCData(oldp+8,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
            tracep->chgBit(oldp+9,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
            tracep->chgIData(oldp+10,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                               [1U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+11,((1U & (IData)((
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                   [1U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+12,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U]))));
            tracep->chgBit(oldp+13,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
            tracep->chgBit(oldp+14,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U]))));
            __Vtemp4466[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4466[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4466[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+15,(__Vtemp4466),85);
            tracep->chgBit(oldp+18,((1U & (IData)((
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                   [1U] 
                                                   >> 0x33U)))));
            tracep->chgBit(oldp+19,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+20,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                       [1U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                               [1U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
            tracep->chgWData(oldp+22,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+25,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+28,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgWData(oldp+29,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+32,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+33,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+34,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+35,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                             << 1U))),2);
            tracep->chgCData(oldp+36,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x48U])) {
            tracep->chgBit(oldp+37,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                           [0U][2U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+38,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                             [0U][2U] 
                                             >> 0x12U))),3);
            tracep->chgCData(oldp+39,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                             [0U][2U] 
                                             >> 0xfU))),3);
            tracep->chgCData(oldp+40,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                             [0U][2U] 
                                             >> 0xdU))),2);
            tracep->chgCData(oldp+41,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                                [0U][2U] 
                                                >> 5U))),8);
            tracep->chgIData(oldp+42,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                          [0U][1U] 
                                          >> 5U))),32);
            tracep->chgCData(oldp+43,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                                  [0U][1U] 
                                                  >> 1U)))),4);
            tracep->chgIData(oldp+44,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                          [0U][0U] 
                                          >> 1U))),32);
            tracep->chgBit(oldp+45,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                     [0U][0U])));
            tracep->chgBit(oldp+46,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                           [1U][2U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+47,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                             [1U][2U] 
                                             >> 0x12U))),3);
            tracep->chgCData(oldp+48,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                             [1U][2U] 
                                             >> 0xfU))),3);
            tracep->chgCData(oldp+49,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                             [1U][2U] 
                                             >> 0xdU))),2);
            tracep->chgCData(oldp+50,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                                [1U][2U] 
                                                >> 5U))),8);
            tracep->chgIData(oldp+51,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                          [1U][1U] 
                                          >> 5U))),32);
            tracep->chgCData(oldp+52,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                                  [1U][1U] 
                                                  >> 1U)))),4);
            tracep->chgIData(oldp+53,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                          [1U][0U] 
                                          >> 1U))),32);
            tracep->chgBit(oldp+54,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                     [1U][0U])));
            tracep->chgBit(oldp+55,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                   [0U] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+56,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                     [0U] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+57,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                     [0U] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+58,((3U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                     [0U] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+59,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                        [0U] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+60,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                   [0U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+61,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                               [0U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+62,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                   [0U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+63,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [0U]))));
            tracep->chgBit(oldp+64,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                   [1U] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+65,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                     [1U] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+66,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                     [1U] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+67,((3U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                     [1U] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+68,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                        [1U] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+69,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                   [1U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+70,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                               [1U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+71,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                   [1U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+72,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [1U]))));
            tracep->chgBit(oldp+73,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                           [0U][2U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+74,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                             [0U][2U] 
                                             >> 0x12U))),3);
            tracep->chgCData(oldp+75,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                             [0U][2U] 
                                             >> 0xfU))),3);
            tracep->chgCData(oldp+76,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                             [0U][2U] 
                                             >> 0xdU))),2);
            tracep->chgCData(oldp+77,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                                [0U][2U] 
                                                >> 5U))),8);
            tracep->chgIData(oldp+78,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                          [0U][1U] 
                                          >> 5U))),32);
            tracep->chgCData(oldp+79,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                                  [0U][1U] 
                                                  >> 1U)))),4);
            tracep->chgIData(oldp+80,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                          [0U][0U] 
                                          >> 1U))),32);
            tracep->chgBit(oldp+81,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                     [0U][0U])));
            tracep->chgBit(oldp+82,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                           [1U][2U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+83,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                             [1U][2U] 
                                             >> 0x12U))),3);
            tracep->chgCData(oldp+84,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                             [1U][2U] 
                                             >> 0xfU))),3);
            tracep->chgCData(oldp+85,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                             [1U][2U] 
                                             >> 0xdU))),2);
            tracep->chgCData(oldp+86,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                                [1U][2U] 
                                                >> 5U))),8);
            tracep->chgIData(oldp+87,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                          [1U][1U] 
                                          >> 5U))),32);
            tracep->chgCData(oldp+88,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                                  [1U][1U] 
                                                  >> 1U)))),4);
            tracep->chgIData(oldp+89,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                          [1U][0U] 
                                          >> 1U))),32);
            tracep->chgBit(oldp+90,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                     [1U][0U])));
            tracep->chgBit(oldp+91,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                   [0U] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+92,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                     [0U] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+93,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                     [0U] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+94,((3U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                     [0U] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+95,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                        [0U] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+96,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                   [0U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+97,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                               [0U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+98,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                   [0U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+99,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [0U]))));
            tracep->chgBit(oldp+100,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+101,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+102,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+103,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+104,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+105,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+106,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+107,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+108,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                   [1U]))));
            tracep->chgBit(oldp+109,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+110,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+111,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+112,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+113,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+114,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+115,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+116,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+117,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                      [0U][0U])));
            tracep->chgBit(oldp+118,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+119,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+120,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+121,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+122,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+123,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+124,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+125,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+126,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                      [1U][0U])));
            tracep->chgBit(oldp+127,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+128,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+129,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+130,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+131,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+132,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+133,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+134,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+135,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                   [0U]))));
            tracep->chgBit(oldp+136,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+137,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+138,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+139,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+140,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+141,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+142,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+143,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+144,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                   [1U]))));
            tracep->chgBit(oldp+145,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+146,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+147,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+148,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+149,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+150,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+151,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+152,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+153,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                      [0U][0U])));
            tracep->chgBit(oldp+154,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+155,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+156,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+157,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+158,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+159,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+160,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+161,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+162,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                      [1U][0U])));
            tracep->chgBit(oldp+163,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+164,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+165,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+166,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+167,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+168,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+169,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+170,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+171,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                   [0U]))));
            tracep->chgBit(oldp+172,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+173,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+174,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+175,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+176,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+177,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+178,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+179,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+180,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                   [1U]))));
            tracep->chgBit(oldp+181,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+182,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+183,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+184,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+185,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+186,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+187,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+188,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+189,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                      [0U][0U])));
            tracep->chgBit(oldp+190,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+191,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+192,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+193,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+194,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+195,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+196,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+197,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+198,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                      [1U][0U])));
            tracep->chgBit(oldp+199,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+200,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+201,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+202,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+203,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+204,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+205,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+206,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+207,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                   [0U]))));
            tracep->chgBit(oldp+208,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+209,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+210,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+211,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+212,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+213,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+214,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+215,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+216,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                   [1U]))));
            tracep->chgBit(oldp+217,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+218,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+219,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+220,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+221,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+222,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+223,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+224,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+225,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                      [0U][0U])));
            tracep->chgBit(oldp+226,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+227,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+228,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+229,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+230,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+231,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+232,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+233,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+234,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                      [1U][0U])));
            tracep->chgBit(oldp+235,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+236,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+237,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+238,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+239,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+240,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+241,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+242,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+243,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                   [0U]))));
            tracep->chgBit(oldp+244,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+245,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+246,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+247,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+248,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+249,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+250,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+251,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+252,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                   [1U]))));
            tracep->chgCData(oldp+253,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest),2);
            tracep->chgCData(oldp+254,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hgrant),2);
            tracep->chgBit(oldp+255,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest))));
            tracep->chgBit(oldp+256,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+257,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+258,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+259,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+260,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+261,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+262,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+263,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+264,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+265,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                 [0U][2U] 
                                                 >> 4U))),8);
            tracep->chgBit(oldp+266,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+267,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+268,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+269,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+270,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+271,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+272,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+273,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+274,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+275,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+276,((1U | (0xfeU 
                                              & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                 [1U][2U] 
                                                 >> 4U)))),8);
            tracep->chgBit(oldp+277,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+278,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+279,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+280,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+281,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+282,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+283,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+284,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+285,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+286,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+287,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+288,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+289,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+290,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+291,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+292,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+293,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+294,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+295,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+296,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+297,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+298,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+299,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+300,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+301,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+302,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+303,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+304,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                   [0U]))));
            tracep->chgBit(oldp+305,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+306,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                   [0U]))));
            __Vtemp4582[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4582[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4582[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+307,(__Vtemp4582),85);
            tracep->chgBit(oldp+310,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+311,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+312,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                         [0U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+314,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+315,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+316,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+317,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+318,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+319,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+320,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+321,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+322,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+323,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+324,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+325,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+326,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+327,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+328,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+329,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+330,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+331,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+332,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+333,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+334,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+335,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+336,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+337,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+338,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+339,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+340,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                   [1U]))));
            tracep->chgBit(oldp+341,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+342,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                   [1U]))));
            __Vtemp4586[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4586[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4586[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+343,(__Vtemp4586),85);
            tracep->chgBit(oldp+346,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+347,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+348,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                         [1U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+350,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+351,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+352,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+353,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+354,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                              << 1U))),2);
            tracep->chgCData(oldp+355,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgBit(oldp+356,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+357,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+358,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+359,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+360,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+361,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+362,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+363,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+364,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                      [0U][0U])));
            tracep->chgBit(oldp+365,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+366,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+367,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+368,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+369,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+370,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+371,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+372,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+373,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                      [1U][0U])));
            tracep->chgBit(oldp+374,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+375,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+376,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+377,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+378,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+379,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+380,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+381,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+382,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                   [0U]))));
            tracep->chgBit(oldp+383,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+384,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+385,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+386,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+387,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+388,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+389,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+390,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+391,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                   [1U]))));
            tracep->chgBit(oldp+392,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+393,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+394,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+395,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+396,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+397,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+398,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+399,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+400,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                      [0U][0U])));
            tracep->chgBit(oldp+401,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+402,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+403,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+404,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+405,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+406,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+407,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+408,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+409,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                      [1U][0U])));
            tracep->chgBit(oldp+410,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+411,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+412,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+413,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+414,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+415,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+416,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+417,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+418,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                   [0U]))));
            tracep->chgBit(oldp+419,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+420,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+421,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+422,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+423,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+424,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+425,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+426,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+427,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                   [1U]))));
            tracep->chgCData(oldp+428,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest),2);
            tracep->chgCData(oldp+429,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hgrant),2);
            tracep->chgBit(oldp+430,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest))));
            tracep->chgBit(oldp+431,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+432,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+433,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+434,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+435,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+436,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+437,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+438,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+439,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+440,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                 [0U][2U] 
                                                 >> 4U))),8);
            tracep->chgBit(oldp+441,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [0U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+442,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+443,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+444,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+445,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+446,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+447,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+448,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+449,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+450,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+451,((1U | (0xfeU 
                                              & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                 [1U][2U] 
                                                 >> 4U)))),8);
            tracep->chgBit(oldp+452,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [1U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+453,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+454,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+455,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+456,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+457,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+458,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+459,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+460,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+461,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+462,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+463,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+464,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+465,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+466,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+467,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+468,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+469,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+470,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+471,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+472,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+473,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+474,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+475,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+476,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+477,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+478,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+479,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                   [0U]))));
            tracep->chgBit(oldp+480,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+481,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                   [0U]))));
            __Vtemp4630[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4630[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4630[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+482,(__Vtemp4630),85);
            tracep->chgBit(oldp+485,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+486,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+487,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                         [0U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+489,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+490,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+491,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+492,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+493,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+494,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+495,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+496,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+497,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+498,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+499,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+500,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+501,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+502,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+503,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+504,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+505,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+506,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+507,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+508,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+509,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+510,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+511,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+512,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+513,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+514,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+515,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                   [1U]))));
            tracep->chgBit(oldp+516,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+517,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                   [1U]))));
            __Vtemp4634[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4634[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4634[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+518,(__Vtemp4634),85);
            tracep->chgBit(oldp+521,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+522,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+523,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                         [1U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+525,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+526,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+527,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+528,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+529,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                              << 1U))),2);
            tracep->chgCData(oldp+530,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgBit(oldp+531,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+532,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+533,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+534,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+535,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+536,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+537,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+538,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+539,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                      [0U][0U])));
            tracep->chgBit(oldp+540,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+541,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+542,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+543,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+544,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+545,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+546,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+547,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+548,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                      [1U][0U])));
            tracep->chgBit(oldp+549,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+550,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+551,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+552,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+553,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+554,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+555,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+556,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+557,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                   [0U]))));
            tracep->chgBit(oldp+558,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+559,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+560,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+561,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+562,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+563,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+564,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+565,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+566,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                   [1U]))));
            tracep->chgBit(oldp+567,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+568,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+569,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+570,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+571,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+572,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+573,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+574,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+575,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                      [0U][0U])));
            tracep->chgBit(oldp+576,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+577,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+578,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+579,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+580,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+581,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+582,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+583,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+584,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                      [1U][0U])));
            tracep->chgBit(oldp+585,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+586,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+587,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+588,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+589,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+590,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+591,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+592,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+593,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                   [0U]))));
            tracep->chgBit(oldp+594,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+595,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+596,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+597,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+598,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+599,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+600,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+601,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+602,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                   [1U]))));
            tracep->chgCData(oldp+603,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrequest),2);
            tracep->chgCData(oldp+604,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hgrant),2);
            tracep->chgBit(oldp+605,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrequest))));
            tracep->chgBit(oldp+606,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+607,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+608,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+609,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+610,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+611,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+612,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+613,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+614,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+615,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                 [0U][2U] 
                                                 >> 4U))),8);
            tracep->chgBit(oldp+616,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                            [0U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+617,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+618,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+619,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+620,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+621,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+622,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+623,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+624,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+625,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+626,((1U | (0xfeU 
                                              & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                 [1U][2U] 
                                                 >> 4U)))),8);
            tracep->chgBit(oldp+627,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                            [1U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+628,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+629,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+630,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+631,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+632,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+633,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+634,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+635,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+636,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+637,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+638,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+639,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+640,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+641,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+642,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+643,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+644,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+645,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+646,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+647,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+648,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+649,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+650,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+651,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+652,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+653,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+654,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                   [0U]))));
            tracep->chgBit(oldp+655,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+656,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                   [0U]))));
            __Vtemp4678[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4678[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4678[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+657,(__Vtemp4678),85);
            tracep->chgBit(oldp+660,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+661,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+662,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                         [0U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+664,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+665,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+666,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+667,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+668,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+669,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+670,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+671,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+672,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+673,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+674,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+675,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+676,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+677,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+678,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+679,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+680,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+681,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+682,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+683,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+684,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+685,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+686,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+687,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+688,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+689,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+690,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                   [1U]))));
            tracep->chgBit(oldp+691,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+692,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                   [1U]))));
            __Vtemp4682[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4682[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4682[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+693,(__Vtemp4682),85);
            tracep->chgBit(oldp+696,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+697,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+698,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                         [1U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+700,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+701,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+702,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+703,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+704,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                              << 1U))),2);
            tracep->chgCData(oldp+705,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgBit(oldp+706,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+707,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+708,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+709,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+710,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+711,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+712,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+713,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+714,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                      [0U][0U])));
            tracep->chgBit(oldp+715,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+716,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+717,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+718,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+719,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+720,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+721,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+722,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+723,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                      [1U][0U])));
            tracep->chgBit(oldp+724,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+725,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+726,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+727,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+728,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+729,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+730,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+731,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+732,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                   [0U]))));
            tracep->chgBit(oldp+733,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+734,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+735,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+736,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+737,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+738,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+739,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+740,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+741,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                   [1U]))));
            tracep->chgBit(oldp+742,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+743,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+744,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+745,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+746,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+747,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+748,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+749,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+750,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                      [0U][0U])));
            tracep->chgBit(oldp+751,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+752,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+753,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+754,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+755,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+756,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+757,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+758,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+759,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                      [1U][0U])));
            tracep->chgBit(oldp+760,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+761,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+762,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+763,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+764,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+765,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+766,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+767,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+768,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                   [0U]))));
            tracep->chgBit(oldp+769,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+770,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+771,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+772,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+773,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+774,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+775,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+776,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+777,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                   [1U]))));
            tracep->chgCData(oldp+778,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest),2);
            tracep->chgCData(oldp+779,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hgrant),2);
            tracep->chgBit(oldp+780,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest))));
            tracep->chgBit(oldp+781,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+782,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+783,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+784,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+785,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+786,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+787,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+788,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+789,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+790,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                 [0U][2U] 
                                                 >> 4U))),8);
            tracep->chgBit(oldp+791,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [0U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+792,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+793,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+794,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+795,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+796,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+797,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+798,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+799,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+800,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+801,((1U | (0xfeU 
                                              & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                 [1U][2U] 
                                                 >> 4U)))),8);
            tracep->chgBit(oldp+802,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [1U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+803,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+804,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+805,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+806,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+807,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+808,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+809,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+810,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+811,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+812,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+813,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+814,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+815,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+816,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+817,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+818,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+819,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+820,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+821,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+822,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+823,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+824,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+825,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+826,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+827,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+828,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+829,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                   [0U]))));
            tracep->chgBit(oldp+830,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+831,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                   [0U]))));
            __Vtemp4726[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4726[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4726[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+832,(__Vtemp4726),85);
            tracep->chgBit(oldp+835,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+836,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+837,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                         [0U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+839,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+840,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+841,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+842,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+843,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+844,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+845,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+846,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+847,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+848,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+849,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+850,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+851,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+852,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+853,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+854,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+855,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+856,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+857,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+858,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+859,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+860,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+861,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+862,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+863,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+864,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+865,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                   [1U]))));
            tracep->chgBit(oldp+866,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+867,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                   [1U]))));
            __Vtemp4730[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4730[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4730[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+868,(__Vtemp4730),85);
            tracep->chgBit(oldp+871,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+872,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+873,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                         [1U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+875,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+876,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+877,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+878,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+879,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                              << 1U))),2);
            tracep->chgCData(oldp+880,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x49U])) {
            tracep->chgBit(oldp+881,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+882,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+883,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+884,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+885,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+886,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+887,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+888,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+889,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[0U])));
            tracep->chgBit(oldp+890,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+891,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+892,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+893,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+894,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+895,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+896,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+897,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+898,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[0U])));
            tracep->chgBit(oldp+899,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+900,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+901,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+902,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+903,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+904,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+905,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+906,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+907,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                      [0U][0U])));
            tracep->chgBit(oldp+908,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+909,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+910,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+911,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+912,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+913,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+914,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+915,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+916,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                      [1U][0U])));
            tracep->chgBit(oldp+917,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+918,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+919,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+920,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+921,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+922,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+923,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+924,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+925,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                   [0U]))));
            tracep->chgBit(oldp+926,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+927,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+928,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+929,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+930,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+931,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+932,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+933,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+934,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                   [1U]))));
            tracep->chgBit(oldp+935,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+936,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+937,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+938,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+939,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+940,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+941,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+942,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+943,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                      [0U][0U])));
            tracep->chgBit(oldp+944,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+945,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+946,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+947,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+948,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+949,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+950,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+951,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+952,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                      [1U][0U])));
            tracep->chgBit(oldp+953,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+954,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+955,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+956,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+957,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+958,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+959,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+960,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+961,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                   [0U]))));
            tracep->chgBit(oldp+962,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+963,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+964,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+965,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+966,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+967,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+968,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+969,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+970,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                   [1U]))));
            tracep->chgBit(oldp+971,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+972,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+973,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+974,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+975,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+976,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+977,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+978,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+979,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                      [0U][0U])));
            tracep->chgBit(oldp+980,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+981,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+982,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+983,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+984,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+985,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+986,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+987,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+988,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                      [1U][0U])));
            tracep->chgBit(oldp+989,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+990,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+991,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+992,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+993,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+994,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+995,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+996,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+997,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                   [0U]))));
            tracep->chgBit(oldp+998,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+999,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+1000,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1001,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1002,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1003,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1004,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1005,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1006,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+1007,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1008,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1009,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1010,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1011,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1012,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1013,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1014,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1015,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1016,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1017,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1018,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1019,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1020,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1021,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1022,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1023,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1024,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1025,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1026,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1027,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1028,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1029,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1030,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1031,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1032,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1033,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+1034,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1035,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1036,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1037,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1038,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1039,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1040,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1041,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1042,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+1043,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest),2);
            tracep->chgCData(oldp+1044,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hgrant),2);
            tracep->chgBit(oldp+1045,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1046,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1047,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1048,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1049,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1050,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1051,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1052,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1053,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+1054,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest))));
            tracep->chgBit(oldp+1055,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1056,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1057,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1058,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1059,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1060,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1061,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1062,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1063,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+1064,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1065,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+1066,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1067,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1068,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1069,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1070,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1071,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1072,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1073,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1074,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1075,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+1076,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1077,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1078,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1079,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1080,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1081,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1082,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1083,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1084,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1085,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1086,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+1087,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1088,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp4810[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U]);
            __Vtemp4810[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U]));
            __Vtemp4810[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1089,(__Vtemp4810),85);
            tracep->chgBit(oldp+1092,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+1093,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1094,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1095,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1096,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1097,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1098,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1099,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1100,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1101,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+1102,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1103,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1104,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1105,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1106,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1107,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1108,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1109,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1110,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+1111,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1112,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1113,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1114,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1115,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1116,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1117,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1118,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1119,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+1120,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1121,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4814[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4814[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4814[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1122,(__Vtemp4814),85);
            tracep->chgBit(oldp+1125,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1126,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1127,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1129,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1130,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1131,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1132,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1133,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1134,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1135,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1136,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1137,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+1138,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1139,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1140,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1141,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1142,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1143,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1144,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1145,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1146,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+1147,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1148,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1149,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1150,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1151,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1152,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1153,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1154,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1155,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+1156,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1157,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4818[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4818[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4818[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1158,(__Vtemp4818),85);
            tracep->chgBit(oldp+1161,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1162,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1163,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgWData(oldp+1165,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1168,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+1171,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgWData(oldp+1172,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1175,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1176,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1177,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1178,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1179,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgBit(oldp+1180,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1181,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1182,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1183,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1184,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1185,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1186,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1187,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1188,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+1189,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1190,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1191,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1192,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1193,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1194,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1195,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1196,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1197,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+1198,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1199,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1200,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1201,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1202,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1203,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1204,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1205,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1206,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+1207,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1208,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1209,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1210,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1211,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1212,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1213,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1214,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1215,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+1216,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1217,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1218,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1219,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1220,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1221,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1222,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1223,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1224,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1225,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1226,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1227,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1228,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1229,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1230,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1231,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1232,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1233,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1234,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1235,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1236,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1237,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1238,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1239,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1240,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1241,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1242,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+1243,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1244,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1245,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1246,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1247,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1248,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1249,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1250,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1251,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+1252,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest),2);
            tracep->chgCData(oldp+1253,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hgrant),2);
            tracep->chgBit(oldp+1254,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1255,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1256,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1257,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1258,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1259,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1260,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1261,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1262,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+1263,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest))));
            tracep->chgBit(oldp+1264,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1265,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1266,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1267,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1268,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1269,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1270,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1271,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1272,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+1273,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1274,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+1275,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1276,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1277,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1278,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1279,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1280,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1281,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1282,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1283,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1284,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+1285,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1286,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1287,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1288,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1289,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1290,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1291,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1292,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1293,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1294,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1295,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+1296,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1297,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp4862[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U]);
            __Vtemp4862[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U]));
            __Vtemp4862[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1298,(__Vtemp4862),85);
            tracep->chgBit(oldp+1301,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+1302,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1303,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1304,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1305,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1306,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1307,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1308,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1309,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1310,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+1311,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1312,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1313,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1314,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1315,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1316,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1317,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1318,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1319,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+1320,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1321,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1322,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1323,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1324,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1325,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1326,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1327,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1328,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+1329,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1330,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4866[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4866[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4866[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1331,(__Vtemp4866),85);
            tracep->chgBit(oldp+1334,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1335,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1336,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1338,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1339,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1340,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1341,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1342,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1343,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1344,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1345,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1346,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+1347,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1348,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1349,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1350,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1351,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1352,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1353,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1354,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1355,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+1356,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1357,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1358,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1359,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1360,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1361,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1362,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1363,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1364,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+1365,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1366,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4870[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4870[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4870[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1367,(__Vtemp4870),85);
            tracep->chgBit(oldp+1370,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1371,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1372,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgWData(oldp+1374,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1377,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+1380,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgWData(oldp+1381,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1384,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1385,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1386,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1387,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1388,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4aU])) {
            tracep->chgBit(oldp+1389,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1390,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1391,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1392,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1393,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1394,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1395,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1396,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1397,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))));
            tracep->chgBit(oldp+1398,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))));
            tracep->chgBit(oldp+1399,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 0x33U)))));
            tracep->chgIData(oldp+1400,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1401,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1402,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw));
            tracep->chgIData(oldp+1403,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgBit(oldp+1404,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgBit(oldp+1405,((3U != (3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgBit(oldp+1406,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)))));
            tracep->chgBit(oldp+1407,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err));
            tracep->chgBit(oldp+1408,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err));
            tracep->chgBit(oldp+1409,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgWData(oldp+1410,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d),96);
            tracep->chgCData(oldp+1413,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgCData(oldp+1414,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgIData(oldp+1415,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+1416,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgBit(oldp+1417,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+1418,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+1419,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgBit(oldp+1420,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+1421,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1422,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1423,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1424,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1425,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1426,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1427,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1428,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1429,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                    [0U]))));
            tracep->chgBit(oldp+1430,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1431,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1432,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1433,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1434,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1435,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1436,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1437,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1438,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                    [1U]))));
            tracep->chgBit(oldp+1439,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1440,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1441,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1442,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1443,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1444,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1445,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1446,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1447,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+1448,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1449,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1450,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1451,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1452,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1453,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1454,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1455,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1456,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+1457,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1458,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1459,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1460,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1461,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1462,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1463,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1464,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1465,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+1466,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1467,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1468,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1469,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1470,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1471,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1472,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1473,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1474,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+1475,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1476,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1477,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1478,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1479,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1480,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1481,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1482,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1483,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1484,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1485,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1486,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1487,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1488,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1489,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1490,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1491,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1492,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1493,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1494,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1495,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1496,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1497,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1498,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1499,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1500,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1501,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+1502,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1503,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1504,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1505,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1506,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1507,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1508,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1509,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1510,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+1511,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrequest),2);
            tracep->chgCData(oldp+1512,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hgrant),2);
            tracep->chgBit(oldp+1513,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrequest))));
            tracep->chgBit(oldp+1514,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1515,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1516,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1517,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1518,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1519,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1520,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1521,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1522,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1523,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+1524,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1525,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1526,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1527,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1528,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1529,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1530,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1531,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1532,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1533,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1534,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+1535,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1536,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1537,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1538,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1539,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1540,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1541,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1542,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1543,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1544,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+1545,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1546,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1547,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1548,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1549,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1550,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1551,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1552,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1553,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+1554,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1555,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1556,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1557,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1558,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1559,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1560,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1561,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1562,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+1563,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1564,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4914[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4914[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4914[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1565,(__Vtemp4914),85);
            tracep->chgBit(oldp+1568,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1569,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1570,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1572,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1573,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1574,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1575,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1576,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1577,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1578,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1579,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1580,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+1581,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1582,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1583,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1584,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1585,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1586,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1587,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1588,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1589,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+1590,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1591,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1592,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1593,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1594,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1595,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1596,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1597,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1598,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+1599,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1600,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4918[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4918[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4918[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1601,(__Vtemp4918),85);
            tracep->chgBit(oldp+1604,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1605,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1606,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1608,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+1609,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1610,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1611,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1612,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1613,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x4aU] | vlTOPp->__Vm_traceActivity
                         [0x4bU]))) {
            tracep->chgBit(oldp+1614,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1615,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1616,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1617,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1618,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1619,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1620,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1621,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1622,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                       [0U][0U])));
            tracep->chgBit(oldp+1623,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1624,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1625,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1626,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1627,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1628,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1629,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1630,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1631,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                       [1U][0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4cU])) {
            tracep->chgIData(oldp+1632,((0xfffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q)),20);
            tracep->chgIData(oldp+1633,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q),32);
            tracep->chgIData(oldp+1634,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_en_q),32);
            tracep->chgIData(oldp+1635,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
            tracep->chgIData(oldp+1636,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q),32);
            tracep->chgBit(oldp+1637,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe));
            tracep->chgBit(oldp+1638,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
            tracep->chgBit(oldp+1639,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
            tracep->chgBit(oldp+1640,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
            tracep->chgBit(oldp+1641,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
            tracep->chgBit(oldp+1642,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
            tracep->chgBit(oldp+1643,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
            tracep->chgBit(oldp+1644,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+1645,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1646,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1647,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1648,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1649,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1650,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1651,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+1652,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1653,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1654,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1655,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1656,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1657,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1658,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1659,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1660,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1661,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1662,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1663,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1664,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1665,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1666,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1667,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1668,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1669,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1670,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1671,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1672,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1673,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1674,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1675,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1676,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1677,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1678,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1679,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1680,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1681,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1682,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1683,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1684,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1685,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1686,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1687,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1688,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgIData(oldp+1689,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
            tracep->chgIData(oldp+1690,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
            tracep->chgBit(oldp+1691,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe));
            tracep->chgBit(oldp+1692,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe));
            tracep->chgBit(oldp+1693,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe));
            tracep->chgBit(oldp+1694,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe));
            tracep->chgBit(oldp+1695,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe));
            tracep->chgBit(oldp+1696,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe));
            tracep->chgBit(oldp+1697,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe));
            tracep->chgBit(oldp+1698,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe));
            tracep->chgBit(oldp+1699,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe));
            tracep->chgBit(oldp+1700,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe));
            tracep->chgBit(oldp+1701,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe));
            tracep->chgBit(oldp+1702,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe));
            tracep->chgBit(oldp+1703,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe));
            tracep->chgBit(oldp+1704,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe));
            tracep->chgBit(oldp+1705,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe));
            tracep->chgBit(oldp+1706,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe));
            tracep->chgBit(oldp+1707,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe));
            tracep->chgBit(oldp+1708,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe));
            tracep->chgBit(oldp+1709,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe));
            tracep->chgBit(oldp+1710,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe));
            tracep->chgBit(oldp+1711,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe));
            tracep->chgBit(oldp+1712,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe));
            tracep->chgBit(oldp+1713,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe));
            tracep->chgBit(oldp+1714,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe));
            tracep->chgBit(oldp+1715,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe));
            tracep->chgBit(oldp+1716,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe));
            tracep->chgBit(oldp+1717,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe));
            tracep->chgBit(oldp+1718,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe));
            tracep->chgBit(oldp+1719,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe));
            tracep->chgBit(oldp+1720,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe));
            tracep->chgBit(oldp+1721,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe));
            tracep->chgBit(oldp+1722,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe));
            tracep->chgBit(oldp+1723,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe));
            tracep->chgBit(oldp+1724,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe));
            tracep->chgBit(oldp+1725,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe));
            tracep->chgBit(oldp+1726,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe));
            tracep->chgBit(oldp+1727,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe));
            tracep->chgBit(oldp+1728,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe));
            tracep->chgBit(oldp+1729,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe));
            tracep->chgBit(oldp+1730,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe));
            tracep->chgBit(oldp+1731,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe));
            tracep->chgBit(oldp+1732,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe));
            tracep->chgBit(oldp+1733,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe));
            tracep->chgBit(oldp+1734,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe));
            tracep->chgBit(oldp+1735,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe));
            tracep->chgBit(oldp+1736,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe));
            tracep->chgBit(oldp+1737,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe));
            tracep->chgBit(oldp+1738,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe));
            tracep->chgBit(oldp+1739,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe));
            tracep->chgBit(oldp+1740,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe));
            tracep->chgBit(oldp+1741,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe));
            tracep->chgBit(oldp+1742,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe));
            tracep->chgBit(oldp+1743,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe));
            tracep->chgBit(oldp+1744,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe));
            tracep->chgBit(oldp+1745,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe));
            tracep->chgBit(oldp+1746,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe));
            tracep->chgBit(oldp+1747,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe));
            tracep->chgBit(oldp+1748,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe));
            tracep->chgBit(oldp+1749,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe));
            tracep->chgBit(oldp+1750,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe));
            tracep->chgBit(oldp+1751,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe));
            tracep->chgBit(oldp+1752,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe));
            tracep->chgBit(oldp+1753,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe));
            tracep->chgBit(oldp+1754,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4dU])) {
            tracep->chgCData(oldp+1755,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1756,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1757,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1758,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1759,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1760,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1761,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1762,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1763,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1764,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1765,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1766,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1767,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1768,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1769,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1770,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1771,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1772,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1773,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1774,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1775,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1776,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1777,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1778,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1779,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1780,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1781,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1782,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4eU])) {
            tracep->chgQData(oldp+1783,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_gpio)) 
                                         << 1U)),33);
            tracep->chgIData(oldp+1785,(vlTOPp->opentitan_soc_top__DOT__intr_gpio),32);
            tracep->chgIData(oldp+1786,((0xfffffffeU 
                                         & (vlTOPp->opentitan_soc_top__DOT__intr_gpio 
                                            << 1U))),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x4eU] | vlTOPp->__Vm_traceActivity
                         [0x79U]))) {
            tracep->chgIData(oldp+1787,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+1788,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+1789,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgBit(oldp+1790,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+1791,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+1792,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+1793,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),10);
            tracep->chgSData(oldp+1794,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+1795,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
            tracep->chgIData(oldp+1796,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+1797,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+1798,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+1799,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+1800,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgIData(oldp+1801,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+1802,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+1803,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgIData(oldp+1804,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+1805,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+1806,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+1807,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+1808,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgSData(oldp+1809,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),16);
            tracep->chgSData(oldp+1810,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),16);
            tracep->chgSData(oldp+1811,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4fU])) {
            tracep->chgCData(oldp+1812,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1813,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1814,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1815,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1816,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1817,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+1818,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+1819,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+1820,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+1821,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1822,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1823,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1824,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1825,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1826,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1827,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1828,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1829,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1830,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1831,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1832,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1833,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1834,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1835,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1836,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1837,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1838,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1839,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1840,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1841,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1842,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+1843,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1844,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1845,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgBit(oldp+1846,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe));
            tracep->chgBit(oldp+1847,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe));
            tracep->chgBit(oldp+1848,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe));
            tracep->chgBit(oldp+1849,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe));
            tracep->chgBit(oldp+1850,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe));
            tracep->chgBit(oldp+1851,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe));
            tracep->chgBit(oldp+1852,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe));
            tracep->chgBit(oldp+1853,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe));
            tracep->chgBit(oldp+1854,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q));
            tracep->chgBit(oldp+1855,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q));
            tracep->chgCData(oldp+1856,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q),2);
            tracep->chgCData(oldp+1857,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x50U])) {
            tracep->chgCData(oldp+1858,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1859,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1860,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1861,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1862,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1863,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1864,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1865,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1866,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1867,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1868,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1869,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1870,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1871,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1872,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1873,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1874,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1875,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1876,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1877,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x51U])) {
            tracep->chgCData(oldp+1878,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1879,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+1880,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1881,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+1882,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1883,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+1884,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+1885,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+1886,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe));
            tracep->chgBit(oldp+1887,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe));
            tracep->chgBit(oldp+1888,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe));
            tracep->chgBit(oldp+1889,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x52U])) {
            tracep->chgCData(oldp+1890,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1891,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1892,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1893,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1894,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1895,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+1896,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1897,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x53U])) {
            tracep->chgBit(oldp+1898,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__clear_resumeack));
            tracep->chgBit(oldp+1899,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1900,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1901,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1902,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1903,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1904,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1aU))));
            tracep->chgSData(oldp+1905,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                   >> 0x10U))),10);
            tracep->chgSData(oldp+1906,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                   >> 6U))),10);
            tracep->chgCData(oldp+1907,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                               >> 4U))),2);
            tracep->chgBit(oldp+1908,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 3U))));
            tracep->chgBit(oldp+1909,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 2U))));
            tracep->chgBit(oldp+1910,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 1U))));
            tracep->chgBit(oldp+1911,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d)));
            tracep->chgCData(oldp+1912,((0xffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d 
                                                  >> 0x18U))),8);
            tracep->chgIData(oldp+1913,((0xffffffU 
                                         & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d)),24);
            tracep->chgSData(oldp+1914,((0xffffU & 
                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                          >> 0x10U))),16);
            tracep->chgCData(oldp+1915,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                 >> 0xcU))),4);
            tracep->chgSData(oldp+1916,((0xfffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
            tracep->chgCData(oldp+1917,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+1918,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                                  >> 0x17U))),6);
            tracep->chgBit(oldp+1919,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1920,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1921,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1922,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1923,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1924,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1925,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+1926,((0x7fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                                  >> 5U))),7);
            tracep->chgBit(oldp+1927,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 4U))));
            tracep->chgBit(oldp+1928,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 3U))));
            tracep->chgBit(oldp+1929,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 2U))));
            tracep->chgBit(oldp+1930,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 1U))));
            tracep->chgBit(oldp+1931,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d)));
            tracep->chgBit(oldp+1932,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
            tracep->chgCData(oldp+1933,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
            tracep->chgCData(oldp+1934,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+1935,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 0x17U))),6);
            tracep->chgBit(oldp+1936,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1937,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1938,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1939,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1940,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1941,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1942,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+1943,((0x7fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 5U))),7);
            tracep->chgBit(oldp+1944,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 4U))));
            tracep->chgBit(oldp+1945,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 3U))));
            tracep->chgBit(oldp+1946,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 2U))));
            tracep->chgBit(oldp+1947,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 1U))));
            tracep->chgBit(oldp+1948,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs)));
            tracep->chgBit(oldp+1949,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1950,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1951,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1952,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1953,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1954,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                             >> 0x1aU))));
            tracep->chgSData(oldp+1955,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                   >> 0x10U))),10);
            tracep->chgSData(oldp+1956,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                   >> 6U))),10);
            tracep->chgCData(oldp+1957,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                               >> 4U))),2);
            tracep->chgBit(oldp+1958,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                             >> 3U))));
            tracep->chgBit(oldp+1959,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                             >> 2U))));
            tracep->chgBit(oldp+1960,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                             >> 1U))));
            tracep->chgBit(oldp+1961,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol)));
            tracep->chgBit(oldp+1962,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned))));
            tracep->chgCData(oldp+1963,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x54U])) {
            tracep->chgQData(oldp+1964,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[0]),34);
            tracep->chgQData(oldp+1966,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[1]),34);
            tracep->chgQData(oldp+1968,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[2]),34);
            tracep->chgQData(oldp+1970,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[3]),34);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x55U])) {
            tracep->chgCData(oldp+1972,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_q),7);
            tracep->chgIData(oldp+1973,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_q),32);
            tracep->chgCData(oldp+1974,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x56U])) {
            tracep->chgBit(oldp+1975,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+1976,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgCData(oldp+1977,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq),3);
            tracep->chgCData(oldp+1978,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x57U])) {
            tracep->chgIData(oldp+1979,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp 
                                                 >> 2U))),32);
            tracep->chgCData(oldp+1980,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp))),2);
            tracep->chgQData(oldp+1981,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp),34);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x58U])) {
            tracep->chgBit(oldp+1983,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni));
            tracep->chgBit(oldp+1984,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__test_logic_reset));
            tracep->chgBit(oldp+1985,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__shift_dr));
            tracep->chgBit(oldp+1986,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__update_dr));
            tracep->chgBit(oldp+1987,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__capture_dr));
            tracep->chgCData(oldp+1988,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_d),3);
            tracep->chgQData(oldp+1989,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_d),41);
            tracep->chgCData(oldp+1991,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_d),7);
            tracep->chgIData(oldp+1992,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_d),32);
            tracep->chgBit(oldp+1993,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_dmi_busy));
            tracep->chgCData(oldp+1994,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_d),2);
            tracep->chgCData(oldp+1995,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
            tracep->chgCData(oldp+1996,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
            tracep->chgCData(oldp+1997,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
            tracep->chgBit(oldp+1998,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
            tracep->chgBit(oldp+1999,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
            tracep->chgBit(oldp+2000,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
            tracep->chgIData(oldp+2001,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
            tracep->chgSData(oldp+2002,((0x3fffU & 
                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x12U))),14);
            tracep->chgBit(oldp+2003,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2004,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2005,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                             >> 0xfU))));
            tracep->chgCData(oldp+2006,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+2007,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                               >> 0xaU))),2);
            tracep->chgCData(oldp+2008,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                                  >> 4U))),6);
            tracep->chgCData(oldp+2009,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d)),4);
            tracep->chgBit(oldp+2010,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x59U])) {
            tracep->chgCData(oldp+2011,((0x7fU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                          >> 0x22U)))),7);
            tracep->chgCData(oldp+2012,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                       >> 0x20U)))),2);
            tracep->chgIData(oldp+2013,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req)),32);
            tracep->chgBit(oldp+2014,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req_valid));
            tracep->chgQData(oldp+2015,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req),41);
            tracep->chgCData(oldp+2017,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray),3);
            tracep->chgCData(oldp+2018,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi),3);
            tracep->chgBit(oldp+2019,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                             >> 2U))));
            tracep->chgCData(oldp+2020,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))),2);
            tracep->chgCData(oldp+2021,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5aU])) {
            tracep->chgBit(oldp+2022,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2023,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q))));
            tracep->chgQData(oldp+2024,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q),41);
            tracep->chgCData(oldp+2026,((0x7fU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q 
                                                          >> 0x22U)))),7);
            tracep->chgIData(oldp+2027,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q 
                                                 >> 2U))),32);
            tracep->chgCData(oldp+2028,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q))),2);
            tracep->chgCData(oldp+2029,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q),5);
            tracep->chgIData(oldp+2030,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q),32);
            tracep->chgSData(oldp+2031,((0x3fffU & 
                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x12U))),14);
            tracep->chgBit(oldp+2032,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2033,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2034,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                             >> 0xfU))));
            tracep->chgCData(oldp+2035,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+2036,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                               >> 0xaU))),2);
            tracep->chgCData(oldp+2037,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                                  >> 4U))),6);
            tracep->chgCData(oldp+2038,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q)),4);
            tracep->chgBit(oldp+2039,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q));
            tracep->chgCData(oldp+2040,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+2041,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+2042,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5bU])) {
            tracep->chgBit(oldp+2043,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_rsp) 
                                             >> 1U))));
            tracep->chgBit(oldp+2044,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__jtag_rsp))));
            tracep->chgBit(oldp+2045,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__jtag_rsp))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5cU])) {
            tracep->chgBit(oldp+2046,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))));
            tracep->chgBit(oldp+2047,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk));
            tracep->chgCData(oldp+2048,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5dU])) {
            tracep->chgCData(oldp+2049,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+2050,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+2051,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5eU])) {
            tracep->chgBit(oldp+2052,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr));
            tracep->chgCData(oldp+2053,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+2054,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+2055,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5fU])) {
            tracep->chgBit(oldp+2056,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_write_valid));
            tracep->chgBit(oldp+2057,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbdata_read_valid));
            tracep->chgBit(oldp+2058,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbdata_write_valid));
            tracep->chgIData(oldp+2059,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data),32);
            tracep->chgSData(oldp+2060,((0x1ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                                   >> 0x17U))),9);
            tracep->chgBit(oldp+2061,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x16U))));
            tracep->chgCData(oldp+2062,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                               >> 0x14U))),2);
            tracep->chgBit(oldp+2063,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2064,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2065,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2066,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2067,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2068,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2069,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2070,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2071,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2072,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2073,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 9U))));
            tracep->chgBit(oldp+2074,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 8U))));
            tracep->chgBit(oldp+2075,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 7U))));
            tracep->chgBit(oldp+2076,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 6U))));
            tracep->chgBit(oldp+2077,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 5U))));
            tracep->chgBit(oldp+2078,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 4U))));
            tracep->chgCData(oldp+2079,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus)),4);
            tracep->chgCData(oldp+2080,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+2081,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                                  >> 0x18U))),5);
            tracep->chgSData(oldp+2082,((0x7ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                                   >> 0xdU))),11);
            tracep->chgBit(oldp+2083,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2084,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                             >> 0xbU))));
            tracep->chgCData(oldp+2085,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 8U))),3);
            tracep->chgCData(oldp+2086,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+2087,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs)),4);
            tracep->chgBit(oldp+2088,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d));
            tracep->chgCData(oldp+2089,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x60U])) {
            tracep->chgBit(oldp+2090,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2091,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2092,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2093,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2094,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2095,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2096,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2097,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2098,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[0U])));
            tracep->chgBit(oldp+2099,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2100,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2101,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2102,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2103,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2104,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2105,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2106,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2107,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[0U])));
            tracep->chgBit(oldp+2108,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req));
            tracep->chgSData(oldp+2109,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr),12);
            tracep->chgBit(oldp+2110,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
            tracep->chgIData(oldp+2111,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2112,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+2113,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
            tracep->chgCData(oldp+2114,(((4U != (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgBit(oldp+2115,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgCData(oldp+2116,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2117,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgBit(oldp+2118,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
            tracep->chgCData(oldp+2119,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2120,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+2121,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2122,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+2123,((((0U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2124,((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+2125,((0U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2126,((1U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2127,((4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2128,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2129,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2130,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+2131,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U] 
                                                        >> 5U)))))),4);
            tracep->chgSData(oldp+2132,(((((4U != (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                      >> 0x12U)))
                                            ? 0U : 1U) 
                                          << 0xbU) 
                                         | (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                             << 0xaU) 
                                            | (0x3ffU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                  >> 5U))))),13);
            tracep->chgBit(oldp+2133,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgCData(oldp+2134,((0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U])),5);
            tracep->chgBit(oldp+2135,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2136,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we));
            tracep->chgBit(oldp+2137,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req));
            tracep->chgSData(oldp+2138,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__addr),12);
            tracep->chgIData(oldp+2139,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2140,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+2141,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we),32);
            tracep->chgCData(oldp+2142,((0xfU & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we)),4);
            tracep->chgBit(oldp+2143,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack));
            tracep->chgCData(oldp+2144,(((4U != (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgBit(oldp+2145,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgCData(oldp+2146,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2147,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgBit(oldp+2148,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we)))));
            tracep->chgCData(oldp+2149,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2150,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+2151,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2152,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+2153,((((0U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2154,((((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+2155,((0U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2156,((1U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2157,((4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2158,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2159,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2160,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+2161,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                                        >> 5U)))))),4);
            tracep->chgSData(oldp+2162,(((((4U != (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                      >> 0x12U)))
                                            ? 0U : 1U) 
                                          << 0xbU) 
                                         | (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                             << 0xaU) 
                                            | (0x3ffU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                  >> 5U))))),13);
            tracep->chgBit(oldp+2163,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgCData(oldp+2164,((0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U])),5);
            tracep->chgBit(oldp+2165,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2166,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2167,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2168,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2169,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2170,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2171,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2172,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2173,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2174,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+2175,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2176,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2177,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2178,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2179,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2180,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2181,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2182,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2183,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+2184,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2185,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+2186,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp4940[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[0U]);
            __Vtemp4940[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[1U]));
            __Vtemp4940[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2187,(__Vtemp4940),85);
            tracep->chgBit(oldp+2190,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+2191,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2194,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+2197,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgBit(oldp+2200,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2201,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2202,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2203,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2204,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2205,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2206,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2207,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2208,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+2209,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2210,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2211,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2212,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2213,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2214,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2215,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2216,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2217,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+2218,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2219,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+2220,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp4944[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U]);
            __Vtemp4944[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U]));
            __Vtemp4944[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2221,(__Vtemp4944),85);
            tracep->chgBit(oldp+2224,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+2225,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2228,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+2231,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x61U])) {
            tracep->chgBit(oldp+2234,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2235,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2236,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2237,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2238,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2239,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2240,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2241,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2242,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U])));
            tracep->chgBit(oldp+2243,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2244,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2245,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2246,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2247,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2248,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2249,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2250,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2251,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                       [0U][0U])));
            tracep->chgBit(oldp+2252,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2253,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2254,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2255,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2256,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2257,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2258,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2259,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2260,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                       [1U][0U])));
            tracep->chgBit(oldp+2261,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+2262,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re));
            tracep->chgSData(oldp+2263,((0x1fcU & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                         >> 5U))))),9);
            tracep->chgIData(oldp+2264,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+2265,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+2266,(((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+2267,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))))));
            tracep->chgBit(oldp+2268,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+2269,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2270,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2271,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2272,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2273,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2274,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2275,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+2276,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+2277,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+2278,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2279,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2280,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2281,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2282,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2283,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2284,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2285,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2286,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2287,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2288,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2289,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2290,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2291,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2292,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2293,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+2294,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+2295,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2296,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2297,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2298,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2299,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2300,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U])));
            tracep->chgCData(oldp+2301,((7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                  >> 1U)))),3);
            tracep->chgBit(oldp+2302,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 9U)) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
            tracep->chgCData(oldp+2303,((0x3fU & ((
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                     >> 1U)))),6);
            tracep->chgBit(oldp+2304,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x24U)) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2305,(((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                >> 0x24U)) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re))));
            tracep->chgQData(oldp+2306,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
            tracep->chgBit(oldp+2308,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+2309,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+2310,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                       & (0U != (3U 
                                                 & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                     << 0x1bU) 
                                                    | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                       >> 5U)))))));
            tracep->chgBit(oldp+2311,((1U & (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
            tracep->chgBit(oldp+2312,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+2313,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+2314,((((0U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2315,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+2316,((0U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2317,((1U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2318,((4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2319,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2320,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2321,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+2322,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                        >> 5U)))))),4);
            tracep->chgBit(oldp+2323,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2324,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2325,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2326,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2327,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2328,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2329,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2330,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2331,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+2332,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2333,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2334,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2335,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2336,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2337,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2338,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2339,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2340,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+2341,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2342,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2343,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2344,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2345,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2346,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2347,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2348,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2349,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+2350,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2351,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2352,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2353,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2354,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2355,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2356,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2357,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2358,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgCData(oldp+2359,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrequest),2);
            tracep->chgBit(oldp+2360,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2361,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2362,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2363,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2364,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2365,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2366,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2367,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2368,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+2369,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrequest))));
            tracep->chgBit(oldp+2370,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2371,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2372,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2373,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2374,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2375,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2376,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2377,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2378,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+2379,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2380,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+2381,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2382,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2383,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2384,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2385,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2386,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2387,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2388,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2389,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2390,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2391,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2392,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2393,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2394,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2395,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2396,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2397,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2398,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2399,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2400,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2401,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2402,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2403,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp5006[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U]);
            __Vtemp5006[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U]));
            __Vtemp5006[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2404,(__Vtemp5006),85);
            tracep->chgBit(oldp+2407,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+2408,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2409,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2410,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2411,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2412,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2413,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2414,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2415,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2416,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+2417,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp5010[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp5010[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp5010[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2418,(__Vtemp5010),85);
            tracep->chgBit(oldp+2421,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgBit(oldp+2422,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2423,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2424,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2425,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2426,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2427,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2428,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2429,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2430,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+2431,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp5014[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp5014[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp5014[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2432,(__Vtemp5014),85);
            tracep->chgBit(oldp+2435,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgWData(oldp+2436,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2439,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+2442,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2445,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2446,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2447,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2448,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2449,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x61U] | vlTOPp->__Vm_traceActivity
                         [0x78U]))) {
            tracep->chgBit(oldp+2450,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 1U))));
            tracep->chgBit(oldp+2451,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 2U))));
            tracep->chgBit(oldp+2452,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 3U))));
            tracep->chgBit(oldp+2453,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 4U))));
            tracep->chgBit(oldp+2454,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 5U))));
            tracep->chgBit(oldp+2455,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 6U))));
            tracep->chgBit(oldp+2456,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 7U))));
            tracep->chgBit(oldp+2457,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 8U))));
            tracep->chgBit(oldp+2458,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 9U))));
            tracep->chgBit(oldp+2459,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xaU))));
            tracep->chgBit(oldp+2460,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2461,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xcU))));
            tracep->chgBit(oldp+2462,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xdU))));
            tracep->chgBit(oldp+2463,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2464,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2465,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+2466,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x11U))));
            tracep->chgBit(oldp+2467,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+2468,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x13U))));
            tracep->chgBit(oldp+2469,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x14U))));
            tracep->chgBit(oldp+2470,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x15U))));
            tracep->chgBit(oldp+2471,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2472,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+2473,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+2474,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+2475,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+2476,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+2477,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2478,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2479,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+2480,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+2481,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                                       & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U])));
            tracep->chgCData(oldp+2482,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2483,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2484,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2485,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2486,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2487,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2488,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2489,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2490,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2491,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2492,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2493,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2494,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2495,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2496,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2497,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2498,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2499,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2500,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2501,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2502,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2503,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2504,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2505,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2506,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2507,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2508,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2509,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgCData(oldp+2510,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2511,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 1U))));
            tracep->chgBit(oldp+2512,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 2U))));
            tracep->chgBit(oldp+2513,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 3U))));
            tracep->chgBit(oldp+2514,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 4U))));
            tracep->chgBit(oldp+2515,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 5U))));
            tracep->chgBit(oldp+2516,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 6U))));
            tracep->chgBit(oldp+2517,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 7U))));
            tracep->chgBit(oldp+2518,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we)
                                              ? (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                 >> 8U)
                                              : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d)))));
            tracep->chgBit(oldp+2519,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 9U))));
            tracep->chgBit(oldp+2520,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xaU))));
            tracep->chgBit(oldp+2521,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2522,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xcU))));
            tracep->chgBit(oldp+2523,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xdU))));
            tracep->chgBit(oldp+2524,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2525,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xfU))));
            tracep->chgBit(oldp+2526,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x10U))));
            tracep->chgBit(oldp+2527,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x11U))));
            tracep->chgBit(oldp+2528,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+2529,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x13U))));
            tracep->chgBit(oldp+2530,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x14U))));
            tracep->chgBit(oldp+2531,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x15U))));
            tracep->chgBit(oldp+2532,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2533,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+2534,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+2535,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+2536,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+2537,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+2538,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+2539,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+2540,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+2541,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+2542,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) 
                                       & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U])));
            tracep->chgCData(oldp+2543,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                                          ? (7U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                      >> 1U)))
                                          : 0U)),3);
            tracep->chgBit(oldp+2544,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                                       & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 1U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x62U])) {
            tracep->chgBit(oldp+2545,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2546,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2547,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2548,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2549,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2550,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2551,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2552,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2553,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[0U])));
            tracep->chgBit(oldp+2554,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2555,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2556,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2557,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2558,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2559,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2560,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2561,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2562,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U]))));
            tracep->chgBit(oldp+2563,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2564,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2565,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2566,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2567,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2568,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2569,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2570,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2571,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U]))));
            tracep->chgBit(oldp+2572,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2573,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2574,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2575,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2576,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2577,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2578,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2579,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2580,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U]))));
            tracep->chgBit(oldp+2581,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2582,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2583,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2584,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2585,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2586,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2587,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2588,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2589,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U]))));
            tracep->chgBit(oldp+2590,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2591,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2592,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2593,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2594,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2595,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2596,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2597,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2598,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U]))));
            tracep->chgBit(oldp+2599,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2600,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2601,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2602,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2603,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2604,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2605,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2606,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2607,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U]))));
            tracep->chgBit(oldp+2608,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2609,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2610,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2611,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2612,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2613,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2614,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2615,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2616,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U]))));
            tracep->chgBit(oldp+2617,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2618,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2619,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2620,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2621,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2622,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2623,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2624,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2625,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U]))));
            tracep->chgBit(oldp+2626,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2627,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2628,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2629,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2630,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2631,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2632,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2633,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2634,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U]))));
            tracep->chgBit(oldp+2635,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2636,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2637,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2638,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2639,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2640,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2641,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2642,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2643,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U]))));
            tracep->chgBit(oldp+2644,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2645,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xaU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2646,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xaU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2647,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xaU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2648,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [0xaU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2649,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0xaU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2650,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0xaU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2651,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0xaU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2652,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xaU]))));
            tracep->chgBit(oldp+2653,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0xbU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2654,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xbU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2655,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xbU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2656,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xbU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2657,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [0xbU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2658,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0xbU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2659,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0xbU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2660,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0xbU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2661,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xbU]))));
            tracep->chgBit(oldp+2662,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0xcU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2663,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xcU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2664,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xcU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2665,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xcU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2666,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                          [0xcU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2667,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0xcU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2668,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0xcU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2669,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                     [0xcU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2670,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xcU]))));
            tracep->chgBit(oldp+2671,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2672,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2673,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2674,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2675,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2676,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2677,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2678,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2679,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [0U]))));
            tracep->chgBit(oldp+2680,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2681,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2682,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2683,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2684,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2685,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2686,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2687,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2688,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [1U]))));
            tracep->chgBit(oldp+2689,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2690,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2691,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2692,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2693,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2694,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2695,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2696,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2697,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+2698,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2699,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2700,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2701,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2702,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2703,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2704,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2705,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2706,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+2707,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2708,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2709,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2710,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2711,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2712,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2713,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2714,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2715,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+2716,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2717,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2718,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2719,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2720,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2721,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2722,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2723,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2724,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+2725,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2726,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2727,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2728,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2729,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2730,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2731,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2732,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2733,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+2734,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2735,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2736,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2737,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2738,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2739,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2740,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2741,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2742,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+2743,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2744,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2745,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2746,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2747,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2748,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2749,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2750,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2751,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+2752,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2753,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2754,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2755,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2756,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2757,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2758,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2759,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2760,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+2761,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2762,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2763,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2764,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2765,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2766,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2767,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2768,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2769,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+2770,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2771,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2772,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2773,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2774,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2775,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2776,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2777,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2778,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+2779,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2780,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xaU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2781,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xaU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2782,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xaU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2783,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [0xaU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2784,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xaU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2785,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xaU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2786,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xaU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2787,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU]))));
            tracep->chgBit(oldp+2788,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xbU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2789,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xbU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2790,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xbU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2791,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xbU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2792,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [0xbU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2793,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xbU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2794,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xbU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2795,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xbU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2796,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xbU]))));
            tracep->chgBit(oldp+2797,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xcU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2798,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xcU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2799,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xcU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2800,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xcU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2801,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [0xcU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2802,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xcU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2803,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xcU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2804,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xcU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2805,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xcU]))));
            tracep->chgBit(oldp+2806,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2807,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2808,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2809,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2810,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2811,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2812,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2813,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2814,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+2815,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+2816,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2817,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2819,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2820,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2821,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2822,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2823,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2824,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2825,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2826,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2827,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+2828,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+2829,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2830,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2832,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2833,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2834,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2835,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2836,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2837,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2838,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2839,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2840,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+2841,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+2842,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2843,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [2U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [2U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [2U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [2U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2845,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2846,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2847,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2848,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2849,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2850,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2851,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2852,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2853,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+2854,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+2855,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2856,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [3U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [3U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [3U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [3U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2858,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2859,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2860,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2861,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2862,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2863,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2864,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2865,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2866,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+2867,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+2868,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2869,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [4U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [4U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [4U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [4U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2871,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2872,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2873,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2874,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2875,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2876,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2877,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2878,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2879,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+2880,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+2881,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2882,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [5U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [5U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [5U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [5U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2884,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2885,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2886,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2887,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2888,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2889,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2890,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2891,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2892,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+2893,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+2894,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2895,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [6U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [6U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [6U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [6U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2897,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2898,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2899,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2900,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2901,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2902,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2903,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2904,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2905,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+2906,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+2907,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2908,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [7U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [7U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [7U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [7U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2910,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2911,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2912,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2913,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2914,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2915,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2916,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2917,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2918,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+2919,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+2920,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2921,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [8U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [8U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [8U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [8U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2923,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2924,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2925,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2926,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2927,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2928,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2929,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2930,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2931,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+2932,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+2933,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2934,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [9U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [9U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [9U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [9U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2936,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2937,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xaU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2938,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xaU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2939,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xaU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2940,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [0xaU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2941,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xaU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2942,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xaU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2943,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xaU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2944,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU]))));
            tracep->chgBit(oldp+2945,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU]))));
            tracep->chgBit(oldp+2946,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2947,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [0xaU] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [0xaU] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [0xaU] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [0xaU] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2949,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xbU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2950,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xbU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2951,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xbU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2952,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xbU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2953,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [0xbU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2954,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xbU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2955,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xbU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2956,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xbU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2957,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xbU]))));
            tracep->chgBit(oldp+2958,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xbU]))));
            tracep->chgBit(oldp+2959,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xbU] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2960,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [0xbU] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [0xbU] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [0xbU] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [0xbU] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2962,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xcU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2963,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xcU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2964,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xcU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2965,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xcU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2966,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                          [0xcU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2967,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xcU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2968,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xcU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2969,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xcU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2970,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xcU]))));
            tracep->chgBit(oldp+2971,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xcU]))));
            tracep->chgBit(oldp+2972,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                     [0xcU] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2973,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                      [0xcU] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [0xcU] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                          [0xcU] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                           [0xcU] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2975,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2976,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2977,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2978,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2979,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2980,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2981,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2982,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2983,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+2984,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2985,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2986,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2987,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2988,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2989,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2990,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2991,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2992,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+2993,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2994,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+2995,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp5018[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[0U]);
            __Vtemp5018[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[1U]));
            __Vtemp5018[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2996,(__Vtemp5018),85);
            tracep->chgBit(oldp+2999,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+3000,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+3003,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+3006,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgBit(oldp+3009,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3010,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3011,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3012,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3013,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3014,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3015,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3016,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3017,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+3018,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3019,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3020,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3021,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3022,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3023,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3024,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3025,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3026,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+3027,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3028,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3029,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3030,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3031,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3032,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3033,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3034,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3035,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3036,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3037,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3038,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3039,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3040,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3041,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3042,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3043,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3044,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+3045,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hgrant),2);
            tracep->chgBit(oldp+3046,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3047,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3048,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3049,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3050,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3051,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3052,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3053,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3054,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3055,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3056,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3057,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3058,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3059,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3060,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3061,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3062,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3063,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3064,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3065,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3066,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3068,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3069,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3070,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3071,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3072,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3073,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3074,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3075,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3076,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3077,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3078,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3079,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3080,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3081,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3082,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3083,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3084,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3085,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+3086,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+3087,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3088,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3090,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x63U])) {
            tracep->chgCData(oldp+3091,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0]),3);
            tracep->chgCData(oldp+3092,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[1]),3);
            tracep->chgCData(oldp+3093,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[2]),3);
            tracep->chgCData(oldp+3094,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[3]),3);
            tracep->chgCData(oldp+3095,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[4]),3);
            tracep->chgCData(oldp+3096,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[5]),3);
            tracep->chgCData(oldp+3097,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[6]),3);
            tracep->chgCData(oldp+3098,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[7]),3);
            tracep->chgCData(oldp+3099,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[8]),3);
            tracep->chgCData(oldp+3100,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[9]),3);
            tracep->chgCData(oldp+3101,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[10]),3);
            tracep->chgCData(oldp+3102,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[11]),3);
            tracep->chgCData(oldp+3103,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[12]),3);
            tracep->chgCData(oldp+3104,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[13]),3);
            tracep->chgCData(oldp+3105,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[14]),3);
            tracep->chgCData(oldp+3106,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[15]),3);
            tracep->chgCData(oldp+3107,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[16]),3);
            tracep->chgCData(oldp+3108,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[17]),3);
            tracep->chgCData(oldp+3109,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[18]),3);
            tracep->chgCData(oldp+3110,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[19]),3);
            tracep->chgCData(oldp+3111,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[20]),3);
            tracep->chgCData(oldp+3112,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[21]),3);
            tracep->chgCData(oldp+3113,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[22]),3);
            tracep->chgCData(oldp+3114,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[23]),3);
            tracep->chgCData(oldp+3115,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[24]),3);
            tracep->chgCData(oldp+3116,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[25]),3);
            tracep->chgCData(oldp+3117,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[26]),3);
            tracep->chgCData(oldp+3118,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[27]),3);
            tracep->chgCData(oldp+3119,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[28]),3);
            tracep->chgCData(oldp+3120,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[29]),3);
            tracep->chgCData(oldp+3121,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[30]),3);
            tracep->chgCData(oldp+3122,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[31]),3);
            tracep->chgCData(oldp+3123,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0]),3);
            tracep->chgCData(oldp+3124,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[1]),3);
            tracep->chgCData(oldp+3125,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[2]),3);
            tracep->chgCData(oldp+3126,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[3]),3);
            tracep->chgCData(oldp+3127,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[4]),3);
            tracep->chgCData(oldp+3128,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[5]),3);
            tracep->chgCData(oldp+3129,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[6]),3);
            tracep->chgCData(oldp+3130,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[7]),3);
            tracep->chgCData(oldp+3131,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[8]),3);
            tracep->chgCData(oldp+3132,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[9]),3);
            tracep->chgCData(oldp+3133,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[10]),3);
            tracep->chgCData(oldp+3134,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[11]),3);
            tracep->chgCData(oldp+3135,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[12]),3);
            tracep->chgCData(oldp+3136,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[13]),3);
            tracep->chgCData(oldp+3137,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[14]),3);
            tracep->chgCData(oldp+3138,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[15]),3);
            tracep->chgCData(oldp+3139,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[16]),3);
            tracep->chgCData(oldp+3140,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[17]),3);
            tracep->chgCData(oldp+3141,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[18]),3);
            tracep->chgCData(oldp+3142,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[19]),3);
            tracep->chgCData(oldp+3143,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[20]),3);
            tracep->chgCData(oldp+3144,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[21]),3);
            tracep->chgCData(oldp+3145,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[22]),3);
            tracep->chgCData(oldp+3146,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[23]),3);
            tracep->chgCData(oldp+3147,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[24]),3);
            tracep->chgCData(oldp+3148,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[25]),3);
            tracep->chgCData(oldp+3149,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[26]),3);
            tracep->chgCData(oldp+3150,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[27]),3);
            tracep->chgCData(oldp+3151,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[28]),3);
            tracep->chgCData(oldp+3152,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[29]),3);
            tracep->chgCData(oldp+3153,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[30]),3);
            tracep->chgCData(oldp+3154,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[31]),3);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x63U] | vlTOPp->__Vm_traceActivity
                         [0x68U]))) {
            tracep->chgCData(oldp+3155,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U])),3);
            tracep->chgCData(oldp+3156,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+3157,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+3158,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x17U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+3159,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0xcU)))),3);
            tracep->chgCData(oldp+3160,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0x11U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+3161,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+3162,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 0xbU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+3163,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+3164,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 5U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+3165,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+3166,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+3167,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+3168,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x19U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+3169,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+3170,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x13U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+3171,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+3172,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0xdU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+3173,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+3174,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 7U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+3175,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+3176,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 1U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+3177,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 2U)))),3);
            tracep->chgCData(oldp+3178,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x1bU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 5U)))),3);
            tracep->chgCData(oldp+3179,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 8U)))),3);
            tracep->chgCData(oldp+3180,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x15U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0xbU)))),3);
            tracep->chgCData(oldp+3181,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0xeU)))),3);
            tracep->chgCData(oldp+3182,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0xfU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x11U)))),3);
            tracep->chgCData(oldp+3183,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x14U)))),3);
            tracep->chgCData(oldp+3184,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 9U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x17U)))),3);
            tracep->chgCData(oldp+3185,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x1aU)))),3);
            tracep->chgCData(oldp+3186,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                << 3U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                  >> 0x1dU)))),3);
            tracep->chgCData(oldp+3187,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U])),3);
            tracep->chgCData(oldp+3188,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+3189,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+3190,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x17U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+3191,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0xcU)))),3);
            tracep->chgCData(oldp+3192,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0x11U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+3193,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+3194,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+3195,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+3196,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 5U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+3197,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+3198,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+3199,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+3200,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x19U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+3201,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+3202,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x13U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+3203,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+3204,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0xdU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+3205,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+3206,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 7U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+3207,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+3208,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 1U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+3209,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 2U))),3);
            tracep->chgCData(oldp+3210,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 5U))),3);
            tracep->chgCData(oldp+3211,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 8U))),3);
            tracep->chgCData(oldp+3212,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0xbU))),3);
            tracep->chgCData(oldp+3213,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0xeU))),3);
            tracep->chgCData(oldp+3214,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x11U))),3);
            tracep->chgCData(oldp+3215,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x14U))),3);
            tracep->chgCData(oldp+3216,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x17U))),3);
            tracep->chgCData(oldp+3217,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 0x1aU))),3);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x64U] | vlTOPp->__Vm_traceActivity
                         [0x65U]))) {
            tracep->chgBit(oldp+3218,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3219,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3220,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3221,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3222,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3223,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3224,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3225,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3226,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x65U])) {
            tracep->chgBit(oldp+3227,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3228,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3229,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3230,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3231,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3232,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3233,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3234,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3235,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o))));
            tracep->chgBit(oldp+3236,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3237,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3238,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3239,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3240,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3241,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3242,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3243,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3244,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0U]))));
            tracep->chgBit(oldp+3245,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3246,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3247,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3248,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3249,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3250,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3251,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3252,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3253,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [1U]))));
            tracep->chgBit(oldp+3254,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3255,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3256,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3257,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3258,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3259,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3260,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3261,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3262,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [2U]))));
            tracep->chgBit(oldp+3263,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3264,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3265,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3266,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3267,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3268,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3269,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3270,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3271,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U]))));
            tracep->chgBit(oldp+3272,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3273,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3274,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3275,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3276,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3277,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3278,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3279,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3280,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [4U]))));
            tracep->chgBit(oldp+3281,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3282,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3283,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3284,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3285,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3286,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3287,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3288,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3289,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [5U]))));
            tracep->chgBit(oldp+3290,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3291,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3292,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3293,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3294,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3295,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3296,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3297,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3298,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [6U]))));
            tracep->chgBit(oldp+3299,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3300,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3301,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3302,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3303,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3304,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3305,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3306,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3307,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [7U]))));
            tracep->chgBit(oldp+3308,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3309,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3310,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3311,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3312,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3313,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3314,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3315,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3316,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [8U]))));
            tracep->chgBit(oldp+3317,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3318,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3319,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3320,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3321,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3322,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3323,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3324,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3325,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [9U]))));
            tracep->chgBit(oldp+3326,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3327,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xaU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3328,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xaU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3329,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xaU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3330,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [0xaU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3331,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xaU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3332,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [0xaU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3333,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xaU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3334,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xaU]))));
            tracep->chgBit(oldp+3335,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xbU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3336,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xbU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3337,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xbU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3338,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xbU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3339,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [0xbU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3340,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xbU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3341,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [0xbU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3342,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xbU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3343,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xbU]))));
            tracep->chgBit(oldp+3344,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xcU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3345,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xcU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3346,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xcU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3347,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xcU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3348,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                          [0xcU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3349,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xcU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3350,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [0xcU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3351,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xcU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3352,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xcU]))));
            tracep->chgIData(oldp+3353,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_sba_csrs),32);
            tracep->chgIData(oldp+3354,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3355,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3356,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o))));
            tracep->chgBit(oldp+3357,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                     >> 1U)))));
            tracep->chgQData(oldp+3358,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d),64);
            tracep->chgBit(oldp+3360,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3361,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3362,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3363,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3364,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3365,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3366,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3367,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3368,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+3369,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3370,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3371,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3372,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3373,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3374,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3375,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3376,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3377,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+3378,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3379,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3380,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3381,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3382,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3383,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3384,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3385,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3386,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+3387,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3388,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3389,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3390,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3391,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3392,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3393,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3394,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3395,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+3396,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3397,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3398,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3399,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3400,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3401,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3402,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3403,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3404,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+3405,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3406,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3407,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3408,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3409,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3410,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3411,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3412,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3413,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+3414,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3415,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3416,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3417,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3418,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3419,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3420,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3421,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3422,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+3423,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3424,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3425,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3426,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3427,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3428,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3429,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3430,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3431,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+3432,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3433,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3434,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3435,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3436,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3437,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3438,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3439,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3440,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+3441,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3442,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3443,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3444,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3445,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3446,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3447,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3448,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3449,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+3450,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3451,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xaU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3452,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xaU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3453,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xaU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3454,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [0xaU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3455,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0xaU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3456,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xaU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3457,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0xaU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3458,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU]))));
            tracep->chgBit(oldp+3459,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0xbU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3460,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xbU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3461,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xbU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3462,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xbU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3463,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                          [0xbU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3464,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0xbU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3465,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xbU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3466,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0xbU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3467,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU]))));
            tracep->chgBit(oldp+3468,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0xcU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3469,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xcU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3470,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xcU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3471,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xcU] 
                                                       >> 0x2bU)))),2);
        }
    }
}
