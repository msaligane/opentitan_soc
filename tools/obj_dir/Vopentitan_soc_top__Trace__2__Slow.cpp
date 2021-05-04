// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceFullSub2(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2778[3];
    WData/*127:0*/ __Vtemp2779[4];
    // Body
    {
        tracep->fullCData(oldp+7642,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                     [0U]),3);
        tracep->fullIData(oldp+7643,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_sba_csrs),32);
        tracep->fullIData(oldp+7644,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7645,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+7646,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o))));
        tracep->fullBit(oldp+7647,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                  >> 1U)))));
        tracep->fullQData(oldp+7648,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d),64);
        tracep->fullQData(oldp+7650,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d),64);
        tracep->fullCData(oldp+7652,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_d),3);
        tracep->fullBit(oldp+7653,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7654,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7655,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7656,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7657,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7658,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7659,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7660,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7661,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+7662,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7663,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7664,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7665,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7666,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7667,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7668,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7669,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7670,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+7671,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7672,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7673,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7674,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7675,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7676,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7677,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7678,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7679,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+7680,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7681,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7682,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7683,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7684,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7685,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7686,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7687,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7688,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+7689,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7690,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7691,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7692,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7693,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7694,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7695,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7696,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7697,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+7698,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7699,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7700,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7701,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7702,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7703,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7704,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7705,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7706,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+7707,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7708,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7709,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7710,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7711,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7712,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7713,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7714,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7715,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+7716,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7717,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7718,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7719,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7720,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7721,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7722,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7723,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7724,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+7725,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7726,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7727,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7728,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7729,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7730,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7731,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7732,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7733,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+7734,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7735,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7736,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7737,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7738,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7739,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7740,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7741,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7742,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+7743,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7744,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7745,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7746,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7747,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7748,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7749,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7750,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7751,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+7752,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7753,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7754,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7755,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7756,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7757,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7758,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7759,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7760,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i))));
        tracep->fullBit(oldp+7761,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_req));
        tracep->fullBit(oldp+7762,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_rsp));
        tracep->fullBit(oldp+7763,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7764,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7765,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7766,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7767,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7768,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7769,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7770,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7771,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [0U]))));
        tracep->fullBit(oldp+7772,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7773,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7774,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7775,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7776,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7777,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7778,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7779,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7780,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [1U]))));
        tracep->fullBit(oldp+7781,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7782,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7783,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7784,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7785,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7786,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7787,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7788,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7789,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [2U]))));
        tracep->fullBit(oldp+7790,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7791,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7792,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7793,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7794,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7795,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7796,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7797,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7798,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [3U]))));
        tracep->fullBit(oldp+7799,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7800,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7801,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7802,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7803,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7804,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7805,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7806,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7807,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [4U]))));
        tracep->fullBit(oldp+7808,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7809,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7810,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7811,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7812,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7813,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7814,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7815,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7816,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [5U]))));
        tracep->fullBit(oldp+7817,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7818,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7819,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7820,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7821,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7822,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7823,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7824,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7825,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [6U]))));
        tracep->fullBit(oldp+7826,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7827,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7828,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7829,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7830,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7831,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7832,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7833,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7834,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [7U]))));
        tracep->fullBit(oldp+7835,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7836,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7837,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7838,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7839,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7840,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7841,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7842,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7843,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [8U]))));
        tracep->fullBit(oldp+7844,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7845,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7846,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7847,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7848,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7849,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7850,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7851,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7852,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [9U]))));
        tracep->fullBit(oldp+7853,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7854,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7855,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7856,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7857,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7858,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7859,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7860,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7861,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+7862,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7863,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7864,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7865,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7866,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7867,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7868,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7869,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7870,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+7871,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7872,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7873,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7874,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7875,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7876,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7877,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7878,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7879,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p))));
        tracep->fullBit(oldp+7880,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hfifo_reqready));
        tracep->fullBit(oldp+7881,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i))));
        tracep->fullBit(oldp+7882,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7883,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7885,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7886,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7887,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7888,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7889,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7890,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7891,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7892,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7893,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+7894,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7895,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7896,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7897,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7898,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7899,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7900,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7901,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7902,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+7903,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+7904,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7905,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7907,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7908,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7909,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7910,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7911,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7912,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7913,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7914,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7915,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+7916,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7917,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7918,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7919,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7920,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7921,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7922,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7923,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7924,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+7925,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+7926,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7927,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7929,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7930,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7931,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7932,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7933,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7934,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7935,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7936,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7937,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+7938,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7939,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7940,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7941,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7942,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7943,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7944,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7945,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7946,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+7947,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+7948,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7949,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [2U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [2U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7951,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7952,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7953,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7954,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7955,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7956,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7957,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7958,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7959,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+7960,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7961,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7962,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7963,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7964,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7965,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7966,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7967,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7968,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+7969,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+7970,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7971,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [3U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [3U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7973,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7974,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7975,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7976,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7977,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7978,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7979,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7980,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7981,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+7982,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7983,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7984,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7985,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7986,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7987,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7988,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7989,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7990,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+7991,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+7992,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+7993,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [4U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [4U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+7995,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7996,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7997,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7998,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7999,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8000,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8001,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8002,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8003,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8004,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8005,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8006,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8007,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8008,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8009,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8010,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8011,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8012,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+8013,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+8014,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8015,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [5U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [5U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8017,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8018,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8019,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8020,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8021,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8022,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8023,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8024,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8025,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8026,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8027,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8028,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8029,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8030,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8031,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8032,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8033,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8034,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+8035,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+8036,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8037,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [6U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [6U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8039,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8040,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8041,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8042,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8043,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8044,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8045,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8046,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8047,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8048,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8049,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8050,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8051,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8052,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8053,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8054,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8055,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8056,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+8057,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+8058,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8059,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [7U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [7U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8061,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8062,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8063,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8064,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8065,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8066,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8067,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8068,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8069,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8070,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8071,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8072,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8073,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8074,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8075,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8076,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8077,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8078,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+8079,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+8080,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8081,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [8U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [8U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8083,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8084,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8085,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8086,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8087,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8088,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8089,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8090,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8091,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8092,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8093,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8094,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8095,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8096,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8097,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8098,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8099,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8100,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+8101,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+8102,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8103,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [9U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [9U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8105,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8106,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8107,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8108,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8109,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8110,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8111,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8112,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8113,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8114,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8115,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8116,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8117,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8118,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8119,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8120,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8121,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8122,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+8123,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+8124,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8125,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [0xaU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [0xaU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8127,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we));
        tracep->fullBit(oldp+8128,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we));
        tracep->fullBit(oldp+8129,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we));
        tracep->fullBit(oldp+8130,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we));
        tracep->fullBit(oldp+8131,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we));
        tracep->fullBit(oldp+8132,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
        tracep->fullBit(oldp+8133,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
        tracep->fullBit(oldp+8134,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
        tracep->fullBit(oldp+8135,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
        tracep->fullBit(oldp+8136,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
        tracep->fullBit(oldp+8137,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
        tracep->fullBit(oldp+8138,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
        tracep->fullBit(oldp+8139,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we));
        tracep->fullBit(oldp+8140,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we));
        tracep->fullBit(oldp+8141,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we));
        tracep->fullBit(oldp+8142,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we));
        tracep->fullBit(oldp+8143,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we));
        tracep->fullBit(oldp+8144,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
        tracep->fullBit(oldp+8145,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
        tracep->fullBit(oldp+8146,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
        tracep->fullBit(oldp+8147,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
        tracep->fullBit(oldp+8148,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
        tracep->fullBit(oldp+8149,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
        tracep->fullBit(oldp+8150,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
        tracep->fullBit(oldp+8151,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
        tracep->fullBit(oldp+8152,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
        tracep->fullBit(oldp+8153,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we));
        tracep->fullBit(oldp+8154,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we));
        tracep->fullBit(oldp+8155,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we));
        tracep->fullBit(oldp+8156,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we));
        tracep->fullBit(oldp+8157,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
        tracep->fullBit(oldp+8158,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we));
        tracep->fullBit(oldp+8159,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we));
        tracep->fullBit(oldp+8160,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we));
        tracep->fullBit(oldp+8161,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we));
        tracep->fullBit(oldp+8162,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we));
        tracep->fullBit(oldp+8163,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we));
        tracep->fullBit(oldp+8164,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we));
        tracep->fullBit(oldp+8165,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we));
        tracep->fullBit(oldp+8166,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we));
        tracep->fullBit(oldp+8167,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we));
        tracep->fullBit(oldp+8168,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
        tracep->fullBit(oldp+8169,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we));
        tracep->fullBit(oldp+8170,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we));
        tracep->fullBit(oldp+8171,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we));
        tracep->fullBit(oldp+8172,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
        tracep->fullBit(oldp+8173,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
        tracep->fullBit(oldp+8174,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
        tracep->fullBit(oldp+8175,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we));
        tracep->fullBit(oldp+8176,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
        tracep->fullBit(oldp+8177,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
        tracep->fullBit(oldp+8178,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
        tracep->fullBit(oldp+8179,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
        tracep->fullBit(oldp+8180,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we));
        tracep->fullBit(oldp+8181,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we));
        tracep->fullBit(oldp+8182,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we));
        tracep->fullBit(oldp+8183,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
        tracep->fullBit(oldp+8184,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
        tracep->fullBit(oldp+8185,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
        tracep->fullBit(oldp+8186,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we));
        tracep->fullBit(oldp+8187,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
        tracep->fullBit(oldp+8188,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we));
        tracep->fullBit(oldp+8189,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we));
        tracep->fullBit(oldp+8190,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
        tracep->fullBit(oldp+8191,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
        tracep->fullBit(oldp+8192,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
        tracep->fullBit(oldp+8193,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
        tracep->fullBit(oldp+8194,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
        tracep->fullBit(oldp+8195,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
        tracep->fullBit(oldp+8196,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
        tracep->fullBit(oldp+8197,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
        tracep->fullBit(oldp+8198,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
        tracep->fullBit(oldp+8199,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
        tracep->fullBit(oldp+8200,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
        tracep->fullBit(oldp+8201,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
        tracep->fullBit(oldp+8202,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
        tracep->fullBit(oldp+8203,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
        tracep->fullBit(oldp+8204,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
        tracep->fullBit(oldp+8205,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
        tracep->fullBit(oldp+8206,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
        tracep->fullBit(oldp+8207,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
        tracep->fullBit(oldp+8208,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
        tracep->fullBit(oldp+8209,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
        tracep->fullBit(oldp+8210,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
        tracep->fullBit(oldp+8211,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
        tracep->fullBit(oldp+8212,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
        tracep->fullBit(oldp+8213,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
        tracep->fullBit(oldp+8214,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
        tracep->fullBit(oldp+8215,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
        tracep->fullBit(oldp+8216,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we));
        tracep->fullBit(oldp+8217,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
        tracep->fullBit(oldp+8218,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
        tracep->fullBit(oldp+8219,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we));
        tracep->fullIData(oldp+8220,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
        tracep->fullIData(oldp+8221,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        tracep->fullCData(oldp+8222,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
        tracep->fullIData(oldp+8223,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
        tracep->fullBit(oldp+8224,((0U != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)));
        tracep->fullIData(oldp+8225,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event),32);
        tracep->fullIData(oldp+8226,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next),32);
        tracep->fullBit(oldp+8227,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we));
        tracep->fullBit(oldp+8228,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
        tracep->fullBit(oldp+8229,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
        tracep->fullBit(oldp+8230,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
        tracep->fullBit(oldp+8231,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
        tracep->fullBit(oldp+8232,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
        tracep->fullBit(oldp+8233,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we));
        tracep->fullBit(oldp+8234,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we));
        tracep->fullBit(oldp+8235,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we));
        tracep->fullBit(oldp+8236,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we));
        tracep->fullBit(oldp+8237,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we));
        tracep->fullBit(oldp+8238,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
        tracep->fullBit(oldp+8239,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
        tracep->fullBit(oldp+8240,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
        tracep->fullBit(oldp+8241,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
        tracep->fullBit(oldp+8242,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
        tracep->fullBit(oldp+8243,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
        tracep->fullBit(oldp+8244,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
        tracep->fullBit(oldp+8245,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        tracep->fullBit(oldp+8246,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear));
        tracep->fullBit(oldp+8247,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
        tracep->fullCData(oldp+8248,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
        tracep->fullCData(oldp+8249,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
        tracep->fullBit(oldp+8250,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
        tracep->fullCData(oldp+8251,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        tracep->fullBit(oldp+8252,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
        tracep->fullBit(oldp+8253,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
        tracep->fullIData(oldp+8254,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
        tracep->fullIData(oldp+8255,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
        tracep->fullIData(oldp+8256,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
        tracep->fullBit(oldp+8257,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                          >> 1U))));
        tracep->fullBit(oldp+8258,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                          >> 1U))));
        tracep->fullBit(oldp+8259,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 1U))));
        tracep->fullBit(oldp+8260,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we));
        tracep->fullIData(oldp+8261,((0x1fffffffU & 
                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 3U))),29);
        tracep->fullIData(oldp+8262,((0x1fffffffU & 
                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 3U))),29);
        tracep->fullIData(oldp+8263,((0x1fffffffU & 
                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 3U))),29);
        tracep->fullBit(oldp+8264,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
        tracep->fullBit(oldp+8265,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
        tracep->fullQData(oldp+8266,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
        tracep->fullQData(oldp+8268,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
        tracep->fullBit(oldp+8270,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
        tracep->fullQData(oldp+8271,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
        tracep->fullBit(oldp+8273,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                          >> 2U))));
        tracep->fullBit(oldp+8274,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                          >> 2U))));
        tracep->fullQData(oldp+8275,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
        tracep->fullQData(oldp+8277,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
        tracep->fullBit(oldp+8279,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
        tracep->fullQData(oldp+8280,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        tracep->fullQData(oldp+8282,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d),64);
        tracep->fullCData(oldp+8284,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_d),2);
        tracep->fullCData(oldp+8285,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata))),8);
        tracep->fullCData(oldp+8286,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 8U)))),8);
        tracep->fullCData(oldp+8287,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x10U)))),8);
        tracep->fullCData(oldp+8288,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x18U)))),8);
        tracep->fullCData(oldp+8289,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x20U)))),8);
        tracep->fullCData(oldp+8290,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x28U)))),8);
        tracep->fullCData(oldp+8291,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x30U)))),8);
        tracep->fullCData(oldp+8292,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x38U)))),8);
        tracep->fullBit(oldp+8293,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullIData(oldp+8294,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword),32);
        tracep->fullIData(oldp+8295,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                              >> 1U))),32);
        tracep->fullBit(oldp+8296,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
        tracep->fullBit(oldp+8297,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+8298,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullQData(oldp+8299,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                      << 1U)),33);
        tracep->fullQData(oldp+8301,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        tracep->fullBit(oldp+8303,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8304,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8305,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8306,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8307,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8308,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8309,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8310,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8311,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom))));
        tracep->fullBit(oldp+8312,((1U & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                           >> 0x15U) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom)))));
        tracep->fullBit(oldp+8313,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8314,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8315,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8316,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8317,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8318,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8319,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8320,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8321,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[0U])));
        tracep->fullBit(oldp+8322,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req));
        tracep->fullSData(oldp+8323,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr),12);
        tracep->fullBit(oldp+8324,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
        tracep->fullIData(oldp+8325,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+8326,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
        tracep->fullBit(oldp+8327,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
        tracep->fullBit(oldp+8328,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
        tracep->fullBit(oldp+8329,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
        tracep->fullIData(oldp+8330,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
        tracep->fullIData(oldp+8331,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+8332,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+8333,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+8334,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+8335,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
        tracep->fullBit(oldp+8336,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+8337,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullIData(oldp+8338,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
        tracep->fullBit(oldp+8339,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack));
        tracep->fullBit(oldp+8340,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+8341,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8342,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8343,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8344,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8345,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8346,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8347,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8348,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8349,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+8350,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8351,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8352,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8353,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8354,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8355,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8356,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8357,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8358,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+8359,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+8360,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+8361,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2778[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U]);
        __Vtemp2778[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]));
        __Vtemp2778[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+8362,(__Vtemp2778),85);
        tracep->fullBit(oldp+8365,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+8366,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+8369,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+8372,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullBit(oldp+8375,(vlTOPp->clk_i));
        tracep->fullBit(oldp+8376,(vlTOPp->rst_ni));
        tracep->fullBit(oldp+8377,(vlTOPp->jtag_tck_i));
        tracep->fullBit(oldp+8378,(vlTOPp->jtag_tms_i));
        tracep->fullBit(oldp+8379,(vlTOPp->jtag_trst_ni));
        tracep->fullBit(oldp+8380,(vlTOPp->jtag_tdi_i));
        tracep->fullBit(oldp+8381,(vlTOPp->jtag_tdo_o));
        tracep->fullIData(oldp+8382,(vlTOPp->gpio_i),20);
        tracep->fullIData(oldp+8383,(vlTOPp->gpio_o),20);
        tracep->fullBit(oldp+8384,((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                             & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                                | (0U 
                                                   != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))))));
        tracep->fullBit(oldp+8385,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy) 
                                     | ((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                    | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        tracep->fullBit(oldp+8386,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                       | (0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))));
        tracep->fullBit(oldp+8387,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        tracep->fullIData(oldp+8388,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                     (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xfU))]),32);
        tracep->fullIData(oldp+8389,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                     (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U))]),32);
        tracep->fullSData(oldp+8390,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
        tracep->fullBit(oldp+8391,((1U & (((((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))))));
        tracep->fullBit(oldp+8392,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err));
        tracep->fullIData(oldp+8393,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                      << 1U)),32);
        tracep->fullBit(oldp+8394,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set));
        tracep->fullBit(oldp+8395,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec));
        tracep->fullBit(oldp+8396,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        tracep->fullBit(oldp+8397,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy));
        tracep->fullBit(oldp+8398,(((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
        tracep->fullBit(oldp+8399,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        tracep->fullBit(oldp+8400,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        tracep->fullBit(oldp+8401,(((((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                      & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                 >> 0x33U))) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
        tracep->fullIData(oldp+8402,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                       ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                           ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                           : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
                                       : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)),32);
        tracep->fullBit(oldp+8403,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)))));
        tracep->fullBit(oldp+8404,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match));
        tracep->fullBit(oldp+8405,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match));
        tracep->fullBit(oldp+8406,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                    & (1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->fullBit(oldp+8407,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if));
        tracep->fullBit(oldp+8408,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))));
        tracep->fullBit(oldp+8409,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q))));
        tracep->fullBit(oldp+8410,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->fullBit(oldp+8411,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz)))));
        tracep->fullBit(oldp+8412,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump));
        tracep->fullBit(oldp+8413,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch));
        tracep->fullBit(oldp+8414,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch));
        tracep->fullBit(oldp+8415,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready)) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear))))));
        tracep->fullBit(oldp+8416,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                              ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                              : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->fullIData(oldp+8417,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                       ? 0U : ((1U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                                ? (
                                                   (0xffffff00U 
                                                    & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                   | (0x7cU 
                                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                                         << 2U)))
                                                : (0xffffff00U 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->fullBit(oldp+8418,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))));
        tracep->fullBit(oldp+8419,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->fullCData(oldp+8420,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                       ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                                >> 1U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        tracep->fullBit(oldp+8421,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->fullIData(oldp+8422,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                        ? (0xfffffffeU 
                                           & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                        : (0xfffffffcU 
                                           & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                      + (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                         << 2U))),32);
        tracep->fullBit(oldp+8423,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
        tracep->fullIData(oldp+8424,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : 0U)),32);
        tracep->fullBit(oldp+8425,((1U & (~ (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                          >> 1U) 
                                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        tracep->fullIData(oldp+8426,((0xfffffffeU & 
                                      ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                       << 1U))),32);
        tracep->fullCData(oldp+8427,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        tracep->fullCData(oldp+8428,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        tracep->fullIData(oldp+8429,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
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
        tracep->fullBit(oldp+8430,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                           ? ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                              | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                           : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                              | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                    | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->fullBit(oldp+8431,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                           ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                           : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->fullBit(oldp+8432,((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                           >> 1U) | 
                                          ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->fullIData(oldp+8433,((0x7fffffffU & 
                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->fullIData(oldp+8434,((0x7fffffffU & 
                                      ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                        ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                             ? (0xfffffffeU 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                             : 0U) 
                                           >> 1U) : 
                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->fullIData(oldp+8435,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        tracep->fullBit(oldp+8436,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
        tracep->fullBit(oldp+8437,(0U));
        tracep->fullBit(oldp+8438,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->fullIData(oldp+8439,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                       ? 0U : (0x1fU 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xfU)))),32);
        tracep->fullBit(oldp+8440,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->fullBit(oldp+8441,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
                                    & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec)))));
        tracep->fullBit(oldp+8442,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                    & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec)))));
        tracep->fullBit(oldp+8443,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->fullBit(oldp+8444,(((3U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->fullBit(oldp+8445,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)))));
        tracep->fullBit(oldp+8446,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        tracep->fullBit(oldp+8447,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->fullIData(oldp+8448,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                       ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                           << 0x1eU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                             >> 2U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->fullBit(oldp+8449,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
        tracep->fullQData(oldp+8450,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                       ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                       : (1ULL | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                  << 1U)))),33);
        tracep->fullQData(oldp+8452,((0x1ffffffffULL 
                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                          ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                          : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                              ? (~ 
                                                 ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                  << 1U))
                                              : ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                 << 1U))))),33);
        tracep->fullBit(oldp+8454,((1U & ((0x80000000U 
                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                           ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               >> 0x1fU) 
                                              ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                           : (~ (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 0x20U)))))));
        tracep->fullQData(oldp+8455,((0x7ffffffffULL 
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
        tracep->fullQData(oldp+8457,((0x3ffffffffULL 
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
        tracep->fullBit(oldp+8459,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                     ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->fullBit(oldp+8460,((1U & (IData)((1ULL 
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
        tracep->fullIData(oldp+8461,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->fullIData(oldp+8462,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->fullIData(oldp+8463,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->fullBit(oldp+8464,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        tracep->fullIData(oldp+8465,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->fullIData(oldp+8466,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->fullCData(oldp+8467,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        tracep->fullBit(oldp+8468,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))))));
        tracep->fullIData(oldp+8469,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                       ? 0x20000001U
                                       : (1U | (0xffffff00U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->fullCData(oldp+8470,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                       ? (5U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->fullBit(oldp+8471,(((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                           >> 8U)) 
                                    > (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->fullBit(oldp+8472,(((3U == (3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 0xaU))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
        tracep->fullBit(oldp+8473,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->fullBit(oldp+8474,((1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                           >> 2U) & 
                                          (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                              >> 2U))))));
        tracep->fullCData(oldp+8475,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->fullCData(oldp+8476,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                       ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                       : 0xfU)),4);
        tracep->fullBit(oldp+8477,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->fullIData(oldp+8478,(vlTOPp->gpio_i),32);
        tracep->fullIData(oldp+8479,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q),32);
        tracep->fullIData(oldp+8480,((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                       & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U])),32);
        tracep->fullIData(oldp+8481,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                       & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])),32);
        tracep->fullIData(oldp+8482,(((((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                                        | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                            & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
                                       | ((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
                                      | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]))),32);
        tracep->fullBit(oldp+8483,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x33U)) 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U]))));
        tracep->fullIData(oldp+8484,((((0x200000U & 
                                        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U])
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
        tracep->fullBit(oldp+8485,((1U & vlTOPp->gpio_i)));
        tracep->fullBit(oldp+8486,((1U & ((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                           : vlTOPp->gpio_i))));
        tracep->fullBit(oldp+8487,((1U & (vlTOPp->gpio_i 
                                          >> 1U))));
        tracep->fullBit(oldp+8488,((1U & ((2U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 1U)))));
        tracep->fullBit(oldp+8489,((1U & (vlTOPp->gpio_i 
                                          >> 2U))));
        tracep->fullBit(oldp+8490,((1U & ((4U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 2U)))));
        tracep->fullBit(oldp+8491,((1U & (vlTOPp->gpio_i 
                                          >> 3U))));
        tracep->fullBit(oldp+8492,((1U & ((8U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 3U)))));
        tracep->fullBit(oldp+8493,((1U & (vlTOPp->gpio_i 
                                          >> 4U))));
        tracep->fullBit(oldp+8494,((1U & ((0x10U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 4U)))));
        tracep->fullBit(oldp+8495,((1U & (vlTOPp->gpio_i 
                                          >> 5U))));
        tracep->fullBit(oldp+8496,((1U & ((0x20U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 5U)))));
        tracep->fullBit(oldp+8497,((1U & (vlTOPp->gpio_i 
                                          >> 6U))));
        tracep->fullBit(oldp+8498,((1U & ((0x40U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 6U)))));
        tracep->fullBit(oldp+8499,((1U & (vlTOPp->gpio_i 
                                          >> 7U))));
        tracep->fullBit(oldp+8500,((1U & ((0x80U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 7U)))));
        tracep->fullBit(oldp+8501,((1U & (vlTOPp->gpio_i 
                                          >> 8U))));
        tracep->fullBit(oldp+8502,((1U & ((0x100U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 8U)))));
        tracep->fullBit(oldp+8503,((1U & (vlTOPp->gpio_i 
                                          >> 9U))));
        tracep->fullBit(oldp+8504,((1U & ((0x200U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 9U)))));
        tracep->fullBit(oldp+8505,((1U & (vlTOPp->gpio_i 
                                          >> 0xaU))));
        tracep->fullBit(oldp+8506,((1U & ((0x400U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xaU)))));
        tracep->fullBit(oldp+8507,((1U & (vlTOPp->gpio_i 
                                          >> 0xbU))));
        tracep->fullBit(oldp+8508,((1U & ((0x800U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xbU)))));
        tracep->fullBit(oldp+8509,((1U & (vlTOPp->gpio_i 
                                          >> 0xcU))));
        tracep->fullBit(oldp+8510,((1U & ((0x1000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xcU)))));
        tracep->fullBit(oldp+8511,((1U & (vlTOPp->gpio_i 
                                          >> 0xdU))));
        tracep->fullBit(oldp+8512,((1U & ((0x2000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xdU)))));
        tracep->fullBit(oldp+8513,((1U & (vlTOPp->gpio_i 
                                          >> 0xeU))));
        tracep->fullBit(oldp+8514,((1U & ((0x4000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xeU)))));
        tracep->fullBit(oldp+8515,((1U & (vlTOPp->gpio_i 
                                          >> 0xfU))));
        tracep->fullBit(oldp+8516,((1U & ((0x8000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xfU)))));
        tracep->fullBit(oldp+8517,((1U & (vlTOPp->gpio_i 
                                          >> 0x10U))));
        tracep->fullBit(oldp+8518,((1U & ((0x10000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x10U)))));
        tracep->fullBit(oldp+8519,((1U & (vlTOPp->gpio_i 
                                          >> 0x11U))));
        tracep->fullBit(oldp+8520,((1U & ((0x20000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x11U)))));
        tracep->fullBit(oldp+8521,((1U & (vlTOPp->gpio_i 
                                          >> 0x12U))));
        tracep->fullBit(oldp+8522,((1U & ((0x40000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x12U)))));
        tracep->fullBit(oldp+8523,((1U & (vlTOPp->gpio_i 
                                          >> 0x13U))));
        tracep->fullBit(oldp+8524,((1U & ((0x80000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x13U)))));
        tracep->fullBit(oldp+8525,((1U & (vlTOPp->gpio_i 
                                          >> 0x14U))));
        tracep->fullBit(oldp+8526,((1U & ((0x100000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x14U)))));
        tracep->fullBit(oldp+8527,((1U & (vlTOPp->gpio_i 
                                          >> 0x15U))));
        tracep->fullBit(oldp+8528,((1U & ((0x200000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+8529,((1U & (vlTOPp->gpio_i 
                                          >> 0x16U))));
        tracep->fullBit(oldp+8530,((1U & ((0x400000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x16U)))));
        tracep->fullBit(oldp+8531,((1U & (vlTOPp->gpio_i 
                                          >> 0x17U))));
        tracep->fullBit(oldp+8532,((1U & ((0x800000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x17U)))));
        tracep->fullBit(oldp+8533,((1U & (vlTOPp->gpio_i 
                                          >> 0x18U))));
        tracep->fullBit(oldp+8534,((1U & ((0x1000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+8535,((1U & (vlTOPp->gpio_i 
                                          >> 0x19U))));
        tracep->fullBit(oldp+8536,((1U & ((0x2000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+8537,((1U & (vlTOPp->gpio_i 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+8538,((1U & ((0x4000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1aU)))));
        tracep->fullBit(oldp+8539,((1U & (vlTOPp->gpio_i 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+8540,((1U & ((0x8000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+8541,((1U & (vlTOPp->gpio_i 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+8542,((1U & ((0x10000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1cU)))));
        tracep->fullBit(oldp+8543,((1U & (vlTOPp->gpio_i 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+8544,((1U & ((0x20000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+8545,((1U & (vlTOPp->gpio_i 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+8546,((1U & ((0x40000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1eU)))));
        tracep->fullBit(oldp+8547,((1U & (vlTOPp->gpio_i 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+8548,((1U & ((0x80000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1fU)))));
        tracep->fullIData(oldp+8549,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata),32);
        tracep->fullIData(oldp+8550,(((IData)(vlTOPp->rst_ni)
                                       ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                       : 0U)),32);
        tracep->fullBit(oldp+8551,(((IData)((0x800U 
                                             == (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->fullBit(oldp+8552,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                          & ((1U == 
                                              (3U & 
                                               ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU)))
                                              ? ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                 | ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xaU))
                                              : ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))))));
        tracep->fullIData(oldp+8553,((((IData)(vlTOPp->rst_ni)
                                        ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                        : 0U) & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->fullBit(oldp+8554,((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullSData(oldp+8555,(((((4U != (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U)))
                                         ? 0U : 1U) 
                                       << 0xbU) | (
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                         >> 5U))))),13);
        tracep->fullCData(oldp+8556,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 2U : (3U & 
                                               (((1U 
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
        tracep->fullBit(oldp+8557,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->fullCData(oldp+8558,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 2U : (3U & 
                                               (((1U 
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
        tracep->fullBit(oldp+8559,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->fullCData(oldp+8560,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 2U : (3U & 
                                               (((1U 
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
        tracep->fullBit(oldp+8561,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                    & ((IData)((0x800U 
                                                == 
                                                (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+8562,((0x1ffffffffULL 
                                      & (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                          ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                             << 1U)
                                          : ((0x41U 
                                              >= (0x7fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
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
        tracep->fullIData(oldp+8564,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata),32);
        tracep->fullBit(oldp+8565,((1U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                           >> 0x15U) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar)))));
        tracep->fullBit(oldp+8566,(((IData)((0x800U 
                                             == (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->fullBit(oldp+8567,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                          & ((1U == 
                                              (3U & 
                                               ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU)))
                                              ? ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                 | ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xaU))
                                              : ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))))));
        tracep->fullIData(oldp+8568,((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
                                      & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->fullCData(oldp+8569,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->fullBit(oldp+8570,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->fullCData(oldp+8571,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->fullBit(oldp+8572,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->fullCData(oldp+8573,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->fullBit(oldp+8574,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                    & ((IData)((0x800U 
                                                == 
                                                (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+8575,((0x1ffffffffULL 
                                      & (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                          ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                             << 1U)
                                          : ((0x83U 
                                              >= (0xffU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
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
        tracep->fullIData(oldp+8577,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le),32);
        tracep->fullIData(oldp+8578,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0]),32);
        tracep->fullIData(oldp+8579,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
        tracep->fullIData(oldp+8580,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
        tracep->fullIData(oldp+8581,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
        tracep->fullBit(oldp+8582,(((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)((0U 
                                                   != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
        tracep->fullBit(oldp+8583,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
        tracep->fullCData(oldp+8584,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
        tracep->fullBit(oldp+8585,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                              >> 9U)) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+8586,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                              >> 0x24U)) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+8587,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x33U)) 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U]))));
        tracep->fullBit(oldp+8588,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 3U))));
        tracep->fullBit(oldp+8589,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 4U))));
        tracep->fullBit(oldp+8590,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 5U))));
        tracep->fullBit(oldp+8591,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 6U))));
        tracep->fullIData(oldp+8592,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                     [0U]),32);
        tracep->fullQData(oldp+8593,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->fullBit(oldp+8595,((((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                     > vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                     [0U]) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->fullCData(oldp+8596,(((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                       ? (0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                       : 0U)),6);
        tracep->fullBit(oldp+8597,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                   >> 0x33U)) 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U]))));
        tracep->fullBit(oldp+8598,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty)))));
        tracep->fullBit(oldp+8599,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)))));
        tracep->fullBit(oldp+8600,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we));
        tracep->fullIData(oldp+8601,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                       ? (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                  >> 0x20U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux))),32);
        tracep->fullIData(oldp+8602,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d)),32);
        tracep->fullIData(oldp+8603,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d 
                                              >> 0x20U))),32);
        tracep->fullIData(oldp+8604,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                       ? 0U : (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                       >> 
                                                       (0x20U 
                                                        & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           << 5U)))))),32);
        tracep->fullCData(oldp+8605,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 2U : (3U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(2U) 
                                                  - 
                                                  (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+8606,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+8607,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk))))));
        tracep->fullIData(oldp+8608,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage)),32);
        tracep->fullIData(oldp+8609,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> 0x20U))),32);
        tracep->fullIData(oldp+8610,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> (0x20U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     << 5U))))),32);
        tracep->fullCData(oldp+8611,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                       ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                       : 0xfU)),4);
        tracep->fullQData(oldp+8612,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata),64);
        tracep->fullBit(oldp+8614,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__td_o));
        tracep->fullBit(oldp+8615,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o));
        tracep->fullBit(oldp+8616,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))));
        tracep->fullIData(oldp+8617,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                              [(3U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))] 
                                              >> 2U))),32);
        tracep->fullCData(oldp+8618,((3U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]))),2);
        tracep->fullCData(oldp+8619,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q),5);
        tracep->fullBit(oldp+8620,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
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
        tracep->fullCData(oldp+8621,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))))))),3);
        tracep->fullCData(oldp+8622,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                       == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->fullCData(oldp+8623,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync),3);
        tracep->fullCData(oldp+8624,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray),3);
        tracep->fullBit(oldp+8625,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+8626,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr));
        tracep->fullBit(oldp+8627,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty));
        tracep->fullBit(oldp+8628,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk));
        tracep->fullBit(oldp+8629,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                    == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))));
        tracep->fullCData(oldp+8630,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq),3);
        tracep->fullCData(oldp+8631,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))))))),3);
        tracep->fullQData(oldp+8632,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                     [(3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]),34);
        tracep->fullCData(oldp+8634,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                       == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->fullCData(oldp+8635,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray),3);
        tracep->fullBit(oldp+8636,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+8637,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk));
        tracep->fullBit(oldp+8638,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                    == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))));
        tracep->fullCData(oldp+8639,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq),3);
        tracep->fullBit(oldp+8640,(((IData)((0x800U 
                                             == (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->fullBit(oldp+8641,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                          & ((1U == 
                                              (3U & 
                                               ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU)))
                                              ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                 | ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xaU))
                                              : ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))))));
        tracep->fullIData(oldp+8642,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                        ? (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                   >> 0x20U))
                                        : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux)) 
                                      & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask)),32);
        tracep->fullBit(oldp+8643,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full) 
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
        tracep->fullBit(oldp+8644,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->fullBit(oldp+8645,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full) 
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
        tracep->fullBit(oldp+8646,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))));
        tracep->fullBit(oldp+8647,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full) 
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
        tracep->fullBit(oldp+8648,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                    & ((IData)((0x800U 
                                                == 
                                                (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+8649,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))
                                       ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                          << 1U) : vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage)),33);
        tracep->fullBit(oldp+8651,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_rsp_pending));
        tracep->fullBit(oldp+8652,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_rsp_pending));
        tracep->fullCData(oldp+8653,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+8654,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+8655,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+8656,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+8657,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+8658,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+8659,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+8660,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+8661,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullIData(oldp+8662,(1U),32);
        tracep->fullBit(oldp+8663,(1U));
        tracep->fullBit(oldp+8664,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8665,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8666,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8667,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8668,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8669,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8670,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8671,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8672,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[0U])));
        tracep->fullBit(oldp+8673,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8674,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8675,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8676,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8677,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8678,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8679,((IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8680,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8681,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar))));
        tracep->fullBit(oldp+8682,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8683,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8684,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8685,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8686,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8687,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8688,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8689,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8690,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[0U])));
        tracep->fullBit(oldp+8691,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8692,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8693,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8694,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8695,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8696,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8697,((IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8698,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8699,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar))));
        tracep->fullBit(oldp+8700,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8701,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8702,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8703,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8704,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8705,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8706,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8707,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8708,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[0U])));
        tracep->fullBit(oldp+8709,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8710,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8711,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8712,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8713,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8714,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8715,((IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8716,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8717,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar))));
        tracep->fullBit(oldp+8718,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8719,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8720,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8721,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8722,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8723,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8724,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8725,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8726,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[0U])));
        tracep->fullBit(oldp+8727,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8728,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8729,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8730,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8731,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8732,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8733,((IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8734,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8735,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar))));
        tracep->fullBit(oldp+8736,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8737,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8738,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8739,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8740,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8741,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8742,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8743,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8744,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[0U])));
        tracep->fullBit(oldp+8745,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8746,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8747,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8748,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8749,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8750,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8751,((IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8752,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8753,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar))));
        tracep->fullBit(oldp+8754,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8755,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8756,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8757,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8758,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8759,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8760,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8761,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8762,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[0U])));
        tracep->fullBit(oldp+8763,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8764,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8765,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8766,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8767,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8768,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8769,((IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8770,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8771,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dap_to_xbar))));
        tracep->fullBit(oldp+8772,((1U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8773,((7U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8774,((7U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8775,((3U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8776,((0xffU & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8777,(((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8778,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8779,(((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8780,((1U & vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U])));
        tracep->fullIData(oldp+8781,(vlTOPp->opentitan_soc_top__DOT__gpio_intr),32);
        tracep->fullBit(oldp+8782,(vlTOPp->opentitan_soc_top__DOT__intr_timer));
        tracep->fullBit(oldp+8783,(0U));
        tracep->fullBit(oldp+8784,(vlTOPp->opentitan_soc_top__DOT__rdata_i));
        tracep->fullBit(oldp+8785,(vlTOPp->opentitan_soc_top__DOT__error_i));
        tracep->fullBit(oldp+8786,(vlTOPp->opentitan_soc_top__DOT__CLK_REF));
        tracep->fullBit(oldp+8787,(vlTOPp->opentitan_soc_top__DOT__CLK_LC));
        tracep->fullBit(oldp+8788,(0U));
        tracep->fullIData(oldp+8789,(0U),32);
        tracep->fullIData(oldp+8790,(0x28U),32);
        tracep->fullBit(oldp+8791,(1U));
        tracep->fullIData(oldp+8792,(1U),32);
        tracep->fullBit(oldp+8793,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__scan_rst_ni));
        tracep->fullIData(oldp+8794,(0U),32);
        tracep->fullIData(oldp+8795,(0x20000000U),32);
        tracep->fullSData(oldp+8796,(0U),15);
        tracep->fullBit(oldp+8797,(0U));
        tracep->fullIData(oldp+8798,(0x28U),32);
        tracep->fullIData(oldp+8799,(2U),32);
        tracep->fullIData(oldp+8800,(0U),32);
        tracep->fullBit(oldp+8801,(1U));
        tracep->fullSData(oldp+8802,(1U),10);
        tracep->fullIData(oldp+8803,(0x20U),32);
        tracep->fullIData(oldp+8804,(4U),32);
        tracep->fullIData(oldp+8805,(0x40U),32);
        tracep->fullIData(oldp+8806,(8U),32);
        tracep->fullIData(oldp+8807,(2U),32);
        tracep->fullIData(oldp+8808,(0x1000U),32);
        tracep->fullIData(oldp+8809,(0x100U),32);
        tracep->fullIData(oldp+8810,(3U),32);
        tracep->fullIData(oldp+8811,(0x16U),32);
        tracep->fullBit(oldp+8812,(0U));
        tracep->fullCData(oldp+8813,(0U),2);
        tracep->fullCData(oldp+8814,(0U),8);
        tracep->fullIData(oldp+8815,(0U),22);
        tracep->fullQData(oldp+8816,(0ULL),44);
        tracep->fullQData(oldp+8818,(0ULL),64);
        __Vtemp2779[0U] = 0U;
        __Vtemp2779[1U] = 0U;
        __Vtemp2779[2U] = 0U;
        __Vtemp2779[3U] = 0U;
        tracep->fullWData(oldp+8820,(__Vtemp2779),128);
        tracep->fullIData(oldp+8824,(1U),32);
        tracep->fullIData(oldp+8825,(0U),32);
        tracep->fullCData(oldp+8826,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr),2);
        tracep->fullCData(oldp+8827,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg),2);
        tracep->fullCData(oldp+8828,(0U),3);
        tracep->fullCData(oldp+8829,(2U),2);
        tracep->fullCData(oldp+8830,(1U),2);
        tracep->fullCData(oldp+8831,(3U),2);
        tracep->fullCData(oldp+8832,(5U),3);
        tracep->fullCData(oldp+8833,(4U),3);
        tracep->fullCData(oldp+8834,(3U),3);
        tracep->fullCData(oldp+8835,(2U),3);
        tracep->fullCData(oldp+8836,(1U),3);
        tracep->fullCData(oldp+8837,(0x63U),7);
        tracep->fullCData(oldp+8838,(0x6fU),7);
        tracep->fullCData(oldp+8839,(0x67U),7);
        tracep->fullCData(oldp+8840,(3U),7);
        tracep->fullCData(oldp+8841,(0x37U),7);
        tracep->fullCData(oldp+8842,(0x33U),7);
        tracep->fullCData(oldp+8843,(0x13U),7);
        tracep->fullCData(oldp+8844,(0x23U),7);
        tracep->fullCData(oldp+8845,(6U),3);
        tracep->fullSData(oldp+8846,(0x7b0U),12);
        tracep->fullSData(oldp+8847,(0x7b1U),12);
        tracep->fullSData(oldp+8848,(0x7b2U),12);
        tracep->fullSData(oldp+8849,(0x7b3U),12);
        tracep->fullSData(oldp+8850,(0x304U),12);
        tracep->fullSData(oldp+8851,(0x300U),12);
        tracep->fullCData(oldp+8852,(0x17U),7);
        tracep->fullCData(oldp+8853,(0xfU),7);
        tracep->fullCData(oldp+8854,(0x73U),7);
        tracep->fullCData(oldp+8855,(0U),6);
        tracep->fullCData(oldp+8856,(4U),6);
        tracep->fullCData(oldp+8857,(7U),6);
        tracep->fullCData(oldp+8858,(0x30U),6);
        tracep->fullCData(oldp+8859,(0x2fU),6);
        tracep->fullCData(oldp+8860,(0x31U),6);
        tracep->fullCData(oldp+8861,(0x32U),6);
        tracep->fullCData(oldp+8862,(0x34U),6);
        tracep->fullCData(oldp+8863,(0x33U),6);
        tracep->fullCData(oldp+8864,(0x22U),6);
        tracep->fullCData(oldp+8865,(0x28U),6);
        tracep->fullCData(oldp+8866,(0x27U),6);
        tracep->fullCData(oldp+8867,(0x36U),6);
        tracep->fullCData(oldp+8868,(0x38U),6);
        tracep->fullCData(oldp+8869,(0x3aU),6);
        tracep->fullCData(oldp+8870,(0x35U),6);
        tracep->fullCData(oldp+8871,(0x37U),6);
        tracep->fullCData(oldp+8872,(0x39U),6);
        tracep->fullCData(oldp+8873,(0x23U),6);
        tracep->fullCData(oldp+8874,(0x17U),6);
        tracep->fullCData(oldp+8875,(0x29U),6);
        tracep->fullCData(oldp+8876,(0x2aU),6);
        tracep->fullCData(oldp+8877,(0x15U),6);
        tracep->fullCData(oldp+8878,(0x16U),6);
        tracep->fullCData(oldp+8879,(0x10U),6);
        tracep->fullCData(oldp+8880,(0xfU),6);
        tracep->fullCData(oldp+8881,(0x13U),6);
        tracep->fullCData(oldp+8882,(0x14U),6);
        tracep->fullCData(oldp+8883,(0x1bU),6);
        tracep->fullCData(oldp+8884,(0x1cU),6);
        tracep->fullCData(oldp+8885,(0x19U),6);
        tracep->fullCData(oldp+8886,(0x1aU),6);
        tracep->fullCData(oldp+8887,(0x18U),6);
        tracep->fullCData(oldp+8888,(3U),6);
        tracep->fullCData(oldp+8889,(6U),6);
        tracep->fullCData(oldp+8890,(0x1dU),6);
        tracep->fullCData(oldp+8891,(0x1fU),6);
        tracep->fullCData(oldp+8892,(0x1eU),6);
        tracep->fullCData(oldp+8893,(0x24U),6);
        tracep->fullCData(oldp+8894,(0xeU),6);
        tracep->fullCData(oldp+8895,(0xdU),6);
        tracep->fullCData(oldp+8896,(0x2cU),6);
        tracep->fullCData(oldp+8897,(0x2eU),6);
        tracep->fullCData(oldp+8898,(0x2dU),6);
        tracep->fullCData(oldp+8899,(0x2bU),6);
        tracep->fullCData(oldp+8900,(0x20U),6);
        tracep->fullCData(oldp+8901,(0x21U),6);
        tracep->fullCData(oldp+8902,(0x11U),6);
        tracep->fullCData(oldp+8903,(0xaU),6);
        tracep->fullCData(oldp+8904,(0xcU),6);
        tracep->fullCData(oldp+8905,(0x25U),6);
        tracep->fullCData(oldp+8906,(0x26U),6);
        tracep->fullCData(oldp+8907,(8U),6);
        tracep->fullCData(oldp+8908,(9U),6);
        tracep->fullCData(oldp+8909,(0xbU),6);
        tracep->fullCData(oldp+8910,(1U),6);
        tracep->fullCData(oldp+8911,(0x12U),6);
        tracep->fullCData(oldp+8912,(5U),6);
        tracep->fullCData(oldp+8913,(2U),6);
        tracep->fullCData(oldp+8914,(6U),4);
        tracep->fullCData(oldp+8915,(1U),4);
        tracep->fullCData(oldp+8916,(9U),4);
        tracep->fullCData(oldp+8917,(8U),4);
        tracep->fullCData(oldp+8918,(5U),4);
        tracep->fullCData(oldp+8919,(4U),4);
        tracep->fullCData(oldp+8920,(7U),4);
        tracep->fullCData(oldp+8921,(0U),4);
        tracep->fullCData(oldp+8922,(3U),4);
        tracep->fullCData(oldp+8923,(2U),4);
        tracep->fullCData(oldp+8924,(0x3fU),6);
        tracep->fullQData(oldp+8925,(0ULL),64);
        tracep->fullCData(oldp+8927,(0U),2);
        tracep->fullIData(oldp+8928,(3U),32);
        tracep->fullIData(oldp+8929,(0x40101104U),32);
        tracep->fullIData(oldp+8930,(0x10U),32);
        tracep->fullIData(oldp+8931,(0xbU),32);
        tracep->fullIData(oldp+8932,(0x1eU),32);
        tracep->fullIData(oldp+8933,(7U),32);
        tracep->fullIData(oldp+8934,(0xcU),32);
        tracep->fullIData(oldp+8935,(0x11U),32);
        tracep->fullIData(oldp+8936,(0x15U),32);
        tracep->fullSData(oldp+8937,(0x7c0U),12);
        tracep->fullSData(oldp+8938,(0x342U),12);
        tracep->fullSData(oldp+8939,(0x7a8U),12);
        tracep->fullSData(oldp+8940,(0x306U),12);
        tracep->fullSData(oldp+8941,(0x320U),12);
        tracep->fullSData(oldp+8942,(0xb00U),12);
        tracep->fullSData(oldp+8943,(0xb80U),12);
        tracep->fullSData(oldp+8944,(0x341U),12);
        tracep->fullSData(oldp+8945,(0xf14U),12);
        tracep->fullSData(oldp+8946,(0xb0aU),12);
        tracep->fullSData(oldp+8947,(0xb8aU),12);
        tracep->fullSData(oldp+8948,(0xb0bU),12);
        tracep->fullSData(oldp+8949,(0xb8bU),12);
        tracep->fullSData(oldp+8950,(0xb0cU),12);
        tracep->fullSData(oldp+8951,(0xb8cU),12);
        tracep->fullSData(oldp+8952,(0xb0dU),12);
        tracep->fullSData(oldp+8953,(0xb8dU),12);
        tracep->fullSData(oldp+8954,(0xb0eU),12);
        tracep->fullSData(oldp+8955,(0xb8eU),12);
        tracep->fullSData(oldp+8956,(0xb0fU),12);
        tracep->fullSData(oldp+8957,(0xb8fU),12);
        tracep->fullSData(oldp+8958,(0xb10U),12);
        tracep->fullSData(oldp+8959,(0xb90U),12);
        tracep->fullSData(oldp+8960,(0xb11U),12);
        tracep->fullSData(oldp+8961,(0xb91U),12);
        tracep->fullSData(oldp+8962,(0xb12U),12);
        tracep->fullSData(oldp+8963,(0xb92U),12);
        tracep->fullSData(oldp+8964,(0xb13U),12);
        tracep->fullSData(oldp+8965,(0xb93U),12);
        tracep->fullSData(oldp+8966,(0xb14U),12);
        tracep->fullSData(oldp+8967,(0xb94U),12);
        tracep->fullSData(oldp+8968,(0xb15U),12);
        tracep->fullSData(oldp+8969,(0xb95U),12);
        tracep->fullSData(oldp+8970,(0xb16U),12);
        tracep->fullSData(oldp+8971,(0xb96U),12);
        tracep->fullSData(oldp+8972,(0xb17U),12);
        tracep->fullSData(oldp+8973,(0xb97U),12);
        tracep->fullSData(oldp+8974,(0xb18U),12);
        tracep->fullSData(oldp+8975,(0xb98U),12);
        tracep->fullSData(oldp+8976,(0xb19U),12);
        tracep->fullSData(oldp+8977,(0xb99U),12);
        tracep->fullSData(oldp+8978,(0xb1aU),12);
        tracep->fullSData(oldp+8979,(0xb9aU),12);
        tracep->fullSData(oldp+8980,(0xb1bU),12);
        tracep->fullSData(oldp+8981,(0xb9bU),12);
        tracep->fullSData(oldp+8982,(0xb1cU),12);
        tracep->fullSData(oldp+8983,(0xb9cU),12);
        tracep->fullSData(oldp+8984,(0xb1dU),12);
        tracep->fullSData(oldp+8985,(0xb9dU),12);
        tracep->fullSData(oldp+8986,(0xb03U),12);
        tracep->fullSData(oldp+8987,(0xb1eU),12);
        tracep->fullSData(oldp+8988,(0xb9eU),12);
        tracep->fullSData(oldp+8989,(0xb1fU),12);
        tracep->fullSData(oldp+8990,(0xb9fU),12);
        tracep->fullSData(oldp+8991,(0xb83U),12);
        tracep->fullSData(oldp+8992,(0xb04U),12);
        tracep->fullSData(oldp+8993,(0xb84U),12);
        tracep->fullSData(oldp+8994,(0xb05U),12);
        tracep->fullSData(oldp+8995,(0xb85U),12);
        tracep->fullSData(oldp+8996,(0xb06U),12);
        tracep->fullSData(oldp+8997,(0xb86U),12);
        tracep->fullSData(oldp+8998,(0xb07U),12);
        tracep->fullSData(oldp+8999,(0xb87U),12);
        tracep->fullSData(oldp+9000,(0xb08U),12);
        tracep->fullSData(oldp+9001,(0xb88U),12);
        tracep->fullSData(oldp+9002,(0xb09U),12);
        tracep->fullSData(oldp+9003,(0xb89U),12);
        tracep->fullSData(oldp+9004,(0x32aU),12);
        tracep->fullSData(oldp+9005,(0x32bU),12);
        tracep->fullSData(oldp+9006,(0x32cU),12);
        tracep->fullSData(oldp+9007,(0x32dU),12);
        tracep->fullSData(oldp+9008,(0x32eU),12);
        tracep->fullSData(oldp+9009,(0x32fU),12);
        tracep->fullSData(oldp+9010,(0x330U),12);
        tracep->fullSData(oldp+9011,(0x331U),12);
        tracep->fullSData(oldp+9012,(0x332U),12);
        tracep->fullSData(oldp+9013,(0x333U),12);
        tracep->fullSData(oldp+9014,(0x334U),12);
        tracep->fullSData(oldp+9015,(0x335U),12);
        tracep->fullSData(oldp+9016,(0x336U),12);
        tracep->fullSData(oldp+9017,(0x337U),12);
        tracep->fullSData(oldp+9018,(0x338U),12);
        tracep->fullSData(oldp+9019,(0x339U),12);
        tracep->fullSData(oldp+9020,(0x33aU),12);
        tracep->fullSData(oldp+9021,(0x33bU),12);
        tracep->fullSData(oldp+9022,(0x33cU),12);
        tracep->fullSData(oldp+9023,(0x33dU),12);
        tracep->fullSData(oldp+9024,(0x323U),12);
        tracep->fullSData(oldp+9025,(0x33eU),12);
        tracep->fullSData(oldp+9026,(0x33fU),12);
        tracep->fullSData(oldp+9027,(0x324U),12);
        tracep->fullSData(oldp+9028,(0x325U),12);
        tracep->fullSData(oldp+9029,(0x326U),12);
        tracep->fullSData(oldp+9030,(0x327U),12);
        tracep->fullSData(oldp+9031,(0x328U),12);
        tracep->fullSData(oldp+9032,(0x329U),12);
        tracep->fullSData(oldp+9033,(0xb02U),12);
        tracep->fullSData(oldp+9034,(0xb82U),12);
        tracep->fullSData(oldp+9035,(0x344U),12);
        tracep->fullSData(oldp+9036,(0x301U),12);
        tracep->fullSData(oldp+9037,(0x340U),12);
        tracep->fullSData(oldp+9038,(0x390U),12);
        tracep->fullSData(oldp+9039,(0x391U),12);
        tracep->fullSData(oldp+9040,(0x343U),12);
        tracep->fullSData(oldp+9041,(0x305U),12);
        tracep->fullSData(oldp+9042,(0x3b0U),12);
        tracep->fullSData(oldp+9043,(0x3b1U),12);
        tracep->fullSData(oldp+9044,(0x3baU),12);
        tracep->fullSData(oldp+9045,(0x3bbU),12);
        tracep->fullSData(oldp+9046,(0x3bcU),12);
        tracep->fullSData(oldp+9047,(0x3bdU),12);
        tracep->fullSData(oldp+9048,(0x3beU),12);
        tracep->fullSData(oldp+9049,(0x3bfU),12);
        tracep->fullSData(oldp+9050,(0x3b2U),12);
        tracep->fullSData(oldp+9051,(0x3b3U),12);
        tracep->fullSData(oldp+9052,(0x3b4U),12);
        tracep->fullSData(oldp+9053,(0x3b5U),12);
        tracep->fullSData(oldp+9054,(0x3b6U),12);
        tracep->fullSData(oldp+9055,(0x3b7U),12);
        tracep->fullSData(oldp+9056,(0x3b8U),12);
        tracep->fullSData(oldp+9057,(0x3b9U),12);
        tracep->fullSData(oldp+9058,(0x3a0U),12);
        tracep->fullSData(oldp+9059,(0x3a1U),12);
        tracep->fullSData(oldp+9060,(0x3a2U),12);
        tracep->fullSData(oldp+9061,(0x3a3U),12);
        tracep->fullSData(oldp+9062,(0x7aaU),12);
        tracep->fullSData(oldp+9063,(0x7c1U),12);
        tracep->fullSData(oldp+9064,(0x7a1U),12);
        tracep->fullSData(oldp+9065,(0x7a2U),12);
        tracep->fullSData(oldp+9066,(0x7a3U),12);
        tracep->fullSData(oldp+9067,(0x7a0U),12);
        tracep->fullIData(oldp+9068,(0x40000003U),32);
        tracep->fullIData(oldp+9069,(0x20U),32);
        tracep->fullIData(oldp+9070,(6U),32);
        tracep->fullIData(oldp+9071,(0x12U),32);
        tracep->fullIData(oldp+9072,(0U),18);
        tracep->fullIData(oldp+9073,(0x40U),32);
        tracep->fullIData(oldp+9074,(5U),32);
        tracep->fullIData(oldp+9075,(2U),32);
        tracep->fullCData(oldp+9076,(0xfU),4);
        tracep->fullIData(oldp+9077,(2U),32);
        tracep->fullIData(oldp+9078,(1U),32);
        tracep->fullBit(oldp+9079,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9080,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9081,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9082,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9083,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9084,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9085,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9086,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9087,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i))));
        tracep->fullBit(oldp+9088,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9089,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9090,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9091,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9092,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9093,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9094,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9095,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9096,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i))));
        tracep->fullBit(oldp+9097,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9098,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9099,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9100,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9101,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9102,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9103,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9104,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9105,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i))));
        tracep->fullBit(oldp+9106,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9107,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9108,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9109,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9110,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9111,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9112,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9113,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9114,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i))));
        tracep->fullBit(oldp+9115,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9116,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9117,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9118,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9119,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9120,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9121,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9122,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9123,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i))));
        tracep->fullBit(oldp+9124,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9125,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9126,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9127,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9128,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9129,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9130,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9131,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9132,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i))));
        tracep->fullBit(oldp+9133,((1U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                          >> 0x13U))));
        tracep->fullCData(oldp+9134,((7U & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+9135,((7U & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                             << 0x13U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+9136,((3U & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                             << 0x15U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                               >> 0xbU)))),2);
        tracep->fullCData(oldp+9137,((0xffU & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                  >> 3U)))),8);
        tracep->fullBit(oldp+9138,((1U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                          >> 2U))));
        tracep->fullIData(oldp+9139,(((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                       << 0x1eU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U] 
                                       >> 2U))),32);
        tracep->fullBit(oldp+9140,((1U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+9141,((1U & vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U])));
        tracep->fullBit(oldp+9142,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+9143,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+9144,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+9145,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9146,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+9147,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+9148,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+9149,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+9150,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                    [0U][0U])));
        tracep->fullBit(oldp+9151,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+9152,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+9153,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+9154,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9155,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+9156,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+9157,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+9158,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+9159,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                    [1U][0U])));
        tracep->fullIData(oldp+9160,(0x20U),32);
        tracep->fullIData(oldp+9161,(6U),32);
        tracep->fullIData(oldp+9162,(0x20U),32);
        tracep->fullIData(oldp+9163,(4U),32);
        tracep->fullIData(oldp+9164,(8U),32);
        tracep->fullIData(oldp+9165,(0x573143U),24);
        tracep->fullSData(oldp+9166,(0x5257U),16);
        tracep->fullSData(oldp+9167,(0x524fU),16);
        tracep->fullIData(oldp+9168,(0x10U),32);
        tracep->fullIData(oldp+9169,(4U),32);
        tracep->fullBit(oldp+9170,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__we));
        tracep->fullIData(oldp+9171,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__wdata),32);
        tracep->fullIData(oldp+9172,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__wmask),32);
        tracep->fullBit(oldp+9173,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rvalid));
        tracep->fullIData(oldp+9174,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__data_we),32);
        tracep->fullCData(oldp+9175,((0xfU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__data_we)),4);
        tracep->fullIData(oldp+9176,(0x1000U),32);
        tracep->fullIData(oldp+9177,(0xcU),32);
        tracep->fullIData(oldp+9178,(5U),32);
        tracep->fullIData(oldp+9179,(0xdU),32);
        tracep->fullIData(oldp+9180,(0x21U),32);
        tracep->fullIData(oldp+9181,(0xdU),32);
        tracep->fullIData(oldp+9182,(5U),32);
        tracep->fullIData(oldp+9183,(0x21U),32);
        tracep->fullIData(oldp+9184,(3U),32);
        tracep->fullIData(oldp+9185,(3U),32);
        tracep->fullIData(oldp+9186,(7U),32);
        tracep->fullIData(oldp+9187,(9U),32);
        tracep->fullBit(oldp+9188,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we));
        tracep->fullCData(oldp+9189,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd),3);
        tracep->fullCData(oldp+9190,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we)
                                       ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd)
                                       : 0U)),3);
        tracep->fullBit(oldp+9191,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d));
        tracep->fullIData(oldp+9192,(6U),32);
        tracep->fullIData(oldp+9193,(0U),32);
        tracep->fullIData(oldp+9194,(0xaU),32);
        tracep->fullIData(oldp+9195,(0xbU),32);
        tracep->fullIData(oldp+9196,(0xeU),32);
        tracep->fullIData(oldp+9197,(0xfU),32);
        tracep->fullIData(oldp+9198,(0x10U),32);
        tracep->fullIData(oldp+9199,(0x11U),32);
        tracep->fullIData(oldp+9200,(0x12U),32);
        tracep->fullIData(oldp+9201,(0x13U),32);
        tracep->fullIData(oldp+9202,(0x14U),32);
        tracep->fullIData(oldp+9203,(0x15U),32);
        tracep->fullIData(oldp+9204,(0x16U),32);
        tracep->fullIData(oldp+9205,(0x17U),32);
        tracep->fullIData(oldp+9206,(0x18U),32);
        tracep->fullIData(oldp+9207,(0x19U),32);
        tracep->fullIData(oldp+9208,(0x1aU),32);
        tracep->fullIData(oldp+9209,(0x1bU),32);
        tracep->fullIData(oldp+9210,(0x1cU),32);
        tracep->fullIData(oldp+9211,(0x1dU),32);
        tracep->fullIData(oldp+9212,(0x1eU),32);
        tracep->fullIData(oldp+9213,(0x1fU),32);
        tracep->fullIData(oldp+9214,(0x22U),32);
        tracep->fullIData(oldp+9215,(0x23U),32);
        tracep->fullIData(oldp+9216,(0x24U),32);
        tracep->fullIData(oldp+9217,(0x25U),32);
        tracep->fullIData(oldp+9218,(0x26U),32);
        tracep->fullIData(oldp+9219,(0x27U),32);
        tracep->fullIData(oldp+9220,(0x28U),32);
        tracep->fullIData(oldp+9221,(0x29U),32);
        tracep->fullIData(oldp+9222,(0x2aU),32);
        tracep->fullIData(oldp+9223,(0x2bU),32);
        tracep->fullIData(oldp+9224,(0x2cU),32);
        tracep->fullIData(oldp+9225,(0x2dU),32);
        tracep->fullIData(oldp+9226,(0x2eU),32);
        tracep->fullIData(oldp+9227,(0x2fU),32);
        tracep->fullIData(oldp+9228,(0x30U),32);
        tracep->fullIData(oldp+9229,(0x31U),32);
        tracep->fullIData(oldp+9230,(0x32U),32);
        tracep->fullIData(oldp+9231,(0x33U),32);
        tracep->fullIData(oldp+9232,(0x34U),32);
        tracep->fullIData(oldp+9233,(0x35U),32);
        tracep->fullIData(oldp+9234,(0x36U),32);
        tracep->fullIData(oldp+9235,(0x37U),32);
        tracep->fullIData(oldp+9236,(0x38U),32);
        tracep->fullIData(oldp+9237,(0x39U),32);
        tracep->fullIData(oldp+9238,(0x3aU),32);
        tracep->fullIData(oldp+9239,(0x3bU),32);
        tracep->fullIData(oldp+9240,(0x3cU),32);
        tracep->fullIData(oldp+9241,(0x3dU),32);
        tracep->fullIData(oldp+9242,(0x3eU),32);
        tracep->fullIData(oldp+9243,(0x3fU),32);
        tracep->fullIData(oldp+9244,(0x40U),32);
        tracep->fullIData(oldp+9245,(0x41U),32);
        tracep->fullIData(oldp+9246,(0x42U),32);
        tracep->fullIData(oldp+9247,(0x43U),32);
        tracep->fullIData(oldp+9248,(0x44U),32);
        tracep->fullIData(oldp+9249,(0x45U),32);
        tracep->fullIData(oldp+9250,(0x46U),32);
        tracep->fullIData(oldp+9251,(0x47U),32);
        tracep->fullIData(oldp+9252,(0x48U),32);
        tracep->fullIData(oldp+9253,(0x49U),32);
        tracep->fullIData(oldp+9254,(0x4aU),32);
        tracep->fullIData(oldp+9255,(0x4bU),32);
        tracep->fullIData(oldp+9256,(0x4cU),32);
        tracep->fullIData(oldp+9257,(0x4dU),32);
        tracep->fullIData(oldp+9258,(0x4eU),32);
        tracep->fullIData(oldp+9259,(0x4fU),32);
        tracep->fullIData(oldp+9260,(0x50U),32);
        tracep->fullIData(oldp+9261,(0x51U),32);
        tracep->fullIData(oldp+9262,(0x52U),32);
        tracep->fullIData(oldp+9263,(0x53U),32);
        tracep->fullIData(oldp+9264,(0x54U),32);
        tracep->fullIData(oldp+9265,(0x55U),32);
        tracep->fullIData(oldp+9266,(0x56U),32);
        tracep->fullIData(oldp+9267,(0x57U),32);
        tracep->fullIData(oldp+9268,(0x58U),32);
        tracep->fullIData(oldp+9269,(0x59U),32);
        tracep->fullIData(oldp+9270,(0x5aU),32);
        tracep->fullIData(oldp+9271,(0x5bU),32);
        tracep->fullIData(oldp+9272,(0x5cU),32);
        tracep->fullIData(oldp+9273,(0x5dU),32);
        tracep->fullIData(oldp+9274,(0x5eU),32);
        tracep->fullIData(oldp+9275,(0x5fU),32);
        tracep->fullIData(oldp+9276,(0x60U),32);
        tracep->fullIData(oldp+9277,(0x61U),32);
        tracep->fullIData(oldp+9278,(0x62U),32);
        tracep->fullIData(oldp+9279,(0x63U),32);
        tracep->fullIData(oldp+9280,(0x64U),32);
        tracep->fullIData(oldp+9281,(0x65U),32);
        tracep->fullIData(oldp+9282,(0x66U),32);
        tracep->fullIData(oldp+9283,(0x67U),32);
        tracep->fullIData(oldp+9284,(0x68U),32);
        tracep->fullIData(oldp+9285,(0x69U),32);
        tracep->fullIData(oldp+9286,(0x6aU),32);
        tracep->fullIData(oldp+9287,(0x6bU),32);
        tracep->fullIData(oldp+9288,(0x6cU),32);
        tracep->fullIData(oldp+9289,(0x6dU),32);
        tracep->fullIData(oldp+9290,(0x6eU),32);
        tracep->fullIData(oldp+9291,(0x6fU),32);
        tracep->fullIData(oldp+9292,(0x70U),32);
        tracep->fullIData(oldp+9293,(0x71U),32);
        tracep->fullIData(oldp+9294,(0x72U),32);
        tracep->fullIData(oldp+9295,(0x73U),32);
        tracep->fullIData(oldp+9296,(0x74U),32);
        tracep->fullIData(oldp+9297,(0x75U),32);
        tracep->fullIData(oldp+9298,(0x76U),32);
        tracep->fullIData(oldp+9299,(0x77U),32);
        tracep->fullIData(oldp+9300,(0x78U),32);
        tracep->fullIData(oldp+9301,(0x79U),32);
        tracep->fullIData(oldp+9302,(0x7aU),32);
        tracep->fullIData(oldp+9303,(0x7bU),32);
        tracep->fullIData(oldp+9304,(0x7cU),32);
        tracep->fullIData(oldp+9305,(0x7dU),32);
        tracep->fullIData(oldp+9306,(0x7eU),32);
        tracep->fullIData(oldp+9307,(vlTOPp->opentitan_soc_top__DOT__rdata_i),32);
        tracep->fullBit(oldp+9308,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err));
        tracep->fullCData(oldp+9309,(0U),7);
        tracep->fullBit(oldp+9310,((1U & vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT____Vcellout__u_tempsenseInst__DOUT)));
        tracep->fullBit(oldp+9311,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DONE));
        tracep->fullIData(oldp+9312,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT____Vcellout__u_tempsenseInst__DOUT),24);
        tracep->fullBit(oldp+9313,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__out));
        tracep->fullBit(oldp+9314,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__outb));
        tracep->fullBit(oldp+9315,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__testmode_i));
        tracep->fullCData(oldp+9316,(0U),8);
        tracep->fullCData(oldp+9317,(2U),4);
        tracep->fullCData(oldp+9318,(0U),3);
        tracep->fullBit(oldp+9319,(1U));
        tracep->fullCData(oldp+9320,(2U),4);
        tracep->fullSData(oldp+9321,(0x380U),12);
        tracep->fullIData(oldp+9322,(0x1eU),32);
        tracep->fullCData(oldp+9323,(5U),8);
        tracep->fullCData(oldp+9324,(0x27U),8);
        tracep->fullIData(oldp+9325,(0xcU),32);
        tracep->fullCData(oldp+9326,(0xaU),5);
        tracep->fullSData(oldp+9327,(0x380U),12);
        tracep->fullSData(oldp+9328,(0x387U),12);
        tracep->fullSData(oldp+9329,(0x360U),12);
        tracep->fullSData(oldp+9330,(0x37fU),12);
        tracep->fullSData(oldp+9331,(0x35fU),12);
        tracep->fullSData(oldp+9332,(0x400U),12);
        tracep->fullSData(oldp+9333,(0x7ffU),12);
        tracep->fullSData(oldp+9334,(0x100U),12);
        tracep->fullSData(oldp+9335,(0x104U),12);
        tracep->fullSData(oldp+9336,(0x108U),12);
        tracep->fullSData(oldp+9337,(0x10cU),12);
        tracep->fullIData(oldp+9338,(0x13U),32);
        tracep->fullQData(oldp+9339,(0x7c0006f00c0006fULL),64);
        tracep->fullQData(oldp+9341,(0xff0000f04c0006fULL),64);
        tracep->fullQData(oldp+9343,(0x7b3510737b241073ULL),64);
        tracep->fullQData(oldp+9345,(0xc5551300000517ULL),64);
        tracep->fullQData(oldp+9347,(0xf140247300c51513ULL),64);
        tracep->fullQData(oldp+9349,(0xa4043310852023ULL),64);
        tracep->fullQData(oldp+9351,(0x14741340044403ULL),64);
        tracep->fullQData(oldp+9353,(0xf140247302041c63ULL),64);
        tracep->fullQData(oldp+9355,(0x4004440300a40433ULL),64);
        tracep->fullQData(oldp+9357,(0xfa041ce300247413ULL),64);
        tracep->fullQData(oldp+9359,(0x517fd5ff06fULL),64);
        tracep->fullQData(oldp+9361,(0xc5151300c55513ULL),64);
        tracep->fullQData(oldp+9363,(0x7b30257310052623ULL),64);
        tracep->fullQData(oldp+9365,(0x1000737b202473ULL),64);
        tracep->fullQData(oldp+9367,(0x7b30257310052223ULL),64);
        tracep->fullQData(oldp+9369,(0xa85ff06f7b202473ULL),64);
        tracep->fullQData(oldp+9371,(0x10852423f1402473ULL),64);
        tracep->fullQData(oldp+9373,(0x7b2024737b302573ULL),64);
        tracep->fullQData(oldp+9375,(0x7b200073ULL),64);
        tracep->fullIData(oldp+9377,(0x29U),32);
        tracep->fullIData(oldp+9378,(0x22U),32);
        tracep->fullCData(oldp+9379,(((4U != (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 0x12U)))
                                       ? 0U : 1U)),2);
        tracep->fullCData(oldp+9380,((3U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9381,((0xffU & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 5U))),8);
        tracep->fullCData(oldp+9382,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                 >> 1U)))),4);
        tracep->fullBit(oldp+9383,((((0U == (7U & (
                                                   vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                >> 0x12U)))) 
                                    & ((0xfU != (0xfU 
                                                 & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                       >> 1U)))) 
                                       | (2U != (3U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                    >> 0xdU)))))));
        tracep->fullBit(oldp+9384,((((0U == (7U & (
                                                   vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+9385,((0U == (7U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+9386,((1U == (7U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+9387,((4U == (7U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                 >> 0x12U)))));
        tracep->fullCData(oldp+9388,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                        >> 5U)))))),4);
        tracep->fullCData(oldp+9389,((0x1eU & vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U])),5);
        tracep->fullBit(oldp+9390,(0U));
        tracep->fullBit(oldp+9391,(0U));
        tracep->fullBit(oldp+9392,(0U));
        tracep->fullBit(oldp+9393,(0U));
        tracep->fullBit(oldp+9394,(0U));
        tracep->fullBit(oldp+9395,(0U));
        tracep->fullCData(oldp+9396,(8U),5);
        tracep->fullQData(oldp+9397,(0x800ULL),64);
        tracep->fullQData(oldp+9399,(0x804ULL),64);
        tracep->fullQData(oldp+9401,(0x808ULL),64);
        tracep->fullIData(oldp+9403,(0x1000U),32);
        tracep->fullIData(oldp+9404,(0x40U),32);
        tracep->fullIData(oldp+9405,(8U),32);
        tracep->fullIData(oldp+9406,(0x100U),32);
        tracep->fullIData(oldp+9407,(0xaU),32);
        tracep->fullIData(oldp+9408,(0x16U),32);
        tracep->fullIData(oldp+9409,(7U),32);
        tracep->fullIData(oldp+9410,(0xbU),32);
        tracep->fullIData(oldp+9411,(0x11U),32);
        tracep->fullIData(oldp+9412,(0x15U),32);
        tracep->fullIData(oldp+9413,(0x10000000U),32);
        tracep->fullIData(oldp+9414,(0x40080000U),32);
        tracep->fullIData(oldp+9415,(0x40090000U),32);
        tracep->fullIData(oldp+9416,(0x400a0000U),32);
        tracep->fullIData(oldp+9417,(0x400b0000U),32);
        tracep->fullIData(oldp+9418,(0x400c0000U),32);
        tracep->fullIData(oldp+9419,(0x400d0000U),32);
        tracep->fullIData(oldp+9420,(0x400e0000U),32);
        tracep->fullIData(oldp+9421,(0x400f0000U),32);
        tracep->fullIData(oldp+9422,(0x40050000U),32);
        tracep->fullIData(oldp+9423,(0x10040000U),32);
        tracep->fullIData(oldp+9424,(0xffffU),32);
        tracep->fullSData(oldp+9425,(0x7ffU),11);
        tracep->fullCData(oldp+9426,(0U),4);
        tracep->fullQData(oldp+9427,(0ULL),44);
        tracep->fullIData(oldp+9429,(0x10000U),32);
        tracep->fullIData(oldp+9430,(0x58U),32);
        tracep->fullIData(oldp+9431,(0x33U),32);
        tracep->fullIData(oldp+9432,(0x55U),32);
        tracep->fullCData(oldp+9433,(3U),2);
        tracep->fullCData(oldp+9434,(0U),8);
        tracep->fullIData(oldp+9435,(0x56U),32);
        tracep->fullBit(oldp+9436,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i))));
        tracep->fullBit(oldp+9437,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9438,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+9440,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i))));
        tracep->fullBit(oldp+9441,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9442,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+9444,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i))));
        tracep->fullBit(oldp+9445,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9446,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+9448,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i))));
        tracep->fullBit(oldp+9449,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9450,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+9452,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i))));
        tracep->fullBit(oldp+9453,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9454,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+9456,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i))));
        tracep->fullBit(oldp+9457,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9458,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullQData(oldp+9460,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                              >> 2U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                                 >> 0x10U))))
                                                          ? 
                                                         ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U] 
                                                             >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U])))))),51);
        tracep->fullSData(oldp+9462,(0U),9);
        tracep->fullSData(oldp+9463,(4U),9);
        tracep->fullSData(oldp+9464,(8U),9);
        tracep->fullSData(oldp+9465,(0xcU),9);
        tracep->fullSData(oldp+9466,(0x10U),9);
        tracep->fullSData(oldp+9467,(0x14U),9);
        tracep->fullSData(oldp+9468,(0x18U),9);
        tracep->fullSData(oldp+9469,(0x1cU),9);
        tracep->fullSData(oldp+9470,(0x20U),9);
        tracep->fullSData(oldp+9471,(0x24U),9);
        tracep->fullSData(oldp+9472,(0x28U),9);
        tracep->fullSData(oldp+9473,(0x2cU),9);
        tracep->fullSData(oldp+9474,(0x30U),9);
        tracep->fullSData(oldp+9475,(0x34U),9);
        tracep->fullSData(oldp+9476,(0x38U),9);
        tracep->fullSData(oldp+9477,(0x3cU),9);
        tracep->fullSData(oldp+9478,(0x40U),9);
        tracep->fullSData(oldp+9479,(0x44U),9);
        tracep->fullSData(oldp+9480,(0x48U),9);
        tracep->fullSData(oldp+9481,(0x4cU),9);
        tracep->fullSData(oldp+9482,(0x50U),9);
        tracep->fullSData(oldp+9483,(0x54U),9);
        tracep->fullSData(oldp+9484,(0x58U),9);
        tracep->fullSData(oldp+9485,(0x5cU),9);
        tracep->fullSData(oldp+9486,(0x60U),9);
        tracep->fullSData(oldp+9487,(0x64U),9);
        tracep->fullSData(oldp+9488,(0x68U),9);
        tracep->fullSData(oldp+9489,(0x6cU),9);
        tracep->fullSData(oldp+9490,(0x70U),9);
        tracep->fullSData(oldp+9491,(0x74U),9);
        tracep->fullSData(oldp+9492,(0x78U),9);
        tracep->fullSData(oldp+9493,(0x7cU),9);
        tracep->fullSData(oldp+9494,(0x80U),9);
        tracep->fullSData(oldp+9495,(0x84U),9);
        tracep->fullSData(oldp+9496,(0x100U),9);
        tracep->fullSData(oldp+9497,(0x104U),9);
        tracep->fullSData(oldp+9498,(0x108U),9);
        tracep->fullSData(oldp+9499,(0x10cU),9);
        tracep->fullIData(oldp+9500,(0x505043U),24);
        tracep->fullBit(oldp+9501,(0U));
        tracep->fullCData(oldp+9502,(0U),3);
        tracep->fullCData(oldp+9503,(0U),3);
        tracep->fullCData(oldp+9504,(0U),2);
        tracep->fullCData(oldp+9505,(0U),8);
        tracep->fullIData(oldp+9506,(0U),32);
        tracep->fullCData(oldp+9507,(0U),4);
        tracep->fullIData(oldp+9508,(0U),32);
        tracep->fullBit(oldp+9509,(1U));
        tracep->fullBit(oldp+9510,(0U));
        tracep->fullCData(oldp+9511,(0U),3);
        tracep->fullCData(oldp+9512,(0U),3);
        tracep->fullCData(oldp+9513,(0U),2);
        tracep->fullCData(oldp+9514,(0U),8);
        tracep->fullBit(oldp+9515,(0U));
        tracep->fullIData(oldp+9516,(0U),32);
        tracep->fullBit(oldp+9517,(0U));
        tracep->fullBit(oldp+9518,(1U));
    }
}
