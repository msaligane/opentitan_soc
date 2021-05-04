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
    WData/*95:0*/ __Vtemp2420[3];
    WData/*95:0*/ __Vtemp2464[3];
    WData/*95:0*/ __Vtemp2468[3];
    WData/*95:0*/ __Vtemp2548[3];
    WData/*95:0*/ __Vtemp2552[3];
    WData/*95:0*/ __Vtemp2556[3];
    WData/*95:0*/ __Vtemp2600[3];
    WData/*95:0*/ __Vtemp2604[3];
    WData/*95:0*/ __Vtemp2608[3];
    WData/*95:0*/ __Vtemp2688[3];
    WData/*95:0*/ __Vtemp2692[3];
    WData/*95:0*/ __Vtemp2736[3];
    WData/*95:0*/ __Vtemp2740[3];
    WData/*95:0*/ __Vtemp2762[3];
    WData/*95:0*/ __Vtemp2766[3];
    WData/*95:0*/ __Vtemp2770[3];
    WData/*95:0*/ __Vtemp2774[3];
    // Body
    {
        tracep->fullCData(oldp+3768,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3769,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3770,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3771,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3772,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3773,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3774,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3775,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2420[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2420[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2420[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+3776,(__Vtemp2420),85);
        tracep->fullBit(oldp+3779,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+3780,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+3781,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3783,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullCData(oldp+3784,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+3785,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+3786,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+3787,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+3788,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+3789,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3790,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3791,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3792,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3793,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3794,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3795,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3796,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3797,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+3798,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3799,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3800,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3801,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3802,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3803,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3804,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3805,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3806,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+3807,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3808,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3809,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3810,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3811,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3812,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3813,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3814,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3815,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+3816,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3817,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3818,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3819,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3820,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3821,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3822,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3823,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3824,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+3825,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3826,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3827,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3828,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3829,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3830,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3831,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3832,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3833,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+3834,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3835,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3836,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3837,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3838,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3839,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3840,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3841,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3842,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+3843,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3844,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3845,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3846,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3847,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3848,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3849,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3850,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3851,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3852,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3853,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3854,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3855,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3856,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3857,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3858,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3859,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3860,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+3861,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest),2);
        tracep->fullCData(oldp+3862,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hgrant),2);
        tracep->fullBit(oldp+3863,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest))));
        tracep->fullBit(oldp+3864,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3865,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3866,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3867,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3868,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3869,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3870,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3871,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3872,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+3873,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+3874,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3875,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3876,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3877,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3878,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3879,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3880,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3881,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3882,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3883,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+3884,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+3885,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3886,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3887,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3888,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3889,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3890,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3891,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3892,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3893,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3894,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+3895,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3896,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3897,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3898,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3899,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3900,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3901,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3902,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3903,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+3904,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3905,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3906,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3907,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3908,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3909,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3910,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3911,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3912,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3913,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3914,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2464[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2464[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2464[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+3915,(__Vtemp2464),85);
        tracep->fullBit(oldp+3918,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+3919,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+3920,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3922,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3923,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3924,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3925,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3926,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3927,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3928,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3929,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3930,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+3931,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3932,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3933,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3934,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3935,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3936,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3937,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3938,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3939,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+3940,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3941,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3942,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3943,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3944,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3945,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3946,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3947,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3948,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3949,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3950,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2468[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2468[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2468[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+3951,(__Vtemp2468),85);
        tracep->fullBit(oldp+3954,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+3955,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+3956,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3958,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullCData(oldp+3959,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+3960,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+3961,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+3962,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+3963,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+3964,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3965,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3966,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3967,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3968,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3969,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3970,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3971,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3972,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[0U])));
        tracep->fullBit(oldp+3973,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3974,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3975,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3976,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3977,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3978,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3979,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3980,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3981,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[0U])));
        tracep->fullBit(oldp+3982,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3983,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3984,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3985,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3986,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3987,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3988,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3989,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3990,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                    [0U][0U])));
        tracep->fullBit(oldp+3991,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3992,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3993,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3994,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3995,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3996,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3997,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3998,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3999,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                    [1U][0U])));
        tracep->fullBit(oldp+4000,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4001,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4002,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4003,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4004,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4005,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4006,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4007,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4008,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                 [0U]))));
        tracep->fullBit(oldp+4009,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4010,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4011,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4012,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4013,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4014,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4015,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4016,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4017,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
                                                 [1U]))));
        tracep->fullBit(oldp+4018,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4019,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4020,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4021,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4022,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4023,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4024,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4025,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4026,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                    [0U][0U])));
        tracep->fullBit(oldp+4027,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4028,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4029,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4030,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4031,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4032,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4033,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4034,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4035,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                    [1U][0U])));
        tracep->fullBit(oldp+4036,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4037,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4038,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4039,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4040,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4041,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4042,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4043,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4044,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                 [0U]))));
        tracep->fullBit(oldp+4045,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4046,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4047,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4048,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4049,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4050,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4051,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4052,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4053,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                 [1U]))));
        tracep->fullBit(oldp+4054,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4055,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4056,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4057,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4058,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4059,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4060,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4061,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4062,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+4063,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4064,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4065,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4066,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4067,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4068,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4069,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4070,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4071,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+4072,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4073,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4074,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4075,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4076,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4077,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4078,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4079,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4080,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+4081,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4082,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4083,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4084,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4085,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4086,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4087,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4088,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4089,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+4090,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4091,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4092,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4093,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4094,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4095,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4096,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4097,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4098,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+4099,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4100,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4101,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4102,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4103,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4104,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4105,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4106,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4107,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+4108,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4109,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4110,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4111,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4112,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4113,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4114,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4115,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4116,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4117,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4118,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4119,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4120,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4121,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4122,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4123,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4124,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4125,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+4126,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest),2);
        tracep->fullCData(oldp+4127,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hgrant),2);
        tracep->fullBit(oldp+4128,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4129,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4130,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4131,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4132,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4133,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4134,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4135,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4136,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+4137,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest))));
        tracep->fullBit(oldp+4138,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4139,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4140,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4141,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4142,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4143,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4144,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4145,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4146,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+4147,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+4148,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+4149,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4150,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4151,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4152,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4153,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4154,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4155,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4156,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4157,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+4158,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+4159,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4160,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4161,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4162,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4163,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4164,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4165,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4166,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4167,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4168,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+4169,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+4170,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4171,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2548[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U]);
        __Vtemp2548[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U]));
        __Vtemp2548[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+4172,(__Vtemp2548),85);
        tracep->fullBit(oldp+4175,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+4176,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4177,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4178,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4179,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4180,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4181,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4182,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4183,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4184,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+4185,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4186,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4187,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4188,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4189,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4190,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4191,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4192,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4193,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+4194,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4195,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4196,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4197,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4198,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4199,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4200,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4201,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4202,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4203,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4204,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2552[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2552[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2552[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+4205,(__Vtemp2552),85);
        tracep->fullBit(oldp+4208,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+4209,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+4210,((((QData)((IData)(
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
        tracep->fullBit(oldp+4212,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4213,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4214,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4215,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4216,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4217,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4218,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4219,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4220,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+4221,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4222,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4223,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4224,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4225,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4226,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4227,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4228,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4229,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+4230,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4231,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4232,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4233,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4234,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4235,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4236,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4237,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4238,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+4239,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4240,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2556[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2556[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2556[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+4241,(__Vtemp2556),85);
        tracep->fullBit(oldp+4244,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+4245,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+4246,((((QData)((IData)(
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
        tracep->fullWData(oldp+4248,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+4251,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+4254,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+4255,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+4258,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+4259,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+4260,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+4261,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+4262,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+4263,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4264,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4265,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4266,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4267,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4268,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4269,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4270,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4271,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+4272,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4273,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4274,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4275,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4276,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4277,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4278,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4279,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4280,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+4281,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4282,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4283,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4284,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4285,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4286,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4287,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4288,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4289,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+4290,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4291,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4292,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4293,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4294,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4295,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4296,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4297,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4298,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+4299,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4300,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4301,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4302,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4303,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4304,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4305,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4306,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4307,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+4308,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4309,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4310,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4311,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4312,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4313,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4314,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4315,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4316,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+4317,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4318,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4319,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4320,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4321,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4322,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4323,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4324,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4325,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4326,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4327,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4328,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4329,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4330,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4331,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4332,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4333,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4334,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+4335,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest),2);
        tracep->fullCData(oldp+4336,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hgrant),2);
        tracep->fullBit(oldp+4337,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4338,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4339,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4340,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4341,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4342,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4343,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4344,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4345,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+4346,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest))));
        tracep->fullBit(oldp+4347,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4348,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4349,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4350,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4351,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4352,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4353,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4354,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4355,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+4356,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+4357,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+4358,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4359,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4360,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4361,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4362,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4363,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4364,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4365,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4366,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+4367,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+4368,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4369,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4370,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4371,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4372,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4373,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4374,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4375,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4376,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4377,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+4378,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+4379,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4380,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2600[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U]);
        __Vtemp2600[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U]));
        __Vtemp2600[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+4381,(__Vtemp2600),85);
        tracep->fullBit(oldp+4384,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+4385,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4386,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4387,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4388,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4389,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4390,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4391,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4392,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4393,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+4394,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4395,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4396,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4397,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4398,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4399,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4400,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4401,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4402,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+4403,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4404,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4405,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4406,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4407,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4408,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4409,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4410,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4411,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4412,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4413,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2604[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2604[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2604[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+4414,(__Vtemp2604),85);
        tracep->fullBit(oldp+4417,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+4418,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+4419,((((QData)((IData)(
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
        tracep->fullBit(oldp+4421,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4422,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4423,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4424,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4425,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4426,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4427,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4428,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4429,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+4430,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4431,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4432,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4433,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4434,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4435,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4436,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4437,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4438,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+4439,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4440,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4441,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4442,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4443,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4444,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4445,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4446,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4447,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+4448,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4449,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2608[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2608[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2608[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+4450,(__Vtemp2608),85);
        tracep->fullBit(oldp+4453,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+4454,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+4455,((((QData)((IData)(
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
        tracep->fullWData(oldp+4457,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+4460,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+4463,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+4464,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+4467,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+4468,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+4469,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+4470,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+4471,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+4472,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__haltreq));
        tracep->fullBit(oldp+4473,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q));
        tracep->fullBit(oldp+4474,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q));
        tracep->fullBit(oldp+4475,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q));
        tracep->fullBit(oldp+4476,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q));
        tracep->fullBit(oldp+4477,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q));
        tracep->fullBit(oldp+4478,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q));
        tracep->fullBit(oldp+4479,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q));
        tracep->fullBit(oldp+4480,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q));
        tracep->fullBit(oldp+4481,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q));
        tracep->fullBit(oldp+4482,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q));
        tracep->fullBit(oldp+4483,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q));
        tracep->fullBit(oldp+4484,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q));
        tracep->fullBit(oldp+4485,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q));
        tracep->fullBit(oldp+4486,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q));
        tracep->fullBit(oldp+4487,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q));
        tracep->fullBit(oldp+4488,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q));
        tracep->fullBit(oldp+4489,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q));
        tracep->fullBit(oldp+4490,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q));
        tracep->fullBit(oldp+4491,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q));
        tracep->fullBit(oldp+4492,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q));
        tracep->fullBit(oldp+4493,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q));
        tracep->fullBit(oldp+4494,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q));
        tracep->fullBit(oldp+4495,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q));
        tracep->fullBit(oldp+4496,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q));
        tracep->fullBit(oldp+4497,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q));
        tracep->fullBit(oldp+4498,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q));
        tracep->fullBit(oldp+4499,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q));
        tracep->fullBit(oldp+4500,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q));
        tracep->fullBit(oldp+4501,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__resumereq));
        tracep->fullIData(oldp+4502,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel),20);
        tracep->fullBit(oldp+4503,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sberror_valid));
        tracep->fullCData(oldp+4504,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sberror),3);
        tracep->fullIData(oldp+4505,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0),32);
        tracep->fullIData(oldp+4506,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1),32);
        tracep->fullIData(oldp+4507,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2),32);
        tracep->fullIData(oldp+4508,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted),32);
        tracep->fullIData(oldp+4509,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
        tracep->fullIData(oldp+4510,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
        tracep->fullIData(oldp+4511,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
        tracep->fullIData(oldp+4512,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1),32);
        tracep->fullIData(oldp+4513,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2),32);
        tracep->fullSData(oldp+4514,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
        tracep->fullSData(oldp+4515,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
        tracep->fullCData(oldp+4516,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
        tracep->fullBit(oldp+4517,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart));
        tracep->fullQData(oldp+4518,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
        tracep->fullQData(oldp+4520,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
        tracep->fullQData(oldp+4522,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
        tracep->fullQData(oldp+4524,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
        tracep->fullQData(oldp+4526,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
        tracep->fullQData(oldp+4528,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xbU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xaU])))),64);
        tracep->fullQData(oldp+4530,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xdU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xcU])))),64);
        tracep->fullQData(oldp+4532,((((QData)((IData)(
                                                       vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xfU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xeU])))),64);
        tracep->fullBit(oldp+4534,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command));
        tracep->fullBit(oldp+4535,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel)));
        tracep->fullCData(oldp+4536,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__resumereq),2);
        tracep->fullCData(oldp+4537,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__haltreq),2);
        tracep->fullBit(oldp+4538,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
        tracep->fullBit(oldp+4539,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
        tracep->fullBit(oldp+4540,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
        tracep->fullBit(oldp+4541,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
        tracep->fullBit(oldp+4542,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
        tracep->fullBit(oldp+4543,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
        tracep->fullBit(oldp+4544,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
        tracep->fullBit(oldp+4545,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
        tracep->fullBit(oldp+4546,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
        tracep->fullBit(oldp+4547,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
        tracep->fullBit(oldp+4548,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
        tracep->fullBit(oldp+4549,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
        tracep->fullBit(oldp+4550,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
        tracep->fullBit(oldp+4551,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
        tracep->fullBit(oldp+4552,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
        tracep->fullBit(oldp+4553,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
        tracep->fullBit(oldp+4554,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
        tracep->fullBit(oldp+4555,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
        tracep->fullBit(oldp+4556,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
        tracep->fullBit(oldp+4557,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
        tracep->fullCData(oldp+4558,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
        tracep->fullCData(oldp+4559,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
        tracep->fullCData(oldp+4560,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
        tracep->fullCData(oldp+4561,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
        tracep->fullCData(oldp+4562,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
        tracep->fullCData(oldp+4563,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
        tracep->fullCData(oldp+4564,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
        tracep->fullCData(oldp+4565,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
        tracep->fullCData(oldp+4566,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
        tracep->fullCData(oldp+4567,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
        tracep->fullCData(oldp+4568,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
        tracep->fullCData(oldp+4569,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
        tracep->fullCData(oldp+4570,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
        tracep->fullCData(oldp+4571,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
        tracep->fullCData(oldp+4572,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
        tracep->fullCData(oldp+4573,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
        tracep->fullCData(oldp+4574,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
        tracep->fullBit(oldp+4575,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
        tracep->fullBit(oldp+4576,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
        tracep->fullBit(oldp+4577,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
        tracep->fullBit(oldp+4578,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
        tracep->fullBit(oldp+4579,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
        tracep->fullBit(oldp+4580,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
        tracep->fullBit(oldp+4581,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
        tracep->fullBit(oldp+4582,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q));
        tracep->fullBit(oldp+4583,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
        tracep->fullBit(oldp+4584,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
        tracep->fullBit(oldp+4585,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
        tracep->fullCData(oldp+4586,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
        tracep->fullBit(oldp+4587,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4588,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4589,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4590,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4591,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4592,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4593,((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4594,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4595,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+4596,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
        tracep->fullBit(oldp+4597,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
        tracep->fullBit(oldp+4598,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
        tracep->fullBit(oldp+4599,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
        tracep->fullBit(oldp+4600,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
        tracep->fullBit(oldp+4601,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
        tracep->fullBit(oldp+4602,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
        tracep->fullBit(oldp+4603,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
        tracep->fullBit(oldp+4604,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
        tracep->fullBit(oldp+4605,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
        tracep->fullBit(oldp+4606,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
        tracep->fullCData(oldp+4607,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
        tracep->fullCData(oldp+4608,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
        tracep->fullCData(oldp+4609,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
        tracep->fullCData(oldp+4610,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
        tracep->fullCData(oldp+4611,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
        tracep->fullCData(oldp+4612,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
        tracep->fullCData(oldp+4613,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
        tracep->fullCData(oldp+4614,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
        tracep->fullCData(oldp+4615,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
        tracep->fullCData(oldp+4616,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
        tracep->fullCData(oldp+4617,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
        tracep->fullCData(oldp+4618,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
        tracep->fullCData(oldp+4619,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
        tracep->fullBit(oldp+4620,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
        tracep->fullBit(oldp+4621,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
        tracep->fullBit(oldp+4622,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
        tracep->fullBit(oldp+4623,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
        tracep->fullBit(oldp+4624,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
        tracep->fullBit(oldp+4625,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
        tracep->fullBit(oldp+4626,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
        tracep->fullBit(oldp+4627,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
        tracep->fullBit(oldp+4628,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
        tracep->fullBit(oldp+4629,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
        tracep->fullBit(oldp+4630,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
        tracep->fullBit(oldp+4631,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
        tracep->fullBit(oldp+4632,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
        tracep->fullBit(oldp+4633,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
        tracep->fullBit(oldp+4634,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
        tracep->fullBit(oldp+4635,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
        tracep->fullBit(oldp+4636,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
        tracep->fullBit(oldp+4637,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
        tracep->fullBit(oldp+4638,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
        tracep->fullBit(oldp+4639,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
        tracep->fullBit(oldp+4640,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        tracep->fullIData(oldp+4641,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        tracep->fullBit(oldp+4642,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
        tracep->fullCData(oldp+4643,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        tracep->fullCData(oldp+4644,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        tracep->fullCData(oldp+4645,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        tracep->fullBit(oldp+4646,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4647,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4648,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4649,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4650,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4651,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4652,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4653,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4654,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+4655,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+4656,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+4657,((0x7fU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x24U)))),8);
        tracep->fullBit(oldp+4658,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+4659,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4660,((((QData)((IData)(
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
        tracep->fullCData(oldp+4662,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+4663,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
        tracep->fullBit(oldp+4664,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4665,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+4666,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+4667,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+4668,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+4669,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+4670,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+4671,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+4672,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+4673,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4674,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+4675,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+4676,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+4677,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+4678,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+4679,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+4680,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+4681,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+4682,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+4683,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+4684,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U])));
        tracep->fullBit(oldp+4685,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 1U))));
        tracep->fullBit(oldp+4686,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 2U))));
        tracep->fullBit(oldp+4687,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 3U))));
        tracep->fullBit(oldp+4688,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 4U))));
        tracep->fullBit(oldp+4689,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 5U))));
        tracep->fullBit(oldp+4690,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 6U))));
        tracep->fullBit(oldp+4691,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 7U))));
        tracep->fullBit(oldp+4692,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 8U))));
        tracep->fullBit(oldp+4693,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 9U))));
        tracep->fullBit(oldp+4694,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+4695,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+4696,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x17U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+4697,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x1aU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 6U)))),3);
        tracep->fullCData(oldp+4698,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x1dU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 3U)))),3);
        tracep->fullCData(oldp+4699,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U])),3);
        tracep->fullCData(oldp+4700,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 3U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1dU)))),3);
        tracep->fullCData(oldp+4701,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 6U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1aU)))),3);
        tracep->fullCData(oldp+4702,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 9U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x17U)))),3);
        tracep->fullCData(oldp+4703,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0xcU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x14U)))),3);
        tracep->fullCData(oldp+4704,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0xfU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x11U)))),3);
        tracep->fullCData(oldp+4705,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x12U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0xeU)))),3);
        tracep->fullCData(oldp+4706,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x15U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0xbU)))),3);
        tracep->fullCData(oldp+4707,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x18U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 8U)))),3);
        tracep->fullCData(oldp+4708,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x1bU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 5U)))),3);
        tracep->fullCData(oldp+4709,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x1eU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 2U)))),3);
        tracep->fullCData(oldp+4710,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 1U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1fU)))),3);
        tracep->fullCData(oldp+4711,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 4U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1cU)))),3);
        tracep->fullCData(oldp+4712,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 7U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x19U)))),3);
        tracep->fullCData(oldp+4713,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0xaU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x16U)))),3);
        tracep->fullCData(oldp+4714,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0xdU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x13U)))),3);
        tracep->fullCData(oldp+4715,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+4716,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x13U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+4717,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x16U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0xaU)))),3);
        tracep->fullCData(oldp+4718,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x19U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 7U)))),3);
        tracep->fullCData(oldp+4719,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x1cU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 4U)))),3);
        tracep->fullCData(oldp+4720,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x1fU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+4721,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 2U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1eU)))),3);
        tracep->fullCData(oldp+4722,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 5U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1bU)))),3);
        tracep->fullCData(oldp+4723,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 8U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x18U)))),3);
        tracep->fullCData(oldp+4724,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x15U)))),3);
        tracep->fullCData(oldp+4725,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0xeU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x12U)))),3);
        tracep->fullCData(oldp+4726,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0x11U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0xfU)))),3);
        tracep->fullCData(oldp+4727,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0x14U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0xcU)))),3);
        tracep->fullBit(oldp+4728,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4729,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+4730,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+4731,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+4732,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+4733,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+4734,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+4735,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+4736,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+4737,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4738,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+4739,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+4740,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+4741,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+4742,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+4743,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+4744,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+4745,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+4746,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+4747,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+4748,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U])));
        tracep->fullBit(oldp+4749,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+4750,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 2U))));
        tracep->fullBit(oldp+4751,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 3U))));
        tracep->fullBit(oldp+4752,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 4U))));
        tracep->fullBit(oldp+4753,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 5U))));
        tracep->fullBit(oldp+4754,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 6U))));
        tracep->fullBit(oldp+4755,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 7U))));
        tracep->fullBit(oldp+4756,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 8U))));
        tracep->fullBit(oldp+4757,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 9U))));
        tracep->fullBit(oldp+4758,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+4759,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+4760,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             << 0x17U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+4761,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                  >> 3U)))),6);
        tracep->fullBit(oldp+4762,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+4763,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+4764,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
        tracep->fullWData(oldp+4765,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex),68);
        tracep->fullIData(oldp+4768,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex),32);
        tracep->fullIData(oldp+4769,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
        tracep->fullWData(oldp+4770,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d),68);
        tracep->fullIData(oldp+4773,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        tracep->fullIData(oldp+4774,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
        tracep->fullQData(oldp+4775,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
        tracep->fullQData(oldp+4777,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
        tracep->fullBit(oldp+4779,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
        tracep->fullIData(oldp+4780,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        tracep->fullIData(oldp+4781,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
        tracep->fullBit(oldp+4782,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
        tracep->fullBit(oldp+4783,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
        tracep->fullQData(oldp+4784,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
        tracep->fullQData(oldp+4786,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
        tracep->fullBit(oldp+4788,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
        tracep->fullBit(oldp+4789,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
        tracep->fullIData(oldp+4790,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
        tracep->fullIData(oldp+4791,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
        tracep->fullIData(oldp+4792,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
        tracep->fullCData(oldp+4793,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        tracep->fullBit(oldp+4794,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
        tracep->fullCData(oldp+4795,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        tracep->fullSData(oldp+4796,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
        tracep->fullSData(oldp+4797,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        tracep->fullCData(oldp+4798,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4799,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4800,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4801,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4802,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4803,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4804,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4805,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4806,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4807,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4808,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4809,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4810,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4811,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4812,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4813,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4814,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4815,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4816,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4817,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4818,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4819,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4820,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4821,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4822,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4823,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4824,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4825,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4826,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4827,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4828,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4829,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4830,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4831,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4832,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe));
        tracep->fullBit(oldp+4833,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe));
        tracep->fullBit(oldp+4834,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe));
        tracep->fullBit(oldp+4835,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe));
        tracep->fullBit(oldp+4836,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe));
        tracep->fullBit(oldp+4837,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe));
        tracep->fullBit(oldp+4838,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe));
        tracep->fullBit(oldp+4839,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe));
        tracep->fullBit(oldp+4840,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q));
        tracep->fullBit(oldp+4841,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q));
        tracep->fullCData(oldp+4842,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q),2);
        tracep->fullCData(oldp+4843,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q),2);
        tracep->fullCData(oldp+4844,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+4845,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+4846,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+4847,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_q),2);
        tracep->fullCData(oldp+4848,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+4849,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+4850,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullCData(oldp+4851,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4852,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4853,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4854,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4855,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4856,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4857,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4858,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4859,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4860,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4861,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4862,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4863,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4864,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4865,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4866,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4867,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4868,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4869,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4870,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4871,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync),3);
        tracep->fullBit(oldp+4872,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                          >> 2U))));
        tracep->fullCData(oldp+4873,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))),2);
        tracep->fullBit(oldp+4874,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__cmdbusy));
        tracep->fullBit(oldp+4875,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+4876,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullIData(oldp+4877,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
        tracep->fullIData(oldp+4878,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
        tracep->fullIData(oldp+4879,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
        tracep->fullIData(oldp+4880,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
        tracep->fullIData(oldp+4881,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
        tracep->fullIData(oldp+4882,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
        tracep->fullIData(oldp+4883,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
        tracep->fullBit(oldp+4884,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        tracep->fullIData(oldp+4885,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        tracep->fullBit(oldp+4886,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error));
        tracep->fullCData(oldp+4887,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        tracep->fullCData(oldp+4888,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        tracep->fullCData(oldp+4889,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        tracep->fullBit(oldp+4890,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
        tracep->fullBit(oldp+4891,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
        tracep->fullBit(oldp+4892,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
        tracep->fullBit(oldp+4893,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4894,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4895,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4896,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4897,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4898,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4899,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4900,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4901,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4902,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4903,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4904,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4905,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4906,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4907,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4908,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4909,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe));
        tracep->fullBit(oldp+4910,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe));
        tracep->fullBit(oldp+4911,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe));
        tracep->fullBit(oldp+4912,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe));
        tracep->fullBit(oldp+4913,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe));
        tracep->fullBit(oldp+4914,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe));
        tracep->fullBit(oldp+4915,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe));
        tracep->fullBit(oldp+4916,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe));
        tracep->fullBit(oldp+4917,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe));
        tracep->fullCData(oldp+4918,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+4919,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4920,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4921,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4922,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullBit(oldp+4923,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4924,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4925,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4926,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4927,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4928,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4929,((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4930,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4931,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+4932,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4933,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4934,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4935,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4936,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4937,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4938,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4939,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4940,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+4941,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+4942,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+4943,((0x7fU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                       >> 0x24U)))),8);
        tracep->fullBit(oldp+4944,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+4945,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4946,((((QData)((IData)(
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
        tracep->fullCData(oldp+4948,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4949,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4950,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4951,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4952,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4953,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4954,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4955,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4956,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4957,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4958,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4959,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+4960,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+4961,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+4962,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+4963,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe));
        tracep->fullBit(oldp+4964,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe));
        tracep->fullBit(oldp+4965,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe));
        tracep->fullBit(oldp+4966,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe));
        tracep->fullBit(oldp+4967,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe));
        tracep->fullBit(oldp+4968,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe));
        tracep->fullBit(oldp+4969,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe));
        tracep->fullBit(oldp+4970,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe));
        tracep->fullBit(oldp+4971,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe));
        tracep->fullBit(oldp+4972,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe));
        tracep->fullBit(oldp+4973,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe));
        tracep->fullBit(oldp+4974,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe));
        tracep->fullBit(oldp+4975,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe));
        tracep->fullBit(oldp+4976,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe));
        tracep->fullBit(oldp+4977,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe));
        tracep->fullBit(oldp+4978,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe));
        tracep->fullBit(oldp+4979,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe));
        tracep->fullCData(oldp+4980,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync),3);
        tracep->fullCData(oldp+4981,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync),3);
        tracep->fullBit(oldp+4982,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                          >> 2U))));
        tracep->fullCData(oldp+4983,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))),2);
        tracep->fullQData(oldp+4984,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[0]),34);
        tracep->fullQData(oldp+4986,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[1]),34);
        tracep->fullQData(oldp+4988,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[2]),34);
        tracep->fullQData(oldp+4990,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[3]),34);
        tracep->fullCData(oldp+4992,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4993,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4994,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4995,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4996,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4997,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+4998,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+4999,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+5000,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+5001,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullBit(oldp+5002,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n));
        tracep->fullCData(oldp+5003,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_q),3);
        tracep->fullCData(oldp+5004,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_q),7);
        tracep->fullIData(oldp+5005,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_q),32);
        tracep->fullCData(oldp+5006,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_q),2);
        tracep->fullCData(oldp+5007,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q),4);
        tracep->fullCData(oldp+5008,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync),3);
        tracep->fullCData(oldp+5009,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi),3);
        tracep->fullBit(oldp+5010,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                          >> 2U))));
        tracep->fullCData(oldp+5011,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))),2);
        tracep->fullCData(oldp+5012,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync),3);
        tracep->fullQData(oldp+5013,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[0]),41);
        tracep->fullQData(oldp+5015,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[1]),41);
        tracep->fullQData(oldp+5017,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[2]),41);
        tracep->fullQData(oldp+5019,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[3]),41);
        tracep->fullCData(oldp+5021,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi),3);
        tracep->fullBit(oldp+5022,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                          >> 2U))));
        tracep->fullCData(oldp+5023,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))),2);
        tracep->fullCData(oldp+5024,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq),3);
        tracep->fullBit(oldp+5025,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_access));
        tracep->fullBit(oldp+5026,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dtmcs_select));
        tracep->fullBit(oldp+5027,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty)))));
        tracep->fullBit(oldp+5028,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
        tracep->fullBit(oldp+5029,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
        tracep->fullCData(oldp+5030,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr),3);
        tracep->fullCData(oldp+5031,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray),3);
        tracep->fullBit(oldp+5032,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty));
        tracep->fullBit(oldp+5033,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+5034,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))),2);
        tracep->fullBit(oldp+5035,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5036,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5037,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5038,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5039,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5040,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5041,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5042,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5043,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                    [0U][0U])));
        tracep->fullBit(oldp+5044,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5045,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5046,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5047,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5048,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5049,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5050,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5051,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5052,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
                                    [1U][0U])));
        tracep->fullBit(oldp+5053,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5054,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5055,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5056,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5057,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5058,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5059,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5060,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5061,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                 [0U]))));
        tracep->fullBit(oldp+5062,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5063,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5064,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5065,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5066,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5067,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5068,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5069,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5070,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
                                                 [1U]))));
        tracep->fullBit(oldp+5071,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5072,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5073,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5074,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5075,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5076,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5077,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5078,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5079,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                    [0U][0U])));
        tracep->fullBit(oldp+5080,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5081,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5082,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5083,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5084,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5085,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5086,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5087,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5088,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
                                    [1U][0U])));
        tracep->fullBit(oldp+5089,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5090,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5091,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5092,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5093,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5094,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5095,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5096,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5097,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                 [0U]))));
        tracep->fullBit(oldp+5098,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5099,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5100,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5101,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5102,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5103,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5104,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5105,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5106,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
                                                 [1U]))));
        tracep->fullBit(oldp+5107,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5108,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5109,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5110,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5111,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5112,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5113,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5114,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5115,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+5116,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5117,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5118,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5119,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5120,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5121,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5122,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5123,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5124,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+5125,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5126,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5127,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5128,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5129,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5130,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5131,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5132,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5133,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+5134,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5135,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5136,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5137,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5138,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5139,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5140,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5141,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5142,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+5143,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5144,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5145,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5146,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5147,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5148,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5149,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5150,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5151,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5152,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5153,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5154,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5155,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5156,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5157,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5158,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5159,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5160,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+5161,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5162,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5163,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5164,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5165,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5166,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5167,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5168,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5169,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5170,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5171,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5172,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5173,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5174,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5175,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5176,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5177,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5178,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+5179,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest),2);
        tracep->fullCData(oldp+5180,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hgrant),2);
        tracep->fullBit(oldp+5181,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest))));
        tracep->fullBit(oldp+5182,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5183,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5184,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5185,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5186,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5187,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5188,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5189,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5190,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5191,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+5192,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5193,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5194,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5195,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5196,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5197,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5198,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5199,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5200,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5201,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5202,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+5203,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5204,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5205,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5206,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5207,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5208,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5209,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5210,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5211,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5212,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+5213,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5214,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5215,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5216,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5217,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5218,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5219,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5220,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5221,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+5222,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5223,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5224,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5225,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5226,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5227,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5228,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5229,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5230,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5231,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5232,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2688[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2688[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2688[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5233,(__Vtemp2688),85);
        tracep->fullBit(oldp+5236,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5237,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5238,((((QData)((IData)(
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
        tracep->fullBit(oldp+5240,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5241,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5242,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5243,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5244,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5245,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5246,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5247,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5248,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+5249,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5250,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5251,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5252,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5253,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5254,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5255,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5256,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5257,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+5258,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5259,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5260,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5261,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5262,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5263,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5264,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5265,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5266,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+5267,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5268,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2692[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2692[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2692[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5269,(__Vtemp2692),85);
        tracep->fullBit(oldp+5272,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5273,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5274,((((QData)((IData)(
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
        tracep->fullBit(oldp+5276,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullCData(oldp+5277,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+5278,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+5279,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+5280,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+5281,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+5282,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5283,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5284,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5285,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5286,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5287,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5288,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5289,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5290,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+5291,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5292,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5293,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5294,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5295,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5296,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5297,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5298,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5299,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+5300,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5301,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5302,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5303,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5304,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5305,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5306,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5307,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5308,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+5309,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5310,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5311,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5312,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5313,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5314,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5315,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5316,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5317,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+5318,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5319,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5320,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5321,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5322,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5323,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5324,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5325,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5326,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5327,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5328,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5329,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5330,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5331,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5332,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5333,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5334,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5335,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+5336,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5337,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5338,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5339,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5340,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5341,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5342,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5343,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5344,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5345,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5346,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5347,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5348,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5349,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5350,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5351,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5352,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5353,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+5354,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest),2);
        tracep->fullCData(oldp+5355,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hgrant),2);
        tracep->fullBit(oldp+5356,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest))));
        tracep->fullBit(oldp+5357,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5358,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5359,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5360,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5361,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5362,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5363,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5364,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5365,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5366,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+5367,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5368,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5369,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5370,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5371,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5372,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5373,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5374,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5375,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5376,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5377,((1U | (0xfeU & 
                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+5378,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5379,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5380,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5381,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5382,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5383,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5384,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5385,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5386,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5387,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+5388,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5389,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5390,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5391,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5392,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5393,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5394,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5395,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5396,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+5397,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5398,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5399,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5400,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5401,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5402,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5403,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5404,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5405,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5406,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5407,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2736[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2736[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2736[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5408,(__Vtemp2736),85);
        tracep->fullBit(oldp+5411,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5412,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5413,((((QData)((IData)(
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
        tracep->fullBit(oldp+5415,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5416,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5417,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5418,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5419,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5420,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5421,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5422,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5423,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+5424,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5425,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5426,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5427,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5428,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5429,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5430,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5431,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5432,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
        tracep->fullBit(oldp+5433,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5434,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5435,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5436,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5437,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5438,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5439,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5440,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5441,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+5442,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5443,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2740[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2740[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2740[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5444,(__Vtemp2740),85);
        tracep->fullBit(oldp+5447,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5448,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5449,((((QData)((IData)(
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
        tracep->fullBit(oldp+5451,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullCData(oldp+5452,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+5453,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+5454,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+5455,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+5456,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+5457,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullIData(oldp+5458,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3),32);
        tracep->fullIData(oldp+5459,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3),32);
        tracep->fullCData(oldp+5460,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+5461,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+5462,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))),2);
        tracep->fullCData(oldp+5463,((0x7fU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                       >> 0x22U)))),7);
        tracep->fullCData(oldp+5464,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                    >> 0x20U)))),2);
        tracep->fullIData(oldp+5465,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o)),32);
        tracep->fullQData(oldp+5466,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o),41);
        tracep->fullBit(oldp+5468,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5469,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5470,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5471,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5472,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5473,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5474,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5475,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5476,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U])));
        tracep->fullBit(oldp+5477,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we));
        tracep->fullBit(oldp+5478,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re));
        tracep->fullSData(oldp+5479,((0x1fcU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                 << 0x1bU) 
                                                | (0x7fffffcU 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                      >> 5U))))),9);
        tracep->fullIData(oldp+5480,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullCData(oldp+5481,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullBit(oldp+5482,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))))));
        tracep->fullBit(oldp+5483,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+5484,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+5485,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 3U))));
        tracep->fullBit(oldp+5486,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 4U))));
        tracep->fullBit(oldp+5487,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 5U))));
        tracep->fullBit(oldp+5488,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+5489,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+5490,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+5491,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 9U))));
        tracep->fullBit(oldp+5492,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+5493,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+5494,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5495,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+5496,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+5497,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+5498,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+5499,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+5500,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+5501,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+5502,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+5503,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5504,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+5505,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+5506,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+5507,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+5508,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+5509,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+5510,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+5511,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+5512,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+5513,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+5514,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U])));
        tracep->fullCData(oldp+5515,((7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                             << 0x1fU) 
                                            | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+5516,((0x3fU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                  >> 1U)))),6);
        tracep->fullBit(oldp+5517,(((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x24U)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re))));
        tracep->fullQData(oldp+5518,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
        tracep->fullBit(oldp+5520,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        tracep->fullBit(oldp+5521,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        tracep->fullBit(oldp+5522,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                    & (0U != (3U & 
                                              ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                << 0x1bU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+5523,((1U & (~ ((((0U 
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
        tracep->fullBit(oldp+5524,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        tracep->fullBit(oldp+5525,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        tracep->fullBit(oldp+5526,((((0U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+5527,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+5528,((0U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+5529,((1U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+5530,((4U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+5531,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+5532,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+5533,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+5534,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullBit(oldp+5535,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5536,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5537,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5538,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5539,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5540,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5541,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5542,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5543,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5544,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5545,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5546,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5547,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5548,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5549,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5550,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5551,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5552,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullCData(oldp+5553,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrequest),2);
        tracep->fullBit(oldp+5554,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5555,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5556,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5557,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5558,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5559,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5560,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5561,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5562,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+5563,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrequest))));
        tracep->fullBit(oldp+5564,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5565,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5566,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5567,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5568,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5569,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5570,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5571,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5572,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+5573,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+5574,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+5575,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2762[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U]);
        __Vtemp2762[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[1U]));
        __Vtemp2762[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+5576,(__Vtemp2762),85);
        tracep->fullBit(oldp+5579,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+5580,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+5583,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+5586,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+5589,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+5590,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+5591,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+5592,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+5593,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+5594,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))));
        tracep->fullBit(oldp+5595,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 2U))));
        tracep->fullBit(oldp+5596,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 7U))));
        tracep->fullBit(oldp+5597,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 8U))));
        tracep->fullBit(oldp+5598,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 9U))));
        tracep->fullBit(oldp+5599,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xaU))));
        tracep->fullBit(oldp+5600,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xbU))));
        tracep->fullBit(oldp+5601,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xcU))));
        tracep->fullBit(oldp+5602,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xdU))));
        tracep->fullBit(oldp+5603,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xeU))));
        tracep->fullBit(oldp+5604,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xfU))));
        tracep->fullBit(oldp+5605,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x10U))));
        tracep->fullBit(oldp+5606,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x11U))));
        tracep->fullBit(oldp+5607,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x12U))));
        tracep->fullBit(oldp+5608,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x13U))));
        tracep->fullBit(oldp+5609,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x14U))));
        tracep->fullBit(oldp+5610,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x15U))));
        tracep->fullBit(oldp+5611,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+5612,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x17U))));
        tracep->fullBit(oldp+5613,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x18U))));
        tracep->fullBit(oldp+5614,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x19U))));
        tracep->fullBit(oldp+5615,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1aU))));
        tracep->fullBit(oldp+5616,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1bU))));
        tracep->fullBit(oldp+5617,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1cU))));
        tracep->fullBit(oldp+5618,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1dU))));
        tracep->fullBit(oldp+5619,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1eU))));
        tracep->fullBit(oldp+5620,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1fU))));
        tracep->fullBit(oldp+5621,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                                    & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U])));
        tracep->fullCData(oldp+5622,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5623,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5624,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5625,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5626,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5627,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5628,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5629,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5630,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5631,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5632,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5633,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5634,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5635,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5636,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5637,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5638,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5639,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5640,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5641,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5642,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5643,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5644,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5645,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5646,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5647,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5648,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5649,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5650,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5651,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+5652,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullBit(oldp+5653,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))));
        tracep->fullBit(oldp+5654,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 2U))));
        tracep->fullBit(oldp+5655,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 3U))));
        tracep->fullBit(oldp+5656,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 4U))));
        tracep->fullBit(oldp+5657,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 5U))));
        tracep->fullBit(oldp+5658,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 6U))));
        tracep->fullBit(oldp+5659,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 7U))));
        tracep->fullBit(oldp+5660,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we)
                                           ? (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                              >> 8U)
                                           : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d)))));
        tracep->fullBit(oldp+5661,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 9U))));
        tracep->fullBit(oldp+5662,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xaU))));
        tracep->fullBit(oldp+5663,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xbU))));
        tracep->fullBit(oldp+5664,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xcU))));
        tracep->fullBit(oldp+5665,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xdU))));
        tracep->fullBit(oldp+5666,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xeU))));
        tracep->fullBit(oldp+5667,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xfU))));
        tracep->fullBit(oldp+5668,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x10U))));
        tracep->fullBit(oldp+5669,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x11U))));
        tracep->fullBit(oldp+5670,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x12U))));
        tracep->fullBit(oldp+5671,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x13U))));
        tracep->fullBit(oldp+5672,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x14U))));
        tracep->fullBit(oldp+5673,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x15U))));
        tracep->fullBit(oldp+5674,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+5675,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x17U))));
        tracep->fullBit(oldp+5676,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x18U))));
        tracep->fullBit(oldp+5677,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x19U))));
        tracep->fullBit(oldp+5678,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1aU))));
        tracep->fullBit(oldp+5679,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1bU))));
        tracep->fullBit(oldp+5680,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1cU))));
        tracep->fullBit(oldp+5681,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1dU))));
        tracep->fullBit(oldp+5682,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1eU))));
        tracep->fullBit(oldp+5683,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1fU))));
        tracep->fullBit(oldp+5684,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) 
                                    & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U])));
        tracep->fullCData(oldp+5685,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                                       ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullBit(oldp+5686,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))));
        tracep->fullBit(oldp+5687,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5688,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5689,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5690,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5691,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5692,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5693,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5694,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5695,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U])));
        tracep->fullIData(oldp+5696,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                       << 0x15U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                       >> 0xbU))),32);
        tracep->fullIData(oldp+5697,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                       << 0x15U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                       >> 0xbU))),32);
        tracep->fullIData(oldp+5698,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                       << 0x15U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                       >> 0xbU))),32);
        tracep->fullBit(oldp+5699,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                          >> 0xaU))));
        tracep->fullIData(oldp+5700,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                       << 0x16U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                       >> 0xaU))),32);
        tracep->fullBit(oldp+5701,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                          >> 9U))));
        tracep->fullSData(oldp+5702,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                                  << 7U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                    >> 0x19U)))),16);
        tracep->fullBit(oldp+5703,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                          >> 0x18U))));
        tracep->fullSData(oldp+5704,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                    >> 8U)))),16);
        tracep->fullBit(oldp+5705,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                          >> 7U))));
        tracep->fullSData(oldp+5706,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                  << 9U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                                    >> 0x17U)))),16);
        tracep->fullBit(oldp+5707,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                          >> 0x16U))));
        tracep->fullSData(oldp+5708,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                                    >> 6U)))),16);
        tracep->fullBit(oldp+5709,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                          >> 5U))));
        tracep->fullIData(oldp+5710,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                       >> 5U))),32);
        tracep->fullBit(oldp+5711,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                          >> 4U))));
        tracep->fullSData(oldp+5712,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                    >> 0x14U)))),16);
        tracep->fullBit(oldp+5713,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                          >> 0x13U))));
        tracep->fullSData(oldp+5714,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                    >> 3U)))),16);
        tracep->fullBit(oldp+5715,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                          >> 2U))));
        tracep->fullSData(oldp+5716,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                                    >> 0x12U)))),16);
        tracep->fullBit(oldp+5717,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                          >> 0x11U))));
        tracep->fullSData(oldp+5718,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                                    >> 1U)))),16);
        tracep->fullBit(oldp+5719,((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U])));
        tracep->fullIData(oldp+5720,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]),32);
        tracep->fullIData(oldp+5721,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U]),32);
        tracep->fullIData(oldp+5722,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]),32);
        tracep->fullIData(oldp+5723,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U]),32);
        tracep->fullIData(oldp+5724,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U]),32);
        tracep->fullIData(oldp+5725,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d),32);
        tracep->fullIData(oldp+5726,(((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])),32);
        tracep->fullIData(oldp+5727,((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U])),32);
        tracep->fullIData(oldp+5728,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                       << 0x15U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                       >> 0xbU))),32);
        tracep->fullIData(oldp+5729,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                       << 0x15U) | 
                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                       >> 0xbU))),32);
        tracep->fullBit(oldp+5730,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we));
        tracep->fullBit(oldp+5731,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re));
        tracep->fullCData(oldp+5732,((0x3cU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                << 0x1bU) 
                                               | (0x7fffffcU 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                     >> 5U))))),6);
        tracep->fullIData(oldp+5733,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullCData(oldp+5734,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullBit(oldp+5735,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))))) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))));
        tracep->fullBit(oldp+5736,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)))))));
        tracep->fullBit(oldp+5737,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err));
        tracep->fullBit(oldp+5738,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+5739,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+5740,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+5741,((0x3ffU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                   >> 1U)))),10);
        tracep->fullBit(oldp+5742,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+5743,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+5744,((0xfc00U | (0x3ffU 
                                                 & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                     << 0x15U) 
                                                    | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                       >> 0xbU))))),16);
        tracep->fullSData(oldp+5745,((0xffffU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                    >> 1U)))),16);
        tracep->fullBit(oldp+5746,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+5747,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+5748,((0xffffU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                  << 0xfU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                    >> 0x11U)))),16);
        tracep->fullBit(oldp+5749,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+5750,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullBit(oldp+5751,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+5752,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullBit(oldp+5753,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+5754,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+5755,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit),15);
        tracep->fullBit(oldp+5756,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        tracep->fullBit(oldp+5757,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        tracep->fullBit(oldp+5758,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                    & (0U != (3U & 
                                              ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                << 0x1bU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+5759,((1U & (~ ((((0U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                    >> 0x12U))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                      >> 0x12U)))) 
                                              | (4U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                             & (((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                                & (((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                         >> 0x12U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                           >> 0x12U)))) 
                                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->fullBit(oldp+5760,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        tracep->fullBit(oldp+5761,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        tracep->fullBit(oldp+5762,((((0U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+5763,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+5764,((0U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+5765,((1U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+5766,((4U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+5767,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+5768,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+5769,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+5770,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullSData(oldp+5771,((0x3ffU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                   >> 1U)))),16);
        tracep->fullBit(oldp+5772,((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])));
        tracep->fullBit(oldp+5773,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+5774,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+5775,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 3U))));
        tracep->fullBit(oldp+5776,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 4U))));
        tracep->fullBit(oldp+5777,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 5U))));
        tracep->fullBit(oldp+5778,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+5779,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+5780,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+5781,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 9U))));
        tracep->fullBit(oldp+5782,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+5783,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+5784,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5785,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+5786,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+5787,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+5788,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+5789,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+5790,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+5791,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+5792,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+5793,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5794,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+5795,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+5796,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+5797,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+5798,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+5799,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+5800,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+5801,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+5802,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+5803,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+5804,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5805,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5806,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5807,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5808,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5809,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5810,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5811,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5812,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+5813,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5814,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5815,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5816,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5817,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5818,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5819,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5820,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5821,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+5822,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+5823,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+5824,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2766[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U]);
        __Vtemp2766[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U]));
        __Vtemp2766[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+5825,(__Vtemp2766),85);
        tracep->fullBit(oldp+5828,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+5829,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+5832,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+5835,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullIData(oldp+5838,((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                      | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                            >> 0xbU)))),32);
        tracep->fullIData(oldp+5839,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullIData(oldp+5840,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullIData(oldp+5841,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullIData(oldp+5842,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullIData(oldp+5843,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullIData(oldp+5844,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullCData(oldp+5845,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0]),3);
        tracep->fullCData(oldp+5846,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[1]),3);
        tracep->fullCData(oldp+5847,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[2]),3);
        tracep->fullCData(oldp+5848,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[3]),3);
        tracep->fullCData(oldp+5849,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[4]),3);
        tracep->fullCData(oldp+5850,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[5]),3);
        tracep->fullCData(oldp+5851,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[6]),3);
        tracep->fullCData(oldp+5852,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[7]),3);
        tracep->fullCData(oldp+5853,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[8]),3);
        tracep->fullCData(oldp+5854,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[9]),3);
        tracep->fullCData(oldp+5855,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[10]),3);
        tracep->fullCData(oldp+5856,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[11]),3);
        tracep->fullCData(oldp+5857,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[12]),3);
        tracep->fullCData(oldp+5858,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[13]),3);
        tracep->fullCData(oldp+5859,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[14]),3);
        tracep->fullCData(oldp+5860,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[15]),3);
        tracep->fullCData(oldp+5861,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[16]),3);
        tracep->fullCData(oldp+5862,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[17]),3);
        tracep->fullCData(oldp+5863,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[18]),3);
        tracep->fullCData(oldp+5864,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[19]),3);
        tracep->fullCData(oldp+5865,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[20]),3);
        tracep->fullCData(oldp+5866,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[21]),3);
        tracep->fullCData(oldp+5867,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[22]),3);
        tracep->fullCData(oldp+5868,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[23]),3);
        tracep->fullCData(oldp+5869,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[24]),3);
        tracep->fullCData(oldp+5870,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[25]),3);
        tracep->fullCData(oldp+5871,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[26]),3);
        tracep->fullCData(oldp+5872,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[27]),3);
        tracep->fullCData(oldp+5873,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[28]),3);
        tracep->fullCData(oldp+5874,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[29]),3);
        tracep->fullCData(oldp+5875,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[30]),3);
        tracep->fullCData(oldp+5876,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[31]),3);
        tracep->fullCData(oldp+5877,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0]),3);
        tracep->fullCData(oldp+5878,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[1]),3);
        tracep->fullCData(oldp+5879,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[2]),3);
        tracep->fullCData(oldp+5880,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[3]),3);
        tracep->fullCData(oldp+5881,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[4]),3);
        tracep->fullCData(oldp+5882,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[5]),3);
        tracep->fullCData(oldp+5883,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[6]),3);
        tracep->fullCData(oldp+5884,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[7]),3);
        tracep->fullCData(oldp+5885,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[8]),3);
        tracep->fullCData(oldp+5886,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[9]),3);
        tracep->fullCData(oldp+5887,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[10]),3);
        tracep->fullCData(oldp+5888,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[11]),3);
        tracep->fullCData(oldp+5889,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[12]),3);
        tracep->fullCData(oldp+5890,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[13]),3);
        tracep->fullCData(oldp+5891,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[14]),3);
        tracep->fullCData(oldp+5892,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[15]),3);
        tracep->fullCData(oldp+5893,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[16]),3);
        tracep->fullCData(oldp+5894,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[17]),3);
        tracep->fullCData(oldp+5895,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[18]),3);
        tracep->fullCData(oldp+5896,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[19]),3);
        tracep->fullCData(oldp+5897,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[20]),3);
        tracep->fullCData(oldp+5898,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[21]),3);
        tracep->fullCData(oldp+5899,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[22]),3);
        tracep->fullCData(oldp+5900,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[23]),3);
        tracep->fullCData(oldp+5901,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[24]),3);
        tracep->fullCData(oldp+5902,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[25]),3);
        tracep->fullCData(oldp+5903,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[26]),3);
        tracep->fullCData(oldp+5904,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[27]),3);
        tracep->fullCData(oldp+5905,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[28]),3);
        tracep->fullCData(oldp+5906,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[29]),3);
        tracep->fullCData(oldp+5907,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[30]),3);
        tracep->fullCData(oldp+5908,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[31]),3);
        tracep->fullCData(oldp+5909,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U])),3);
        tracep->fullCData(oldp+5910,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0x1dU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 3U)))),3);
        tracep->fullCData(oldp+5911,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0x1aU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 6U)))),3);
        tracep->fullCData(oldp+5912,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0x17U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+5913,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0x14U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0xcU)))),3);
        tracep->fullCData(oldp+5914,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0x11U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0xfU)))),3);
        tracep->fullCData(oldp+5915,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0xeU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0x12U)))),3);
        tracep->fullCData(oldp+5916,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 0xbU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0x15U)))),3);
        tracep->fullCData(oldp+5917,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 8U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0x18U)))),3);
        tracep->fullCData(oldp+5918,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 5U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0x1bU)))),3);
        tracep->fullCData(oldp+5919,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 2U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0x1eU)))),3);
        tracep->fullCData(oldp+5920,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+5921,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x1cU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 4U)))),3);
        tracep->fullCData(oldp+5922,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x19U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 7U)))),3);
        tracep->fullCData(oldp+5923,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x16U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0xaU)))),3);
        tracep->fullCData(oldp+5924,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x13U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+5925,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+5926,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0xdU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x13U)))),3);
        tracep->fullCData(oldp+5927,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0xaU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x16U)))),3);
        tracep->fullCData(oldp+5928,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 7U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x19U)))),3);
        tracep->fullCData(oldp+5929,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 4U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x1cU)))),3);
        tracep->fullCData(oldp+5930,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 1U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                               >> 0x1fU)))),3);
        tracep->fullCData(oldp+5931,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0x1eU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 2U)))),3);
        tracep->fullCData(oldp+5932,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0x1bU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 5U)))),3);
        tracep->fullCData(oldp+5933,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0x18U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 8U)))),3);
        tracep->fullCData(oldp+5934,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0x15U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0xbU)))),3);
        tracep->fullCData(oldp+5935,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0x12U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0xeU)))),3);
        tracep->fullCData(oldp+5936,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0xfU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0x11U)))),3);
        tracep->fullCData(oldp+5937,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 0xcU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0x14U)))),3);
        tracep->fullCData(oldp+5938,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 9U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0x17U)))),3);
        tracep->fullCData(oldp+5939,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 6U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0x1aU)))),3);
        tracep->fullCData(oldp+5940,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 3U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0x1dU)))),3);
        tracep->fullCData(oldp+5941,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U])),3);
        tracep->fullCData(oldp+5942,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x1dU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 3U)))),3);
        tracep->fullCData(oldp+5943,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x1aU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 6U)))),3);
        tracep->fullCData(oldp+5944,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x17U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+5945,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x14U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0xcU)))),3);
        tracep->fullCData(oldp+5946,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x11U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0xfU)))),3);
        tracep->fullCData(oldp+5947,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0xeU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0x12U)))),3);
        tracep->fullCData(oldp+5948,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0xbU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0x15U)))),3);
        tracep->fullCData(oldp+5949,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 8U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0x18U)))),3);
        tracep->fullCData(oldp+5950,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 5U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0x1bU)))),3);
        tracep->fullCData(oldp+5951,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 2U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                               >> 0x1eU)))),3);
        tracep->fullCData(oldp+5952,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x1fU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+5953,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x1cU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 4U)))),3);
        tracep->fullCData(oldp+5954,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x19U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 7U)))),3);
        tracep->fullCData(oldp+5955,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x16U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0xaU)))),3);
        tracep->fullCData(oldp+5956,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x13U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+5957,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+5958,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0xdU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x13U)))),3);
        tracep->fullCData(oldp+5959,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0xaU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x16U)))),3);
        tracep->fullCData(oldp+5960,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 7U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x19U)))),3);
        tracep->fullCData(oldp+5961,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 4U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x1cU)))),3);
        tracep->fullCData(oldp+5962,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 1U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0x1fU)))),3);
        tracep->fullCData(oldp+5963,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 2U))),3);
        tracep->fullCData(oldp+5964,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 5U))),3);
        tracep->fullCData(oldp+5965,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 8U))),3);
        tracep->fullCData(oldp+5966,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0xbU))),3);
        tracep->fullCData(oldp+5967,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0xeU))),3);
        tracep->fullCData(oldp+5968,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0x11U))),3);
        tracep->fullCData(oldp+5969,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0x14U))),3);
        tracep->fullCData(oldp+5970,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0x17U))),3);
        tracep->fullCData(oldp+5971,((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                            >> 0x1aU))),3);
        tracep->fullBit(oldp+5972,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5973,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5974,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5975,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5976,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5977,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5978,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5979,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5980,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5981,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5982,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5983,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5984,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5985,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5986,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5987,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5988,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5989,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5990,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5991,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5992,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5993,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5994,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5995,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5996,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5997,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5998,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+5999,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6000,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6001,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullBit(oldp+6002,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel));
        tracep->fullCData(oldp+6003,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])),6);
        tracep->fullCData(oldp+6004,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                  >> 6U)))),6);
        tracep->fullCData(oldp+6005,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+6006,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                  >> 0x12U)))),6);
        tracep->fullCData(oldp+6007,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                  >> 0x18U)))),6);
        tracep->fullCData(oldp+6008,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                  >> 0x1eU)))),6);
        tracep->fullCData(oldp+6009,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 4U)))),6);
        tracep->fullCData(oldp+6010,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 0xaU)))),6);
        tracep->fullCData(oldp+6011,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 0x10U)))),6);
        tracep->fullCData(oldp+6012,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 0x16U)))),6);
        tracep->fullCData(oldp+6013,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 0x1cU)))),6);
        tracep->fullCData(oldp+6014,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                  >> 2U)))),6);
        tracep->fullCData(oldp+6015,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                  >> 8U)))),6);
        tracep->fullCData(oldp+6016,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                  >> 0xeU)))),6);
        tracep->fullCData(oldp+6017,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                  >> 0x14U)))),6);
        tracep->fullCData(oldp+6018,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                  >> 0x1aU)))),6);
        tracep->fullCData(oldp+6019,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U])),6);
        tracep->fullCData(oldp+6020,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                  >> 6U)))),6);
        tracep->fullCData(oldp+6021,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+6022,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                  >> 0x12U)))),6);
        tracep->fullCData(oldp+6023,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                  >> 0x18U)))),6);
        tracep->fullCData(oldp+6024,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                  >> 0x1eU)))),6);
        tracep->fullCData(oldp+6025,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                  >> 4U)))),6);
        tracep->fullCData(oldp+6026,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                  >> 0xaU)))),6);
        tracep->fullCData(oldp+6027,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                  >> 0x10U)))),6);
        tracep->fullCData(oldp+6028,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                  >> 0x16U)))),6);
        tracep->fullCData(oldp+6029,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                  >> 0x1cU)))),6);
        tracep->fullCData(oldp+6030,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                  >> 2U)))),6);
        tracep->fullCData(oldp+6031,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                  >> 8U)))),6);
        tracep->fullCData(oldp+6032,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                  >> 0xeU)))),6);
        tracep->fullCData(oldp+6033,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                  >> 0x14U)))),6);
        tracep->fullCData(oldp+6034,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                  >> 0x1aU)))),6);
        tracep->fullCData(oldp+6035,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U])),6);
        tracep->fullCData(oldp+6036,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                  >> 6U)))),6);
        tracep->fullCData(oldp+6037,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+6038,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                  >> 0x12U)))),6);
        tracep->fullCData(oldp+6039,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                  >> 0x18U)))),6);
        tracep->fullCData(oldp+6040,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                  >> 0x1eU)))),6);
        tracep->fullCData(oldp+6041,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 4U)))),6);
        tracep->fullCData(oldp+6042,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 0xaU)))),6);
        tracep->fullCData(oldp+6043,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 0x10U)))),6);
        tracep->fullCData(oldp+6044,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 0x16U)))),6);
        tracep->fullCData(oldp+6045,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 0x1cU)))),6);
        tracep->fullCData(oldp+6046,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                  >> 2U)))),6);
        tracep->fullCData(oldp+6047,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                  >> 8U)))),6);
        tracep->fullCData(oldp+6048,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                  >> 0xeU)))),6);
        tracep->fullCData(oldp+6049,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                  >> 0x14U)))),6);
        tracep->fullCData(oldp+6050,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                  >> 0x1aU)))),6);
        tracep->fullCData(oldp+6051,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U])),6);
        tracep->fullCData(oldp+6052,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                  >> 6U)))),6);
        tracep->fullCData(oldp+6053,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                  >> 0xcU)))),6);
        tracep->fullCData(oldp+6054,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                  >> 0x12U)))),6);
        tracep->fullCData(oldp+6055,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                  >> 0x18U)))),6);
        tracep->fullCData(oldp+6056,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                  >> 0x1eU)))),6);
        tracep->fullCData(oldp+6057,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                  >> 4U)))),6);
        tracep->fullCData(oldp+6058,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                  >> 0xaU)))),6);
        tracep->fullCData(oldp+6059,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                  >> 0x10U)))),6);
        tracep->fullCData(oldp+6060,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                  >> 0x16U)))),6);
        tracep->fullCData(oldp+6061,((0x3fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                  >> 0x1cU)))),6);
        tracep->fullCData(oldp+6062,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                               >> 2U))),6);
        tracep->fullCData(oldp+6063,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                               >> 8U))),6);
        tracep->fullCData(oldp+6064,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                               >> 0xeU))),6);
        tracep->fullCData(oldp+6065,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                               >> 0x14U))),6);
        tracep->fullBit(oldp+6066,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6067,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6068,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6069,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6070,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6071,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6072,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6073,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6074,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__err_resp__tl_h_o))));
        tracep->fullBit(oldp+6075,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6076,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6077,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6078,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6079,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6080,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6081,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6082,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6083,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o))));
        tracep->fullBit(oldp+6084,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o))));
        tracep->fullBit(oldp+6085,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullIData(oldp+6086,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6087,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6088,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err));
        tracep->fullBit(oldp+6089,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err));
        tracep->fullBit(oldp+6090,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb));
        tracep->fullBit(oldp+6091,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en));
        tracep->fullBit(oldp+6092,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done));
        tracep->fullBit(oldp+6093,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready));
        tracep->fullBit(oldp+6094,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
        tracep->fullBit(oldp+6095,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err))));
        tracep->fullBit(oldp+6096,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
        tracep->fullBit(oldp+6097,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))));
        tracep->fullBit(oldp+6098,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
        tracep->fullBit(oldp+6099,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception));
        tracep->fullBit(oldp+6100,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing));
        tracep->fullBit(oldp+6101,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem));
        tracep->fullBit(oldp+6102,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
        tracep->fullBit(oldp+6103,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
        tracep->fullBit(oldp+6104,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
        tracep->fullBit(oldp+6105,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
        tracep->fullBit(oldp+6106,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)))));
        tracep->fullBit(oldp+6107,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
        tracep->fullBit(oldp+6108,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access)))));
        tracep->fullBit(oldp+6109,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush));
        tracep->fullBit(oldp+6110,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
        tracep->fullBit(oldp+6111,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access));
        tracep->fullBit(oldp+6112,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill));
        tracep->fullBit(oldp+6113,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall));
        tracep->fullBit(oldp+6114,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
        tracep->fullBit(oldp+6115,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
        tracep->fullBit(oldp+6116,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err))));
        tracep->fullBit(oldp+6117,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
        tracep->fullBit(oldp+6118,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending));
        tracep->fullBit(oldp+6119,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
        tracep->fullBit(oldp+6120,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
        tracep->fullBit(oldp+6121,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
        tracep->fullCData(oldp+6122,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
        tracep->fullBit(oldp+6123,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done));
        tracep->fullBit(oldp+6124,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
        tracep->fullBit(oldp+6125,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d));
        tracep->fullBit(oldp+6126,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6127,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6128,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6129,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6130,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6131,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6132,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6133,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6134,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0U]))));
        tracep->fullBit(oldp+6135,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6136,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6137,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6138,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6139,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6140,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6141,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6142,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6143,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [1U]))));
        tracep->fullBit(oldp+6144,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6145,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6146,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6147,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6148,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6149,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6150,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6151,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6152,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [2U]))));
        tracep->fullBit(oldp+6153,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6154,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6155,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6156,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6157,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6158,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6159,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6160,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6161,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [3U]))));
        tracep->fullBit(oldp+6162,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6163,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6164,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6165,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6166,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6167,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6168,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6169,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6170,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [4U]))));
        tracep->fullBit(oldp+6171,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6172,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6173,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6174,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6175,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6176,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6177,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6178,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6179,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [5U]))));
        tracep->fullBit(oldp+6180,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6181,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6182,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6183,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6184,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6185,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6186,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6187,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6188,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [6U]))));
        tracep->fullBit(oldp+6189,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6190,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6191,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6192,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6193,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6194,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6195,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6196,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6197,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [7U]))));
        tracep->fullBit(oldp+6198,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6199,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6200,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6201,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6202,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6203,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6204,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6205,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6206,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [8U]))));
        tracep->fullBit(oldp+6207,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6208,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6209,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6210,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6211,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6212,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6213,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6214,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6215,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [9U]))));
        tracep->fullBit(oldp+6216,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6217,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6218,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6219,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6220,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6221,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6222,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6223,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6224,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
                                                 [0xaU]))));
        tracep->fullBit(oldp+6225,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6226,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6227,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6228,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6229,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6230,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6231,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6232,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6233,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                 [0U]))));
        tracep->fullBit(oldp+6234,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6235,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6236,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6237,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6238,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6239,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6240,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6241,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6242,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
                                                 [1U]))));
        tracep->fullBit(oldp+6243,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6244,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6245,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6246,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6247,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6248,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6249,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6250,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6251,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+6252,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6253,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6254,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6255,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6256,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6257,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6258,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6259,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6260,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+6261,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6262,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6263,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6264,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6265,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6266,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6267,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6268,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6269,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+6270,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6271,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6272,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6273,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6274,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6275,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6276,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6277,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6278,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+6279,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6280,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6281,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6282,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6283,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6284,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6285,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6286,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6287,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+6288,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6289,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6290,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6291,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6292,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6293,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6294,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6295,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6296,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+6297,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6298,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6299,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6300,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6301,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6302,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6303,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6304,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6305,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+6306,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6307,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6308,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6309,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6310,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6311,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6312,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6313,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6314,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+6315,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6316,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6317,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6318,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6319,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6320,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6321,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6322,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6323,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+6324,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6325,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6326,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6327,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6328,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6329,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6330,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6331,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6332,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+6333,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6334,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6335,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6336,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6337,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6338,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6339,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6340,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6341,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+6342,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6343,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6344,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6345,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6346,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6347,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6348,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6349,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6350,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i))));
        tracep->fullBit(oldp+6351,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__accept_t_req));
        tracep->fullBit(oldp+6352,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__accept_t_rsp));
        tracep->fullBit(oldp+6353,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6354,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6355,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6356,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6357,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6358,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6359,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6360,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6361,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [0U]))));
        tracep->fullBit(oldp+6362,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6363,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6364,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6365,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6366,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6367,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6368,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6369,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6370,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [1U]))));
        tracep->fullBit(oldp+6371,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6372,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6373,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6374,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6375,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6376,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6377,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6378,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6379,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [2U]))));
        tracep->fullBit(oldp+6380,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6381,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6382,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6383,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6384,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6385,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6386,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6387,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6388,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [3U]))));
        tracep->fullBit(oldp+6389,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6390,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6391,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6392,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6393,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6394,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6395,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6396,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6397,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [4U]))));
        tracep->fullBit(oldp+6398,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6399,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6400,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6401,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6402,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6403,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6404,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6405,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6406,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [5U]))));
        tracep->fullBit(oldp+6407,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6408,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6409,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6410,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6411,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6412,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6413,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6414,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6415,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [6U]))));
        tracep->fullBit(oldp+6416,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6417,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6418,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6419,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6420,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6421,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6422,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6423,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6424,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [7U]))));
        tracep->fullBit(oldp+6425,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6426,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6427,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6428,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6429,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6430,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6431,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6432,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6433,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [8U]))));
        tracep->fullBit(oldp+6434,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6435,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6436,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6437,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6438,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6439,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6440,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6441,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6442,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [9U]))));
        tracep->fullBit(oldp+6443,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6444,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6445,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6446,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6447,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6448,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6449,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6450,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6451,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+6452,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6453,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6454,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6455,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6456,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6457,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6458,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6459,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6460,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+6461,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6462,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6463,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6464,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6465,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6466,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6467,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6468,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6469,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_p))));
        tracep->fullBit(oldp+6470,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__hfifo_reqready));
        tracep->fullBit(oldp+6471,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i))));
        tracep->fullBit(oldp+6472,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6473,((((QData)((IData)(
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
        tracep->fullBit(oldp+6475,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6476,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6477,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6478,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6479,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6480,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6481,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6482,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6483,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6484,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6485,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6486,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6487,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6488,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6489,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6490,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6491,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6492,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+6493,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+6494,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6495,((((QData)((IData)(
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
        tracep->fullBit(oldp+6497,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6498,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6499,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6500,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6501,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6502,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6503,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6504,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6505,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6506,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6507,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6508,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6509,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6510,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6511,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6512,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6513,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6514,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+6515,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+6516,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6517,((((QData)((IData)(
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
        tracep->fullBit(oldp+6519,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6520,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6521,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6522,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6523,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6524,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6525,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6526,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6527,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6528,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6529,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6530,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6531,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6532,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6533,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6534,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6535,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6536,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+6537,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+6538,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6539,((((QData)((IData)(
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
        tracep->fullBit(oldp+6541,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6542,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6543,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6544,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6545,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6546,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6547,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6548,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6549,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6550,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6551,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6552,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6553,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6554,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6555,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6556,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6557,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6558,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+6559,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+6560,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6561,((((QData)((IData)(
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
        tracep->fullBit(oldp+6563,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6564,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6565,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6566,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6567,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6568,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6569,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6570,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6571,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6572,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6573,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6574,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6575,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6576,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6577,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6578,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6579,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6580,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+6581,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+6582,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6583,((((QData)((IData)(
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
        tracep->fullBit(oldp+6585,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6586,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6587,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6588,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6589,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6590,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6591,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6592,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6593,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6594,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6595,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6596,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6597,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6598,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6599,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6600,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6601,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6602,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+6603,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+6604,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6605,((((QData)((IData)(
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
        tracep->fullBit(oldp+6607,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6608,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6609,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6610,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6611,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6612,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6613,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6614,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6615,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6616,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6617,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6618,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6619,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6620,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6621,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6622,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6623,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6624,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+6625,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+6626,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6627,((((QData)((IData)(
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
        tracep->fullBit(oldp+6629,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6630,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6631,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6632,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6633,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6634,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6635,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6636,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6637,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6638,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6639,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6640,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6641,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6642,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6643,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6644,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6645,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6646,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+6647,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+6648,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6649,((((QData)((IData)(
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
        tracep->fullBit(oldp+6651,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6652,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6653,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6654,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6655,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6656,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6657,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6658,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6659,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6660,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6661,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6662,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6663,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6664,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6665,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6666,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6667,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6668,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+6669,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+6670,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6671,((((QData)((IData)(
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
        tracep->fullBit(oldp+6673,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6674,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6675,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6676,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6677,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6678,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6679,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6680,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6681,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6682,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6683,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6684,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6685,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6686,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6687,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6688,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6689,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6690,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+6691,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+6692,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6693,((((QData)((IData)(
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
        tracep->fullBit(oldp+6695,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6696,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6697,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6698,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6699,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6700,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6701,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6702,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6703,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+6704,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6705,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6706,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6707,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6708,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6709,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6710,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6711,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6712,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+6713,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+6714,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6715,((((QData)((IData)(
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
        tracep->fullBit(oldp+6717,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6718,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6719,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6720,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6721,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6722,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6723,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6724,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6725,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+6726,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6727,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6728,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6729,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6730,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6731,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6732,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6733,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6734,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+6735,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6736,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6737,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6738,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6739,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6740,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6741,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6742,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6743,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+6744,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6745,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6746,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6747,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6748,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6749,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6750,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6751,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6752,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+6753,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hgrant),2);
        tracep->fullBit(oldp+6754,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6755,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6756,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6757,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6758,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6759,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6760,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6761,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6762,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+6763,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6764,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6765,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6766,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6767,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6768,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6769,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6770,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6771,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+6772,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+6773,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6774,((((QData)((IData)(
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
        tracep->fullBit(oldp+6776,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6777,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6778,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6779,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6780,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6781,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6782,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6783,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6784,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
        tracep->fullBit(oldp+6785,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6786,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6787,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6788,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6789,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6790,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6791,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6792,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6793,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+6794,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+6795,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+6796,((((QData)((IData)(
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
        tracep->fullBit(oldp+6798,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullCData(oldp+6799,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
        tracep->fullBit(oldp+6800,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
        tracep->fullCData(oldp+6801,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
        tracep->fullBit(oldp+6802,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
        tracep->fullBit(oldp+6803,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
        tracep->fullBit(oldp+6804,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
        tracep->fullBit(oldp+6805,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
        tracep->fullBit(oldp+6806,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
        tracep->fullBit(oldp+6807,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
        tracep->fullBit(oldp+6808,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
        tracep->fullBit(oldp+6809,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
        tracep->fullBit(oldp+6810,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
        tracep->fullBit(oldp+6811,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
        tracep->fullIData(oldp+6812,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
        tracep->fullBit(oldp+6813,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
        tracep->fullBit(oldp+6814,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
        tracep->fullCData(oldp+6815,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6816,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+6817,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6818,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+6819,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6820,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+6821,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6822,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+6823,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe));
        tracep->fullBit(oldp+6824,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe));
        tracep->fullBit(oldp+6825,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe));
        tracep->fullBit(oldp+6826,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe));
        tracep->fullBit(oldp+6827,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe));
        tracep->fullBit(oldp+6828,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe));
        tracep->fullBit(oldp+6829,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe));
        tracep->fullBit(oldp+6830,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe));
        tracep->fullBit(oldp+6831,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe));
        tracep->fullBit(oldp+6832,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe));
        tracep->fullBit(oldp+6833,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe));
        tracep->fullBit(oldp+6834,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe));
        tracep->fullBit(oldp+6835,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe));
        tracep->fullBit(oldp+6836,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe));
        tracep->fullBit(oldp+6837,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe));
        tracep->fullBit(oldp+6838,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe));
        tracep->fullBit(oldp+6839,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe));
        tracep->fullBit(oldp+6840,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe));
        tracep->fullBit(oldp+6841,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__CLK_SEL));
        tracep->fullCData(oldp+6842,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+6843,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+6844,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+6845,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+6846,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+6847,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+6848,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+6849,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullBit(oldp+6850,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni));
        tracep->fullBit(oldp+6851,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__test_logic_reset));
        tracep->fullBit(oldp+6852,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__shift_dr));
        tracep->fullBit(oldp+6853,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__update_dr));
        tracep->fullBit(oldp+6854,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__capture_dr));
        tracep->fullCData(oldp+6855,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_d),3);
        tracep->fullQData(oldp+6856,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_d),41);
        tracep->fullCData(oldp+6858,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_d),7);
        tracep->fullIData(oldp+6859,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_d),32);
        tracep->fullBit(oldp+6860,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_dmi_busy));
        tracep->fullCData(oldp+6861,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_d),2);
        tracep->fullCData(oldp+6862,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
        tracep->fullCData(oldp+6863,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
        tracep->fullCData(oldp+6864,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
        tracep->fullBit(oldp+6865,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
        tracep->fullBit(oldp+6866,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
        tracep->fullBit(oldp+6867,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
        tracep->fullIData(oldp+6868,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
        tracep->fullSData(oldp+6869,((0x3fffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                                 >> 0x12U))),14);
        tracep->fullBit(oldp+6870,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x11U))));
        tracep->fullBit(oldp+6871,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6872,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0xfU))));
        tracep->fullCData(oldp+6873,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+6874,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xaU))),2);
        tracep->fullCData(oldp+6875,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                               >> 4U))),6);
        tracep->fullCData(oldp+6876,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d)),4);
        tracep->fullBit(oldp+6877,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
        tracep->fullBit(oldp+6878,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+6879,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullCData(oldp+6880,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq),3);
        tracep->fullIData(oldp+6881,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp 
                                              >> 2U))),32);
        tracep->fullCData(oldp+6882,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp))),2);
        tracep->fullQData(oldp+6883,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp),34);
        tracep->fullCData(oldp+6885,((0x7fU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                       >> 0x22U)))),7);
        tracep->fullCData(oldp+6886,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                    >> 0x20U)))),2);
        tracep->fullIData(oldp+6887,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req)),32);
        tracep->fullBit(oldp+6888,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req_valid));
        tracep->fullQData(oldp+6889,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req),41);
        tracep->fullCData(oldp+6891,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray),3);
        tracep->fullBit(oldp+6892,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6893,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q))));
        tracep->fullQData(oldp+6894,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q),41);
        tracep->fullCData(oldp+6896,((0x7fU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q 
                                                       >> 0x22U)))),7);
        tracep->fullIData(oldp+6897,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q 
                                              >> 2U))),32);
        tracep->fullCData(oldp+6898,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q))),2);
        tracep->fullCData(oldp+6899,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q),5);
        tracep->fullIData(oldp+6900,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q),32);
        tracep->fullSData(oldp+6901,((0x3fffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                                 >> 0x12U))),14);
        tracep->fullBit(oldp+6902,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x11U))));
        tracep->fullBit(oldp+6903,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6904,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0xfU))));
        tracep->fullCData(oldp+6905,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+6906,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                            >> 0xaU))),2);
        tracep->fullCData(oldp+6907,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                               >> 4U))),6);
        tracep->fullCData(oldp+6908,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q)),4);
        tracep->fullBit(oldp+6909,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q));
        tracep->fullCData(oldp+6910,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+6911,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+6912,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))),2);
        tracep->fullBit(oldp+6913,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_rsp) 
                                          >> 1U))));
        tracep->fullBit(oldp+6914,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__jtag_rsp))));
        tracep->fullBit(oldp+6915,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__jtag_rsp))));
        tracep->fullCData(oldp+6916,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+6917,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+6918,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))),2);
        tracep->fullCData(oldp+6919,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+6920,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x17U))),6);
        tracep->fullBit(oldp+6921,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x16U))));
        tracep->fullBit(oldp+6922,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6923,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x14U))));
        tracep->fullCData(oldp+6924,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0x11U))),3);
        tracep->fullBit(oldp+6925,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6926,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0xfU))));
        tracep->fullCData(oldp+6927,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+6928,((0x7fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 5U))),7);
        tracep->fullBit(oldp+6929,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 4U))));
        tracep->fullBit(oldp+6930,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 3U))));
        tracep->fullBit(oldp+6931,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 2U))));
        tracep->fullBit(oldp+6932,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 1U))));
        tracep->fullBit(oldp+6933,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d)));
        tracep->fullCData(oldp+6934,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+6935,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x17U))),6);
        tracep->fullBit(oldp+6936,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x16U))));
        tracep->fullBit(oldp+6937,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6938,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x14U))));
        tracep->fullCData(oldp+6939,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0x11U))),3);
        tracep->fullBit(oldp+6940,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6941,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0xfU))));
        tracep->fullCData(oldp+6942,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+6943,((0x7fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 5U))),7);
        tracep->fullBit(oldp+6944,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 4U))));
        tracep->fullBit(oldp+6945,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 3U))));
        tracep->fullBit(oldp+6946,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 2U))));
        tracep->fullBit(oldp+6947,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 1U))));
        tracep->fullBit(oldp+6948,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs)));
        tracep->fullIData(oldp+6949,((0xfffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q)),20);
        tracep->fullIData(oldp+6950,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q),32);
        tracep->fullIData(oldp+6951,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_en_q),32);
        tracep->fullIData(oldp+6952,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q),32);
        tracep->fullBit(oldp+6953,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe));
        tracep->fullBit(oldp+6954,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
        tracep->fullBit(oldp+6955,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
        tracep->fullBit(oldp+6956,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
        tracep->fullCData(oldp+6957,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6958,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+6959,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6960,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+6961,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6962,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+6963,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6964,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+6965,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6966,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+6967,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6968,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+6969,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+6970,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+6971,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe));
        tracep->fullBit(oldp+6972,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe));
        tracep->fullBit(oldp+6973,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe));
        tracep->fullBit(oldp+6974,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe));
        tracep->fullBit(oldp+6975,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe));
        tracep->fullBit(oldp+6976,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe));
        tracep->fullBit(oldp+6977,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe));
        tracep->fullBit(oldp+6978,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe));
        tracep->fullBit(oldp+6979,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe));
        tracep->fullBit(oldp+6980,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe));
        tracep->fullBit(oldp+6981,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe));
        tracep->fullBit(oldp+6982,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe));
        tracep->fullBit(oldp+6983,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe));
        tracep->fullBit(oldp+6984,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe));
        tracep->fullBit(oldp+6985,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe));
        tracep->fullBit(oldp+6986,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe));
        tracep->fullBit(oldp+6987,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe));
        tracep->fullBit(oldp+6988,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe));
        tracep->fullBit(oldp+6989,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe));
        tracep->fullBit(oldp+6990,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe));
        tracep->fullBit(oldp+6991,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe));
        tracep->fullBit(oldp+6992,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe));
        tracep->fullBit(oldp+6993,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe));
        tracep->fullBit(oldp+6994,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe));
        tracep->fullBit(oldp+6995,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe));
        tracep->fullBit(oldp+6996,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe));
        tracep->fullBit(oldp+6997,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe));
        tracep->fullBit(oldp+6998,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe));
        tracep->fullBit(oldp+6999,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe));
        tracep->fullBit(oldp+7000,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe));
        tracep->fullBit(oldp+7001,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe));
        tracep->fullBit(oldp+7002,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe));
        tracep->fullBit(oldp+7003,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe));
        tracep->fullBit(oldp+7004,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe));
        tracep->fullBit(oldp+7005,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe));
        tracep->fullBit(oldp+7006,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe));
        tracep->fullBit(oldp+7007,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe));
        tracep->fullBit(oldp+7008,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe));
        tracep->fullCData(oldp+7009,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7010,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7011,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7012,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7013,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7014,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7015,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7016,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7017,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7018,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7019,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7020,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7021,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7022,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullIData(oldp+7023,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                       << 0xaU) | (
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                                   >> 0x16U))),32);
        tracep->fullBit(oldp+7024,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          >> 0x15U))));
        tracep->fullIData(oldp+7025,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                       << 0xbU) | (
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                   >> 0x15U))),32);
        tracep->fullBit(oldp+7026,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          >> 0x14U))));
        tracep->fullIData(oldp+7027,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                       << 0xcU) | (
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                   >> 0x14U))),32);
        tracep->fullSData(oldp+7028,((0x3ffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                 << 0x16U) 
                                                | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                   >> 0xaU)))),10);
        tracep->fullSData(oldp+7029,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),10);
        tracep->fullSData(oldp+7030,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+7031,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        tracep->fullIData(oldp+7032,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
        tracep->fullSData(oldp+7033,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+7034,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
        tracep->fullSData(oldp+7035,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+7036,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
        tracep->fullIData(oldp+7037,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                       << 0xcU) | (
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                   >> 0x14U))),32);
        tracep->fullSData(oldp+7038,((0x3ffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                 << 0x16U) 
                                                | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                   >> 0xaU)))),10);
        tracep->fullSData(oldp+7039,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                                    >> 0x10U)))),16);
        tracep->fullIData(oldp+7040,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
        tracep->fullSData(oldp+7041,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+7042,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
        tracep->fullSData(oldp+7043,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+7044,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
        tracep->fullBit(oldp+7045,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U)))));
        tracep->fullSData(oldp+7046,((0x3ffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                 << 0x16U) 
                                                | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                   >> 0xaU)))),16);
        tracep->fullSData(oldp+7047,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),16);
        tracep->fullSData(oldp+7048,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        tracep->fullBit(oldp+7049,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id));
        tracep->fullBit(oldp+7050,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id));
        tracep->fullBit(oldp+7051,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id));
        tracep->fullIData(oldp+7052,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval),32);
        tracep->fullBit(oldp+7053,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
        tracep->fullBit(oldp+7054,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        tracep->fullCData(oldp+7055,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        tracep->fullIData(oldp+7056,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
        tracep->fullIData(oldp+7057,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d),18);
        tracep->fullIData(oldp+7058,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
        tracep->fullCData(oldp+7059,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),6);
        tracep->fullIData(oldp+7060,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
        tracep->fullIData(oldp+7061,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        tracep->fullBit(oldp+7062,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
        tracep->fullBit(oldp+7063,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec));
        tracep->fullBit(oldp+7064,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
        tracep->fullBit(oldp+7065,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
        tracep->fullBit(oldp+7066,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
        tracep->fullCData(oldp+7067,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7068,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7069,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7070,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7071,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7072,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+7073,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+7074,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+7075,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe));
        tracep->fullBit(oldp+7076,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe));
        tracep->fullBit(oldp+7077,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe));
        tracep->fullBit(oldp+7078,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe));
        tracep->fullBit(oldp+7079,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe));
        tracep->fullBit(oldp+7080,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe));
        tracep->fullBit(oldp+7081,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe));
        tracep->fullBit(oldp+7082,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe));
        tracep->fullBit(oldp+7083,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__outstanding));
        tracep->fullIData(oldp+7084,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__rdata),32);
        tracep->fullBit(oldp+7085,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__error));
        tracep->fullCData(oldp+7086,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__reqid),8);
        tracep->fullCData(oldp+7087,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__reqsz),2);
        tracep->fullBit(oldp+7088,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__rspop));
        tracep->fullBit(oldp+7089,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__RESET_REGn));
        tracep->fullCData(oldp+7090,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__SEL_CONV_TIME_REG),4);
        tracep->fullBit(oldp+7091,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__en_REG));
        tracep->fullIData(oldp+7092,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DOUT_REG),24);
        tracep->fullBit(oldp+7093,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DONE_REG));
        tracep->fullBit(oldp+7094,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7095,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7096,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7097,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7098,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7099,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+7100,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7101,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+7102,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U])));
        tracep->fullBit(oldp+7103,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack) 
                                     & (4U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    & (~ ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                            & (0U != 
                                               (3U 
                                                & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                    << 0x1bU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                      >> 5U))))) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                          | (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))))));
        tracep->fullBit(oldp+7104,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                    & (~ ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                            & (0U != 
                                               (3U 
                                                & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                    << 0x1bU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                      >> 5U))))) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                          | (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))))));
        tracep->fullBit(oldp+7105,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+7106,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                          >> 1U))));
        tracep->fullCData(oldp+7107,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7108,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7109,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7110,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7111,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7112,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7113,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+7114,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+7115,((0xfcU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                << 0x1bU) 
                                               | (0x7fffffcU 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                     >> 5U))))),8);
        tracep->fullIData(oldp+7116,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullCData(oldp+7117,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullBit(oldp+7118,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack));
        tracep->fullBit(oldp+7119,((1U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                            & (0U != 
                                               (3U 
                                                & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                    << 0x1bU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                      >> 5U))))) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                          | (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))))))));
        tracep->fullBit(oldp+7120,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                    & (0U != (3U & 
                                              ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                << 0x1bU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+7121,((1U & (~ ((((0U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                    >> 0x12U))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                      >> 0x12U)))) 
                                              | (4U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                             & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                & (((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                         >> 0x12U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                           >> 0x12U)))) 
                                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->fullBit(oldp+7122,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack) 
                                    & (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+7123,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req));
        tracep->fullBit(oldp+7124,((((0U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+7125,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+7126,((0U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+7127,((1U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+7128,((4U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+7129,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+7130,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+7131,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+7132,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullBit(oldp+7133,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7134,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7135,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7136,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7137,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7138,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+7139,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7140,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+7141,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+7142,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7143,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7144,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7145,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7146,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7147,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+7148,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7149,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+7150,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+7151,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+7152,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+7153,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2770[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U]);
        __Vtemp2770[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U]));
        __Vtemp2770[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+7154,(__Vtemp2770),85);
        tracep->fullBit(oldp+7157,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+7158,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+7161,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+7164,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullBit(oldp+7167,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7168,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7169,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7170,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7171,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7172,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7173,((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7174,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7175,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar))));
        tracep->fullBit(oldp+7176,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__cmderror_valid));
        tracep->fullCData(oldp+7177,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__cmderror),3);
        tracep->fullBit(oldp+7178,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__clear_resumeack));
        tracep->fullBit(oldp+7179,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+7180,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+7181,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+7182,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+7183,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+7184,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1aU))));
        tracep->fullSData(oldp+7185,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                >> 0x10U))),10);
        tracep->fullSData(oldp+7186,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                >> 6U))),10);
        tracep->fullCData(oldp+7187,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 4U))),2);
        tracep->fullBit(oldp+7188,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 3U))));
        tracep->fullBit(oldp+7189,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 2U))));
        tracep->fullBit(oldp+7190,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 1U))));
        tracep->fullBit(oldp+7191,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d)));
        tracep->fullCData(oldp+7192,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d),3);
        tracep->fullCData(oldp+7193,((0xffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d 
                                               >> 0x18U))),8);
        tracep->fullIData(oldp+7194,((0xffffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d)),24);
        tracep->fullSData(oldp+7195,((0xffffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                 >> 0x10U))),16);
        tracep->fullCData(oldp+7196,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                              >> 0xcU))),4);
        tracep->fullSData(oldp+7197,((0xfffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
        tracep->fullBit(oldp+7198,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
        tracep->fullCData(oldp+7199,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
        tracep->fullBit(oldp+7200,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+7201,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+7202,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+7203,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+7204,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+7205,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1aU))));
        tracep->fullSData(oldp+7206,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                >> 0x10U))),10);
        tracep->fullSData(oldp+7207,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                >> 6U))),10);
        tracep->fullCData(oldp+7208,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                            >> 4U))),2);
        tracep->fullBit(oldp+7209,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 3U))));
        tracep->fullBit(oldp+7210,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 2U))));
        tracep->fullBit(oldp+7211,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 1U))));
        tracep->fullBit(oldp+7212,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol)));
        tracep->fullCData(oldp+7213,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+7214,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 0x18U))),5);
        tracep->fullSData(oldp+7215,((0x7ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                >> 0xdU))),11);
        tracep->fullBit(oldp+7216,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7217,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                          >> 0xbU))));
        tracep->fullCData(oldp+7218,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                            >> 8U))),3);
        tracep->fullCData(oldp+7219,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                              >> 4U))),4);
        tracep->fullCData(oldp+7220,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs)),4);
        tracep->fullBit(oldp+7221,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned))));
        tracep->fullCData(oldp+7222,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
        tracep->fullQData(oldp+7223,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q),64);
        tracep->fullBit(oldp+7225,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q));
        tracep->fullBit(oldp+7226,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q));
        tracep->fullCData(oldp+7227,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+7228,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+7229,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+7230,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+7231,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+7232,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+7233,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+7234,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+7235,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+7236,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+7237,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+7238,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullSData(oldp+7239,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),13);
        tracep->fullCData(oldp+7240,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),5);
        tracep->fullQData(oldp+7241,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),33);
        tracep->fullCData(oldp+7243,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__irq_id_o[0]),5);
        tracep->fullBit(oldp+7244,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resume));
        tracep->fullBit(oldp+7245,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__go));
        tracep->fullBit(oldp+7246,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+7247,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+7248,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+7249,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+7250,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+7251,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+7252,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+7253,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+7254,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+7255,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 9U))));
        tracep->fullBit(oldp+7256,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+7257,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+7258,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+7259,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+7260,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7261,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+7262,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+7263,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+7264,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7265,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+7266,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+7267,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+7268,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+7269,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+7270,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+7271,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+7272,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+7273,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+7274,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+7275,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+7276,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+7277,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+7278,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+7279,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+7280,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
        tracep->fullBit(oldp+7281,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 3U))));
        tracep->fullBit(oldp+7282,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 2U))));
        tracep->fullBit(oldp+7283,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 5U))));
        tracep->fullBit(oldp+7284,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 4U))));
        tracep->fullBit(oldp+7285,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 7U))));
        tracep->fullBit(oldp+7286,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 6U))));
        tracep->fullBit(oldp+7287,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 9U))));
        tracep->fullBit(oldp+7288,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 8U))));
        tracep->fullBit(oldp+7289,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+7290,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+7291,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+7292,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7293,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+7294,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+7295,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+7296,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7297,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+7298,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+7299,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+7300,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+7301,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+7302,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+7303,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+7304,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+7305,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+7306,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+7307,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+7308,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+7309,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+7310,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+7311,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 1U))));
        tracep->fullBit(oldp+7312,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
        tracep->fullBit(oldp+7313,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 3U))));
        tracep->fullBit(oldp+7314,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 2U))));
        tracep->fullBit(oldp+7315,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 5U))));
        tracep->fullBit(oldp+7316,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 4U))));
        tracep->fullCData(oldp+7317,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
        tracep->fullCData(oldp+7318,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
        tracep->fullCData(oldp+7319,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim_id[0]),5);
        tracep->fullCData(oldp+7320,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__cc_id[0]),5);
        tracep->fullQData(oldp+7321,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux),64);
        tracep->fullCData(oldp+7323,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xbU))),2);
        tracep->fullBit(oldp+7324,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))));
        tracep->fullCData(oldp+7325,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 8U))),2);
        tracep->fullCData(oldp+7326,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
        tracep->fullBit(oldp+7327,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid));
        tracep->fullCData(oldp+7328,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                              >> 1U))),4);
        tracep->fullBit(oldp+7329,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        tracep->fullSData(oldp+7330,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
        tracep->fullCData(oldp+7331,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        tracep->fullIData(oldp+7332,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o)),32);
        tracep->fullIData(oldp+7333,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o 
                                              >> 0x20U))),32);
        tracep->fullBit(oldp+7334,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__data_valid));
        tracep->fullBit(oldp+7335,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned))));
        tracep->fullBit(oldp+7336,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__going));
        tracep->fullCData(oldp+7337,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned),2);
        tracep->fullCData(oldp+7338,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned),2);
        tracep->fullQData(oldp+7339,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits),64);
        tracep->fullIData(oldp+7341,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+7342,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
        tracep->fullBit(oldp+7343,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid));
        tracep->fullIData(oldp+7344,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask),32);
        tracep->fullBit(oldp+7345,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+7346,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        tracep->fullIData(oldp+7347,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[0U]),32);
        tracep->fullIData(oldp+7348,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[1U]),32);
        tracep->fullIData(oldp+7349,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[2U]),32);
        tracep->fullIData(oldp+7350,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[3U]),32);
        tracep->fullIData(oldp+7351,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[4U]),32);
        tracep->fullIData(oldp+7352,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[5U]),32);
        tracep->fullIData(oldp+7353,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[6U]),32);
        tracep->fullIData(oldp+7354,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[7U]),32);
        tracep->fullBit(oldp+7355,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_write_valid));
        tracep->fullBit(oldp+7356,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbdata_read_valid));
        tracep->fullBit(oldp+7357,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbdata_write_valid));
        tracep->fullIData(oldp+7358,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data),32);
        tracep->fullSData(oldp+7359,((0x1ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                                >> 0x17U))),9);
        tracep->fullBit(oldp+7360,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x16U))));
        tracep->fullCData(oldp+7361,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                            >> 0x14U))),2);
        tracep->fullBit(oldp+7362,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x13U))));
        tracep->fullBit(oldp+7363,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x12U))));
        tracep->fullBit(oldp+7364,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x11U))));
        tracep->fullBit(oldp+7365,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7366,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xfU))));
        tracep->fullBit(oldp+7367,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xeU))));
        tracep->fullBit(oldp+7368,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xdU))));
        tracep->fullBit(oldp+7369,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7370,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xbU))));
        tracep->fullBit(oldp+7371,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xaU))));
        tracep->fullBit(oldp+7372,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 9U))));
        tracep->fullBit(oldp+7373,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 8U))));
        tracep->fullBit(oldp+7374,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 7U))));
        tracep->fullBit(oldp+7375,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 6U))));
        tracep->fullBit(oldp+7376,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 5U))));
        tracep->fullBit(oldp+7377,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 4U))));
        tracep->fullCData(oldp+7378,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus)),4);
        tracep->fullCData(oldp+7379,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+7380,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 0x18U))),5);
        tracep->fullSData(oldp+7381,((0x7ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                                >> 0xdU))),11);
        tracep->fullBit(oldp+7382,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7383,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 0xbU))));
        tracep->fullCData(oldp+7384,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 8U))),3);
        tracep->fullCData(oldp+7385,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                              >> 4U))),4);
        tracep->fullCData(oldp+7386,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs)),4);
        tracep->fullBit(oldp+7387,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d));
        tracep->fullCData(oldp+7388,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx),5);
        tracep->fullBit(oldp+7389,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7390,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7391,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7392,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7393,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7394,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7395,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7396,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7397,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))));
        tracep->fullBit(oldp+7398,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7399,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7400,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7401,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7402,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7403,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+7404,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7405,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+7406,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[0U])));
        tracep->fullBit(oldp+7407,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))));
        tracep->fullBit(oldp+7408,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                  >> 0x33U)))));
        tracep->fullIData(oldp+7409,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7410,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7411,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load));
        tracep->fullBit(oldp+7412,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store));
        tracep->fullBit(oldp+7413,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw));
        tracep->fullIData(oldp+7414,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
        tracep->fullBit(oldp+7415,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
        tracep->fullIData(oldp+7416,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
        tracep->fullBit(oldp+7417,((3U != (3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
        tracep->fullBit(oldp+7418,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
        tracep->fullBit(oldp+7419,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)))));
        tracep->fullBit(oldp+7420,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err));
        tracep->fullBit(oldp+7421,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err));
        tracep->fullCData(oldp+7422,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
        tracep->fullCData(oldp+7423,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                       ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                >> 1U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
        tracep->fullCData(oldp+7424,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
        tracep->fullCData(oldp+7425,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                       ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                                >> 1U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
        tracep->fullBit(oldp+7426,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err));
        tracep->fullBit(oldp+7427,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
        tracep->fullWData(oldp+7428,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d),96);
        tracep->fullCData(oldp+7431,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
        tracep->fullCData(oldp+7432,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
        tracep->fullIData(oldp+7433,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
        tracep->fullBit(oldp+7434,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        tracep->fullBit(oldp+7435,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        tracep->fullBit(oldp+7436,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
        tracep->fullBit(oldp+7437,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
        tracep->fullBit(oldp+7438,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
        tracep->fullBit(oldp+7439,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
        tracep->fullBit(oldp+7440,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we));
        tracep->fullBit(oldp+7441,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req));
        tracep->fullSData(oldp+7442,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__addr),12);
        tracep->fullIData(oldp+7443,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+7444,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        tracep->fullIData(oldp+7445,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we),32);
        tracep->fullCData(oldp+7446,((0xfU & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we)),4);
        tracep->fullBit(oldp+7447,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack));
        tracep->fullCData(oldp+7448,(((4U != (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))
                                       ? 0U : 1U)),2);
        tracep->fullBit(oldp+7449,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
        tracep->fullCData(oldp+7450,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7451,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullBit(oldp+7452,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we)))));
        tracep->fullCData(oldp+7453,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7454,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        tracep->fullIData(oldp+7455,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+7456,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+7457,((((0U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+7458,((((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+7459,((0U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+7460,((1U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+7461,((4U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+7462,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+7463,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+7464,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+7465,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullSData(oldp+7466,(((((4U != (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))
                                         ? 0U : 1U) 
                                       << 0xbU) | (
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                         >> 5U))))),13);
        tracep->fullBit(oldp+7467,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+7468,((0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U])),5);
        tracep->fullBit(oldp+7469,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+7470,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7471,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7472,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7473,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7474,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7475,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+7476,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7477,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+7478,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+7479,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7480,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7481,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7482,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7483,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7484,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+7485,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7486,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+7487,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+7488,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+7489,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+7490,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2774[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U]);
        __Vtemp2774[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[1U]));
        __Vtemp2774[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+7491,(__Vtemp2774),85);
        tracep->fullBit(oldp+7494,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+7495,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+7498,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+7501,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullBit(oldp+7504,((1U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7505,((7U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7506,((7U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7507,((3U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7508,((0xffU & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7509,(((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+7510,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7511,(((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+7512,((1U & vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U])));
        tracep->fullBit(oldp+7513,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__instr_req));
        tracep->fullIData(oldp+7514,((0xfffffffcU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
        tracep->fullBit(oldp+7515,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
        tracep->fullBit(oldp+7516,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init));
        tracep->fullBit(oldp+7517,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
        tracep->fullBit(oldp+7518,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
        tracep->fullCData(oldp+7519,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
        tracep->fullIData(oldp+7520,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
        tracep->fullBit(oldp+7521,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7522,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7523,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7524,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7525,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7526,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7527,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7528,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7529,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o))));
        tracep->fullBit(oldp+7530,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7531,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7532,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7533,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7534,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7535,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7536,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7537,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7538,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o))));
        tracep->fullBit(oldp+7539,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7540,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7541,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7542,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7543,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7544,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7545,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7546,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7547,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [0U]))));
        tracep->fullBit(oldp+7548,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7549,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7550,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7551,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7552,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7553,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7554,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7555,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7556,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [1U]))));
        tracep->fullBit(oldp+7557,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7558,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7559,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7560,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7561,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7562,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7563,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7564,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7565,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [2U]))));
        tracep->fullBit(oldp+7566,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7567,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7568,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7569,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7570,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7571,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7572,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7573,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7574,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [3U]))));
        tracep->fullBit(oldp+7575,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7576,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7577,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7578,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7579,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7580,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7581,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7582,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7583,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [4U]))));
        tracep->fullBit(oldp+7584,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7585,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7586,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7587,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7588,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7589,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7590,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7591,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7592,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [5U]))));
        tracep->fullBit(oldp+7593,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7594,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7595,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7596,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7597,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7598,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7599,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7600,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7601,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [6U]))));
        tracep->fullBit(oldp+7602,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7603,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7604,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7605,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7606,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7607,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7608,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7609,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7610,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [7U]))));
        tracep->fullBit(oldp+7611,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7612,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7613,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7614,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7615,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7616,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7617,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7618,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7619,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [8U]))));
        tracep->fullBit(oldp+7620,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7621,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7622,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7623,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7624,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7625,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7626,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7627,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7628,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [9U]))));
        tracep->fullBit(oldp+7629,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7630,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7631,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7632,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7633,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7634,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7635,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7636,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7637,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [0xaU]))));
        tracep->fullIData(oldp+7638,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim),32);
        tracep->fullCData(oldp+7639,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete_id[0]),5);
        tracep->fullIData(oldp+7640,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete),32);
        tracep->fullCData(oldp+7641,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold[0]),3);
    }
}
