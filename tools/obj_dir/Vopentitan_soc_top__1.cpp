// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopentitan_soc_top.h for the primary calling header

#include "Vopentitan_soc_top.h"
#include "Vopentitan_soc_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__142(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__142\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp518[3];
    WData/*95:0*/ __Vtemp519[3];
    WData/*95:0*/ __Vtemp536[3];
    WData/*95:0*/ __Vtemp537[3];
    // Body
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [5U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [5U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [5U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [5U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [5U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [5U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [7U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [7U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [7U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [7U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [7U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [7U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
        [1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i
        [1U][2U];
    __Vtemp518[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
        [0U][0U];
    __Vtemp518[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
        [0U][1U];
    __Vtemp518[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp519, __Vtemp518);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp519[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp519[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp519[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
        = (0x20U | ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                     [1U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                              [1U][2U] 
                                              << 1U)) 
                                  | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                     [1U][2U]))));
    __Vtemp536[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
        [0U][0U];
    __Vtemp536[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
        [0U][1U];
    __Vtemp536[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp537, __Vtemp536);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp537[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp537[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp537[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
        = (0x20U | ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                     [1U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                              [1U][2U] 
                                              << 1U)) 
                                  | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                     [1U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dfifo_rspready 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dfifo_rspready)) 
           | (1U & (IData)(((0x8000000000000ULL == 
                             (0x8000800000000ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o)) 
                            & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                            [0U][0U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dfifo_rspready 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dfifo_rspready)) 
           | (2U & (((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                      [1U][0U] & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                          >> 0x23U))) 
                     & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                >> 0x33U))) << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest)) 
           | (1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                    [0U][2U] >> 0x15U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest)) 
           | (2U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                    [1U][2U] >> 0x14U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dfifo_rspready 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dfifo_rspready)) 
           | (1U & (IData)(((0x8000000000000ULL == 
                             (0x8000800000000ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o)) 
                            & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                            [0U][0U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dfifo_rspready 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dfifo_rspready)) 
           | (2U & (((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                      [1U][0U] & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                          >> 0x23U))) 
                     & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                >> 0x33U))) << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest)) 
           | (1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                    [0U][2U] >> 0x15U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest)) 
           | (2U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                    [1U][2U] >> 0x14U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U] 
        = (IData)((((QData)((IData)((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              << 0x1fU) 
                                             | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                >> 1U))))) 
                    << 0x21U) | (((QData)((IData)((
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                      >> 1U)))) 
                                  << 1U) | (QData)((IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dfifo_rspready)))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U] 
        = ((0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
           | (IData)(((((QData)((IData)((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U))))) 
                        << 0x21U) | (((QData)((IData)(
                                                      ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                        << 0x1fU) 
                                                       | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                          >> 1U)))) 
                                      << 1U) | (QData)((IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dfifo_rspready)))))) 
                      >> 0x20U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
        = ((0xffe00000U & ((IData)((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest))) 
                           << 0x15U)) | ((0x1c0000U 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                         | ((0x38000U 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                            | ((0x6000U 
                                                & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                               | ((0x1fe0U 
                                                   & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                                  | (0x1fU 
                                                     & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U] 
        = (IData)((((QData)((IData)((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              << 0x1fU) 
                                             | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                >> 1U))))) 
                    << 0x21U) | (((QData)((IData)((
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                      >> 1U)))) 
                                  << 1U) | (QData)((IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dfifo_rspready)))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U] 
        = ((0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
           | (IData)(((((QData)((IData)((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U))))) 
                        << 0x21U) | (((QData)((IData)(
                                                      ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                        << 0x1fU) 
                                                       | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                          >> 1U)))) 
                                      << 1U) | (QData)((IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dfifo_rspready)))))) 
                      >> 0x20U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
        = ((0xffe00000U & ((IData)((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest))) 
                           << 0x15U)) | ((0x1c0000U 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                         | ((0x38000U 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                            | ((0x6000U 
                                                & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                               | ((0x1fe0U 
                                                   & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                                  | (0x1fU 
                                                     & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__PLL1__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__PLL1__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__TSEN2__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__TSEN2__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__PLL1__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__PLL1__tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__TSEN2__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__TSEN2__tl_h_o
        [1U];
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__143(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__143\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp614[3];
    WData/*95:0*/ __Vtemp615[3];
    WData/*95:0*/ __Vtemp632[3];
    WData/*95:0*/ __Vtemp633[3];
    // Body
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [6U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [6U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [6U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [6U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [6U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [6U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [0xaU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [0xaU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [0xaU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [0xaU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [0xaU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [0xaU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
        [1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i
        [1U][2U];
    __Vtemp614[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
        [0U][0U];
    __Vtemp614[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
        [0U][1U];
    __Vtemp614[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp615, __Vtemp614);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp615[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp615[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp615[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
        = (0x20U | ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                     [1U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                              [1U][2U] 
                                              << 1U)) 
                                  | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                     [1U][2U]))));
    __Vtemp632[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
        [0U][0U];
    __Vtemp632[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
        [0U][1U];
    __Vtemp632[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp633, __Vtemp632);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp633[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp633[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp633[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
        = (0x20U | ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                     [1U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                              [1U][2U] 
                                              << 1U)) 
                                  | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                     [1U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrequest 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrequest)) 
           | (1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                    [0U][2U] >> 0x15U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrequest 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrequest)) 
           | (2U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                    [1U][2U] >> 0x14U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest)) 
           | (1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                    [0U][2U] >> 0x15U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest)) 
           | (2U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                    [1U][2U] >> 0x14U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__TSEN1__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__TSEN1__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DEBUG_ROM__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DEBUG_ROM__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__TSEN1__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__TSEN1__tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DEBUG_ROM__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DEBUG_ROM__tl_h_o
        [1U];
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__144(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__144\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp680[3];
    WData/*95:0*/ __Vtemp681[3];
    WData/*95:0*/ __Vtemp698[3];
    WData/*95:0*/ __Vtemp699[3];
    // Body
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [8U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [8U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [8U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [8U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [8U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [8U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [4U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [4U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [4U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [4U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [4U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [4U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
        [1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i
        [1U][2U];
    __Vtemp680[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
        [0U][0U];
    __Vtemp680[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
        [0U][1U];
    __Vtemp680[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp681, __Vtemp680);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp681[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp681[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp681[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
        = (0x20U | ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                     [1U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                              [1U][2U] 
                                              << 1U)) 
                                  | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                     [1U][2U]))));
    __Vtemp698[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
        [0U][0U];
    __Vtemp698[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
        [0U][1U];
    __Vtemp698[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp699, __Vtemp698);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp699[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp699[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp699[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
        = (0x20U | ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                     [1U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                              [1U][2U] 
                                              << 1U)) 
                                  | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_i
                                     [1U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready)) 
           | (1U & (IData)(((0x8000000000000ULL == 
                             (0x8000800000000ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o)) 
                            & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                            [0U][0U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready)) 
           | (2U & (((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                      [1U][0U] & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                          >> 0x23U))) 
                     & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                >> 0x33U))) << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest)) 
           | (1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                    [0U][2U] >> 0x15U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest)) 
           | (2U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                    [1U][2U] >> 0x14U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready)) 
           | (1U & (IData)(((0x8000000000000ULL == 
                             (0x8000800000000ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o)) 
                            & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                            [0U][0U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready)) 
           | (2U & (((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                      [1U][0U] & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                          >> 0x23U))) 
                     & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                >> 0x33U))) << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest)) 
           | (1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                    [0U][2U] >> 0x15U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest)) 
           | (2U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hreq_fifo_o
                    [1U][2U] >> 0x14U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U] 
        = (IData)((((QData)((IData)((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              << 0x1fU) 
                                             | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                >> 1U))))) 
                    << 0x21U) | (((QData)((IData)((
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                      >> 1U)))) 
                                  << 1U) | (QData)((IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready)))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U] 
        = ((0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
           | (IData)(((((QData)((IData)((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U))))) 
                        << 0x21U) | (((QData)((IData)(
                                                      ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                        << 0x1fU) 
                                                       | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                          >> 1U)))) 
                                      << 1U) | (QData)((IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready)))))) 
                      >> 0x20U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
        = ((0xffe00000U & ((IData)((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest))) 
                           << 0x15U)) | ((0x1c0000U 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                         | ((0x38000U 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                            | ((0x6000U 
                                                & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                               | ((0x1fe0U 
                                                   & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                                  | (0x1fU 
                                                     & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U] 
        = (IData)((((QData)((IData)((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              << 0x1fU) 
                                             | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                >> 1U))))) 
                    << 0x21U) | (((QData)((IData)((
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                      >> 1U)))) 
                                  << 1U) | (QData)((IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready)))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U] 
        = ((0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
           | (IData)(((((QData)((IData)((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U))))) 
                        << 0x21U) | (((QData)((IData)(
                                                      ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                        << 0x1fU) 
                                                       | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                          >> 1U)))) 
                                      << 1U) | (QData)((IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dfifo_rspready)))))) 
                      >> 0x20U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U] 
        = ((0xffe00000U & ((IData)((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest))) 
                           << 0x15U)) | ((0x1c0000U 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                         | ((0x38000U 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                            | ((0x6000U 
                                                & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                               | ((0x1fe0U 
                                                   & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                                  | (0x1fU 
                                                     & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DAP__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DAP__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DCDC__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DCDC__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DAP__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DAP__tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DCDC__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DCDC__tl_h_o
        [1U];
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__145(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__145\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0xfU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x11U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x13U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x15U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x400000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x17U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x1000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x19U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x4000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x1bU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x1dU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                         >> 0x1fU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 1U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((4U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 3U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 5U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 7U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 9U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x400U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0xbU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x1000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0xdU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0xfU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x11U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x13U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x15U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x400000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x17U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x1000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x19U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x4000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x1bU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x1dU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                         >> 0x1fU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                         >> 1U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((4U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                         >> 3U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U])) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q 
                = (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                         >> 5U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sberror = 0U;
    if (((3U < (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sberror = 3U;
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sberror_valid = 0U;
    if (((3U < (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sberror_valid = 1U;
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[1U] = 0x517U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[2U] = 0xc55513U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[3U] = 0xc51513U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x13U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x13U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x13U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x13U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[8U] = 0x7b302573U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x100073U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xaU] = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xbU] = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xcU] = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xdU] = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xeU] = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xfU] = 0U;
    if ((0U == (0xffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                         >> 0x18U)))) {
        if ((((3U > (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                           >> 0x14U))) & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                          >> 0x11U)) 
             & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                >> 0x10U))) {
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b302573U;
            if ((0U != (3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                              >> 0xeU)))) {
                vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else {
                if (((IData)((0x1000U == (0x1020U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q))) 
                     & (0xaU == (0x1fU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)))) {
                    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                    vlTOPp->__Vfunc_load__22__size 
                        = (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                 >> 0x14U));
                    vlTOPp->__Vfunc_load__22__Vfuncout 
                        = (0x38050403U | ((IData)(vlTOPp->__Vfunc_load__22__size) 
                                          << 0xcU));
                    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                        = vlTOPp->__Vfunc_load__22__Vfuncout;
                    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x7b341073U;
                    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
                } else {
                    if ((0x1000U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)) {
                        vlTOPp->__Vfunc_load__26__dest 
                            = (0x1fU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q);
                        vlTOPp->__Vfunc_load__26__size 
                            = (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                     >> 0x14U));
                        vlTOPp->__Vfunc_load__26__Vfuncout 
                            = (0x38050003U | (((IData)(vlTOPp->__Vfunc_load__26__size) 
                                               << 0xcU) 
                                              | ((IData)(vlTOPp->__Vfunc_load__26__dest) 
                                                 << 7U)));
                        vlTOPp->__Vfunc_float_load__25__dest 
                            = (0x1fU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q);
                        vlTOPp->__Vfunc_float_load__25__size 
                            = (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                     >> 0x14U));
                        vlTOPp->__Vfunc_float_load__25__Vfuncout 
                            = (0x38050007U | (((IData)(vlTOPp->__Vfunc_float_load__25__size) 
                                               << 0xcU) 
                                              | ((IData)(vlTOPp->__Vfunc_float_load__25__dest) 
                                                 << 7U)));
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                            = ((0x20U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)
                                ? vlTOPp->__Vfunc_float_load__25__Vfuncout
                                : vlTOPp->__Vfunc_load__26__Vfuncout);
                    } else {
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                        vlTOPp->__Vfunc_load__28__size 
                            = (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                     >> 0x14U));
                        vlTOPp->__Vfunc_load__28__Vfuncout 
                            = (0x38050403U | ((IData)(vlTOPp->__Vfunc_load__28__size) 
                                              << 0xcU));
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                            = vlTOPp->__Vfunc_load__28__Vfuncout;
                        vlTOPp->__Vfunc_csrw__29__csr 
                            = (0xfffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q);
                        vlTOPp->__Vfunc_csrw__29__Vfuncout 
                            = (0x41073U | ((IData)(vlTOPp->__Vfunc_csrw__29__csr) 
                                           << 0x14U));
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                            = vlTOPp->__Vfunc_csrw__29__Vfuncout;
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
                    }
                }
            }
        } else {
            if ((IData)(((0x20000U == (0x30000U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)) 
                         & (3U > (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x14U)))))) {
                vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b302573U;
                if ((0U != (3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                  >> 0xeU)))) {
                    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command = 1U;
                } else {
                    if (((IData)((0x1000U == (0x1020U 
                                              & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q))) 
                         & (0xaU == (0x1fU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)))) {
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x7b302473U;
                        vlTOPp->__Vfunc_store__35__size 
                            = (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                     >> 0x14U));
                        vlTOPp->__Vfunc_store__35__Vfuncout 
                            = (0x38850023U | ((IData)(vlTOPp->__Vfunc_store__35__size) 
                                              << 0xcU));
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                            = vlTOPp->__Vfunc_store__35__Vfuncout;
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
                    } else {
                        if ((0x1000U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)) {
                            vlTOPp->__Vfunc_store__38__src 
                                = (0x1fU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q);
                            vlTOPp->__Vfunc_store__38__size 
                                = (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x14U));
                            vlTOPp->__Vfunc_store__38__Vfuncout 
                                = (0x38050023U | (((IData)(vlTOPp->__Vfunc_store__38__src) 
                                                   << 0x14U) 
                                                  | ((IData)(vlTOPp->__Vfunc_store__38__size) 
                                                     << 0xcU)));
                            vlTOPp->__Vfunc_float_store__37__src 
                                = (0x1fU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q);
                            vlTOPp->__Vfunc_float_store__37__size 
                                = (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x14U));
                            vlTOPp->__Vfunc_float_store__37__Vfuncout 
                                = (0x38050027U | (((IData)(vlTOPp->__Vfunc_float_store__37__src) 
                                                   << 0x14U) 
                                                  | ((IData)(vlTOPp->__Vfunc_float_store__37__size) 
                                                     << 0xcU)));
                            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                                = ((0x20U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)
                                    ? vlTOPp->__Vfunc_float_store__37__Vfuncout
                                    : vlTOPp->__Vfunc_store__38__Vfuncout);
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                            vlTOPp->__Vfunc_csrr__40__csr 
                                = (0xfffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q);
                            vlTOPp->__Vfunc_csrr__40__Vfuncout 
                                = (0x2473U | ((IData)(vlTOPp->__Vfunc_csrr__40__csr) 
                                              << 0x14U));
                            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                                = vlTOPp->__Vfunc_csrr__40__Vfuncout;
                            vlTOPp->__Vfunc_store__41__size 
                                = (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x14U));
                            vlTOPp->__Vfunc_store__41__Vfuncout 
                                = (0x38850023U | ((IData)(vlTOPp->__Vfunc_store__41__size) 
                                                  << 0xcU));
                            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                                = vlTOPp->__Vfunc_store__41__Vfuncout;
                            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
                        }
                    }
                }
            } else {
                if ((1U & ((3U <= (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x14U))) 
                           | (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                              >> 0x13U)))) {
                    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command = 1U;
                }
            }
        }
        if ((1U & ((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                    >> 0x12U) & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command))))) {
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x13U;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command = 1U;
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel 
        = ((0xffc00U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                        << 4U)) | (0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x10U)));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel);
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__haltreq = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__resumereq = 0U;
    if ((1U > (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart))) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound1 
            = (1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1fU));
        if (VL_LIKELY((0U >= (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart)))) {
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__haltreq 
                = (((~ ((IData)(1U) << (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__haltreq)) 
                   | (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound1) 
                            << (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart))));
        }
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound2 
            = (1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1eU));
        if (VL_LIKELY((0U >= (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart)))) {
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__resumereq 
                = (((~ ((IData)(1U) << (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__resumereq)) 
                   | (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound2) 
                            << (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart))));
        }
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0 = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0 
        = (0x7fffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel 
                      >> 5U));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted) 
           | (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted;
    if ((1U > (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0))) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0 
            = (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0 
               >> (0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0) 
                            << 5U)));
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1 = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1 = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1 
        = (0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel 
                     >> 0xaU));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1) 
           | (0U != vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1;
    if ((1U > (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1))) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1 
            = (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1 
               >> (0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1) 
                            << 5U)));
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2 = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2 = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2 
        = (0x1fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel 
                    >> 0xfU));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2) 
           | (0U != vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2;
    if ((1U > (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2))) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2 
            = (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2 
               >> (0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2) 
                            << 5U)));
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__146(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__146\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 1U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 2U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 3U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 4U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 5U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 6U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 7U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 8U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 9U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xaU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xbU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xcU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xdU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xeU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xfU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x10U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x11U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x12U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x13U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x14U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 1U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 4U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xbU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xcU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x15U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x16U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1bU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1cU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1fU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) 
                   & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U]);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q 
                = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we)
                          ? (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                             >> 8U) : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d)));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__147(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__147\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x15U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x17U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x18U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x19U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1aU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1bU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1cU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1dU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1eU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1fU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                   & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U]);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 2U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 3U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 5U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 6U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 7U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 9U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xaU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xdU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xeU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0xfU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x10U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x11U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x12U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x13U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x14U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x19U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1aU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1dU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1eU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                      >> 1U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                    ? (7U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error 
                = (((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                      | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                     & (~ (IData)((0U != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                    | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)) 
                   | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                            >> 5U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                         >> 0xdU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                >> 0x33U)) & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U]))) {
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                             >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hfifo_rspvalid 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hfifo_rspvalid)) 
           | (IData)((0x8000000000000ULL == (0x8000800000000ULL 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hfifo_rspvalid 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hfifo_rspvalid)) 
           | ((IData)((0x8000800000000ULL == (0x8000800000000ULL 
                                              & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o))) 
              << 1U));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__148(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__148\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp760[3];
    WData/*95:0*/ __Vtemp770[3];
    // Body
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we)
                    ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd)
                    : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfffff000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q) 
                             << 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffffe000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q) 
                             << 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffffc000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q) 
                             << 0xeU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffff8000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q) 
                             << 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffff0000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q) 
                             << 0x10U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfffe0000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q) 
                             << 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfffc0000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q) 
                             << 0x12U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfff80000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q) 
                             << 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfff00000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q) 
                             << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffe00000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q) 
                             << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xffc00000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q) 
                             << 0x16U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xff800000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q) 
                             << 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xff000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q) 
                             << 0x18U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfe000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q) 
                             << 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfc000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q) 
                             << 0x1aU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xf8000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q) 
                             << 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xf0000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q) 
                             << 0x1cU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xe0000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q) 
                             << 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xc0000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q) 
                             << 0x1eU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0x80000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q) 
                             << 0x1fU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xffeU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xfffU & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xffdU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xffeU & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q) 
                        << 1U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xffbU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xffcU & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q) 
                        << 2U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xff7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xff8U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q) 
                        << 3U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xfefU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xff0U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q) 
                        << 4U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xfdfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xfe0U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q) 
                        << 5U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xfbfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xfc0U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q) 
                        << 6U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xf7fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xf80U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q) 
                        << 7U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xeffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xf00U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q) 
                        << 8U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xdffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xe00U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q) 
                        << 9U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0xbffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0xc00U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q) 
                        << 0xaU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
        = ((0x7ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U]) 
           | (0x800U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q) 
                        << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfffff000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q) 
                             << 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffffe000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q) 
                             << 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffffc000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q) 
                             << 0xeU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffff8000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q) 
                             << 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffff0000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q) 
                             << 0x10U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfffe0000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q) 
                             << 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfffc0000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q) 
                             << 0x12U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfff80000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q) 
                             << 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfff00000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q) 
                             << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffe00000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q) 
                             << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xffc00000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q) 
                             << 0x16U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xff800000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q) 
                             << 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xff000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q) 
                             << 0x18U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfe000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q) 
                             << 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xfc000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q) 
                             << 0x1aU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xf8000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q) 
                             << 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xf0000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q) 
                             << 0x1cU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xe0000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q) 
                             << 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0xc0000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q) 
                             << 0x1eU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (0x80000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q) 
                             << 0x1fU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffffeU & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q) 
                             << 1U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffffcU & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q) 
                             << 2U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffff8U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q) 
                             << 3U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q) 
                             << 4U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xffffffe0U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q) 
                             << 5U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xffffffc0U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q) 
                             << 6U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xffffff80U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q) 
                             << 7U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xffffff00U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q) 
                             << 8U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffe00U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q) 
                             << 9U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffffc00U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q) 
                             << 0xaU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffff800U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q) 
                             << 0xbU)));
    __Vtemp760[0U] = (IData)((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q)) 
                               << 0x3cU) | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q)) 
                                             << 0x39U) 
                                            | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q)) 
                                                << 0x36U) 
                                               | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q)) 
                                                   << 0x33U) 
                                                  | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q)) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q)) 
                                                         << 0x2dU) 
                                                        | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q)) 
                                                            << 0x2aU) 
                                                           | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q)) 
                                                               << 0x27U) 
                                                              | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q)) 
                                                                  << 0x24U) 
                                                                 | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q)) 
                                                                     << 0x21U) 
                                                                    | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q)) 
                                                                        << 0x1eU) 
                                                                       | (QData)((IData)(
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q) 
                                                                                << 3U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q))))))))))))))))))))))));
    __Vtemp760[1U] = ((0x80000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q) 
                                      << 0x1fU)) | (IData)(
                                                           ((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q)) 
                                                              << 0x3cU) 
                                                             | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q)) 
                                                                 << 0x39U) 
                                                                | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q)) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q)) 
                                                                       << 0x33U) 
                                                                      | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q)) 
                                                                          << 0x30U) 
                                                                         | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q)) 
                                                                             << 0x2dU) 
                                                                            | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q)) 
                                                                                << 0x2aU) 
                                                                               | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q)) 
                                                                                << 0x1eU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q) 
                                                                                << 3U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q))))))))))))))))))))))) 
                                                            >> 0x20U)));
    __Vtemp770[2U] = ((0xe0000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q) 
                                      << 0x1dU)) | 
                      ((0xfc000000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q) 
                                       << 0x1aU)) | 
                       ((0xff800000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q) 
                                        << 0x17U)) 
                        | ((0xfff00000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q) 
                                           << 0x14U)) 
                           | ((0xfffe0000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q) 
                                              << 0x11U)) 
                              | ((0xffffc000U & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q) 
                                                 << 0xeU)) 
                                 | ((0xfffff800U & 
                                     ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q) 
                                      << 0xbU)) | (
                                                   (0xffffff00U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q) 
                                                       << 8U)) 
                                                   | ((0xffffffe0U 
                                                       & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q) 
                                                          << 5U)) 
                                                      | ((0xfffffffcU 
                                                          & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q) 
                                                             << 2U)) 
                                                         | (0x7fffffffU 
                                                            & ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q) 
                                                               >> 1U))))))))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
        = ((0xfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U]) 
           | (0xfffff000U & (__Vtemp760[0U] << 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
        = ((0xfffU & (__Vtemp760[0U] >> 0x14U)) | (0xfffff000U 
                                                   & (__Vtemp760[1U] 
                                                      << 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
        = ((0xfffU & (__Vtemp760[1U] >> 0x14U)) | (0xfffff000U 
                                                   & (__Vtemp770[2U] 
                                                      << 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
        = ((0xfffff000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]) 
           | (0xfffU & (__Vtemp770[2U] >> 0x14U)));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__149(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__149\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd 
                  >> 0x1fU) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)));
    if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd 
                              >> 0x10U) : (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd 
                                           >> 0x10U)));
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                              >> 0x10U) : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd));
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                         >> 1U) & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                   >> 0x1fU))));
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd);
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                              >> 0x10U) : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd));
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                         >> 1U) & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                   >> 0x1fU))));
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = (1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U) & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd 
                                   >> 0x1fU)) : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd 
                                                    >> 0x1fU)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                  >> 0x1fU) & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                               >> 1U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = (0x3ffffffffULL & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                              ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                  ? ((0x7ffffffffULL 
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
                                        & VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))
                                  : ((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
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
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                                << 0x1eU) 
                                                               | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                                  >> 2U))))))
                                      : ((0x7ffffffffULL 
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
                                            & VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))))
                              : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                  ? ((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
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
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                                << 0x1eU) 
                                                               | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                                  >> 2U))))))
                                      : ((0x7ffffffffULL 
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
                                            & VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))
                                  : ((0x7ffffffffULL 
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
                                        & VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1fU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (2U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (4U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (8U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 9U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 7U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 5U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 3U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 1U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 1U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 3U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 5U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 7U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 9U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1fU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U)));
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
        = ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
            ? ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U)) : ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                         ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                             ? ((1U 
                                                 == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                                                 ? 4U
                                                 : 3U)
                                             : 3U) : 
                                        ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                          ? 2U : ((2U 
                                                   == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                                   ? 
                                                  (((~ 
                                                     ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)
                                                   : 
                                                  (((~ 
                                                     ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd);
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U];
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd);
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                           (0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
                         >> 0x20U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1fU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (2U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (4U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (8U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x100U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x200U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x400U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x800U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 9U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x1000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 7U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x2000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 5U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x4000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 3U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x8000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 1U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 1U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 3U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 5U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 7U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x100000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 9U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x200000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x400000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x800000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x1000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x2000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x4000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x8000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80000000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1fU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
            if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
                        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
                        }
                    } else {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
                    }
                }
            } else {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
                    = ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                            ? 0U : 0U) : ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 0U)));
            }
        } else {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
                = ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                    ? ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                            ? 0U : 0U) : ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                           ? 0U : 0U))
                    : ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                            ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                ? 0U : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                            : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                : 0U)) : 0U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                    ? ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                            ? 0U : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : 0U)) : 
                       ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                         ? 0U : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                  ? 0U : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))))
                    : ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                        : ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                            ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                : 0U) : 0U))) : ((8U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                   : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                   ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))))));
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                    << 0x1eU) | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                 >> 2U)) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
            : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = (0x3ffffffffULL & (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])) 
                                           >> 2U)));
    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (0x3ffffffffULL & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                      ? ((2U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                          ? ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                               ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))
                                              ? (QData)((IData)(
                                                                (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 1U)))
                                              : (((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])) 
                                                    >> 2U)))
                                          : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                                              ? (QData)((IData)(
                                                                (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 1U)))
                                              : (((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])) 
                                                    >> 2U))))
                                      : ((2U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                          ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                          : (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)))));
        }
    } else {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                    = (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                        << 1U) | (QData)((IData)((1U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                                     >> (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
            } else {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                    = (QData)((IData)((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                             >> 0x1fU))));
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
            }
        } else {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
            } else {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                    = ((2U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? 0x3ffffffffULL : (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd)));
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = (IData)((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = ((0xfffffffcU & ((IData)(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                     ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                                     : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d)) 
                           << 2U)) | (IData)(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d)) 
                                              >> 0x20U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U] 
        = ((3U & ((IData)(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                            : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d)) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                                          ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                                                          : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] 
        = (IData)(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                    ? (0x3ffffffffULL & (((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U]))))
                    : 0ULL));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[1U] 
        = ((0xfffffffcU & ((IData)(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                     ? (0x3ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                              >> 2U)))
                                     : 0ULL)) << 2U)) 
           | (IData)((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                        ? (0x3ffffffffULL & (((QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U]))))
                        : 0ULL) >> 0x20U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[2U] 
        = ((3U & ((IData)(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                            ? (0x3ffffffffULL & (((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                                    >> 2U)))
                            : 0ULL)) >> 0x1eU)) | (0xfffffffcU 
                                                   & ((IData)(
                                                              (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                                 ? 
                                                                (0x3ffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U])) 
                                                                     << 0x1eU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                                                       >> 2U)))
                                                                 : 0ULL) 
                                                               >> 0x20U)) 
                                                      << 2U)));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__150(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__150\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr;
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__152(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__152\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
    if (vlTOPp->rst_ni) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d;
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q 
        = (1U & ((~ (IData)(vlTOPp->rst_ni)) | (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 2U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 3U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 9U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0xaU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0xbU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0xcU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0xdU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0xeU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0xfU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0x10U));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_q 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_d)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 2U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 3U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 4U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 5U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 7U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 8U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 9U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xaU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xbU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xcU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xdU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xeU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0xfU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x10U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk))))) {
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__153(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__153\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
            = (((~ (0xffffffffULL << (0x20U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                               << 5U)))) 
                & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage) 
               | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data)) 
                  << (0x20U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                               << 5U))));
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__155(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__155\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__156(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__156\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 2U)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 3U)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 9U)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xaU)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xbU)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xcU)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xdU)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xeU)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0xfU)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x10U)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q)))));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__157(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__157\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 1 
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__Vfuncout;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__grayval;
    CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp;
    CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp_sub;
    // Body
    __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__grayval 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync;
    __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp 
        = ((1U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp)) 
           | (2U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__grayval)));
    __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp 
        = ((2U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp)) 
           | (1U & (((IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp) 
                     >> 1U) ^ (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__grayval))));
    __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp_sub 
        = (3U & ((7U & (- (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp))) 
                 - (IData)(1U)));
    __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__Vfuncout 
        = ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__grayval))
            ? (4U | (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp_sub))
            : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__dec_tmp));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)
            ? (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__51__Vfuncout)
            : 0U);
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__158(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__158\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__cmdbusy 
        = (1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U) | (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_q)));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__159(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__159\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray;
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__160(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__160\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 1 
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__Vfuncout;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval_sub;
    CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval_in;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__Vfuncout;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval_sub;
    CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval_in;
    // Body
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr) {
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval_sub 
                = (7U & (((IData)(4U) - (3U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval))) 
                         - (IData)(1U)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval_in 
                = (3U & ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval))
                          ? (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval_sub)
                          : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__Vfuncout 
                = ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval)) 
                   | ((1U & ((IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval_in) 
                             >> 1U)) ^ (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__decval_in)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval 
                = (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                             >> 2U)) << 2U));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval_sub 
                = (7U & (((IData)(4U) - (3U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval))) 
                         - (IData)(1U)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval_in 
                = (3U & ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval))
                          ? (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval_sub)
                          : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__Vfuncout 
                = ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval)) 
                   | ((1U & ((IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval_in) 
                             >> 1U)) ^ (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__decval_in)));
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray 
                = ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                    ? (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__49__Vfuncout)
                    : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dec2gray__50__Vfuncout));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__161(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__161\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
    if (vlTOPp->rst_ni) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x14U) & 1U);
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q 
            = ((vlTOPp->gpio_i >> 0x19U) & 1U);
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 1U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 6U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x13U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x14U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x15U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x16U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x17U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x18U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x19U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1aU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1bU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1cU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                      >> 0x15U)))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q 
                = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__wr_data;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we)
                    ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                        << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                     >> 1U)) : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                    ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                        << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                     >> 1U)) : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                    ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                        << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                     >> 1U)) : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                    ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                        << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                     >> 1U)) : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                    ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                        << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                     >> 1U)) : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                    ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                        << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                     >> 1U)) : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next);
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error 
                = (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                      | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                     & (~ (IData)((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))))) 
                    | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                   | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                            >> 5U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                         >> 0xdU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                >> 0x33U)) & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U]))) {
                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__162(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__162\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x14U)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x19U)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q)))));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__163(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__163\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                             >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hfifo_rspvalid 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hfifo_rspvalid)) 
           | (IData)((0x8000000000000ULL == (0x8000800000000ULL 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hfifo_rspvalid 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hfifo_rspvalid)) 
           | ((IData)((0x8000800000000ULL == (0x8000800000000ULL 
                                              & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o))) 
              << 1U));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__164(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__164\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr;
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__165(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__165\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 = 0U;
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__166(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__166\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 5 
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__Vfuncout;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__grayval;
    CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp;
    CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp_sub;
    // Body
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
    if (vlTOPp->rst_ni) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q 
            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d;
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0x11U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0x12U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0x1dU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0x1eU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q 
        = ((IData)(vlTOPp->rst_ni) & (vlTOPp->gpio_i 
                                      >> 0x1fU));
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x11U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x12U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1dU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1eU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q 
                = (1U & (vlTOPp->gpio_i >> 0x1fU));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q = 0U;
    }
    __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__grayval 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync;
    __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp 
        = ((1U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp)) 
           | (2U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__grayval)));
    __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp 
        = ((2U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp)) 
           | (1U & (((IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp) 
                     >> 1U) ^ (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__grayval))));
    __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp_sub 
        = (3U & ((7U & (- (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp))) 
                 - (IData)(1U)));
    __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__Vfuncout 
        = ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__grayval))
            ? (4U | (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp_sub))
            : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__dec_tmp));
    if (vlTOPp->rst_ni) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync 
            = __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__57__Vfuncout;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq;
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__167(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__167\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr) {
        vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp;
        vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 = 1U;
        vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 
            = (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr));
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__168(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__168\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr;
    vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr;
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__169(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__169\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0 = 0U;
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__171(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__171\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0] 
            = vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__172(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__172\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n 
        = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__testmode_i)
                  ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__tck_i)
                  : (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__tck_i))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x11U)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x12U)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1dU)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1eU)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d 
        = (((1U & (vlTOPp->gpio_i >> 0x1fU)) != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q))
            ? 0U : ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q))
                     ? 0xfU : (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q)))));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__173(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__173\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_q 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_d;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_q 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_d;
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_q = 0U;
    }
    if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_q 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_d;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_q 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_d;
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_q = 0U;
    }
    if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni) {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty)))) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q = 1U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__174(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__174\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr) {
        vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0 
            = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req;
        vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0 = 1U;
        vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0 
            = (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr));
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__176(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__176\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__grayval 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync;
    vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp 
        = ((1U & (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp)) 
           | (2U & (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__grayval)));
    vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp 
        = ((2U & (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp)) 
           | (1U & (((IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp) 
                     >> 1U) ^ (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__grayval))));
    vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp_sub 
        = (3U & ((7U & (- (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp))) 
                 - (IData)(1U)));
    vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__Vfuncout 
        = ((4U & (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__grayval))
            ? (4U | (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp_sub))
            : (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi 
        = vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__Vfuncout;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq)
            : 0U);
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__178(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__178\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0] 
            = vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__179(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__179\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni) 
           & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir) 
              | (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__shift_dr)));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__td_o 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni) 
           & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
               ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
               : ((1U == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                   ? vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q
                   : ((0x10U == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                       ? vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q
                       : ((0x11U == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q)
                           : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q))))));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__181(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__181\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__grayval 
        = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync;
    vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp 
        = ((1U & (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp)) 
           | (2U & (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__grayval)));
    vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp 
        = ((2U & (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp)) 
           | (1U & (((IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp) 
                     >> 1U) ^ (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__grayval))));
    vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp_sub 
        = (3U & ((7U & (- (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp))) 
                 - (IData)(1U)));
    vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__Vfuncout 
        = ((4U & (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__grayval))
            ? (4U | (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp_sub))
            : (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi 
        = vlTOPp->__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__Vfuncout;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)
            ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray)
            : 0U);
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__182(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__182\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray)
            : 0U);
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__183(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__183\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)
            ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d)
            : 1U);
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__184(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__184\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 5 
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__Vfuncout;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval_sub;
    CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval_in;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__Vfuncout;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval_sub;
    CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval_in;
    // Body
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr) {
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval_sub 
                = (7U & (((IData)(4U) - (3U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval))) 
                         - (IData)(1U)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval_in 
                = (3U & ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval))
                          ? (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval_sub)
                          : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__Vfuncout 
                = ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval)) 
                   | ((1U & ((IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval_in) 
                             >> 1U)) ^ (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__decval_in)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval 
                = (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                             >> 2U)) << 2U));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval_sub 
                = (7U & (((IData)(4U) - (3U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval))) 
                         - (IData)(1U)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval_in 
                = (3U & ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval))
                          ? (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval_sub)
                          : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__Vfuncout 
                = ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval)) 
                   | ((1U & ((IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval_in) 
                             >> 1U)) ^ (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__decval_in)));
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray 
                = ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr)))
                    ? (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__52__Vfuncout)
                    : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__53__Vfuncout));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__185(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__185\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 5 
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__Vfuncout;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval_sub;
    CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval_in;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__Vfuncout;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval;
    CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval_sub;
    CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval_in;
    // Body
    if (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni) {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty)))) {
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval_sub 
                = (7U & (((IData)(4U) - (3U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval))) 
                         - (IData)(1U)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval_in 
                = (3U & ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval))
                          ? (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval_sub)
                          : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__Vfuncout 
                = ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval)) 
                   | ((1U & ((IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval_in) 
                             >> 1U)) ^ (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__decval_in)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval 
                = (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                             >> 2U)) << 2U));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval_sub 
                = (7U & (((IData)(4U) - (3U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval))) 
                         - (IData)(1U)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval_in 
                = (3U & ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval))
                          ? (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval_sub)
                          : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval)));
            __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__Vfuncout 
                = ((4U & (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval)) 
                   | ((1U & ((IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval_in) 
                             >> 1U)) ^ (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__decval_in)));
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray 
                = ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                    ? (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__55__Vfuncout)
                    : (IData)(__Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dec2gray__56__Vfuncout));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr 
        = vlTOPp->__Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr;
    vlTOPp->__Vtableidx7 = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_access 
        = vlTOPp->__Vtable7_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_access
        [vlTOPp->__Vtableidx7];
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dtmcs_select 
        = vlTOPp->__Vtable7_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dtmcs_select
        [vlTOPp->__Vtableidx7];
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select 
        = vlTOPp->__Vtable7_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select
        [vlTOPp->__Vtableidx7];
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select 
        = vlTOPp->__Vtable7_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select
        [vlTOPp->__Vtableidx7];
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
           == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr));
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__186(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__186\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp796[3];
    WData/*95:0*/ __Vtemp797[3];
    WData/*95:0*/ __Vtemp814[3];
    WData/*95:0*/ __Vtemp815[3];
    // Body
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2
        [1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i
        [1U][2U];
    __Vtemp796[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
        [0U][0U];
    __Vtemp796[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
        [0U][1U];
    __Vtemp796[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp797, __Vtemp796);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp797[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp797[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp797[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
        = (0x20U | ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                     [1U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                              [1U][2U] 
                                              << 1U)) 
                                  | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_i
                                     [1U][2U]))));
    __Vtemp814[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
        [0U][0U];
    __Vtemp814[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
        [0U][1U];
    __Vtemp814[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp815, __Vtemp814);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp815[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp815[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp815[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
        = (0x20U | ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                     [1U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                              [1U][2U] 
                                              << 1U)) 
                                  | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_i
                                     [1U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest)) 
           | (1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                    [0U][2U] >> 0x15U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest)) 
           | (2U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hreq_fifo_o
                    [1U][2U] >> 0x14U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest)) 
           | (1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                    [0U][2U] >> 0x15U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest)) 
           | (2U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hreq_fifo_o
                    [1U][2U] >> 0x14U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DCCM__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DCCM__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__GPIO__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__GPIO__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DCCM__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DCCM__tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__GPIO__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__GPIO__tl_h_o
        [1U];
}
