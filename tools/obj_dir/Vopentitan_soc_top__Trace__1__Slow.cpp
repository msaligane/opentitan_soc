// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceFullSub1(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2673[3];
    WData/*95:0*/ __Vtemp2677[3];
    WData/*95:0*/ __Vtemp2681[3];
    WData/*95:0*/ __Vtemp2725[3];
    WData/*95:0*/ __Vtemp2729[3];
    WData/*95:0*/ __Vtemp2733[3];
    WData/*95:0*/ __Vtemp2813[3];
    WData/*95:0*/ __Vtemp2817[3];
    WData/*95:0*/ __Vtemp2821[3];
    WData/*95:0*/ __Vtemp2865[3];
    WData/*95:0*/ __Vtemp2869[3];
    WData/*95:0*/ __Vtemp2931[3];
    WData/*95:0*/ __Vtemp2935[3];
    WData/*95:0*/ __Vtemp2939[3];
    WData/*95:0*/ __Vtemp2943[3];
    WData/*95:0*/ __Vtemp2987[3];
    WData/*95:0*/ __Vtemp2991[3];
    WData/*95:0*/ __Vtemp2995[3];
    // Body
    {
        tracep->fullCData(oldp+3561,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3562,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3563,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3564,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3565,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3566,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3567,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3568,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                 [1U]))));
        tracep->fullBit(oldp+3569,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3570,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3571,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3572,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3573,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3574,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3575,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3576,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3577,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                    [0U][0U])));
        tracep->fullBit(oldp+3578,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3579,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3580,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3581,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3582,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3583,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3584,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3585,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3586,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                    [1U][0U])));
        tracep->fullBit(oldp+3587,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3588,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3589,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3590,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3591,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3592,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3593,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3594,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3595,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                 [0U]))));
        tracep->fullBit(oldp+3596,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3597,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3598,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3599,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3600,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3601,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3602,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3603,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3604,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                 [1U]))));
        tracep->fullBit(oldp+3605,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3606,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3607,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3608,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3609,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3610,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3611,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3612,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3613,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+3614,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3615,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3616,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3617,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3618,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3619,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3620,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3621,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3622,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+3623,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3624,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3625,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3626,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3627,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3628,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3629,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3630,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3631,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+3632,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3633,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3634,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3635,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3636,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3637,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3638,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3639,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3640,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+3641,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3642,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3643,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3644,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3645,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3646,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3647,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3648,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3649,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+3650,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3651,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3652,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3653,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3654,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3655,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3656,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3657,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3658,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+3659,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3660,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3661,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3662,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3663,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3664,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3665,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3666,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3667,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3668,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3669,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3670,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3671,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3672,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3673,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3674,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3675,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3676,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+3677,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest),2);
        tracep->fullCData(oldp+3678,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hgrant),2);
        tracep->fullBit(oldp+3679,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3680,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3681,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3682,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3683,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3684,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3685,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3686,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3687,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+3688,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest))));
        tracep->fullBit(oldp+3689,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3690,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3691,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3692,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3693,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3694,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3695,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3696,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3697,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+3698,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+3699,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+3700,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3701,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3702,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3703,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3704,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3705,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3706,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3707,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3708,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+3709,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+3710,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3711,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3712,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3713,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3714,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3715,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3716,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3717,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3718,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3719,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+3720,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+3721,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3722,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2673[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U]);
        __Vtemp2673[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U]));
        __Vtemp2673[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+3723,(__Vtemp2673),85);
        tracep->fullBit(oldp+3726,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+3727,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3728,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3729,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3730,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3731,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3732,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3733,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3734,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3735,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+3736,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3737,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3738,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3739,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3740,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3741,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3742,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3743,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3744,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+3745,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3746,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3747,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3748,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3749,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3750,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3751,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3752,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3753,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3754,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3755,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2677[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2677[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2677[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+3756,(__Vtemp2677),85);
        tracep->fullBit(oldp+3759,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+3760,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+3761,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3763,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3764,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3765,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3766,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3767,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3768,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3769,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3770,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3771,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+3772,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3773,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3774,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3775,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3776,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3777,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3778,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3779,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3780,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+3781,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3782,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3783,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3784,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3785,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3786,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3787,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3788,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3789,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3790,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3791,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2681[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2681[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2681[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+3792,(__Vtemp2681),85);
        tracep->fullBit(oldp+3795,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+3796,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+3797,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullWData(oldp+3799,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+3802,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+3805,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+3806,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+3809,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+3810,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+3811,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+3812,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+3813,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+3814,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3815,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3816,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3817,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3818,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3819,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3820,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3821,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3822,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+3823,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3824,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3825,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3826,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3827,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3828,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3829,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3830,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3831,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+3832,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3833,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3834,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3835,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3836,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3837,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3838,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3839,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3840,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+3841,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3842,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3843,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3844,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3845,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3846,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3847,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3848,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3849,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+3850,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3851,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3852,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3853,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3854,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3855,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3856,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3857,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3858,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+3859,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3860,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3861,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3862,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3863,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3864,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3865,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3866,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3867,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+3868,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3869,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3870,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3871,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3872,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3873,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3874,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3875,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3876,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3877,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3878,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3879,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3880,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3881,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3882,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3883,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3884,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3885,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+3886,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest),2);
        tracep->fullCData(oldp+3887,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hgrant),2);
        tracep->fullBit(oldp+3888,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3889,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3890,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3891,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3892,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3893,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3894,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3895,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3896,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+3897,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest))));
        tracep->fullBit(oldp+3898,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3899,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3900,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3901,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3902,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3903,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3904,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3905,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3906,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+3907,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+3908,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+3909,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3910,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3911,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3912,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3913,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3914,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3915,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3916,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3917,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+3918,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+3919,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3920,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3921,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3922,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3923,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3924,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3925,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3926,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3927,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3928,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+3929,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+3930,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3931,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2725[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U]);
        __Vtemp2725[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U]));
        __Vtemp2725[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+3932,(__Vtemp2725),85);
        tracep->fullBit(oldp+3935,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+3936,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3937,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3938,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3939,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3940,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3941,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3942,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3943,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3944,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+3945,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3946,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3947,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3948,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3949,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3950,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3951,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3952,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3953,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+3954,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3955,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3956,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3957,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3958,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3959,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3960,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3961,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3962,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3963,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3964,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2729[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2729[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2729[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+3965,(__Vtemp2729),85);
        tracep->fullBit(oldp+3968,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+3969,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+3970,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3972,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3973,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3974,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3975,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3976,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3977,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3978,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3979,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3980,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+3981,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3982,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3983,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3984,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3985,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3986,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3987,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3988,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3989,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+3990,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3991,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3992,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3993,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3994,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3995,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3996,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3997,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3998,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3999,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4000,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2733[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2733[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2733[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+4001,(__Vtemp2733),85);
        tracep->fullBit(oldp+4004,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+4005,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+4006,((((QData)((IData)(
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
        tracep->fullWData(oldp+4008,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+4011,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+4014,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+4015,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+4018,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+4019,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+4020,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+4021,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+4022,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+4023,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4024,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4025,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4026,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4027,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4028,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4029,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4030,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4031,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4032,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4033,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4034,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4035,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4036,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4037,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4038,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4039,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4040,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4041,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4042,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4043,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4044,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4045,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4046,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4047,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4048,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4049,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4050,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4051,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4052,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4053,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4054,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4055,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4056,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
        tracep->fullBit(oldp+4057,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
        tracep->fullBit(oldp+4058,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
        tracep->fullBit(oldp+4059,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
        tracep->fullBit(oldp+4060,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
        tracep->fullBit(oldp+4061,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
        tracep->fullBit(oldp+4062,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
        tracep->fullBit(oldp+4063,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
        tracep->fullBit(oldp+4064,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
        tracep->fullBit(oldp+4065,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q));
        tracep->fullBit(oldp+4066,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
        tracep->fullBit(oldp+4067,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
        tracep->fullBit(oldp+4068,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
        tracep->fullBit(oldp+4069,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
        tracep->fullBit(oldp+4070,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
        tracep->fullCData(oldp+4071,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
        tracep->fullCData(oldp+4072,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
        tracep->fullCData(oldp+4073,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
        tracep->fullCData(oldp+4074,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
        tracep->fullCData(oldp+4075,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
        tracep->fullCData(oldp+4076,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
        tracep->fullCData(oldp+4077,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
        tracep->fullCData(oldp+4078,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
        tracep->fullBit(oldp+4079,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
        tracep->fullBit(oldp+4080,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
        tracep->fullBit(oldp+4081,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
        tracep->fullBit(oldp+4082,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
        tracep->fullBit(oldp+4083,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
        tracep->fullBit(oldp+4084,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
        tracep->fullBit(oldp+4085,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
        tracep->fullBit(oldp+4086,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
        tracep->fullBit(oldp+4087,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
        tracep->fullBit(oldp+4088,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe));
        tracep->fullBit(oldp+4089,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe));
        tracep->fullBit(oldp+4090,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe));
        tracep->fullBit(oldp+4091,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe));
        tracep->fullBit(oldp+4092,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe));
        tracep->fullBit(oldp+4093,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe));
        tracep->fullBit(oldp+4094,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe));
        tracep->fullBit(oldp+4095,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe));
        tracep->fullCData(oldp+4096,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4097,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4098,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4099,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4100,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4101,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4102,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4103,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4104,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4105,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4106,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4107,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4108,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4109,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4110,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4111,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullBit(oldp+4112,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
        tracep->fullBit(oldp+4113,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
        tracep->fullBit(oldp+4114,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
        tracep->fullBit(oldp+4115,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
        tracep->fullBit(oldp+4116,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
        tracep->fullBit(oldp+4117,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
        tracep->fullBit(oldp+4118,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
        tracep->fullBit(oldp+4119,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
        tracep->fullBit(oldp+4120,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
        tracep->fullBit(oldp+4121,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
        tracep->fullBit(oldp+4122,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
        tracep->fullBit(oldp+4123,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
        tracep->fullBit(oldp+4124,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
        tracep->fullBit(oldp+4125,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
        tracep->fullBit(oldp+4126,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
        tracep->fullBit(oldp+4127,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
        tracep->fullBit(oldp+4128,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
        tracep->fullCData(oldp+4129,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
        tracep->fullCData(oldp+4130,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
        tracep->fullCData(oldp+4131,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
        tracep->fullBit(oldp+4132,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
        tracep->fullBit(oldp+4133,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
        tracep->fullBit(oldp+4134,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
        tracep->fullBit(oldp+4135,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
        tracep->fullBit(oldp+4136,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
        tracep->fullBit(oldp+4137,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
        tracep->fullBit(oldp+4138,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
        tracep->fullBit(oldp+4139,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
        tracep->fullBit(oldp+4140,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
        tracep->fullBit(oldp+4141,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
        tracep->fullBit(oldp+4142,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
        tracep->fullBit(oldp+4143,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
        tracep->fullBit(oldp+4144,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
        tracep->fullBit(oldp+4145,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
        tracep->fullBit(oldp+4146,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q));
        tracep->fullBit(oldp+4147,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
        tracep->fullBit(oldp+4148,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
        tracep->fullBit(oldp+4149,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
        tracep->fullBit(oldp+4150,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
        tracep->fullBit(oldp+4151,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
        tracep->fullBit(oldp+4152,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
        tracep->fullIData(oldp+4153,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
        tracep->fullIData(oldp+4154,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
        tracep->fullIData(oldp+4155,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
        tracep->fullIData(oldp+4156,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
        tracep->fullIData(oldp+4157,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
        tracep->fullIData(oldp+4158,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
        tracep->fullIData(oldp+4159,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
        tracep->fullBit(oldp+4160,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        tracep->fullIData(oldp+4161,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        tracep->fullBit(oldp+4162,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error));
        tracep->fullCData(oldp+4163,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        tracep->fullCData(oldp+4164,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        tracep->fullCData(oldp+4165,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        tracep->fullBit(oldp+4166,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q));
        tracep->fullBit(oldp+4167,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__rvalid));
        tracep->fullCData(oldp+4168,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q),2);
        tracep->fullCData(oldp+4169,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+4170,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+4171,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+4172,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+4173,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+4174,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+4175,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+4176,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+4177,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+4178,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+4179,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+4180,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+4181,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+4182,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4183,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4184,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4185,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4186,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4187,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4188,((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4189,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4190,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+4191,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__haltreq));
        tracep->fullBit(oldp+4192,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__resumereq));
        tracep->fullIData(oldp+4193,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel),20);
        tracep->fullBit(oldp+4194,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__req));
        tracep->fullIData(oldp+4195,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0),32);
        tracep->fullIData(oldp+4196,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1),32);
        tracep->fullIData(oldp+4197,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2),32);
        tracep->fullIData(oldp+4198,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3),32);
        tracep->fullIData(oldp+4199,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted),32);
        tracep->fullIData(oldp+4200,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
        tracep->fullIData(oldp+4201,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
        tracep->fullIData(oldp+4202,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
        tracep->fullIData(oldp+4203,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1),32);
        tracep->fullIData(oldp+4204,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2),32);
        tracep->fullIData(oldp+4205,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3),32);
        tracep->fullSData(oldp+4206,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
        tracep->fullSData(oldp+4207,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
        tracep->fullCData(oldp+4208,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
        tracep->fullBit(oldp+4209,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart));
        tracep->fullQData(oldp+4210,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
        tracep->fullQData(oldp+4212,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
        tracep->fullQData(oldp+4214,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
        tracep->fullQData(oldp+4216,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
        tracep->fullQData(oldp+4218,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
        tracep->fullQData(oldp+4220,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xbU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xaU])))),64);
        tracep->fullQData(oldp+4222,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xdU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xcU])))),64);
        tracep->fullQData(oldp+4224,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xfU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xeU])))),64);
        tracep->fullBit(oldp+4226,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__exception));
        tracep->fullBit(oldp+4227,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command));
        tracep->fullBit(oldp+4228,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel)));
        tracep->fullCData(oldp+4229,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__resumereq),2);
        tracep->fullCData(oldp+4230,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__haltreq),2);
        tracep->fullBit(oldp+4231,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+4232,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__req) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__we)))));
        tracep->fullBit(oldp+4233,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+4234,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4235,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4236,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4237,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4238,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4239,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4240,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4241,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4242,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+4243,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+4244,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+4245,((0x7fU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                       >> 0x24U)))),8);
        tracep->fullBit(oldp+4246,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+4247,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4248,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4250,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4251,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4252,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4253,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4254,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4255,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4256,((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4257,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4258,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullCData(oldp+4259,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
        tracep->fullCData(oldp+4260,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
        tracep->fullCData(oldp+4261,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
        tracep->fullCData(oldp+4262,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q),3);
        tracep->fullCData(oldp+4263,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
        tracep->fullCData(oldp+4264,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
        tracep->fullCData(oldp+4265,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
        tracep->fullCData(oldp+4266,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
        tracep->fullCData(oldp+4267,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
        tracep->fullCData(oldp+4268,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
        tracep->fullCData(oldp+4269,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
        tracep->fullCData(oldp+4270,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
        tracep->fullCData(oldp+4271,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
        tracep->fullCData(oldp+4272,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
        tracep->fullCData(oldp+4273,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
        tracep->fullCData(oldp+4274,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
        tracep->fullCData(oldp+4275,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
        tracep->fullCData(oldp+4276,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
        tracep->fullCData(oldp+4277,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
        tracep->fullCData(oldp+4278,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
        tracep->fullBit(oldp+4279,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
        tracep->fullBit(oldp+4280,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q));
        tracep->fullBit(oldp+4281,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q));
        tracep->fullCData(oldp+4282,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
        tracep->fullBit(oldp+4283,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        tracep->fullIData(oldp+4284,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        tracep->fullBit(oldp+4285,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
        tracep->fullCData(oldp+4286,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        tracep->fullCData(oldp+4287,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        tracep->fullCData(oldp+4288,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        tracep->fullBit(oldp+4289,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe));
        tracep->fullBit(oldp+4290,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe));
        tracep->fullBit(oldp+4291,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe));
        tracep->fullBit(oldp+4292,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe));
        tracep->fullBit(oldp+4293,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe));
        tracep->fullBit(oldp+4294,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe));
        tracep->fullBit(oldp+4295,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe));
        tracep->fullBit(oldp+4296,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe));
        tracep->fullBit(oldp+4297,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe));
        tracep->fullBit(oldp+4298,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe));
        tracep->fullBit(oldp+4299,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe));
        tracep->fullBit(oldp+4300,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe));
        tracep->fullBit(oldp+4301,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4302,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4303,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4304,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4305,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4306,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4307,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4308,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4309,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+4310,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+4311,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+4312,((0x7fU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x24U)))),8);
        tracep->fullBit(oldp+4313,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+4314,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4315,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullCData(oldp+4317,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+4318,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4319,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4320,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4321,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4322,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4323,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4324,((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4325,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4326,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar))));
        tracep->fullBit(oldp+4327,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
        tracep->fullCData(oldp+4328,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
        tracep->fullBit(oldp+4329,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe));
        tracep->fullBit(oldp+4330,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe));
        tracep->fullBit(oldp+4331,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe));
        tracep->fullBit(oldp+4332,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe));
        tracep->fullBit(oldp+4333,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe));
        tracep->fullBit(oldp+4334,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__outstanding));
        tracep->fullIData(oldp+4335,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__rdata),32);
        tracep->fullBit(oldp+4336,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__error));
        tracep->fullCData(oldp+4337,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__reqid),8);
        tracep->fullCData(oldp+4338,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__reqsz),2);
        tracep->fullBit(oldp+4339,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__rspop));
        tracep->fullBit(oldp+4340,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__RESET_REGn));
        tracep->fullCData(oldp+4341,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__SEL_CONV_TIME_REG),4);
        tracep->fullBit(oldp+4342,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__en_REG));
        tracep->fullIData(oldp+4343,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DOUT_REG),24);
        tracep->fullBit(oldp+4344,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DONE_REG));
        tracep->fullBit(oldp+4345,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
        tracep->fullBit(oldp+4346,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4347,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+4348,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+4349,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+4350,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+4351,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+4352,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+4353,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+4354,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+4355,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4356,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+4357,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+4358,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+4359,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+4360,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+4361,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+4362,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+4363,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+4364,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+4365,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+4366,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U])));
        tracep->fullBit(oldp+4367,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 1U))));
        tracep->fullBit(oldp+4368,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 2U))));
        tracep->fullBit(oldp+4369,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 3U))));
        tracep->fullBit(oldp+4370,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 4U))));
        tracep->fullBit(oldp+4371,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 5U))));
        tracep->fullBit(oldp+4372,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 6U))));
        tracep->fullBit(oldp+4373,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 7U))));
        tracep->fullBit(oldp+4374,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 8U))));
        tracep->fullBit(oldp+4375,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 9U))));
        tracep->fullBit(oldp+4376,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+4377,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+4378,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x17U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+4379,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x1aU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 6U)))),3);
        tracep->fullCData(oldp+4380,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x1dU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 3U)))),3);
        tracep->fullCData(oldp+4381,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U])),3);
        tracep->fullCData(oldp+4382,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 3U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1dU)))),3);
        tracep->fullCData(oldp+4383,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 6U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1aU)))),3);
        tracep->fullCData(oldp+4384,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 9U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x17U)))),3);
        tracep->fullCData(oldp+4385,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0xcU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x14U)))),3);
        tracep->fullCData(oldp+4386,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0xfU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x11U)))),3);
        tracep->fullCData(oldp+4387,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x12U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0xeU)))),3);
        tracep->fullCData(oldp+4388,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x15U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0xbU)))),3);
        tracep->fullCData(oldp+4389,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x18U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 8U)))),3);
        tracep->fullCData(oldp+4390,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x1bU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 5U)))),3);
        tracep->fullCData(oldp+4391,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x1eU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 2U)))),3);
        tracep->fullCData(oldp+4392,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 1U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1fU)))),3);
        tracep->fullCData(oldp+4393,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 4U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1cU)))),3);
        tracep->fullCData(oldp+4394,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 7U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x19U)))),3);
        tracep->fullCData(oldp+4395,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0xaU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x16U)))),3);
        tracep->fullCData(oldp+4396,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0xdU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x13U)))),3);
        tracep->fullCData(oldp+4397,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+4398,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x13U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+4399,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x16U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0xaU)))),3);
        tracep->fullCData(oldp+4400,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x19U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 7U)))),3);
        tracep->fullCData(oldp+4401,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x1cU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 4U)))),3);
        tracep->fullCData(oldp+4402,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x1fU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+4403,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 2U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1eU)))),3);
        tracep->fullCData(oldp+4404,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 5U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1bU)))),3);
        tracep->fullCData(oldp+4405,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 8U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x18U)))),3);
        tracep->fullCData(oldp+4406,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x15U)))),3);
        tracep->fullCData(oldp+4407,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0xeU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x12U)))),3);
        tracep->fullCData(oldp+4408,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0x11U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0xfU)))),3);
        tracep->fullCData(oldp+4409,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0x14U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0xcU)))),3);
        tracep->fullBit(oldp+4410,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4411,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+4412,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+4413,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+4414,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+4415,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+4416,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+4417,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+4418,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+4419,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4420,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+4421,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+4422,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+4423,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+4424,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+4425,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+4426,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+4427,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+4428,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+4429,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+4430,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U])));
        tracep->fullBit(oldp+4431,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+4432,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 2U))));
        tracep->fullBit(oldp+4433,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 3U))));
        tracep->fullBit(oldp+4434,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 4U))));
        tracep->fullBit(oldp+4435,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 5U))));
        tracep->fullBit(oldp+4436,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 6U))));
        tracep->fullBit(oldp+4437,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 7U))));
        tracep->fullBit(oldp+4438,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 8U))));
        tracep->fullBit(oldp+4439,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 9U))));
        tracep->fullBit(oldp+4440,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+4441,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+4442,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             << 0x17U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+4443,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                  >> 3U)))),6);
        tracep->fullBit(oldp+4444,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+4445,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+4446,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
        tracep->fullBit(oldp+4447,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q));
        tracep->fullIData(oldp+4448,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip),32);
        tracep->fullCData(oldp+4449,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q),6);
        tracep->fullBit(oldp+4450,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
        tracep->fullIData(oldp+4451,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
        tracep->fullIData(oldp+4452,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
        tracep->fullBit(oldp+4453,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                          >> 1U))));
        tracep->fullBit(oldp+4454,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                          >> 2U))));
        tracep->fullCData(oldp+4455,((7U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 3U))),3);
        tracep->fullBit(oldp+4456,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
        tracep->fullBit(oldp+4457,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
        tracep->fullBit(oldp+4458,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 5U))));
        tracep->fullIData(oldp+4459,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+4460,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
        tracep->fullBit(oldp+4461,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        tracep->fullCData(oldp+4462,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        tracep->fullCData(oldp+4463,((3U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                >> 2U)
                                             : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
        tracep->fullBit(oldp+4464,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        tracep->fullBit(oldp+4465,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 2U))));
        tracep->fullBit(oldp+4466,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xfU))));
        tracep->fullBit(oldp+4467,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xcU))));
        tracep->fullCData(oldp+4468,((0xffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
        tracep->fullBit(oldp+4469,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
        tracep->fullCData(oldp+4470,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
        tracep->fullCData(oldp+4471,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
        tracep->fullCData(oldp+4472,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
        tracep->fullBit(oldp+4473,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)))));
        tracep->fullBit(oldp+4474,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
        tracep->fullBit(oldp+4475,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
        tracep->fullCData(oldp+4476,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        tracep->fullBit(oldp+4477,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
        tracep->fullBit(oldp+4478,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
        tracep->fullBit(oldp+4479,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
        tracep->fullBit(oldp+4480,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
        tracep->fullBit(oldp+4481,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        tracep->fullBit(oldp+4482,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
        tracep->fullIData(oldp+4483,(((IData)(1U) << (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
        tracep->fullIData(oldp+4484,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
        tracep->fullIData(oldp+4485,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
        tracep->fullCData(oldp+4486,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
        tracep->fullBit(oldp+4487,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
        tracep->fullCData(oldp+4488,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
        tracep->fullIData(oldp+4489,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
        tracep->fullBit(oldp+4490,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
        tracep->fullCData(oldp+4491,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
        tracep->fullIData(oldp+4492,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
        tracep->fullIData(oldp+4493,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+4494,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+4495,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+4496,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+4497,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
        tracep->fullCData(oldp+4498,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        tracep->fullIData(oldp+4499,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
        tracep->fullCData(oldp+4500,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
        tracep->fullIData(oldp+4501,((0xfffffff8U | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
        tracep->fullCData(oldp+4502,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
        tracep->fullCData(oldp+4503,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
        tracep->fullQData(oldp+4504,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
        tracep->fullQData(oldp+4506,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        tracep->fullBit(oldp+4508,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
        tracep->fullCData(oldp+4509,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                            >> 1U))),2);
        tracep->fullCData(oldp+4510,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        tracep->fullBit(oldp+4511,((0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)));
        tracep->fullIData(oldp+4512,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs),18);
        tracep->fullCData(oldp+4513,(((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                       ? 0xeU : ((0x2000U 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                  ? 0xdU
                                                  : 
                                                 ((0x1000U 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                   ? 0xcU
                                                   : 
                                                  ((0x800U 
                                                    & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                    ? 0xbU
                                                    : 
                                                   ((0x400U 
                                                     & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                     ? 0xaU
                                                     : 
                                                    ((0x200U 
                                                      & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                      ? 9U
                                                      : 
                                                     ((0x100U 
                                                       & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                       ? 8U
                                                       : 
                                                      ((0x80U 
                                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                        ? 7U
                                                        : 
                                                       ((0x40U 
                                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                          ? 5U
                                                          : 
                                                         ((0x10U 
                                                           & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                           ? 4U
                                                           : 
                                                          ((8U 
                                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                            ? 3U
                                                            : 
                                                           ((4U 
                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                             ? 2U
                                                             : 
                                                            ((2U 
                                                              & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                              ? 1U
                                                              : 0U))))))))))))))),4);
        tracep->fullBit(oldp+4514,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs 
                                          >> 0x10U))));
        tracep->fullCData(oldp+4515,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
        tracep->fullBit(oldp+4516,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int));
        tracep->fullBit(oldp+4517,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__outstanding_load_wb));
        tracep->fullIData(oldp+4518,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
        tracep->fullCData(oldp+4519,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
        tracep->fullBit(oldp+4520,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
        tracep->fullBit(oldp+4521,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
        tracep->fullBit(oldp+4522,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
        tracep->fullBit(oldp+4523,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        tracep->fullBit(oldp+4524,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
        tracep->fullCData(oldp+4525,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
        tracep->fullCData(oldp+4526,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d),3);
        tracep->fullQData(oldp+4527,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
        tracep->fullQData(oldp+4529,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
        tracep->fullQData(oldp+4531,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
        tracep->fullQData(oldp+4533,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
        tracep->fullQData(oldp+4535,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
        tracep->fullQData(oldp+4537,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
        tracep->fullQData(oldp+4539,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
        tracep->fullQData(oldp+4541,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
        tracep->fullQData(oldp+4543,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
        tracep->fullQData(oldp+4545,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
        tracep->fullQData(oldp+4547,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
        tracep->fullQData(oldp+4549,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
        tracep->fullQData(oldp+4551,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
        tracep->fullQData(oldp+4553,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
        tracep->fullQData(oldp+4555,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
        tracep->fullQData(oldp+4557,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
        tracep->fullQData(oldp+4559,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
        tracep->fullQData(oldp+4561,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
        tracep->fullQData(oldp+4563,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
        tracep->fullQData(oldp+4565,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
        tracep->fullQData(oldp+4567,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
        tracep->fullQData(oldp+4569,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
        tracep->fullQData(oldp+4571,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
        tracep->fullQData(oldp+4573,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
        tracep->fullQData(oldp+4575,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
        tracep->fullQData(oldp+4577,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
        tracep->fullQData(oldp+4579,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
        tracep->fullQData(oldp+4581,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
        tracep->fullQData(oldp+4583,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
        tracep->fullQData(oldp+4585,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
        tracep->fullQData(oldp+4587,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
        tracep->fullQData(oldp+4589,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        tracep->fullCData(oldp+4591,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause),3);
        tracep->fullBit(oldp+4592,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save));
        tracep->fullBit(oldp+4593,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        tracep->fullBit(oldp+4594,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        tracep->fullCData(oldp+4595,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id),3);
        tracep->fullCData(oldp+4596,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op),2);
        tracep->fullBit(oldp+4597,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid));
        tracep->fullBit(oldp+4598,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
        tracep->fullBit(oldp+4599,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
        tracep->fullBit(oldp+4600,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
        tracep->fullBit(oldp+4601,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
        tracep->fullBit(oldp+4602,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
        tracep->fullBit(oldp+4603,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
        tracep->fullBit(oldp+4604,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
        tracep->fullBit(oldp+4605,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
        tracep->fullBit(oldp+4606,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
        tracep->fullBit(oldp+4607,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
        tracep->fullBit(oldp+4608,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
        tracep->fullBit(oldp+4609,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
        tracep->fullBit(oldp+4610,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        tracep->fullBit(oldp+4611,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
        tracep->fullQData(oldp+4612,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
        tracep->fullBit(oldp+4614,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
        tracep->fullCData(oldp+4615,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
        tracep->fullBit(oldp+4616,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
        tracep->fullSData(oldp+4617,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr),12);
        tracep->fullBit(oldp+4618,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
        tracep->fullBit(oldp+4619,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
        tracep->fullCData(oldp+4620,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
        tracep->fullCData(oldp+4621,((0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))),5);
        tracep->fullCData(oldp+4622,((7U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                            >> 5U))),3);
        tracep->fullIData(oldp+4623,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
        tracep->fullBit(oldp+4624,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)));
        tracep->fullIData(oldp+4625,((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        tracep->fullBit(oldp+4626,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
        tracep->fullBit(oldp+4627,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
        tracep->fullBit(oldp+4628,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id));
        tracep->fullBit(oldp+4629,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
        tracep->fullBit(oldp+4630,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
        tracep->fullBit(oldp+4631,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
        tracep->fullBit(oldp+4632,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz));
        tracep->fullBit(oldp+4633,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        tracep->fullBit(oldp+4634,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        tracep->fullBit(oldp+4635,((1U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4636,((7U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4637,((7U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4638,((3U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4639,((0xffU & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4640,(((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4641,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4642,(((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4643,((1U & vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U])));
        tracep->fullBit(oldp+4644,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__instr_req));
        tracep->fullIData(oldp+4645,((0xfffffffcU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
        tracep->fullBit(oldp+4646,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set));
        tracep->fullBit(oldp+4647,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec));
        tracep->fullBit(oldp+4648,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
        tracep->fullBit(oldp+4649,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))));
        tracep->fullBit(oldp+4650,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
        tracep->fullIData(oldp+4651,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
        tracep->fullBit(oldp+4652,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4653,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4654,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4655,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4656,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4657,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4658,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4659,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4660,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[0U])));
        tracep->fullBit(oldp+4661,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4662,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4663,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4664,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4665,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4666,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4667,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4668,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4669,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                    [0U][0U])));
        tracep->fullBit(oldp+4670,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4671,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4672,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4673,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4674,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4675,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4676,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4677,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4678,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                    [1U][0U])));
        tracep->fullBit(oldp+4679,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4680,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4681,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4682,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4683,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4684,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4685,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4686,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4687,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                 [0U]))));
        tracep->fullBit(oldp+4688,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4689,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4690,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4691,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4692,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4693,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4694,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4695,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4696,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                 [1U]))));
        tracep->fullBit(oldp+4697,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4698,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4699,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4700,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4701,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4702,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4703,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4704,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4705,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                    [0U][0U])));
        tracep->fullBit(oldp+4706,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4707,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4708,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4709,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4710,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4711,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4712,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4713,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4714,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                    [1U][0U])));
        tracep->fullBit(oldp+4715,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4716,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4717,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4718,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4719,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4720,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4721,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4722,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4723,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                 [0U]))));
        tracep->fullBit(oldp+4724,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4725,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4726,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4727,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4728,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4729,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4730,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4731,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4732,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                 [1U]))));
        tracep->fullBit(oldp+4733,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we));
        tracep->fullBit(oldp+4734,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req));
        tracep->fullSData(oldp+4735,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__addr),12);
        tracep->fullIData(oldp+4736,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+4737,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        tracep->fullIData(oldp+4738,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we),32);
        tracep->fullCData(oldp+4739,((0xfU & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we)),4);
        tracep->fullBit(oldp+4740,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack));
        tracep->fullCData(oldp+4741,(((4U != (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))
                                       ? 0U : 1U)),2);
        tracep->fullBit(oldp+4742,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
        tracep->fullCData(oldp+4743,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4744,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullBit(oldp+4745,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we)))));
        tracep->fullCData(oldp+4746,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4747,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        tracep->fullIData(oldp+4748,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+4749,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+4750,((((0U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+4751,((((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+4752,((0U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+4753,((1U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+4754,((4U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+4755,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+4756,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+4757,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+4758,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullSData(oldp+4759,(((((4U != (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))
                                         ? 0U : 1U) 
                                       << 0xbU) | (
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                         >> 5U))))),13);
        tracep->fullBit(oldp+4760,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+4761,((0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U])),5);
        tracep->fullBit(oldp+4762,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+4763,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4764,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4765,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4766,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4767,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4768,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4769,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4770,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4771,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+4772,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4773,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4774,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4775,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4776,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4777,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4778,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4779,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4780,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+4781,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4782,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4783,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4784,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4785,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4786,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4787,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4788,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4789,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+4790,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4791,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4792,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4793,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4794,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4795,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4796,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4797,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4798,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+4799,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4800,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4801,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4802,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4803,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4804,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4805,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4806,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4807,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+4808,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4809,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4810,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4811,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4812,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4813,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4814,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4815,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4816,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+4817,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4818,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4819,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4820,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4821,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4822,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4823,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4824,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4825,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4826,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4827,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4828,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4829,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4830,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4831,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4832,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4833,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4834,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+4835,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest),2);
        tracep->fullCData(oldp+4836,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hgrant),2);
        tracep->fullBit(oldp+4837,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4838,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4839,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4840,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4841,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4842,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4843,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4844,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4845,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+4846,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest))));
        tracep->fullBit(oldp+4847,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4848,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4849,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4850,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4851,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4852,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4853,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4854,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4855,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+4856,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+4857,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+4858,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4859,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4860,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4861,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4862,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4863,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4864,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4865,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4866,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+4867,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+4868,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4869,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4870,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4871,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4872,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4873,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4874,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4875,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4876,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4877,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+4878,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+4879,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4880,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2813[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U]);
        __Vtemp2813[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U]));
        __Vtemp2813[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+4881,(__Vtemp2813),85);
        tracep->fullBit(oldp+4884,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+4885,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4886,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4887,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4888,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4889,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4890,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4891,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4892,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4893,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+4894,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4895,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4896,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4897,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4898,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4899,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4900,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4901,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4902,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+4903,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4904,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4905,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4906,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4907,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4908,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4909,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4910,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4911,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4912,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4913,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2817[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2817[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2817[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+4914,(__Vtemp2817),85);
        tracep->fullBit(oldp+4917,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+4918,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+4919,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4921,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4922,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4923,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4924,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4925,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4926,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4927,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4928,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4929,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+4930,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4931,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4932,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4933,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4934,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4935,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4936,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4937,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4938,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+4939,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4940,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4941,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4942,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4943,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4944,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4945,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4946,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4947,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+4948,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4949,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2821[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2821[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2821[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+4950,(__Vtemp2821),85);
        tracep->fullBit(oldp+4953,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+4954,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+4955,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullWData(oldp+4957,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+4960,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+4963,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+4964,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+4967,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+4968,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+4969,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+4970,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+4971,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+4972,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4973,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4974,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4975,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4976,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4977,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4978,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4979,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4980,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+4981,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4982,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4983,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4984,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4985,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4986,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4987,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4988,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4989,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+4990,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4991,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4992,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4993,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4994,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4995,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4996,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4997,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4998,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+4999,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5000,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5001,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5002,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5003,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5004,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5005,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5006,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5007,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+5008,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5009,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5010,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5011,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5012,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5013,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5014,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5015,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5016,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5017,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5018,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5019,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5020,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5021,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5022,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5023,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5024,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5025,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+5026,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5027,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5028,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5029,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5030,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5031,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5032,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5033,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5034,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5035,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5036,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5037,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5038,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5039,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5040,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5041,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5042,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5043,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+5044,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest),2);
        tracep->fullCData(oldp+5045,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hgrant),2);
        tracep->fullBit(oldp+5046,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest))));
        tracep->fullBit(oldp+5047,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5048,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5049,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5050,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5051,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5052,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5053,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5054,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5055,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5056,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+5057,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5058,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5059,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5060,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5061,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5062,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5063,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5064,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5065,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5066,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5067,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+5068,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5069,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5070,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5071,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5072,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5073,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5074,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5075,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5076,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5077,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+5078,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5079,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5080,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5081,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5082,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5083,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5084,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5085,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5086,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+5087,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5088,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5089,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5090,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5091,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5092,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5093,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5094,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5095,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5096,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5097,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2865[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2865[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2865[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5098,(__Vtemp2865),85);
        tracep->fullBit(oldp+5101,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5102,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5103,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5105,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5106,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5107,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5108,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5109,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5110,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5111,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5112,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5113,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+5114,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5115,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5116,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5117,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5118,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5119,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5120,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5121,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5122,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+5123,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5124,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5125,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5126,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5127,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5128,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5129,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5130,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5131,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+5132,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5133,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2869[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2869[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2869[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5134,(__Vtemp2869),85);
        tracep->fullBit(oldp+5137,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5138,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5139,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5141,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullCData(oldp+5142,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+5143,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+5144,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+5145,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+5146,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+5147,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5148,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5149,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5150,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5151,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5152,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5153,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5154,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5155,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U])));
        tracep->fullBit(oldp+5156,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5157,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5158,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5159,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5160,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5161,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5162,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5163,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5164,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                    [0U][0U])));
        tracep->fullBit(oldp+5165,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5166,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5167,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5168,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5169,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5170,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5171,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5172,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5173,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11
                                    [1U][0U])));
        tracep->fullSData(oldp+5174,((0x1fcU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                 << 0x1bU) 
                                                | (0x7fffffcU 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                      >> 5U))))),9);
        tracep->fullIData(oldp+5175,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullCData(oldp+5176,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullBit(oldp+5177,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+5178,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+5179,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 3U))));
        tracep->fullBit(oldp+5180,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 4U))));
        tracep->fullBit(oldp+5181,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 5U))));
        tracep->fullBit(oldp+5182,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+5183,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+5184,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+5185,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 9U))));
        tracep->fullBit(oldp+5186,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+5187,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+5188,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5189,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+5190,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+5191,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+5192,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+5193,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+5194,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+5195,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+5196,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+5197,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5198,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+5199,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+5200,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+5201,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+5202,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+5203,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+5204,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+5205,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+5206,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+5207,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+5208,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U])));
        tracep->fullCData(oldp+5209,((7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                             << 0x1fU) 
                                            | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+5210,((0x3fU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                  >> 1U)))),6);
        tracep->fullBit(oldp+5211,((((0U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+5212,((0U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+5213,((1U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+5214,((4U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullCData(oldp+5215,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullBit(oldp+5216,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5217,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5218,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5219,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5220,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5221,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5222,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5223,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5224,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+5225,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5226,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5227,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5228,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5229,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5230,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5231,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5232,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5233,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+5234,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5235,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5236,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5237,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5238,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5239,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5240,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5241,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5242,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5243,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5244,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5245,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5246,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5247,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5248,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5249,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5250,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5251,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullCData(oldp+5252,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrequest),2);
        tracep->fullBit(oldp+5253,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5254,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5255,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5256,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5257,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5258,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5259,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5260,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5261,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+5262,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrequest))));
        tracep->fullBit(oldp+5263,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5264,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5265,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5266,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5267,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5268,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5269,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5270,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5271,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+5272,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+5273,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+5274,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5275,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5276,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5277,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5278,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5279,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5280,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5281,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5282,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5283,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+5284,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5285,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5286,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5287,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5288,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5289,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5290,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5291,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5292,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5293,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5294,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+5295,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5296,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2931[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U]);
        __Vtemp2931[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U]));
        __Vtemp2931[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+5297,(__Vtemp2931),85);
        tracep->fullBit(oldp+5300,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+5301,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5302,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5303,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5304,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5305,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5306,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5307,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5308,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5309,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+5310,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2935[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2935[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2935[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5311,(__Vtemp2935),85);
        tracep->fullBit(oldp+5314,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+5315,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5316,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5317,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5318,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5319,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5320,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5321,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5322,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5323,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+5324,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2939[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2939[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2939[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5325,(__Vtemp2939),85);
        tracep->fullBit(oldp+5328,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullWData(oldp+5329,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+5332,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+5335,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+5338,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+5339,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+5340,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+5341,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+5342,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+5343,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))));
        tracep->fullBit(oldp+5344,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 2U))));
        tracep->fullBit(oldp+5345,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 3U))));
        tracep->fullBit(oldp+5346,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 4U))));
        tracep->fullBit(oldp+5347,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 5U))));
        tracep->fullBit(oldp+5348,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 6U))));
        tracep->fullBit(oldp+5349,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 7U))));
        tracep->fullBit(oldp+5350,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 8U))));
        tracep->fullBit(oldp+5351,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 9U))));
        tracep->fullBit(oldp+5352,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xaU))));
        tracep->fullBit(oldp+5353,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xbU))));
        tracep->fullBit(oldp+5354,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xcU))));
        tracep->fullBit(oldp+5355,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xdU))));
        tracep->fullBit(oldp+5356,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xeU))));
        tracep->fullBit(oldp+5357,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xfU))));
        tracep->fullBit(oldp+5358,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x10U))));
        tracep->fullBit(oldp+5359,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x11U))));
        tracep->fullBit(oldp+5360,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x12U))));
        tracep->fullBit(oldp+5361,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x13U))));
        tracep->fullBit(oldp+5362,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x14U))));
        tracep->fullBit(oldp+5363,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x15U))));
        tracep->fullBit(oldp+5364,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+5365,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                                    & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U])));
        tracep->fullCData(oldp+5366,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullBit(oldp+5367,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 9U))));
        tracep->fullBit(oldp+5368,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xaU))));
        tracep->fullBit(oldp+5369,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xbU))));
        tracep->fullBit(oldp+5370,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xcU))));
        tracep->fullBit(oldp+5371,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xdU))));
        tracep->fullBit(oldp+5372,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1fU))));
        tracep->fullBit(oldp+5373,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) 
                                    & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U])));
        tracep->fullCData(oldp+5374,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullBit(oldp+5375,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))));
        tracep->fullBit(oldp+5376,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x17U))));
        tracep->fullBit(oldp+5377,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x18U))));
        tracep->fullBit(oldp+5378,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x19U))));
        tracep->fullBit(oldp+5379,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1aU))));
        tracep->fullBit(oldp+5380,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1bU))));
        tracep->fullBit(oldp+5381,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1cU))));
        tracep->fullBit(oldp+5382,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1dU))));
        tracep->fullBit(oldp+5383,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1eU))));
        tracep->fullBit(oldp+5384,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1fU))));
        tracep->fullCData(oldp+5385,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5386,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5387,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5388,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5389,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5390,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5391,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5392,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5393,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5394,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5395,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5396,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5397,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5398,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5399,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5400,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5401,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5402,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5403,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5404,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5405,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5406,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5407,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5408,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5409,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5410,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5411,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5412,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5413,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5414,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullBit(oldp+5415,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))));
        tracep->fullBit(oldp+5416,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 2U))));
        tracep->fullBit(oldp+5417,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 3U))));
        tracep->fullBit(oldp+5418,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 4U))));
        tracep->fullBit(oldp+5419,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 5U))));
        tracep->fullBit(oldp+5420,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 6U))));
        tracep->fullBit(oldp+5421,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 7U))));
        tracep->fullBit(oldp+5422,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we)
                                           ? (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                              >> 8U)
                                           : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d)))));
        tracep->fullBit(oldp+5423,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xeU))));
        tracep->fullBit(oldp+5424,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xfU))));
        tracep->fullBit(oldp+5425,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x10U))));
        tracep->fullBit(oldp+5426,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x11U))));
        tracep->fullBit(oldp+5427,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x12U))));
        tracep->fullBit(oldp+5428,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x13U))));
        tracep->fullBit(oldp+5429,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x14U))));
        tracep->fullBit(oldp+5430,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x15U))));
        tracep->fullBit(oldp+5431,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+5432,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x17U))));
        tracep->fullBit(oldp+5433,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x18U))));
        tracep->fullBit(oldp+5434,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x19U))));
        tracep->fullBit(oldp+5435,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1aU))));
        tracep->fullBit(oldp+5436,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1bU))));
        tracep->fullBit(oldp+5437,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1cU))));
        tracep->fullBit(oldp+5438,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1dU))));
        tracep->fullBit(oldp+5439,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1eU))));
        tracep->fullBit(oldp+5440,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we));
        tracep->fullBit(oldp+5441,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re));
        tracep->fullBit(oldp+5442,(((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)((0U 
                                                   != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
        tracep->fullBit(oldp+5443,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))))));
        tracep->fullBit(oldp+5444,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
        tracep->fullBit(oldp+5445,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                              >> 9U)) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+5446,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                              >> 0x24U)) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+5447,(((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x24U)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re))));
        tracep->fullQData(oldp+5448,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
        tracep->fullBit(oldp+5450,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        tracep->fullBit(oldp+5451,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        tracep->fullBit(oldp+5452,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        tracep->fullBit(oldp+5453,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        tracep->fullBit(oldp+5454,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+5455,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+5456,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        tracep->fullBit(oldp+5457,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5458,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5459,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5460,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5461,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5462,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5463,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5464,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5465,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_d_o[0U])));
        tracep->fullBit(oldp+5466,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5467,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5468,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5469,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5470,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5471,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5472,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5473,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5474,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0U]))));
        tracep->fullBit(oldp+5475,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5476,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5477,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5478,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5479,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5480,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5481,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5482,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5483,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [1U]))));
        tracep->fullBit(oldp+5484,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5485,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5486,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5487,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5488,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5489,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5490,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5491,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5492,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [2U]))));
        tracep->fullBit(oldp+5493,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5494,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5495,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5496,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5497,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5498,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5499,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5500,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5501,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [3U]))));
        tracep->fullBit(oldp+5502,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5503,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5504,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5505,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5506,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5507,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5508,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5509,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5510,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [4U]))));
        tracep->fullBit(oldp+5511,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5512,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5513,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5514,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5515,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5516,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5517,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5518,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5519,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [5U]))));
        tracep->fullBit(oldp+5520,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5521,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5522,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5523,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5524,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5525,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5526,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5527,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5528,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [6U]))));
        tracep->fullBit(oldp+5529,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5530,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5531,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5532,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5533,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5534,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5535,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5536,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5537,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [7U]))));
        tracep->fullBit(oldp+5538,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5539,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5540,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5541,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5542,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5543,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5544,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5545,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5546,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [8U]))));
        tracep->fullBit(oldp+5547,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5548,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5549,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5550,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5551,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5552,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5553,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5554,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5555,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [9U]))));
        tracep->fullBit(oldp+5556,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5557,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5558,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5559,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5560,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5561,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5562,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5563,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5564,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0xaU]))));
        tracep->fullBit(oldp+5565,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5566,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5567,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5568,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5569,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5570,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5571,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5572,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5573,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0xbU]))));
        tracep->fullBit(oldp+5574,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5575,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5576,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5577,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5578,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5579,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5580,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5581,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5582,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0xcU]))));
        tracep->fullBit(oldp+5583,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5584,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5585,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5586,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5587,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5588,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5589,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5590,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5591,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                 [0U]))));
        tracep->fullBit(oldp+5592,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5593,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5594,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5595,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5596,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5597,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5598,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5599,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5600,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                 [1U]))));
        tracep->fullBit(oldp+5601,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5602,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5603,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5604,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5605,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5606,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5607,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5608,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5609,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+5610,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5611,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5612,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5613,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5614,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5615,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5616,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5617,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5618,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+5619,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5620,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5621,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5622,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5623,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5624,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5625,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5626,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5627,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+5628,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5629,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5630,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5631,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5632,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5633,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5634,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5635,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5636,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+5637,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5638,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5639,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5640,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5641,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5642,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5643,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5644,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5645,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+5646,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5647,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5648,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5649,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5650,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5651,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5652,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5653,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5654,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+5655,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5656,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5657,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5658,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5659,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5660,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5661,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5662,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5663,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+5664,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5665,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5666,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5667,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5668,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5669,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5670,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5671,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5672,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+5673,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5674,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5675,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5676,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5677,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5678,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5679,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5680,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5681,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+5682,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5683,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5684,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5685,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5686,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5687,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5688,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5689,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5690,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+5691,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5692,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5693,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5694,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5695,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5696,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5697,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5698,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5699,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+5700,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5701,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5702,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5703,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5704,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5705,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5706,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5707,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5708,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+5709,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5710,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5711,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5712,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5713,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5714,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5715,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5716,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5717,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+5718,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5719,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5720,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5721,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5722,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5723,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5724,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5725,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5726,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+5727,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5728,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5729,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5730,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5731,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5732,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5733,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5734,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5735,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+5736,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+5737,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5738,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5740,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5741,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5742,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5743,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5744,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5745,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5746,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5747,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5748,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+5749,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5750,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5751,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5752,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5753,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5754,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5755,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5756,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5757,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+5758,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+5759,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5760,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5762,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5763,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5764,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5765,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5766,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5767,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5768,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5769,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5770,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+5771,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5772,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5773,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5774,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5775,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5776,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5777,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5778,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5779,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+5780,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+5781,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5782,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [2U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [2U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5784,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5785,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5786,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5787,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5788,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5789,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5790,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5791,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5792,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+5793,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5794,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5795,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5796,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5797,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5798,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5799,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5800,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5801,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+5802,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+5803,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5804,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [3U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [3U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5806,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5807,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5808,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5809,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5810,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5811,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5812,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5813,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5814,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+5815,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5816,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5817,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5818,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5819,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5820,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5821,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5822,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5823,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+5824,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+5825,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5826,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [4U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [4U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5828,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5829,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5830,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5831,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5832,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5833,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5834,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5835,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5836,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+5837,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5838,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5839,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5840,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5841,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5842,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5843,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5844,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5845,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+5846,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+5847,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5848,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [5U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [5U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5850,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5851,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5852,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5853,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5854,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5855,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5856,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5857,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5858,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+5859,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+5860,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5861,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [6U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [6U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5863,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5864,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5865,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5866,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5867,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5868,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5869,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5870,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5871,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+5872,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+5873,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5874,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [7U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [7U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5876,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5877,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5878,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5879,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5880,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5881,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5882,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5883,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5884,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+5885,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+5886,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5887,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [8U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [8U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5889,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5890,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5891,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5892,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5893,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5894,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5895,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5896,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5897,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+5898,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+5899,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5900,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [9U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [9U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5902,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5903,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5904,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5905,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5906,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5907,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5908,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5909,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5910,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+5911,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+5912,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5913,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [0xaU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [0xaU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5915,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5916,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5917,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5918,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5919,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5920,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5921,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5922,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5923,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+5924,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+5925,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5926,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [0xbU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [0xbU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5928,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5929,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5930,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5931,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5932,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5933,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5934,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5935,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5936,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+5937,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5938,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5939,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5940,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5941,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5942,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5943,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5944,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5945,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+5946,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+5947,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5948,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [0xcU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                              [0xcU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5950,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5951,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5952,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5953,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5954,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5955,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5956,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5957,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5958,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+5959,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5960,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5961,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5962,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5963,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5964,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5965,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5966,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5967,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+5968,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+5969,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+5970,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2943[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[0U]);
        __Vtemp2943[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[1U]));
        __Vtemp2943[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+5971,(__Vtemp2943),85);
        tracep->fullBit(oldp+5974,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+5975,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+5978,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+5981,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullBit(oldp+5984,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5985,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5986,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5987,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5988,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5989,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5990,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5991,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5992,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+5993,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5994,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5995,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5996,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5997,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5998,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5999,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6000,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6001,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+6002,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6003,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6004,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6005,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6006,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6007,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6008,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6009,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6010,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+6011,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6012,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6013,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6014,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6015,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6016,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6017,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6018,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6019,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+6020,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hgrant),2);
        tracep->fullBit(oldp+6021,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6022,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6023,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6024,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6025,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6026,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6027,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6028,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6029,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+6030,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6031,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6032,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6033,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6034,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6035,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6036,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6037,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6038,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+6039,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+6040,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6041,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+6043,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6044,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6045,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6046,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6047,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6048,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6049,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6050,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6051,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+6052,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6053,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6054,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6055,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6056,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6057,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6058,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6059,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6060,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+6061,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+6062,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6063,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+6065,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullCData(oldp+6066,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0]),3);
        tracep->fullCData(oldp+6067,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[1]),3);
        tracep->fullCData(oldp+6068,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[2]),3);
        tracep->fullCData(oldp+6069,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[3]),3);
        tracep->fullCData(oldp+6070,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[4]),3);
        tracep->fullCData(oldp+6071,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[5]),3);
        tracep->fullCData(oldp+6072,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[6]),3);
        tracep->fullCData(oldp+6073,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[7]),3);
        tracep->fullCData(oldp+6074,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[8]),3);
        tracep->fullCData(oldp+6075,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[9]),3);
        tracep->fullCData(oldp+6076,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[10]),3);
        tracep->fullCData(oldp+6077,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[11]),3);
        tracep->fullCData(oldp+6078,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[12]),3);
        tracep->fullCData(oldp+6079,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[13]),3);
        tracep->fullCData(oldp+6080,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[14]),3);
        tracep->fullCData(oldp+6081,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[15]),3);
        tracep->fullCData(oldp+6082,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[16]),3);
        tracep->fullCData(oldp+6083,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[17]),3);
        tracep->fullCData(oldp+6084,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[18]),3);
        tracep->fullCData(oldp+6085,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[19]),3);
        tracep->fullCData(oldp+6086,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[20]),3);
        tracep->fullCData(oldp+6087,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[21]),3);
        tracep->fullCData(oldp+6088,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[22]),3);
        tracep->fullCData(oldp+6089,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[23]),3);
        tracep->fullCData(oldp+6090,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[24]),3);
        tracep->fullCData(oldp+6091,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[25]),3);
        tracep->fullCData(oldp+6092,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[26]),3);
        tracep->fullCData(oldp+6093,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[27]),3);
        tracep->fullCData(oldp+6094,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[28]),3);
        tracep->fullCData(oldp+6095,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[29]),3);
        tracep->fullCData(oldp+6096,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[30]),3);
        tracep->fullCData(oldp+6097,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[31]),3);
        tracep->fullCData(oldp+6098,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0]),3);
        tracep->fullCData(oldp+6099,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[1]),3);
        tracep->fullCData(oldp+6100,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[2]),3);
        tracep->fullCData(oldp+6101,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[3]),3);
        tracep->fullCData(oldp+6102,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[4]),3);
        tracep->fullCData(oldp+6103,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[5]),3);
        tracep->fullCData(oldp+6104,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[6]),3);
        tracep->fullCData(oldp+6105,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[7]),3);
        tracep->fullCData(oldp+6106,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[8]),3);
        tracep->fullCData(oldp+6107,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[9]),3);
        tracep->fullCData(oldp+6108,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[10]),3);
        tracep->fullCData(oldp+6109,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[11]),3);
        tracep->fullCData(oldp+6110,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[12]),3);
        tracep->fullCData(oldp+6111,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[13]),3);
        tracep->fullCData(oldp+6112,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[14]),3);
        tracep->fullCData(oldp+6113,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[15]),3);
        tracep->fullCData(oldp+6114,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[16]),3);
        tracep->fullCData(oldp+6115,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[17]),3);
        tracep->fullCData(oldp+6116,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[18]),3);
        tracep->fullCData(oldp+6117,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[19]),3);
        tracep->fullCData(oldp+6118,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[20]),3);
        tracep->fullCData(oldp+6119,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[21]),3);
        tracep->fullCData(oldp+6120,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[22]),3);
        tracep->fullCData(oldp+6121,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[23]),3);
        tracep->fullCData(oldp+6122,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[24]),3);
        tracep->fullCData(oldp+6123,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[25]),3);
        tracep->fullCData(oldp+6124,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[26]),3);
        tracep->fullCData(oldp+6125,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[27]),3);
        tracep->fullCData(oldp+6126,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[28]),3);
        tracep->fullCData(oldp+6127,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[29]),3);
        tracep->fullCData(oldp+6128,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[30]),3);
        tracep->fullCData(oldp+6129,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[31]),3);
        tracep->fullCData(oldp+6130,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U])),3);
        tracep->fullCData(oldp+6131,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0x1dU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 3U)))),3);
        tracep->fullCData(oldp+6132,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0x1aU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 6U)))),3);
        tracep->fullCData(oldp+6133,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0x17U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+6134,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0x14U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0xcU)))),3);
        tracep->fullCData(oldp+6135,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0x11U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0xfU)))),3);
        tracep->fullCData(oldp+6136,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0xeU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0x12U)))),3);
        tracep->fullCData(oldp+6137,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0xbU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0x15U)))),3);
        tracep->fullCData(oldp+6138,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 8U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0x18U)))),3);
        tracep->fullCData(oldp+6139,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 5U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0x1bU)))),3);
        tracep->fullCData(oldp+6140,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 2U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0x1eU)))),3);
        tracep->fullCData(oldp+6141,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+6142,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x1cU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 4U)))),3);
        tracep->fullCData(oldp+6143,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x19U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 7U)))),3);
        tracep->fullCData(oldp+6144,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x16U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0xaU)))),3);
        tracep->fullCData(oldp+6145,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x13U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+6146,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+6147,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0xdU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x13U)))),3);
        tracep->fullCData(oldp+6148,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0xaU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x16U)))),3);
        tracep->fullCData(oldp+6149,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 7U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x19U)))),3);
        tracep->fullCData(oldp+6150,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 4U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x1cU)))),3);
        tracep->fullCData(oldp+6151,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 1U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x1fU)))),3);
        tracep->fullCData(oldp+6152,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0x1eU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 2U)))),3);
        tracep->fullCData(oldp+6153,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0x1bU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 5U)))),3);
        tracep->fullCData(oldp+6154,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0x18U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 8U)))),3);
        tracep->fullCData(oldp+6155,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0x15U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0xbU)))),3);
        tracep->fullCData(oldp+6156,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0x12U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0xeU)))),3);
        tracep->fullCData(oldp+6157,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0xfU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0x11U)))),3);
        tracep->fullCData(oldp+6158,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0xcU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0x14U)))),3);
        tracep->fullCData(oldp+6159,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 9U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0x17U)))),3);
        tracep->fullCData(oldp+6160,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 6U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0x1aU)))),3);
        tracep->fullCData(oldp+6161,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 3U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0x1dU)))),3);
        tracep->fullCData(oldp+6162,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U])),3);
        tracep->fullCData(oldp+6163,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x1dU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 3U)))),3);
        tracep->fullCData(oldp+6164,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x1aU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 6U)))),3);
        tracep->fullCData(oldp+6165,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x17U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+6166,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x14U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0xcU)))),3);
        tracep->fullCData(oldp+6167,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x11U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0xfU)))),3);
        tracep->fullCData(oldp+6168,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0xeU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0x12U)))),3);
        tracep->fullCData(oldp+6169,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0xbU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0x15U)))),3);
        tracep->fullCData(oldp+6170,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 8U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0x18U)))),3);
        tracep->fullCData(oldp+6171,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 5U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0x1bU)))),3);
        tracep->fullCData(oldp+6172,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 2U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0x1eU)))),3);
        tracep->fullCData(oldp+6173,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x1fU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+6174,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x1cU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 4U)))),3);
        tracep->fullCData(oldp+6175,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x19U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 7U)))),3);
        tracep->fullCData(oldp+6176,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x16U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0xaU)))),3);
        tracep->fullCData(oldp+6177,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x13U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+6178,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+6179,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0xdU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x13U)))),3);
        tracep->fullCData(oldp+6180,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0xaU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x16U)))),3);
        tracep->fullCData(oldp+6181,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 7U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x19U)))),3);
        tracep->fullCData(oldp+6182,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 4U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x1cU)))),3);
        tracep->fullCData(oldp+6183,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 1U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x1fU)))),3);
        tracep->fullCData(oldp+6184,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 2U))),3);
        tracep->fullCData(oldp+6185,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 5U))),3);
        tracep->fullCData(oldp+6186,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 8U))),3);
        tracep->fullCData(oldp+6187,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0xbU))),3);
        tracep->fullCData(oldp+6188,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0xeU))),3);
        tracep->fullCData(oldp+6189,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0x11U))),3);
        tracep->fullCData(oldp+6190,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0x14U))),3);
        tracep->fullCData(oldp+6191,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0x17U))),3);
        tracep->fullCData(oldp+6192,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0x1aU))),3);
        tracep->fullSData(oldp+6193,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
        tracep->fullWData(oldp+6194,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
        tracep->fullBit(oldp+6197,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[0U])));
        tracep->fullWData(oldp+6198,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o),128);
        tracep->fullBit(oldp+6202,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id));
        tracep->fullIData(oldp+6203,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval),32);
        tracep->fullBit(oldp+6204,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
        tracep->fullBit(oldp+6205,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        tracep->fullBit(oldp+6206,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6207,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6208,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6209,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6210,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6211,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6212,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6213,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6214,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))));
        tracep->fullBit(oldp+6215,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6216,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6217,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6218,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6219,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6220,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6221,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6222,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6223,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[0U])));
        tracep->fullBit(oldp+6224,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))));
        tracep->fullBit(oldp+6225,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                  >> 0x33U)))));
        tracep->fullIData(oldp+6226,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6227,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6228,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw));
        tracep->fullIData(oldp+6229,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
        tracep->fullBit(oldp+6230,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
        tracep->fullIData(oldp+6231,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
        tracep->fullBit(oldp+6232,((3U != (3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
        tracep->fullBit(oldp+6233,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
        tracep->fullBit(oldp+6234,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)))));
        tracep->fullBit(oldp+6235,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err));
        tracep->fullBit(oldp+6236,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err));
        tracep->fullBit(oldp+6237,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
        tracep->fullWData(oldp+6238,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d),96);
        tracep->fullCData(oldp+6241,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
        tracep->fullCData(oldp+6242,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
        tracep->fullIData(oldp+6243,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
        tracep->fullBit(oldp+6244,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        tracep->fullBit(oldp+6245,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        tracep->fullBit(oldp+6246,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
        tracep->fullBit(oldp+6247,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
        tracep->fullBit(oldp+6248,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
        tracep->fullBit(oldp+6249,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6250,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6251,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6252,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6253,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6254,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6255,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6256,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6257,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                 [0U]))));
        tracep->fullBit(oldp+6258,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6259,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6260,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6261,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6262,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6263,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6264,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6265,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6266,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
                                                 [1U]))));
        tracep->fullSData(oldp+6267,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr),12);
        tracep->fullBit(oldp+6268,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
        tracep->fullIData(oldp+6269,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+6270,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
        tracep->fullBit(oldp+6271,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
        tracep->fullCData(oldp+6272,(((4U != (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 0x12U)))
                                       ? 0U : 1U)),2);
        tracep->fullCData(oldp+6273,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6274,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullCData(oldp+6275,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6276,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
        tracep->fullIData(oldp+6277,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+6278,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+6279,((((0U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+6280,((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+6281,((0U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+6282,((1U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+6283,((4U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+6284,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+6285,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+6286,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+6287,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullBit(oldp+6288,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+6289,((0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U])),5);
        tracep->fullBit(oldp+6290,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6291,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6292,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6293,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6294,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6295,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6296,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6297,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6298,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+6299,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6300,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6301,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6302,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6303,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6304,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6305,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6306,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6307,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+6308,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6309,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6310,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6311,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6312,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6313,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6314,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6315,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6316,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+6317,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6318,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6319,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6320,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6321,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6322,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6323,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6324,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6325,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+6326,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6327,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6328,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6329,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6330,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6331,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6332,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6333,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6334,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+6335,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6336,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6337,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6338,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6339,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6340,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6341,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6342,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6343,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+6344,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6345,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6346,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6347,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6348,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6349,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6350,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6351,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6352,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+6353,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6354,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6355,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6356,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6357,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6358,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6359,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6360,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6361,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+6362,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrequest),2);
        tracep->fullCData(oldp+6363,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hgrant),2);
        tracep->fullBit(oldp+6364,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6365,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6366,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6367,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6368,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6369,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6370,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6371,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6372,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+6373,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrequest))));
        tracep->fullBit(oldp+6374,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6375,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6376,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6377,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6378,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6379,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6380,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6381,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6382,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+6383,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+6384,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+6385,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6386,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6387,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6388,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6389,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6390,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6391,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6392,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6393,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+6394,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+6395,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6396,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6397,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6398,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6399,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6400,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6401,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6402,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6403,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6404,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+6405,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+6406,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6407,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2987[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[0U]);
        __Vtemp2987[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[1U]));
        __Vtemp2987[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+6408,(__Vtemp2987),85);
        tracep->fullBit(oldp+6411,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+6412,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6413,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6414,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6415,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6416,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6417,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6418,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6419,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6420,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+6421,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6422,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6423,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6424,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6425,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6426,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6427,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6428,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6429,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+6430,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6431,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6432,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6433,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6434,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6435,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6436,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6437,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6438,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+6439,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6440,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2991[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2991[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2991[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+6441,(__Vtemp2991),85);
        tracep->fullBit(oldp+6444,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+6445,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+6446,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+6448,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6449,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6450,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6451,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6452,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6453,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6454,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6455,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6456,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+6457,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6458,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6459,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6460,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6461,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6462,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6463,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6464,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6465,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+6466,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6467,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6468,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6469,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6470,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6471,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6472,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6473,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6474,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+6475,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6476,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2995[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2995[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2995[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+6477,(__Vtemp2995),85);
        tracep->fullBit(oldp+6480,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+6481,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+6482,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullWData(oldp+6484,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+6487,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+6490,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+6491,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+6494,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+6495,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+6496,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+6497,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+6498,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+6499,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6500,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6501,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6502,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6503,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6504,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6505,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6506,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6507,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                    [0U][0U])));
        tracep->fullBit(oldp+6508,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6509,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6510,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6511,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6512,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6513,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6514,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6515,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6516,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1
                                    [1U][0U])));
        tracep->fullBit(oldp+6517,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6518,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6519,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6520,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6521,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6522,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6523,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6524,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6525,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o))));
        tracep->fullBit(oldp+6526,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6527,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6528,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6529,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6530,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6531,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6532,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6533,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6534,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o))));
        tracep->fullBit(oldp+6535,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o))));
        tracep->fullBit(oldp+6536,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullIData(oldp+6537,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6538,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6539,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err));
        tracep->fullBit(oldp+6540,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err));
        tracep->fullBit(oldp+6541,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb));
        tracep->fullBit(oldp+6542,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en));
        tracep->fullBit(oldp+6543,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done));
        tracep->fullBit(oldp+6544,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
        tracep->fullBit(oldp+6545,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err))));
        tracep->fullBit(oldp+6546,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
        tracep->fullBit(oldp+6547,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))));
        tracep->fullBit(oldp+6548,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
        tracep->fullBit(oldp+6549,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception));
        tracep->fullBit(oldp+6550,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing));
        tracep->fullBit(oldp+6551,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem));
        tracep->fullBit(oldp+6552,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
        tracep->fullBit(oldp+6553,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
        tracep->fullBit(oldp+6554,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
        tracep->fullBit(oldp+6555,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
        tracep->fullBit(oldp+6556,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)))));
        tracep->fullBit(oldp+6557,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
        tracep->fullBit(oldp+6558,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access)))));
        tracep->fullBit(oldp+6559,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access));
        tracep->fullBit(oldp+6560,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill));
        tracep->fullBit(oldp+6561,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall));
        tracep->fullBit(oldp+6562,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err))));
        tracep->fullBit(oldp+6563,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending));
        tracep->fullBit(oldp+6564,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
        tracep->fullBit(oldp+6565,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
        tracep->fullCData(oldp+6566,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
        tracep->fullBit(oldp+6567,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done));
        tracep->fullBit(oldp+6568,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
        tracep->fullBit(oldp+6569,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d));
        tracep->fullBit(oldp+6570,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6571,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6572,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6573,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6574,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6575,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6576,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6577,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6578,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i))));
        tracep->fullBit(oldp+6579,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__accept_t_req));
        tracep->fullBit(oldp+6580,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__accept_t_rsp));
        tracep->fullBit(oldp+6581,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6582,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6583,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6584,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6585,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6586,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6587,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6588,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6589,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [0U]))));
        tracep->fullBit(oldp+6590,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6591,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6592,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6593,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6594,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6595,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6596,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6597,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6598,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [1U]))));
        tracep->fullBit(oldp+6599,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6600,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6601,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6602,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6603,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6604,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6605,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6606,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6607,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [2U]))));
        tracep->fullBit(oldp+6608,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6609,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6610,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6611,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6612,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6613,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6614,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6615,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6616,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [3U]))));
        tracep->fullBit(oldp+6617,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6618,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6619,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6620,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6621,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6622,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6623,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6624,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6625,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [4U]))));
        tracep->fullBit(oldp+6626,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6627,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6628,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6629,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6630,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6631,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6632,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6633,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6634,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [5U]))));
        tracep->fullBit(oldp+6635,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6636,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6637,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6638,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6639,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6640,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6641,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6642,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6643,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [6U]))));
        tracep->fullBit(oldp+6644,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6645,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6646,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6647,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6648,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6649,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6650,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6651,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6652,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [7U]))));
        tracep->fullBit(oldp+6653,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6654,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6655,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6656,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6657,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6658,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6659,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6660,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6661,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [8U]))));
        tracep->fullBit(oldp+6662,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6663,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6664,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6665,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6666,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6667,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6668,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6669,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6670,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [9U]))));
        tracep->fullBit(oldp+6671,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6672,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6673,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6674,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6675,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6676,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6677,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6678,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6679,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+6680,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6681,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6682,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6683,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6684,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6685,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6686,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6687,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6688,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+6689,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6690,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6691,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6692,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6693,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6694,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6695,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6696,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6697,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+6698,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xdU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6699,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6700,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6701,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6702,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [0xdU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6703,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xdU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6704,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [0xdU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6705,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xdU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6706,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [0xdU]))));
        tracep->fullBit(oldp+6707,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6708,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6709,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6710,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6711,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6712,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6713,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6714,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6715,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p))));
        tracep->fullBit(oldp+6716,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__hfifo_reqready));
        tracep->fullBit(oldp+6717,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i))));
        tracep->fullBit(oldp+6718,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6719,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+6721,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6722,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6723,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6724,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6725,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6726,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6727,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6728,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6729,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6730,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6731,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6732,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6733,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6734,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6735,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6736,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6737,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6738,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6739,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6740,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6741,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6742,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6743,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6744,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6745,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6746,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6747,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6748,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6749,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6750,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6751,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6752,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6753,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6754,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6755,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6756,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6757,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6758,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6759,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6760,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6761,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6762,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6763,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6764,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6765,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6766,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6767,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6768,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6769,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6770,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6771,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6772,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6773,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6774,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6775,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6776,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6777,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6778,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6779,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6780,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6781,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6782,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6783,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6784,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6785,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6786,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6787,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6788,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6789,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6790,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6791,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6792,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6793,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6794,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6795,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6796,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6797,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6798,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6799,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6800,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6801,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6802,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6803,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6804,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6805,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullCData(oldp+6806,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])),6);
        tracep->fullCData(oldp+6807,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                  >> 6U)))),6);
        tracep->fullCData(oldp+6808,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+6809,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                  >> 0x12U)))),6);
        tracep->fullCData(oldp+6810,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                  >> 0x18U)))),6);
        tracep->fullCData(oldp+6811,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                  >> 0x1eU)))),6);
        tracep->fullCData(oldp+6812,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 4U)))),6);
        tracep->fullCData(oldp+6813,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 0xaU)))),6);
        tracep->fullCData(oldp+6814,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 0x10U)))),6);
        tracep->fullCData(oldp+6815,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 0x16U)))),6);
        tracep->fullCData(oldp+6816,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 0x1cU)))),6);
        tracep->fullCData(oldp+6817,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                  >> 2U)))),6);
        tracep->fullCData(oldp+6818,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                  >> 8U)))),6);
        tracep->fullCData(oldp+6819,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                  >> 0xeU)))),6);
        tracep->fullCData(oldp+6820,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                  >> 0x14U)))),6);
        tracep->fullCData(oldp+6821,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                  >> 0x1aU)))),6);
        tracep->fullCData(oldp+6822,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U])),6);
        tracep->fullCData(oldp+6823,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                  >> 6U)))),6);
        tracep->fullCData(oldp+6824,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+6825,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                  >> 0x12U)))),6);
        tracep->fullCData(oldp+6826,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                  >> 0x18U)))),6);
        tracep->fullCData(oldp+6827,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                  >> 0x1eU)))),6);
        tracep->fullCData(oldp+6828,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                  >> 4U)))),6);
        tracep->fullCData(oldp+6829,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                  >> 0xaU)))),6);
        tracep->fullCData(oldp+6830,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                  >> 0x10U)))),6);
        tracep->fullCData(oldp+6831,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                  >> 0x16U)))),6);
        tracep->fullCData(oldp+6832,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                  >> 0x1cU)))),6);
        tracep->fullCData(oldp+6833,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                  >> 2U)))),6);
        tracep->fullCData(oldp+6834,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                  >> 8U)))),6);
        tracep->fullCData(oldp+6835,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                  >> 0xeU)))),6);
        tracep->fullCData(oldp+6836,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                  >> 0x14U)))),6);
        tracep->fullCData(oldp+6837,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                  >> 0x1aU)))),6);
        tracep->fullCData(oldp+6838,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U])),6);
        tracep->fullCData(oldp+6839,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                  >> 6U)))),6);
        tracep->fullCData(oldp+6840,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+6841,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                  >> 0x12U)))),6);
        tracep->fullCData(oldp+6842,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                  >> 0x18U)))),6);
        tracep->fullCData(oldp+6843,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                  >> 0x1eU)))),6);
        tracep->fullCData(oldp+6844,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 4U)))),6);
        tracep->fullCData(oldp+6845,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 0xaU)))),6);
        tracep->fullCData(oldp+6846,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 0x10U)))),6);
        tracep->fullCData(oldp+6847,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 0x16U)))),6);
        tracep->fullCData(oldp+6848,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 0x1cU)))),6);
        tracep->fullCData(oldp+6849,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                  >> 2U)))),6);
        tracep->fullCData(oldp+6850,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                  >> 8U)))),6);
        tracep->fullCData(oldp+6851,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                  >> 0xeU)))),6);
        tracep->fullCData(oldp+6852,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                  >> 0x14U)))),6);
        tracep->fullCData(oldp+6853,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                  >> 0x1aU)))),6);
        tracep->fullCData(oldp+6854,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U])),6);
        tracep->fullCData(oldp+6855,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                  >> 6U)))),6);
        tracep->fullCData(oldp+6856,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+6857,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                  >> 0x12U)))),6);
        tracep->fullCData(oldp+6858,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                  >> 0x18U)))),6);
        tracep->fullCData(oldp+6859,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                  >> 0x1eU)))),6);
        tracep->fullCData(oldp+6860,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                  >> 4U)))),6);
        tracep->fullCData(oldp+6861,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                  >> 0xaU)))),6);
        tracep->fullCData(oldp+6862,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                  >> 0x10U)))),6);
        tracep->fullCData(oldp+6863,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                  >> 0x16U)))),6);
        tracep->fullCData(oldp+6864,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                  >> 0x1cU)))),6);
        tracep->fullCData(oldp+6865,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                               >> 2U))),6);
        tracep->fullCData(oldp+6866,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                               >> 8U))),6);
        tracep->fullCData(oldp+6867,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                               >> 0xeU))),6);
        tracep->fullCData(oldp+6868,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                               >> 0x14U))),6);
        tracep->fullBit(oldp+6869,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req) 
                                          >> 3U))));
        tracep->fullBit(oldp+6870,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req) 
                                          >> 2U))));
        tracep->fullBit(oldp+6871,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req) 
                                          >> 1U))));
        tracep->fullBit(oldp+6872,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req))));
        tracep->fullCData(oldp+6873,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+6874,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+6875,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+6876,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullBit(oldp+6877,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__tck_i));
        tracep->fullBit(oldp+6878,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req) 
                                          >> 2U))));
        tracep->fullBit(oldp+6879,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req))));
        tracep->fullBit(oldp+6880,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n));
        tracep->fullBit(oldp+6881,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))));
        tracep->fullBit(oldp+6882,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6883,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6884,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6885,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6886,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6887,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6888,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+6889,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6890,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+6891,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+6892,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6893,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+6894,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6895,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6896,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6897,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6898,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6899,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+6900,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe));
        tracep->fullBit(oldp+6901,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe));
        tracep->fullBit(oldp+6902,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q));
        tracep->fullBit(oldp+6903,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q));
        tracep->fullCData(oldp+6904,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q),2);
        tracep->fullCData(oldp+6905,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q),2);
        tracep->fullCData(oldp+6906,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+6907,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+6908,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+6909,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_q),2);
        tracep->fullCData(oldp+6910,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync),3);
        tracep->fullCData(oldp+6911,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync),3);
        tracep->fullBit(oldp+6912,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                          >> 2U))));
        tracep->fullCData(oldp+6913,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))),2);
        tracep->fullCData(oldp+6914,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+6915,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+6916,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullCData(oldp+6917,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_q),3);
        tracep->fullCData(oldp+6918,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_q),2);
        tracep->fullCData(oldp+6919,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q),4);
        tracep->fullCData(oldp+6920,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync),3);
        tracep->fullBit(oldp+6921,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                          >> 2U))));
        tracep->fullCData(oldp+6922,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))),2);
        tracep->fullBit(oldp+6923,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__cmdbusy));
        tracep->fullBit(oldp+6924,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sberror_valid));
        tracep->fullCData(oldp+6925,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sberror),3);
        tracep->fullBit(oldp+6926,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+6927,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullCData(oldp+6928,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi),3);
        tracep->fullBit(oldp+6929,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                          >> 2U))));
        tracep->fullCData(oldp+6930,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))),2);
        tracep->fullQData(oldp+6931,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[0]),41);
        tracep->fullQData(oldp+6933,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[1]),41);
        tracep->fullQData(oldp+6935,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[2]),41);
        tracep->fullQData(oldp+6937,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[3]),41);
        tracep->fullCData(oldp+6939,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q),5);
        tracep->fullCData(oldp+6940,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync),3);
        tracep->fullCData(oldp+6941,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq),3);
        tracep->fullBit(oldp+6942,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_access));
        tracep->fullBit(oldp+6943,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dtmcs_select));
        tracep->fullBit(oldp+6944,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
        tracep->fullBit(oldp+6945,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
        tracep->fullCData(oldp+6946,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr),3);
        tracep->fullCData(oldp+6947,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray),3);
        tracep->fullBit(oldp+6948,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+6949,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))),2);
        tracep->fullCData(oldp+6950,((0x7fU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                       >> 0x22U)))),7);
        tracep->fullCData(oldp+6951,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                    >> 0x20U)))),2);
        tracep->fullIData(oldp+6952,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o)),32);
        tracep->fullQData(oldp+6953,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o),41);
        tracep->fullQData(oldp+6955,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[0]),34);
        tracep->fullQData(oldp+6957,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[1]),34);
        tracep->fullQData(oldp+6959,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[2]),34);
        tracep->fullQData(oldp+6961,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[3]),34);
        tracep->fullCData(oldp+6963,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_q),7);
        tracep->fullIData(oldp+6964,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_q),32);
        tracep->fullCData(oldp+6965,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync),3);
        tracep->fullBit(oldp+6966,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+6967,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullCData(oldp+6968,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq),3);
        tracep->fullCData(oldp+6969,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync),3);
        tracep->fullIData(oldp+6970,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp 
                                              >> 2U))),32);
        tracep->fullCData(oldp+6971,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp))),2);
        tracep->fullQData(oldp+6972,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp),34);
        tracep->fullBit(oldp+6974,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni));
        tracep->fullBit(oldp+6975,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__test_logic_reset));
        tracep->fullBit(oldp+6976,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__shift_dr));
        tracep->fullBit(oldp+6977,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__update_dr));
        tracep->fullBit(oldp+6978,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__capture_dr));
        tracep->fullCData(oldp+6979,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_d),3);
        tracep->fullQData(oldp+6980,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_d),41);
        tracep->fullCData(oldp+6982,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_d),7);
        tracep->fullIData(oldp+6983,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_d),32);
        tracep->fullBit(oldp+6984,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_dmi_busy));
        tracep->fullCData(oldp+6985,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_d),2);
        tracep->fullCData(oldp+6986,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
        tracep->fullCData(oldp+6987,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
        tracep->fullCData(oldp+6988,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
        tracep->fullBit(oldp+6989,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
        tracep->fullBit(oldp+6990,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
        tracep->fullBit(oldp+6991,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
        tracep->fullIData(oldp+6992,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
        tracep->fullSData(oldp+6993,((0x3fffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                                 >> 0x12U))),14);
        tracep->fullBit(oldp+6994,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x11U))));
        tracep->fullBit(oldp+6995,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6996,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0xfU))));
        tracep->fullCData(oldp+6997,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+6998,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xaU))),2);
        tracep->fullCData(oldp+6999,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                               >> 4U))),6);
        tracep->fullCData(oldp+7000,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d)),4);
        tracep->fullBit(oldp+7001,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
        tracep->fullCData(oldp+7002,((0x7fU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                       >> 0x22U)))),7);
        tracep->fullCData(oldp+7003,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                    >> 0x20U)))),2);
        tracep->fullIData(oldp+7004,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req)),32);
        tracep->fullBit(oldp+7005,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req_valid));
        tracep->fullQData(oldp+7006,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req),41);
        tracep->fullCData(oldp+7008,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray),3);
        tracep->fullCData(oldp+7009,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi),3);
        tracep->fullBit(oldp+7010,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                          >> 2U))));
        tracep->fullCData(oldp+7011,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))),2);
        tracep->fullCData(oldp+7012,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq),3);
        tracep->fullBit(oldp+7013,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7014,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q))));
        tracep->fullQData(oldp+7015,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q),41);
        tracep->fullCData(oldp+7017,((0x7fU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q 
                                                       >> 0x22U)))),7);
        tracep->fullIData(oldp+7018,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q 
                                              >> 2U))),32);
        tracep->fullCData(oldp+7019,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q))),2);
        tracep->fullCData(oldp+7020,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q),5);
        tracep->fullIData(oldp+7021,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q),32);
        tracep->fullSData(oldp+7022,((0x3fffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                                 >> 0x12U))),14);
        tracep->fullBit(oldp+7023,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x11U))));
        tracep->fullBit(oldp+7024,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7025,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0xfU))));
        tracep->fullCData(oldp+7026,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+7027,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                            >> 0xaU))),2);
        tracep->fullCData(oldp+7028,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                               >> 4U))),6);
        tracep->fullCData(oldp+7029,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q)),4);
        tracep->fullBit(oldp+7030,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q));
        tracep->fullCData(oldp+7031,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+7032,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+7033,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))),2);
        tracep->fullBit(oldp+7034,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_rsp) 
                                          >> 1U))));
        tracep->fullBit(oldp+7035,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__jtag_rsp))));
        tracep->fullBit(oldp+7036,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__jtag_rsp))));
        tracep->fullBit(oldp+7037,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))));
        tracep->fullBit(oldp+7038,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk));
        tracep->fullCData(oldp+7039,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray),3);
        tracep->fullCData(oldp+7040,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+7041,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+7042,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))),2);
        tracep->fullBit(oldp+7043,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+7044,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+7045,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+7046,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))),2);
        tracep->fullBit(oldp+7047,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_write_valid));
        tracep->fullBit(oldp+7048,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbdata_read_valid));
        tracep->fullBit(oldp+7049,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbdata_write_valid));
        tracep->fullCData(oldp+7050,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+7051,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x17U))),6);
        tracep->fullBit(oldp+7052,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x16U))));
        tracep->fullBit(oldp+7053,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x15U))));
        tracep->fullBit(oldp+7054,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x14U))));
        tracep->fullCData(oldp+7055,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0x11U))),3);
        tracep->fullBit(oldp+7056,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7057,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0xfU))));
        tracep->fullCData(oldp+7058,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+7059,((0x7fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 5U))),7);
        tracep->fullBit(oldp+7060,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 4U))));
        tracep->fullBit(oldp+7061,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 3U))));
        tracep->fullBit(oldp+7062,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 2U))));
        tracep->fullBit(oldp+7063,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 1U))));
        tracep->fullBit(oldp+7064,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d)));
        tracep->fullCData(oldp+7065,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+7066,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x17U))),6);
        tracep->fullBit(oldp+7067,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x16U))));
        tracep->fullBit(oldp+7068,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x15U))));
        tracep->fullBit(oldp+7069,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x14U))));
        tracep->fullCData(oldp+7070,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0x11U))),3);
        tracep->fullBit(oldp+7071,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7072,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0xfU))));
        tracep->fullCData(oldp+7073,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+7074,((0x7fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 5U))),7);
        tracep->fullBit(oldp+7075,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 4U))));
        tracep->fullBit(oldp+7076,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 3U))));
        tracep->fullBit(oldp+7077,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 2U))));
        tracep->fullBit(oldp+7078,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 1U))));
        tracep->fullBit(oldp+7079,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs)));
        tracep->fullBit(oldp+7080,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id));
        tracep->fullBit(oldp+7081,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id));
        tracep->fullBit(oldp+7082,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
        tracep->fullBit(oldp+7083,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        tracep->fullBit(oldp+7084,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
        tracep->fullBit(oldp+7085,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
        tracep->fullBit(oldp+7086,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
        tracep->fullBit(oldp+7087,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
        tracep->fullSData(oldp+7088,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
        tracep->fullSData(oldp+7089,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        tracep->fullIData(oldp+7090,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
        tracep->fullQData(oldp+7091,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
        tracep->fullQData(oldp+7093,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
        tracep->fullBit(oldp+7095,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
        tracep->fullIData(oldp+7096,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        tracep->fullIData(oldp+7097,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
        tracep->fullBit(oldp+7098,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
        tracep->fullIData(oldp+7099,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
        tracep->fullCData(oldp+7100,((0x3fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
        tracep->fullIData(oldp+7101,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        tracep->fullBit(oldp+7102,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 1U))));
        tracep->fullBit(oldp+7103,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 2U))));
        tracep->fullCData(oldp+7104,((7U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 3U))),3);
        tracep->fullBit(oldp+7105,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        tracep->fullBit(oldp+7106,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump));
        tracep->fullBit(oldp+7107,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch));
        tracep->fullBit(oldp+7108,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch));
        tracep->fullBit(oldp+7109,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec));
        tracep->fullBit(oldp+7110,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
        tracep->fullBit(oldp+7111,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
        tracep->fullIData(oldp+7112,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
        tracep->fullQData(oldp+7113,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        tracep->fullBit(oldp+7115,(vlTOPp->opentitan_soc_top__DOT__cio_jtag_tck));
        tracep->fullBit(oldp+7116,(vlTOPp->opentitan_soc_top__DOT__cio_jtag_tms));
        tracep->fullBit(oldp+7117,(vlTOPp->opentitan_soc_top__DOT__cio_jtag_tdi));
        tracep->fullBit(oldp+7118,(vlTOPp->opentitan_soc_top__DOT__cio_jtag_trst_n));
        tracep->fullBit(oldp+7119,(vlTOPp->opentitan_soc_top__DOT__cio_jtag_srst_n));
        tracep->fullBit(oldp+7120,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
        tracep->fullBit(oldp+7121,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
        tracep->fullBit(oldp+7122,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
        tracep->fullBit(oldp+7123,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
        tracep->fullCData(oldp+7124,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7125,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7126,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7127,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7128,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7129,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7130,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7131,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7132,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7133,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7134,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7135,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7136,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7137,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7138,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7139,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7140,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7141,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7142,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7143,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7144,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7145,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7146,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7147,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7148,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7149,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+7150,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe));
        tracep->fullBit(oldp+7151,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe));
        tracep->fullBit(oldp+7152,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe));
        tracep->fullBit(oldp+7153,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe));
        tracep->fullBit(oldp+7154,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe));
        tracep->fullBit(oldp+7155,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe));
        tracep->fullBit(oldp+7156,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe));
        tracep->fullBit(oldp+7157,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe));
        tracep->fullBit(oldp+7158,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe));
        tracep->fullBit(oldp+7159,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe));
        tracep->fullBit(oldp+7160,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe));
        tracep->fullBit(oldp+7161,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe));
        tracep->fullBit(oldp+7162,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe));
        tracep->fullBit(oldp+7163,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe));
        tracep->fullBit(oldp+7164,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe));
        tracep->fullBit(oldp+7165,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe));
        tracep->fullBit(oldp+7166,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe));
        tracep->fullBit(oldp+7167,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe));
        tracep->fullBit(oldp+7168,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe));
        tracep->fullBit(oldp+7169,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe));
        tracep->fullBit(oldp+7170,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe));
        tracep->fullBit(oldp+7171,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe));
        tracep->fullBit(oldp+7172,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe));
        tracep->fullBit(oldp+7173,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe));
        tracep->fullBit(oldp+7174,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe));
        tracep->fullBit(oldp+7175,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe));
        tracep->fullBit(oldp+7176,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe));
        tracep->fullBit(oldp+7177,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe));
        tracep->fullBit(oldp+7178,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe));
        tracep->fullBit(oldp+7179,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe));
        tracep->fullBit(oldp+7180,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe));
        tracep->fullBit(oldp+7181,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe));
        tracep->fullBit(oldp+7182,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe));
        tracep->fullBit(oldp+7183,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe));
        tracep->fullBit(oldp+7184,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe));
        tracep->fullBit(oldp+7185,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe));
        tracep->fullBit(oldp+7186,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe));
        tracep->fullBit(oldp+7187,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe));
        tracep->fullBit(oldp+7188,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe));
        tracep->fullBit(oldp+7189,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe));
        tracep->fullBit(oldp+7190,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe));
        tracep->fullBit(oldp+7191,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe));
        tracep->fullBit(oldp+7192,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe));
        tracep->fullBit(oldp+7193,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe));
        tracep->fullBit(oldp+7194,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe));
        tracep->fullBit(oldp+7195,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe));
        tracep->fullBit(oldp+7196,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe));
        tracep->fullBit(oldp+7197,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe));
        tracep->fullBit(oldp+7198,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe));
        tracep->fullBit(oldp+7199,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe));
        tracep->fullBit(oldp+7200,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe));
        tracep->fullBit(oldp+7201,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe));
        tracep->fullBit(oldp+7202,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe));
        tracep->fullBit(oldp+7203,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe));
        tracep->fullBit(oldp+7204,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe));
        tracep->fullBit(oldp+7205,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe));
        tracep->fullBit(oldp+7206,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe));
        tracep->fullBit(oldp+7207,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe));
        tracep->fullBit(oldp+7208,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe));
        tracep->fullBit(oldp+7209,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe));
        tracep->fullBit(oldp+7210,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe));
        tracep->fullBit(oldp+7211,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe));
        tracep->fullBit(oldp+7212,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe));
        tracep->fullBit(oldp+7213,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe));
        tracep->fullBit(oldp+7214,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe));
        tracep->fullBit(oldp+7215,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe));
        tracep->fullBit(oldp+7216,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe));
        tracep->fullBit(oldp+7217,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe));
        tracep->fullBit(oldp+7218,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe));
        tracep->fullCData(oldp+7219,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7220,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7221,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7222,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7223,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7224,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7225,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7226,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7227,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7228,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7229,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7230,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7231,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7232,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7233,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7234,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7235,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7236,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7237,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7238,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7239,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7240,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7241,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7242,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7243,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7244,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7245,((0xffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d 
                                               >> 0x18U))),8);
        tracep->fullIData(oldp+7246,((0xffffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d)),24);
        tracep->fullSData(oldp+7247,((0xffffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                 >> 0x10U))),16);
        tracep->fullCData(oldp+7248,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                              >> 0xcU))),4);
        tracep->fullSData(oldp+7249,((0xfffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
        tracep->fullBit(oldp+7250,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+7251,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7252,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7253,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7254,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
        tracep->fullIData(oldp+7255,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
        tracep->fullQData(oldp+7256,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q),64);
        tracep->fullBit(oldp+7258,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q));
        tracep->fullBit(oldp+7259,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q));
        tracep->fullCData(oldp+7260,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+7261,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+7262,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+7263,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+7264,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+7265,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+7266,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7267,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7268,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7269,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullQData(oldp+7270,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_gpio)) 
                                      << 1U)),33);
        tracep->fullIData(oldp+7272,(vlTOPp->opentitan_soc_top__DOT__intr_gpio),32);
        tracep->fullIData(oldp+7273,((0xfffffffeU & 
                                      (vlTOPp->opentitan_soc_top__DOT__intr_gpio 
                                       << 1U))),32);
        tracep->fullBit(oldp+7274,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resume));
        tracep->fullBit(oldp+7275,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__go));
        tracep->fullBit(oldp+7276,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+7277,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+7278,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+7279,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+7280,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+7281,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+7282,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+7283,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+7284,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+7285,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__cmderror_valid));
        tracep->fullCData(oldp+7286,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__cmderror),3);
        tracep->fullIData(oldp+7287,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o)),32);
        tracep->fullIData(oldp+7288,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o 
                                              >> 0x20U))),32);
        tracep->fullBit(oldp+7289,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__data_valid));
        tracep->fullBit(oldp+7290,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned))));
        tracep->fullBit(oldp+7291,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__going));
        tracep->fullQData(oldp+7292,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d),64);
        tracep->fullCData(oldp+7294,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned),2);
        tracep->fullCData(oldp+7295,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned),2);
        tracep->fullQData(oldp+7296,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux),64);
        tracep->fullQData(oldp+7298,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits),64);
        tracep->fullCData(oldp+7300,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata))),8);
        tracep->fullCData(oldp+7301,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 8U)))),8);
        tracep->fullCData(oldp+7302,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x10U)))),8);
        tracep->fullCData(oldp+7303,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x18U)))),8);
        tracep->fullCData(oldp+7304,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x20U)))),8);
        tracep->fullCData(oldp+7305,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x28U)))),8);
        tracep->fullCData(oldp+7306,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x30U)))),8);
        tracep->fullCData(oldp+7307,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                       >> 0x38U)))),8);
        tracep->fullIData(oldp+7308,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i),32);
        tracep->fullCData(oldp+7309,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xbU))),2);
        tracep->fullBit(oldp+7310,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))));
        tracep->fullCData(oldp+7311,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 8U))),2);
        tracep->fullCData(oldp+7312,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
        tracep->fullBit(oldp+7313,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid));
        tracep->fullCData(oldp+7314,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                              >> 1U))),4);
        tracep->fullBit(oldp+7315,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        tracep->fullBit(oldp+7316,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
        tracep->fullIData(oldp+7317,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword),32);
        tracep->fullIData(oldp+7318,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                              >> 1U))),32);
        tracep->fullBit(oldp+7319,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
        tracep->fullBit(oldp+7320,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid));
        tracep->fullIData(oldp+7321,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask),32);
        tracep->fullSData(oldp+7322,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
        tracep->fullCData(oldp+7323,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        tracep->fullBit(oldp+7324,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullQData(oldp+7325,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                      << 1U)),33);
        tracep->fullQData(oldp+7327,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        tracep->fullBit(oldp+7329,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+7330,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        tracep->fullBit(oldp+7331,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7332,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7333,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7334,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7335,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7336,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7337,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7338,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7339,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom))));
        tracep->fullBit(oldp+7340,((1U & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                           >> 0x15U) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom)))));
        tracep->fullBit(oldp+7341,(((IData)((0x800U 
                                             == (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->fullBit(oldp+7342,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                    & ((IData)((0x800U 
                                                == 
                                                (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack)))));
        tracep->fullCData(oldp+7343,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d),3);
        tracep->fullIData(oldp+7344,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[0U]),32);
        tracep->fullIData(oldp+7345,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[1U]),32);
        tracep->fullIData(oldp+7346,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[2U]),32);
        tracep->fullIData(oldp+7347,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[3U]),32);
        tracep->fullIData(oldp+7348,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[4U]),32);
        tracep->fullIData(oldp+7349,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[5U]),32);
        tracep->fullIData(oldp+7350,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[6U]),32);
        tracep->fullIData(oldp+7351,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[7U]),32);
        tracep->fullCData(oldp+7352,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+7353,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 0x18U))),5);
        tracep->fullSData(oldp+7354,((0x7ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                >> 0xdU))),11);
        tracep->fullBit(oldp+7355,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7356,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                          >> 0xbU))));
        tracep->fullCData(oldp+7357,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                            >> 8U))),3);
        tracep->fullCData(oldp+7358,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                              >> 4U))),4);
        tracep->fullCData(oldp+7359,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs)),4);
        tracep->fullCData(oldp+7360,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7361,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7362,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7363,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7364,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7365,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7366,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7367,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+7368,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
        tracep->fullBit(oldp+7369,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q));
        tracep->fullBit(oldp+7370,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q));
        tracep->fullBit(oldp+7371,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q));
        tracep->fullBit(oldp+7372,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q));
        tracep->fullBit(oldp+7373,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q));
        tracep->fullBit(oldp+7374,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q));
        tracep->fullBit(oldp+7375,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q));
        tracep->fullBit(oldp+7376,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q));
        tracep->fullBit(oldp+7377,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q));
        tracep->fullBit(oldp+7378,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q));
        tracep->fullBit(oldp+7379,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q));
        tracep->fullBit(oldp+7380,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q));
        tracep->fullBit(oldp+7381,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q));
        tracep->fullBit(oldp+7382,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q));
        tracep->fullBit(oldp+7383,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q));
        tracep->fullBit(oldp+7384,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q));
        tracep->fullBit(oldp+7385,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q));
        tracep->fullBit(oldp+7386,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q));
        tracep->fullBit(oldp+7387,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q));
        tracep->fullBit(oldp+7388,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q));
        tracep->fullBit(oldp+7389,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q));
        tracep->fullBit(oldp+7390,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q));
        tracep->fullBit(oldp+7391,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q));
        tracep->fullBit(oldp+7392,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q));
        tracep->fullBit(oldp+7393,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q));
        tracep->fullBit(oldp+7394,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q));
        tracep->fullBit(oldp+7395,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q));
        tracep->fullBit(oldp+7396,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q));
        tracep->fullBit(oldp+7397,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q));
        tracep->fullBit(oldp+7398,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q));
        tracep->fullBit(oldp+7399,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q));
        tracep->fullBit(oldp+7400,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe));
        tracep->fullBit(oldp+7401,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe));
        tracep->fullBit(oldp+7402,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe));
        tracep->fullBit(oldp+7403,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe));
        tracep->fullCData(oldp+7404,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7405,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7406,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7407,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7408,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7409,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7410,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7411,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7412,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__irq_id_o[0]),5);
        tracep->fullBit(oldp+7413,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+7414,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+7415,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 9U))));
        tracep->fullBit(oldp+7416,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+7417,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+7418,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+7419,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+7420,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7421,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+7422,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+7423,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+7424,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7425,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+7426,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+7427,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+7428,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+7429,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+7430,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+7431,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+7432,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+7433,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+7434,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+7435,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+7436,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+7437,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+7438,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+7439,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+7440,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
        tracep->fullBit(oldp+7441,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 3U))));
        tracep->fullBit(oldp+7442,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 2U))));
        tracep->fullBit(oldp+7443,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 5U))));
        tracep->fullBit(oldp+7444,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 4U))));
        tracep->fullBit(oldp+7445,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 7U))));
        tracep->fullBit(oldp+7446,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 6U))));
        tracep->fullBit(oldp+7447,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 9U))));
        tracep->fullBit(oldp+7448,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 8U))));
        tracep->fullBit(oldp+7449,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+7450,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+7451,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+7452,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7453,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+7454,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+7455,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+7456,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7457,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+7458,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+7459,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+7460,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+7461,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+7462,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+7463,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+7464,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+7465,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+7466,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+7467,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+7468,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+7469,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+7470,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+7471,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 1U))));
        tracep->fullBit(oldp+7472,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
        tracep->fullBit(oldp+7473,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 3U))));
        tracep->fullBit(oldp+7474,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 2U))));
        tracep->fullBit(oldp+7475,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 5U))));
        tracep->fullBit(oldp+7476,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 4U))));
        tracep->fullCData(oldp+7477,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
        tracep->fullCData(oldp+7478,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim_id[0]),5);
        tracep->fullCData(oldp+7479,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__cc_id[0]),5);
        tracep->fullCData(oldp+7480,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
        tracep->fullBit(oldp+7481,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__clear_resumeack));
        tracep->fullIData(oldp+7482,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data),32);
        tracep->fullSData(oldp+7483,((0x1ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                                >> 0x17U))),9);
        tracep->fullBit(oldp+7484,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x16U))));
        tracep->fullCData(oldp+7485,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                            >> 0x14U))),2);
        tracep->fullBit(oldp+7486,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x13U))));
        tracep->fullBit(oldp+7487,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x12U))));
        tracep->fullBit(oldp+7488,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x11U))));
        tracep->fullBit(oldp+7489,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7490,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xfU))));
        tracep->fullBit(oldp+7491,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xeU))));
        tracep->fullBit(oldp+7492,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xdU))));
        tracep->fullBit(oldp+7493,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7494,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xbU))));
        tracep->fullBit(oldp+7495,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xaU))));
        tracep->fullBit(oldp+7496,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 9U))));
        tracep->fullBit(oldp+7497,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 8U))));
        tracep->fullBit(oldp+7498,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 7U))));
        tracep->fullBit(oldp+7499,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 6U))));
        tracep->fullBit(oldp+7500,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 5U))));
        tracep->fullBit(oldp+7501,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 4U))));
        tracep->fullCData(oldp+7502,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus)),4);
        tracep->fullBit(oldp+7503,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+7504,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+7505,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+7506,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+7507,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+7508,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1aU))));
        tracep->fullSData(oldp+7509,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                >> 0x10U))),10);
        tracep->fullSData(oldp+7510,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                >> 6U))),10);
        tracep->fullCData(oldp+7511,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 4U))),2);
        tracep->fullBit(oldp+7512,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 3U))));
        tracep->fullBit(oldp+7513,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 2U))));
        tracep->fullBit(oldp+7514,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 1U))));
        tracep->fullBit(oldp+7515,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d)));
        tracep->fullCData(oldp+7516,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+7517,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 0x18U))),5);
        tracep->fullSData(oldp+7518,((0x7ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                                >> 0xdU))),11);
        tracep->fullBit(oldp+7519,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7520,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 0xbU))));
        tracep->fullCData(oldp+7521,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 8U))),3);
        tracep->fullCData(oldp+7522,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                              >> 4U))),4);
        tracep->fullCData(oldp+7523,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs)),4);
        tracep->fullBit(oldp+7524,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d));
        tracep->fullBit(oldp+7525,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
        tracep->fullCData(oldp+7526,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
        tracep->fullBit(oldp+7527,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+7528,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+7529,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+7530,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+7531,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+7532,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1aU))));
        tracep->fullSData(oldp+7533,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                >> 0x10U))),10);
        tracep->fullSData(oldp+7534,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                >> 6U))),10);
        tracep->fullCData(oldp+7535,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                            >> 4U))),2);
        tracep->fullBit(oldp+7536,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 3U))));
        tracep->fullBit(oldp+7537,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 2U))));
        tracep->fullBit(oldp+7538,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 1U))));
        tracep->fullBit(oldp+7539,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol)));
        tracep->fullCData(oldp+7540,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx),5);
        tracep->fullBit(oldp+7541,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned))));
        tracep->fullCData(oldp+7542,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
        tracep->fullBit(oldp+7543,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7544,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7545,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7546,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7547,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7548,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+7549,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7550,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+7551,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U])));
        tracep->fullIData(oldp+7552,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                       << 0x15U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                       >> 0xbU))),32);
        tracep->fullIData(oldp+7553,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                       << 0x15U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                       >> 0xbU))),32);
        tracep->fullIData(oldp+7554,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                       << 0x15U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                       >> 0xbU))),32);
        tracep->fullBit(oldp+7555,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                          >> 0xaU))));
        tracep->fullIData(oldp+7556,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                       << 0x16U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                       >> 0xaU))),32);
        tracep->fullBit(oldp+7557,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                          >> 9U))));
        tracep->fullSData(oldp+7558,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                                  << 7U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                    >> 0x19U)))),16);
        tracep->fullBit(oldp+7559,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                          >> 0x18U))));
        tracep->fullSData(oldp+7560,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                    >> 8U)))),16);
        tracep->fullBit(oldp+7561,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                          >> 7U))));
        tracep->fullSData(oldp+7562,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                  << 9U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                                    >> 0x17U)))),16);
        tracep->fullBit(oldp+7563,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                          >> 0x16U))));
        tracep->fullSData(oldp+7564,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                                    >> 6U)))),16);
        tracep->fullBit(oldp+7565,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                          >> 5U))));
        tracep->fullIData(oldp+7566,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                       >> 5U))),32);
        tracep->fullBit(oldp+7567,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                          >> 4U))));
        tracep->fullSData(oldp+7568,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                    >> 0x14U)))),16);
        tracep->fullBit(oldp+7569,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                          >> 0x13U))));
        tracep->fullSData(oldp+7570,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                    >> 3U)))),16);
        tracep->fullBit(oldp+7571,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                          >> 2U))));
        tracep->fullSData(oldp+7572,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                                    >> 0x12U)))),16);
        tracep->fullBit(oldp+7573,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                          >> 0x11U))));
        tracep->fullSData(oldp+7574,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                                    >> 1U)))),16);
        tracep->fullBit(oldp+7575,((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U])));
        tracep->fullIData(oldp+7576,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]),32);
        tracep->fullIData(oldp+7577,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U]),32);
        tracep->fullIData(oldp+7578,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]),32);
        tracep->fullIData(oldp+7579,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U]),32);
        tracep->fullIData(oldp+7580,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U]),32);
        tracep->fullIData(oldp+7581,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d),32);
        tracep->fullIData(oldp+7582,(((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])),32);
        tracep->fullIData(oldp+7583,((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U])),32);
        tracep->fullIData(oldp+7584,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                       << 0x15U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                       >> 0xbU))),32);
        tracep->fullIData(oldp+7585,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                       << 0x15U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                       >> 0xbU))),32);
        tracep->fullBit(oldp+7586,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we));
        tracep->fullBit(oldp+7587,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re));
        tracep->fullCData(oldp+7588,((0x3cU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                << 0x1bU) 
                                               | (0x7fffffcU 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                     >> 5U))))),6);
        tracep->fullIData(oldp+7589,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullCData(oldp+7590,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullBit(oldp+7591,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))))) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))));
        tracep->fullBit(oldp+7592,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)))))));
    }
}
