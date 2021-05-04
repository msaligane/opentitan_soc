// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceChgSub2(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 7561);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp4601[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x76U])) {
            tracep->chgCData(oldp+0,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [2U] 
                                                       >> 0x23U)))),8);
            tracep->chgBit(oldp+1,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [2U] 
                                                  >> 0x22U)))));
            tracep->chgIData(oldp+2,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [2U] 
                                              >> 2U))),32);
            tracep->chgBit(oldp+3,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [2U] 
                                                  >> 1U)))));
            tracep->chgBit(oldp+4,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [2U]))));
            tracep->chgBit(oldp+5,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [3U] 
                                                  >> 0x33U)))));
            tracep->chgCData(oldp+6,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x30U)))),3);
            tracep->chgCData(oldp+7,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x2dU)))),3);
            tracep->chgCData(oldp+8,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x2bU)))),2);
            tracep->chgCData(oldp+9,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [3U] 
                                                       >> 0x23U)))),8);
            tracep->chgBit(oldp+10,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [3U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+11,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                               [3U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+12,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [3U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+13,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [3U]))));
            tracep->chgBit(oldp+14,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [4U] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+15,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [4U] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+16,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [4U] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+17,((3U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [4U] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+18,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                        [4U] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+19,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [4U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+20,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                               [4U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+21,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [4U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+22,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [4U]))));
            tracep->chgBit(oldp+23,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [5U] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+24,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [5U] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+25,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [5U] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+26,((3U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [5U] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+27,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                        [5U] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+28,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [5U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+29,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                               [5U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+30,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [5U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+31,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [5U]))));
            tracep->chgBit(oldp+32,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [6U] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+33,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [6U] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+34,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [6U] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+35,((3U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [6U] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+36,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                        [6U] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+37,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [6U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+38,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                               [6U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+39,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [6U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+40,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [6U]))));
            tracep->chgBit(oldp+41,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [7U] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+42,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [7U] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+43,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [7U] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+44,((3U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [7U] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+45,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                        [7U] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+46,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [7U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+47,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                               [7U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+48,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [7U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+49,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [7U]))));
            tracep->chgBit(oldp+50,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [8U] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+51,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [8U] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+52,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [8U] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+53,((3U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [8U] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+54,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                        [8U] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+55,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [8U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+56,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                               [8U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+57,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [8U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+58,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [8U]))));
            tracep->chgBit(oldp+59,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [9U] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+60,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [9U] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+61,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [9U] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+62,((3U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [9U] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+63,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                        [9U] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+64,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [9U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+65,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                               [9U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+66,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [9U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+67,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [9U]))));
            tracep->chgBit(oldp+68,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [0xaU] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+69,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xaU] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+70,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xaU] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+71,((3U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                     [0xaU] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+72,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                        [0xaU] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+73,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [0xaU] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+74,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                               [0xaU] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+75,((1U & (IData)((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [0xaU] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+76,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xaU]))));
            tracep->chgIData(oldp+77,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim),32);
            tracep->chgCData(oldp+78,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete_id[0]),5);
            tracep->chgIData(oldp+79,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete),32);
            tracep->chgCData(oldp+80,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold[0]),3);
            tracep->chgCData(oldp+81,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                      [0U]),3);
            tracep->chgIData(oldp+82,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_sba_csrs),32);
            tracep->chgIData(oldp+83,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                               >> 2U))),32);
            tracep->chgBit(oldp+84,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                   >> 0x33U)))));
            tracep->chgBit(oldp+85,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o))));
            tracep->chgBit(oldp+86,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                   >> 1U)))));
            tracep->chgQData(oldp+87,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d),64);
            tracep->chgQData(oldp+89,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d),64);
            tracep->chgCData(oldp+91,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_d),3);
            tracep->chgBit(oldp+92,((1U & (IData)((
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0U] 
                                                   >> 0x33U)))));
            tracep->chgCData(oldp+93,((7U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0U] 
                                                     >> 0x30U)))),3);
            tracep->chgCData(oldp+94,((7U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0U] 
                                                     >> 0x2dU)))),3);
            tracep->chgCData(oldp+95,((3U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                     [0U] 
                                                     >> 0x2bU)))),2);
            tracep->chgCData(oldp+96,((0xffU & (IData)(
                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                        [0U] 
                                                        >> 0x23U)))),8);
            tracep->chgBit(oldp+97,((1U & (IData)((
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0U] 
                                                   >> 0x22U)))));
            tracep->chgIData(oldp+98,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                               [0U] 
                                               >> 2U))),32);
            tracep->chgBit(oldp+99,((1U & (IData)((
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+100,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+101,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+102,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+103,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+104,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+105,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+106,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+107,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+108,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+109,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+110,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+111,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+112,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+113,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+114,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+115,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+116,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+117,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+118,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+119,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+120,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+121,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+122,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+123,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+124,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+125,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+126,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+127,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+128,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+129,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+130,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+131,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+132,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+133,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+134,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+135,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+136,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+137,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+138,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+139,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+140,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+141,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+142,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+143,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+144,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+145,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [5U]))));
            tracep->chgBit(oldp+146,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+147,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+148,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+149,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+150,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+151,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+152,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+153,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+154,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [6U]))));
            tracep->chgBit(oldp+155,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+156,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+157,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+158,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+159,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+160,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+161,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+162,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+163,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [7U]))));
            tracep->chgBit(oldp+164,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+165,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+166,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+167,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+168,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+169,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+170,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+171,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+172,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [8U]))));
            tracep->chgBit(oldp+173,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+174,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+175,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+176,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+177,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+178,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+179,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+180,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+181,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [9U]))));
            tracep->chgBit(oldp+182,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+183,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+184,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+185,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+186,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0xaU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+187,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+188,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0xaU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+189,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+190,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xaU]))));
            tracep->chgBit(oldp+191,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+192,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+193,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+194,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+195,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+196,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+197,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                >> 2U))),32);
            tracep->chgBit(oldp+198,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 1U)))));
            tracep->chgBit(oldp+199,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i))));
            tracep->chgBit(oldp+200,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_req));
            tracep->chgBit(oldp+201,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_rsp));
            tracep->chgBit(oldp+202,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+203,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+204,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+205,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+206,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+207,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+208,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+209,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+210,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [0U]))));
            tracep->chgBit(oldp+211,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+212,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+213,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+214,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+215,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+216,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+217,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+218,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+219,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [1U]))));
            tracep->chgBit(oldp+220,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+221,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+222,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+223,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+224,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+225,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+226,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+227,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+228,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [2U]))));
            tracep->chgBit(oldp+229,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+230,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+231,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+232,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+233,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+234,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+235,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+236,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+237,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [3U]))));
            tracep->chgBit(oldp+238,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+239,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+240,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+241,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+242,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+243,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+244,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+245,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+246,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [4U]))));
            tracep->chgBit(oldp+247,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+248,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+249,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+250,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+251,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+252,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+253,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+254,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+255,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [5U]))));
            tracep->chgBit(oldp+256,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+257,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+258,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+259,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+260,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+261,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+262,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+263,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+264,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [6U]))));
            tracep->chgBit(oldp+265,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+266,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+267,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+268,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+269,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+270,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+271,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+272,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+273,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [7U]))));
            tracep->chgBit(oldp+274,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+275,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+276,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+277,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+278,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+279,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+280,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+281,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+282,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [8U]))));
            tracep->chgBit(oldp+283,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+284,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+285,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+286,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+287,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+288,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+289,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+290,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+291,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [9U]))));
            tracep->chgBit(oldp+292,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+293,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xaU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+294,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xaU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+295,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xaU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+296,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [0xaU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+297,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+298,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [0xaU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+299,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+300,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [0xaU]))));
            tracep->chgBit(oldp+301,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+302,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xbU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+303,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xbU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+304,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xbU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+305,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [0xbU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+306,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+307,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [0xbU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+308,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+309,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [0xbU]))));
            tracep->chgBit(oldp+310,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+311,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+312,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+313,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+314,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+315,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+316,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                >> 2U))),32);
            tracep->chgBit(oldp+317,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 1U)))));
            tracep->chgBit(oldp+318,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p))));
            tracep->chgBit(oldp+319,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hfifo_reqready));
            tracep->chgBit(oldp+320,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i))));
            tracep->chgBit(oldp+321,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+322,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+324,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+325,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+326,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+327,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+328,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+329,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+330,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+331,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+332,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+333,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+334,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+335,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+336,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+337,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+338,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+339,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+340,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+341,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+342,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+343,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+344,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [0U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [0U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [0U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [0U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+346,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+347,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+348,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+349,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+350,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+351,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+352,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+353,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+354,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+355,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+356,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+357,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+358,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+359,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+360,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+361,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+362,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+363,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+364,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+365,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+366,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [1U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [1U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [1U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [1U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+368,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+369,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+370,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+371,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+372,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+373,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+374,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+375,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+376,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+377,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+378,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+379,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+380,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+381,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+382,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+383,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+384,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+385,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+386,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+387,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+388,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [2U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [2U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [2U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [2U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+390,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+391,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+392,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+393,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+394,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+395,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+396,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+397,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+398,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+399,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+400,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+401,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+402,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+403,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+404,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+405,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+406,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+407,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+408,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+409,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+410,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [3U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [3U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [3U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [3U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+412,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+413,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+414,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+415,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+416,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+417,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+418,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+419,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+420,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+421,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+422,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+423,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+424,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+425,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+426,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+427,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+428,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+429,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+430,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+431,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+432,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [4U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [4U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [4U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [4U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+434,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+435,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+436,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+437,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+438,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+439,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+440,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+441,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+442,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+443,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+444,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+445,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+446,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+447,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+448,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+449,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+450,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+451,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [5U]))));
            tracep->chgBit(oldp+452,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [5U]))));
            tracep->chgBit(oldp+453,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+454,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [5U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [5U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [5U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [5U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+456,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+457,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+458,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+459,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+460,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+461,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+462,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+463,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+464,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+465,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+466,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+467,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+468,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+469,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+470,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+471,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+472,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+473,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [6U]))));
            tracep->chgBit(oldp+474,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [6U]))));
            tracep->chgBit(oldp+475,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+476,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [6U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [6U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [6U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [6U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+478,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+479,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+480,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+481,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+482,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+483,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+484,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+485,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+486,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+487,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+488,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+489,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+490,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+491,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+492,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+493,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+494,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+495,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [7U]))));
            tracep->chgBit(oldp+496,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [7U]))));
            tracep->chgBit(oldp+497,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+498,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [7U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [7U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [7U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [7U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+500,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+501,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+502,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+503,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+504,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+505,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+506,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+507,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+508,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+509,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+510,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+511,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+512,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+513,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+514,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+515,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+516,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+517,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [8U]))));
            tracep->chgBit(oldp+518,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [8U]))));
            tracep->chgBit(oldp+519,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+520,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [8U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [8U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [8U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [8U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+522,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+523,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+524,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+525,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+526,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+527,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+528,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+529,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+530,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+531,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+532,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+533,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+534,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+535,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+536,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+537,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+538,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+539,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [9U]))));
            tracep->chgBit(oldp+540,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [9U]))));
            tracep->chgBit(oldp+541,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+542,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [9U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [9U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [9U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [9U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+544,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+545,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+546,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+547,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+548,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+549,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+550,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+551,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+552,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+553,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+554,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+555,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+556,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+557,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0xaU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+558,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+559,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0xaU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+560,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+561,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xaU]))));
            tracep->chgBit(oldp+562,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xaU]))));
            tracep->chgBit(oldp+563,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+564,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [0xaU] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [0xaU] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                         [0xaU] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [0xaU] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x77U])) {
            tracep->chgBit(oldp+566,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we));
            tracep->chgBit(oldp+567,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we));
            tracep->chgBit(oldp+568,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we));
            tracep->chgBit(oldp+569,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we));
            tracep->chgBit(oldp+570,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we));
            tracep->chgBit(oldp+571,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
            tracep->chgBit(oldp+572,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
            tracep->chgBit(oldp+573,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
            tracep->chgBit(oldp+574,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
            tracep->chgBit(oldp+575,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
            tracep->chgBit(oldp+576,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
            tracep->chgBit(oldp+577,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
            tracep->chgBit(oldp+578,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we));
            tracep->chgBit(oldp+579,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we));
            tracep->chgBit(oldp+580,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we));
            tracep->chgBit(oldp+581,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we));
            tracep->chgBit(oldp+582,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we));
            tracep->chgBit(oldp+583,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
            tracep->chgBit(oldp+584,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
            tracep->chgBit(oldp+585,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
            tracep->chgBit(oldp+586,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
            tracep->chgBit(oldp+587,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
            tracep->chgBit(oldp+588,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
            tracep->chgBit(oldp+589,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
            tracep->chgBit(oldp+590,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
            tracep->chgBit(oldp+591,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
            tracep->chgBit(oldp+592,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we));
            tracep->chgBit(oldp+593,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we));
            tracep->chgBit(oldp+594,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we));
            tracep->chgBit(oldp+595,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we));
            tracep->chgBit(oldp+596,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
            tracep->chgBit(oldp+597,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we));
            tracep->chgBit(oldp+598,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we));
            tracep->chgBit(oldp+599,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we));
            tracep->chgBit(oldp+600,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we));
            tracep->chgBit(oldp+601,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we));
            tracep->chgBit(oldp+602,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we));
            tracep->chgBit(oldp+603,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we));
            tracep->chgBit(oldp+604,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we));
            tracep->chgBit(oldp+605,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we));
            tracep->chgBit(oldp+606,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we));
            tracep->chgBit(oldp+607,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
            tracep->chgBit(oldp+608,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we));
            tracep->chgBit(oldp+609,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we));
            tracep->chgBit(oldp+610,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we));
            tracep->chgBit(oldp+611,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
            tracep->chgBit(oldp+612,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
            tracep->chgBit(oldp+613,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
            tracep->chgBit(oldp+614,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we));
            tracep->chgBit(oldp+615,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
            tracep->chgBit(oldp+616,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
            tracep->chgBit(oldp+617,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
            tracep->chgBit(oldp+618,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
            tracep->chgBit(oldp+619,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we));
            tracep->chgBit(oldp+620,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we));
            tracep->chgBit(oldp+621,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we));
            tracep->chgBit(oldp+622,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
            tracep->chgBit(oldp+623,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
            tracep->chgBit(oldp+624,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
            tracep->chgBit(oldp+625,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we));
            tracep->chgBit(oldp+626,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
            tracep->chgBit(oldp+627,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we));
            tracep->chgBit(oldp+628,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we));
            tracep->chgBit(oldp+629,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
            tracep->chgBit(oldp+630,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
            tracep->chgBit(oldp+631,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
            tracep->chgBit(oldp+632,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
            tracep->chgBit(oldp+633,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
            tracep->chgBit(oldp+634,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
            tracep->chgBit(oldp+635,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
            tracep->chgBit(oldp+636,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
            tracep->chgBit(oldp+637,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
            tracep->chgBit(oldp+638,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
            tracep->chgBit(oldp+639,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
            tracep->chgBit(oldp+640,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
            tracep->chgBit(oldp+641,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
            tracep->chgBit(oldp+642,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
            tracep->chgBit(oldp+643,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
            tracep->chgBit(oldp+644,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
            tracep->chgBit(oldp+645,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
            tracep->chgBit(oldp+646,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
            tracep->chgBit(oldp+647,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
            tracep->chgBit(oldp+648,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
            tracep->chgBit(oldp+649,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
            tracep->chgBit(oldp+650,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
            tracep->chgBit(oldp+651,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
            tracep->chgBit(oldp+652,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
            tracep->chgBit(oldp+653,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
            tracep->chgBit(oldp+654,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
            tracep->chgBit(oldp+655,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we));
            tracep->chgBit(oldp+656,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
            tracep->chgBit(oldp+657,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
            tracep->chgBit(oldp+658,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x78U])) {
            tracep->chgIData(oldp+659,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
            tracep->chgIData(oldp+660,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
            tracep->chgCData(oldp+661,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgIData(oldp+662,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
            tracep->chgBit(oldp+663,((0U != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)));
            tracep->chgIData(oldp+664,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event),32);
            tracep->chgIData(oldp+665,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+666,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we));
            tracep->chgBit(oldp+667,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
            tracep->chgBit(oldp+668,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
            tracep->chgBit(oldp+669,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
            tracep->chgBit(oldp+670,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
            tracep->chgBit(oldp+671,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
            tracep->chgBit(oldp+672,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we));
            tracep->chgBit(oldp+673,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we));
            tracep->chgBit(oldp+674,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we));
            tracep->chgBit(oldp+675,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we));
            tracep->chgBit(oldp+676,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x79U])) {
            tracep->chgBit(oldp+677,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+678,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+679,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgBit(oldp+680,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgBit(oldp+681,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgBit(oldp+682,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgBit(oldp+683,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgBit(oldp+684,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x7aU])) {
            tracep->chgBit(oldp+685,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear));
            tracep->chgBit(oldp+686,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgCData(oldp+687,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+688,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgBit(oldp+689,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
            tracep->chgCData(oldp+690,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgBit(oldp+691,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+692,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgIData(oldp+693,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+694,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgIData(oldp+695,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+696,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 1U))));
            tracep->chgBit(oldp+697,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 1U))));
            tracep->chgBit(oldp+698,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                            >> 1U))));
            tracep->chgBit(oldp+699,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we));
            tracep->chgIData(oldp+700,((0x1fffffffU 
                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                           >> 3U))),29);
            tracep->chgIData(oldp+701,((0x1fffffffU 
                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                           >> 3U))),29);
            tracep->chgIData(oldp+702,((0x1fffffffU 
                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                           >> 3U))),29);
            tracep->chgBit(oldp+703,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+704,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgQData(oldp+705,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+707,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+709,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+710,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgBit(oldp+712,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 2U))));
            tracep->chgBit(oldp+713,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 2U))));
            tracep->chgQData(oldp+714,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+716,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+718,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+719,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x7bU])) {
            tracep->chgQData(oldp+721,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d),64);
            tracep->chgCData(oldp+723,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_d),2);
            tracep->chgCData(oldp+724,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata))),8);
            tracep->chgCData(oldp+725,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                         >> 8U)))),8);
            tracep->chgCData(oldp+726,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x10U)))),8);
            tracep->chgCData(oldp+727,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x18U)))),8);
            tracep->chgCData(oldp+728,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x20U)))),8);
            tracep->chgCData(oldp+729,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x28U)))),8);
            tracep->chgCData(oldp+730,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x30U)))),8);
            tracep->chgCData(oldp+731,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x38U)))),8);
            tracep->chgBit(oldp+732,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgIData(oldp+733,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+734,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                >> 1U))),32);
            tracep->chgBit(oldp+735,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgBit(oldp+736,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+737,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgQData(oldp+738,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                        << 1U)),33);
            tracep->chgQData(oldp+740,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x7bU] | vlTOPp->__Vm_traceActivity
                         [0x7cU]))) {
            tracep->chgBit(oldp+742,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+743,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+744,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+745,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+746,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+747,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+748,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                >> 2U))),32);
            tracep->chgBit(oldp+749,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                    >> 1U)))));
            tracep->chgBit(oldp+750,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom))));
            tracep->chgBit(oldp+751,((1U & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                             >> 0x15U) 
                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x7cU])) {
            tracep->chgBit(oldp+752,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+753,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+754,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+755,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+756,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+757,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+758,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+759,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+760,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[0U])));
            tracep->chgBit(oldp+761,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req));
            tracep->chgSData(oldp+762,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr),12);
            tracep->chgBit(oldp+763,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
            tracep->chgIData(oldp+764,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+765,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+766,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
            tracep->chgBit(oldp+767,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgBit(oldp+768,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
            tracep->chgIData(oldp+769,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+770,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+771,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+772,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+773,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+774,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+775,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+776,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgIData(oldp+777,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+778,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack));
            tracep->chgBit(oldp+779,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+780,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+781,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+782,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+783,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+784,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+785,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+786,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+787,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+788,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+789,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+790,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+791,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+792,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+793,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+794,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+795,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+796,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+797,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+798,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+799,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+800,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x15U))));
            __Vtemp4601[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U]);
            __Vtemp4601[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]));
            __Vtemp4601[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+801,(__Vtemp4601),85);
            tracep->chgBit(oldp+804,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+805,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+808,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+811,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        }
        tracep->chgBit(oldp+814,(vlTOPp->clk_i));
        tracep->chgBit(oldp+815,(vlTOPp->rst_ni));
        tracep->chgBit(oldp+816,(vlTOPp->jtag_tck_i));
        tracep->chgBit(oldp+817,(vlTOPp->jtag_tms_i));
        tracep->chgBit(oldp+818,(vlTOPp->jtag_trst_ni));
        tracep->chgBit(oldp+819,(vlTOPp->jtag_tdi_i));
        tracep->chgBit(oldp+820,(vlTOPp->jtag_tdo_o));
        tracep->chgIData(oldp+821,(vlTOPp->gpio_i),20);
        tracep->chgIData(oldp+822,(vlTOPp->gpio_o),20);
        tracep->chgBit(oldp+823,((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                           & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                              | (0U 
                                                 != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))))));
        tracep->chgBit(oldp+824,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy) 
                                   | ((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                  | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        tracep->chgBit(oldp+825,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                     | (0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))));
        tracep->chgBit(oldp+826,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        tracep->chgIData(oldp+827,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                   (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0xfU))]),32);
        tracep->chgIData(oldp+828,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                   (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]),32);
        tracep->chgSData(oldp+829,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
        tracep->chgBit(oldp+830,((1U & (((((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))))));
        tracep->chgBit(oldp+831,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err));
        tracep->chgIData(oldp+832,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                    << 1U)),32);
        tracep->chgBit(oldp+833,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set));
        tracep->chgBit(oldp+834,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec));
        tracep->chgBit(oldp+835,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        tracep->chgBit(oldp+836,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy));
        tracep->chgBit(oldp+837,(((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
        tracep->chgBit(oldp+838,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        tracep->chgBit(oldp+839,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        tracep->chgBit(oldp+840,(((((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                    & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                               >> 0x33U))) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
        tracep->chgIData(oldp+841,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                     ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                         ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                         : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
                                     : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)),32);
        tracep->chgBit(oldp+842,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing)) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)))));
        tracep->chgBit(oldp+843,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match));
        tracep->chgBit(oldp+844,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match));
        tracep->chgBit(oldp+845,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                  & (1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->chgBit(oldp+846,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if));
        tracep->chgBit(oldp+847,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))));
        tracep->chgBit(oldp+848,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q))));
        tracep->chgBit(oldp+849,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->chgBit(oldp+850,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz)))));
        tracep->chgBit(oldp+851,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump));
        tracep->chgBit(oldp+852,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch));
        tracep->chgBit(oldp+853,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch));
        tracep->chgBit(oldp+854,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
                                  | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear))))));
        tracep->chgBit(oldp+855,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                            ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                            : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->chgIData(oldp+856,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                     ? 0U : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                              ? ((0xffffff00U 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                 | (0x7cU 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                                       << 2U)))
                                              : (0xffffff00U 
                                                 & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->chgBit(oldp+857,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))));
        tracep->chgBit(oldp+858,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgCData(oldp+859,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                     ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                              >> 1U))
                                     : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        tracep->chgBit(oldp+860,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgIData(oldp+861,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                      ? (0xfffffffeU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                      : (0xfffffffcU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                    + (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                       << 2U))),32);
        tracep->chgBit(oldp+862,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                  | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
        tracep->chgIData(oldp+863,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                     ? (0xfffffffeU 
                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                     : 0U)),32);
        tracep->chgBit(oldp+864,((1U & (~ (IData)((3U 
                                                   == 
                                                   (3U 
                                                    & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                        >> 1U) 
                                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        tracep->chgIData(oldp+865,((0xfffffffeU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                    + 
                                                    ((2U 
                                                      & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                         << 1U)) 
                                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                                   << 1U))),32);
        tracep->chgCData(oldp+866,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        tracep->chgCData(oldp+867,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        tracep->chgIData(oldp+868,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                     ? ((0xffff0000U 
                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                            << 0x10U)) 
                                        | (0xffffU 
                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                              >> 0x10U)))
                                     : ((0xffff0000U 
                                         & ((IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                     >> 2U)) 
                                            << 0x10U)) 
                                        | (0xffffU 
                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                              >> 0x10U))))),32);
        tracep->chgBit(oldp+869,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                         ? ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                              >> 1U) 
                                             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                            | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                         : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                             & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                            | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                               & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                  | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+870,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                         ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                             >> 1U) 
                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                         : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                             & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->chgBit(oldp+871,((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                         >> 1U) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->chgIData(oldp+872,((0x7fffffffU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                   + 
                                                   ((2U 
                                                     & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                        << 1U)) 
                                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->chgIData(oldp+873,((0x7fffffffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                                    ? 
                                                   (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                                      ? 
                                                     (0xfffffffeU 
                                                      & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                                      : 0U) 
                                                    >> 1U)
                                                    : 
                                                   (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                    + 
                                                    ((2U 
                                                      & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                         << 1U)) 
                                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->chgIData(oldp+874,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        tracep->chgBit(oldp+875,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                  | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
        tracep->chgBit(oldp+876,(0U));
        tracep->chgBit(oldp+877,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->chgIData(oldp+878,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                     ? 0U : (0x1fU 
                                             & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xfU)))),32);
        tracep->chgBit(oldp+879,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->chgBit(oldp+880,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
                                  & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec)))));
        tracep->chgBit(oldp+881,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                  & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec)))));
        tracep->chgBit(oldp+882,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+883,(((3U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                     | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->chgBit(oldp+884,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                  | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)))));
        tracep->chgBit(oldp+885,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        tracep->chgBit(oldp+886,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->chgIData(oldp+887,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                     ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                         << 0x1eU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                           >> 2U)) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->chgBit(oldp+888,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
        tracep->chgQData(oldp+889,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                     ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                     : (1ULL | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                << 1U)))),33);
        tracep->chgQData(oldp+891,((0x1ffffffffULL 
                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                        ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                        : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                            ? (~ ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                  << 1U))
                                            : ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                               << 1U))))),33);
        tracep->chgBit(oldp+893,((1U & ((0x80000000U 
                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                         ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             >> 0x1fU) 
                                            ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                         : (~ (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 0x20U)))))));
        tracep->chgQData(oldp+894,((0x7ffffffffULL 
                                    & (VL_MULS_QQQ(35,35,35, 
                                                   (0x7ffffffffULL 
                                                    & VL_EXTENDS_QI(35,17, 
                                                                    (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                   (0x7ffffffffULL 
                                                    & VL_EXTENDS_QI(35,17, 
                                                                    (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                       + VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        tracep->chgQData(oldp+896,((0x3ffffffffULL 
                                    & ((0x7ffffffffULL 
                                        & VL_MULS_QQQ(35,35,35, 
                                                      (0x7ffffffffULL 
                                                       & VL_EXTENDS_QI(35,17, 
                                                                       (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                      (0x7ffffffffULL 
                                                       & VL_EXTENDS_QI(35,17, 
                                                                       (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                       + (0x7ffffffffULL 
                                          & VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        tracep->chgBit(oldp+898,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                   ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->chgBit(oldp+899,((1U & (IData)((1ULL 
                                                & ((VL_MULS_QQQ(35,35,35, 
                                                                (0x7ffffffffULL 
                                                                 & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                (0x7ffffffffULL 
                                                                 & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                    + 
                                                    VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                   >> 0x22U))))));
        tracep->chgIData(oldp+900,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                     ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((0xffffff00U 
                                             & ((IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                         >> 2U)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 0x10U)))
                                         : ((0xffff0000U 
                                             & ((IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                         >> 2U)) 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 8U))))
                                     : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((0xff000000U 
                                             & ((IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                         >> 2U)) 
                                                << 0x18U)) 
                                            | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                         : (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                    >> 2U))))),32);
        tracep->chgIData(oldp+901,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                     ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                           >> 9U))))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                >> 2U)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                         >> 0x10U))))
                                             : ((0xff00U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                             >> 2U)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                      >> 0x10U))))
                                         : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                           >> 0x21U))))) 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                              >> 0x12U))))
                                             : (0xffffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                           >> 0x12U)))))
                                     : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                           >> 0x19U))))) 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                              >> 0xaU))))
                                             : (0xffffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                           >> 0xaU))))
                                         : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                           >> 0x11U))))) 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                              >> 2U))))
                                             : (0xffffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                           >> 2U))))))),32);
        tracep->chgIData(oldp+902,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                     ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                           >> 0x21U))))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                              >> 0x1aU))))
                                             : (0xffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                           >> 0x1aU))))
                                         : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                           >> 0x19U))))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                              >> 0x12U))))
                                             : (0xffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                           >> 0x12U)))))
                                     : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                           >> 0x11U))))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                              >> 0xaU))))
                                             : (0xffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                           >> 0xaU))))
                                         : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                           >> 9U))))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                              >> 2U))))
                                             : (0xffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                           >> 2U))))))),32);
        tracep->chgBit(oldp+903,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        tracep->chgIData(oldp+904,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+905,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->chgCData(oldp+906,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        tracep->chgBit(oldp+907,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)) 
                                  | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))))));
        tracep->chgIData(oldp+908,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                     ? 0x20000001U : 
                                    (1U | (0xffffff00U 
                                           & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->chgCData(oldp+909,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                     ? (5U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                     : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->chgBit(oldp+910,(((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                         >> 8U)) > (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+911,(((3U == (3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                >> 0xaU))) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
        tracep->chgBit(oldp+912,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->chgBit(oldp+913,((1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                         >> 2U) & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                    >> 2U))))));
        tracep->chgCData(oldp+914,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->chgCData(oldp+915,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                     ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                     : 0xfU)),4);
        tracep->chgBit(oldp+916,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->chgIData(oldp+917,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+918,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q),32);
        tracep->chgIData(oldp+919,((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                     & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                    & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+920,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                     & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                    & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+921,(((((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                       & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                                      | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                          & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
                                     | ((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
                                    | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                       & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]))),32);
        tracep->chgBit(oldp+922,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x33U)) 
                                        & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U]))));
        tracep->chgIData(oldp+923,((((0x200000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U])
                                      ? ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))
                                      : vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
                                        ? (~ ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                 >> 1U)))
                                        : 0xffffffffU))),32);
        tracep->chgBit(oldp+924,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+925,((1U & ((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                         : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+926,((1U & (vlTOPp->gpio_i 
                                        >> 1U))));
        tracep->chgBit(oldp+927,((1U & ((2U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 1U)))));
        tracep->chgBit(oldp+928,((1U & (vlTOPp->gpio_i 
                                        >> 2U))));
        tracep->chgBit(oldp+929,((1U & ((4U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 2U)))));
        tracep->chgBit(oldp+930,((1U & (vlTOPp->gpio_i 
                                        >> 3U))));
        tracep->chgBit(oldp+931,((1U & ((8U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 3U)))));
        tracep->chgBit(oldp+932,((1U & (vlTOPp->gpio_i 
                                        >> 4U))));
        tracep->chgBit(oldp+933,((1U & ((0x10U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 4U)))));
        tracep->chgBit(oldp+934,((1U & (vlTOPp->gpio_i 
                                        >> 5U))));
        tracep->chgBit(oldp+935,((1U & ((0x20U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 5U)))));
        tracep->chgBit(oldp+936,((1U & (vlTOPp->gpio_i 
                                        >> 6U))));
        tracep->chgBit(oldp+937,((1U & ((0x40U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 6U)))));
        tracep->chgBit(oldp+938,((1U & (vlTOPp->gpio_i 
                                        >> 7U))));
        tracep->chgBit(oldp+939,((1U & ((0x80U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 7U)))));
        tracep->chgBit(oldp+940,((1U & (vlTOPp->gpio_i 
                                        >> 8U))));
        tracep->chgBit(oldp+941,((1U & ((0x100U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 8U)))));
        tracep->chgBit(oldp+942,((1U & (vlTOPp->gpio_i 
                                        >> 9U))));
        tracep->chgBit(oldp+943,((1U & ((0x200U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 9U)))));
        tracep->chgBit(oldp+944,((1U & (vlTOPp->gpio_i 
                                        >> 0xaU))));
        tracep->chgBit(oldp+945,((1U & ((0x400U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xaU)))));
        tracep->chgBit(oldp+946,((1U & (vlTOPp->gpio_i 
                                        >> 0xbU))));
        tracep->chgBit(oldp+947,((1U & ((0x800U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xbU)))));
        tracep->chgBit(oldp+948,((1U & (vlTOPp->gpio_i 
                                        >> 0xcU))));
        tracep->chgBit(oldp+949,((1U & ((0x1000U & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xcU)))));
        tracep->chgBit(oldp+950,((1U & (vlTOPp->gpio_i 
                                        >> 0xdU))));
        tracep->chgBit(oldp+951,((1U & ((0x2000U & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xdU)))));
        tracep->chgBit(oldp+952,((1U & (vlTOPp->gpio_i 
                                        >> 0xeU))));
        tracep->chgBit(oldp+953,((1U & ((0x4000U & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xeU)))));
        tracep->chgBit(oldp+954,((1U & (vlTOPp->gpio_i 
                                        >> 0xfU))));
        tracep->chgBit(oldp+955,((1U & ((0x8000U & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0xfU)))));
        tracep->chgBit(oldp+956,((1U & (vlTOPp->gpio_i 
                                        >> 0x10U))));
        tracep->chgBit(oldp+957,((1U & ((0x10000U & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x10U)))));
        tracep->chgBit(oldp+958,((1U & (vlTOPp->gpio_i 
                                        >> 0x11U))));
        tracep->chgBit(oldp+959,((1U & ((0x20000U & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x11U)))));
        tracep->chgBit(oldp+960,((1U & (vlTOPp->gpio_i 
                                        >> 0x12U))));
        tracep->chgBit(oldp+961,((1U & ((0x40000U & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x12U)))));
        tracep->chgBit(oldp+962,((1U & (vlTOPp->gpio_i 
                                        >> 0x13U))));
        tracep->chgBit(oldp+963,((1U & ((0x80000U & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x13U)))));
        tracep->chgBit(oldp+964,((1U & (vlTOPp->gpio_i 
                                        >> 0x14U))));
        tracep->chgBit(oldp+965,((1U & ((0x100000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x14U)))));
        tracep->chgBit(oldp+966,((1U & (vlTOPp->gpio_i 
                                        >> 0x15U))));
        tracep->chgBit(oldp+967,((1U & ((0x200000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x15U)))));
        tracep->chgBit(oldp+968,((1U & (vlTOPp->gpio_i 
                                        >> 0x16U))));
        tracep->chgBit(oldp+969,((1U & ((0x400000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x16U)))));
        tracep->chgBit(oldp+970,((1U & (vlTOPp->gpio_i 
                                        >> 0x17U))));
        tracep->chgBit(oldp+971,((1U & ((0x800000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x17U)))));
        tracep->chgBit(oldp+972,((1U & (vlTOPp->gpio_i 
                                        >> 0x18U))));
        tracep->chgBit(oldp+973,((1U & ((0x1000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x18U)))));
        tracep->chgBit(oldp+974,((1U & (vlTOPp->gpio_i 
                                        >> 0x19U))));
        tracep->chgBit(oldp+975,((1U & ((0x2000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+976,((1U & (vlTOPp->gpio_i 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+977,((1U & ((0x4000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1aU)))));
        tracep->chgBit(oldp+978,((1U & (vlTOPp->gpio_i 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+979,((1U & ((0x8000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1bU)))));
        tracep->chgBit(oldp+980,((1U & (vlTOPp->gpio_i 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+981,((1U & ((0x10000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1cU)))));
        tracep->chgBit(oldp+982,((1U & (vlTOPp->gpio_i 
                                        >> 0x1dU))));
        tracep->chgBit(oldp+983,((1U & ((0x20000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1dU)))));
        tracep->chgBit(oldp+984,((1U & (vlTOPp->gpio_i 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+985,((1U & ((0x40000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1eU)))));
        tracep->chgBit(oldp+986,((1U & (vlTOPp->gpio_i 
                                        >> 0x1fU))));
        tracep->chgBit(oldp+987,((1U & ((0x80000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1fU)))));
        tracep->chgIData(oldp+988,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata),32);
        tracep->chgIData(oldp+989,(((IData)(vlTOPp->rst_ni)
                                     ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                     : 0U)),32);
        tracep->chgBit(oldp+990,(((IData)((0x800U == 
                                           (0x1c00U 
                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgBit(oldp+991,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                        & ((1U == (3U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                      >> 0xbU)))
                                            ? ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xaU))
                                            : ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xaU))))));
        tracep->chgIData(oldp+992,((((IData)(vlTOPp->rst_ni)
                                      ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                      : 0U) & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgBit(oldp+993,((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                  & (((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U))) 
                                      | (1U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U)))) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgSData(oldp+994,(((((4U != (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))
                                       ? 0U : 1U) << 0xbU) 
                                    | (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                        << 0xaU) | 
                                       (0x3ffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))))),13);
        tracep->chgCData(oldp+995,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 2U : (3U & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+996,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgCData(oldp+997,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 2U : (3U & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+998,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+999,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 2U : (3U & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+1000,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+1001,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x41U >= 
                                          (0x7fU & 
                                           ((IData)(0x21U) 
                                            * (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL)))),33);
        tracep->chgIData(oldp+1003,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata),32);
        tracep->chgBit(oldp+1004,((1U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar)))));
        tracep->chgBit(oldp+1005,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgBit(oldp+1006,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+1007,((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
                                     & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgCData(oldp+1008,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+1009,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgCData(oldp+1010,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+1011,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+1012,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+1013,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+1014,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x83U >= 
                                          (0xffU & 
                                           ((IData)(0x21U) 
                                            * (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL)))),33);
        tracep->chgIData(oldp+1016,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le),32);
        tracep->chgIData(oldp+1017,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0]),32);
        tracep->chgIData(oldp+1018,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
        tracep->chgIData(oldp+1019,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
        tracep->chgIData(oldp+1020,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
        tracep->chgBit(oldp+1021,(((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
        tracep->chgBit(oldp+1022,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
        tracep->chgCData(oldp+1023,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
        tracep->chgBit(oldp+1024,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 9U)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->chgBit(oldp+1025,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x24U)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->chgBit(oldp+1026,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U]))));
        tracep->chgBit(oldp+1027,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                      >> 3U))));
        tracep->chgBit(oldp+1028,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                      >> 4U))));
        tracep->chgBit(oldp+1029,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                      >> 5U))));
        tracep->chgBit(oldp+1030,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                      >> 6U))));
        tracep->chgIData(oldp+1031,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                    [0U]),32);
        tracep->chgQData(oldp+1032,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->chgBit(oldp+1034,((((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                    > vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                    [0U]) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->chgCData(oldp+1035,(((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                      ? (0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                      : 0U)),6);
        tracep->chgBit(oldp+1036,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                  >> 0x33U)) 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U]))));
        tracep->chgBit(oldp+1037,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty)))));
        tracep->chgBit(oldp+1038,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)))));
        tracep->chgBit(oldp+1039,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we));
        tracep->chgIData(oldp+1040,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                      ? (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                 >> 0x20U))
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux))),32);
        tracep->chgIData(oldp+1041,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d)),32);
        tracep->chgIData(oldp+1042,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d 
                                             >> 0x20U))),32);
        tracep->chgIData(oldp+1043,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                      ? 0U : (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                      >> 
                                                      (0x20U 
                                                       & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 5U)))))),32);
        tracep->chgCData(oldp+1044,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+1045,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+1046,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk))))));
        tracep->chgIData(oldp+1047,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage)),32);
        tracep->chgIData(oldp+1048,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                             >> 0x20U))),32);
        tracep->chgIData(oldp+1049,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                             >> (0x20U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 5U))))),32);
        tracep->chgCData(oldp+1050,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                      : 0xfU)),4);
        tracep->chgQData(oldp+1051,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata),64);
        tracep->chgBit(oldp+1053,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__td_o));
        tracep->chgBit(oldp+1054,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o));
        tracep->chgBit(oldp+1055,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))));
        tracep->chgIData(oldp+1056,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                             [(3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))] 
                                             >> 2U))),32);
        tracep->chgCData(oldp+1057,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                                  [
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]))),2);
        tracep->chgCData(oldp+1058,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q),5);
        tracep->chgBit(oldp+1059,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                          : ((1U == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                              ? vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                              : ((0x10U 
                                                  == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                  ? vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q
                                                  : 
                                                 ((0x11U 
                                                   == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                   ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q)
                                                   : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q))))))));
        tracep->chgCData(oldp+1060,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))))))),3);
        tracep->chgCData(oldp+1061,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                      == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->chgCData(oldp+1062,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync),3);
        tracep->chgCData(oldp+1063,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray),3);
        tracep->chgBit(oldp+1064,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+1065,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr));
        tracep->chgBit(oldp+1066,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty));
        tracep->chgBit(oldp+1067,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk));
        tracep->chgBit(oldp+1068,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                   == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))));
        tracep->chgCData(oldp+1069,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq),3);
        tracep->chgCData(oldp+1070,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))))))),3);
        tracep->chgQData(oldp+1071,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                    [(3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]),34);
        tracep->chgCData(oldp+1073,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                      == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->chgCData(oldp+1074,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray),3);
        tracep->chgBit(oldp+1075,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+1076,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk));
        tracep->chgBit(oldp+1077,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                   == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))));
        tracep->chgCData(oldp+1078,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq),3);
        tracep->chgBit(oldp+1079,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->chgBit(oldp+1080,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+1081,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                       ? (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                  >> 0x20U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux)) 
                                     & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask)),32);
        tracep->chgBit(oldp+1082,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full) 
                                         | (((1U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                               >> 1U)) 
                                             == (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                             : (((IData)(1U) 
                                                 - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->chgBit(oldp+1083,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->chgBit(oldp+1084,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full) 
                                         | (((1U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                               >> 1U)) 
                                             == (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                             : (((IData)(1U) 
                                                 - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->chgBit(oldp+1085,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))));
        tracep->chgBit(oldp+1086,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full) 
                                         | (((1U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                               >> 1U)) 
                                             == (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                             : (((IData)(1U) 
                                                 - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->chgBit(oldp+1087,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+1088,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))
                                      ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                         << 1U) : vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage)),33);
        tracep->chgBit(oldp+1090,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_rsp_pending));
        tracep->chgBit(oldp+1091,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_rsp_pending));
        tracep->chgCData(oldp+1092,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hfifo_rspvalid),2);
        tracep->chgCData(oldp+1093,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1094,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1095,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1096,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1097,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1098,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1099,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1100,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
    }
}

void Vopentitan_soc_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vilp = 0U;
        while ((__Vilp <= 0x7cU)) {
            vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}
