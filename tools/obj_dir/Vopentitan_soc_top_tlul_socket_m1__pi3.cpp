// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopentitan_soc_top.h for the primary calling header

#include "Vopentitan_soc_top_tlul_socket_m1__pi3.h"
#include "Vopentitan_soc_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__23(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__23\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hfifo_rspvalid = ((2U & (IData)(this->__PVT__hfifo_rspvalid)) 
                                   | (IData)((0x8000000000000ULL 
                                              == (0x8000800000000ULL 
                                                  & this->__PVT__drsp_fifo_o))));
    this->__PVT__hfifo_rspvalid = ((1U & (IData)(this->__PVT__hfifo_rspvalid)) 
                                   | ((IData)((0x8000800000000ULL 
                                               == (0x8000800000000ULL 
                                                   & this->__PVT__drsp_fifo_o))) 
                                      << 1U));
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_m1__pi3::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO__243(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO__243\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp65[5];
    WData/*95:0*/ __Vtemp66[3];
    WData/*319:0*/ __Vtemp79[10];
    WData/*479:0*/ __Vtemp81[15];
    // Body
    this->__PVT__dfifo_rspready = ((2U & (IData)(this->__PVT__dfifo_rspready)) 
                                   | (1U & (IData)(
                                                   ((0x8000000000000ULL 
                                                     == 
                                                     (0x8000800000000ULL 
                                                      & this->__PVT__drsp_fifo_o)) 
                                                    & this->__PVT__hreq_fifo_o
                                                    [0U][0U]))));
    this->__PVT__dfifo_rspready = ((1U & (IData)(this->__PVT__dfifo_rspready)) 
                                   | (2U & (((this->__PVT__hreq_fifo_o
                                              [1U][0U] 
                                              & (IData)(
                                                        (this->__PVT__drsp_fifo_o 
                                                         >> 0x23U))) 
                                             & (IData)(
                                                       (this->__PVT__drsp_fifo_o 
                                                        >> 0x33U))) 
                                            << 1U)));
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = this->__PVT__hreq_fifo_o[0U][0U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = this->__PVT__hreq_fifo_o[0U][1U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = this->__PVT__hreq_fifo_o[0U][2U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = this->__PVT__hreq_fifo_o[1U][0U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = this->__PVT__hreq_fifo_o[1U][1U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = this->__PVT__hreq_fifo_o[1U][2U];
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    this->__PVT__dreq_fifo_i[0U] = (IData)((((QData)((IData)(
                                                             (0xfU 
                                                              & ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                                  << 0x1fU) 
                                                                 | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                    >> 1U))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                  << 0x1fU) 
                                                                 | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                                    >> 1U)))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != (IData)(this->__PVT__dfifo_rspready)))))));
    this->__PVT__dreq_fifo_i[1U] = ((0xffffffe0U & 
                                     this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 (0xfU 
                                                                  & ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                                      << 0x1fU) 
                                                                     | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                        >> 1U))))) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                      << 0x1fU) 
                                                                     | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                                        >> 1U)))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (0U 
                                                                      != (IData)(this->__PVT__dfifo_rspready)))))) 
                                               >> 0x20U)));
    this->__PVT__dreq_fifo_i[2U] = ((0xffe00000U & 
                                     ((IData)((0U != (IData)(this->__PVT__hrequest))) 
                                      << 0x15U)) | 
                                    ((0x1c0000U & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                     | ((0x38000U & 
                                         this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                        | ((0x6000U 
                                            & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                           | ((0x1fe0U 
                                               & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                              | (0x1fU 
                                                 & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & this->__PVT__dreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & this->__PVT__dreq_fifo_i[1U]) 
                        | (0xfffffffeU & this->__PVT__dreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | (0x3fffffU & ((1U & this->__PVT__dreq_fifo_i[2U]) 
                                        | (0x1ffffeU 
                                           & this->__PVT__dreq_fifo_i[2U]))));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & this->__PVT__dreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & this->__PVT__dreq_fifo_i[0U]));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit = 0U;
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffeU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | (0U == (0x3cU & ((this->tl_d_o[2U] << 0x1bU) 
                              | (0x7fffffcU & (this->tl_d_o[1U] 
                                               >> 5U))))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffdU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((4U == (0x3cU & ((this->tl_d_o[2U] << 0x1bU) 
                               | (0x7fffffcU & (this->tl_d_o[1U] 
                                                >> 5U))))) 
              << 1U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffbU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((8U == (0x3cU & ((this->tl_d_o[2U] << 0x1bU) 
                               | (0x7fffffcU & (this->tl_d_o[1U] 
                                                >> 5U))))) 
              << 2U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7ff7U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0xcU == (0x3cU & ((this->tl_d_o[2U] 
                                  << 0x1bU) | (0x7fffffcU 
                                               & (this->tl_d_o[1U] 
                                                  >> 5U))))) 
              << 3U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7fefU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x10U == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 4U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7fdfU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x14U == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 5U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7fbfU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x18U == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 6U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7f7fU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x1cU == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 7U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7effU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x20U == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 8U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7dffU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x24U == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 9U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x7bffU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x28U == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 0xaU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x77ffU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x2cU == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 0xbU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x6fffU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x30U == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 0xcU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x5fffU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x34U == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 0xdU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffU & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)) 
           | ((0x38U == (0x3cU & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (0x7fffffcU 
                                                & (this->tl_d_o[1U] 
                                                   >> 5U))))) 
              << 0xeU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
        = ((this->tl_d_o[2U] >> 0x15U) & ((0U == (3U 
                                                  & (this->tl_d_o[2U] 
                                                     >> 0xdU)))
                                           ? (0U != 
                                              (0xfU 
                                               & (((this->tl_d_o[2U] 
                                                    << 0x1fU) 
                                                   | (this->tl_d_o[1U] 
                                                      >> 1U)) 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & ((this->tl_d_o[2U] 
                                                          << 0x1bU) 
                                                         | (this->tl_d_o[1U] 
                                                            >> 5U)))))))
                                           : ((1U == 
                                               (3U 
                                                & (this->tl_d_o[2U] 
                                                   >> 0xdU)))
                                               ? ((0x40U 
                                                   & this->tl_d_o[1U])
                                                   ? 
                                                  (3U 
                                                   == 
                                                   (3U 
                                                    & ((this->tl_d_o[2U] 
                                                        << 0x1dU) 
                                                       | (this->tl_d_o[1U] 
                                                          >> 3U))))
                                                   : 
                                                  (3U 
                                                   == 
                                                   (3U 
                                                    & ((this->tl_d_o[2U] 
                                                        << 0x1fU) 
                                                       | (this->tl_d_o[1U] 
                                                          >> 1U)))))
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (this->tl_d_o[2U] 
                                                       >> 0xdU))) 
                                                  & (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & ((this->tl_d_o[2U] 
                                                          << 0x1fU) 
                                                         | (this->tl_d_o[1U] 
                                                            >> 1U))))))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((this->tl_d_o[2U] >> 0x15U) & ((0U 
                                                 == 
                                                 (3U 
                                                  & (this->tl_d_o[2U] 
                                                     >> 0xdU))) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & (this->tl_d_o[2U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   (~ 
                                                    (this->tl_d_o[1U] 
                                                     >> 5U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (this->tl_d_o[2U] 
                                                         >> 0xdU))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & ((this->tl_d_o[2U] 
                                                                       << 0x1bU) 
                                                                      | (this->tl_d_o[1U] 
                                                                         >> 5U)))))))))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
        = (1U & ((this->tl_d_o[2U] >> 0x15U) & ((0U 
                                                 == 
                                                 (3U 
                                                  & (this->tl_d_o[2U] 
                                                     >> 0xdU)))
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (((this->tl_d_o[2U] 
                                                                  << 0x1fU) 
                                                                 | (this->tl_d_o[1U] 
                                                                    >> 1U)) 
                                                                & (~ 
                                                                   ((IData)(1U) 
                                                                    << 
                                                                    (3U 
                                                                     & ((this->tl_d_o[2U] 
                                                                         << 0x1bU) 
                                                                        | (this->tl_d_o[1U] 
                                                                           >> 5U))))))))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (this->tl_d_o[2U] 
                                                      >> 0xdU)))
                                                  ? 
                                                 ((0x40U 
                                                   & this->tl_d_o[1U])
                                                   ? 
                                                  (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & ((this->tl_d_o[2U] 
                                                                   << 0x1fU) 
                                                                  | (this->tl_d_o[1U] 
                                                                     >> 1U))))))
                                                   : 
                                                  (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xcU 
                                                               & ((this->tl_d_o[2U] 
                                                                   << 0x1fU) 
                                                                  | (this->tl_d_o[1U] 
                                                                     >> 1U)))))))
                                                  : 
                                                 (2U 
                                                  == 
                                                  (3U 
                                                   & (this->tl_d_o[2U] 
                                                      >> 0xdU)))))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((this->tl_d_o[2U] >> 0x15U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (this->tl_d_o[2U] >> 0x12U))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (this->tl_d_o[2U] >> 0x12U))) 
              | (1U == (7U & (this->tl_d_o[2U] >> 0x12U)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & ((this->tl_d_o[2U] 
                                   << 0x1bU) | (this->tl_d_o[1U] 
                                                >> 5U))))) 
                 | (~ ((((0U == (7U & (this->tl_d_o[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (this->tl_d_o[2U] 
                                         >> 0x12U)))) 
                        | (4U == (7U & (this->tl_d_o[2U] 
                                        >> 0x12U)))) 
                       & (((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                           & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                          & (((4U == (7U & (this->tl_d_o[2U] 
                                            >> 0x12U))) 
                              | (1U == (7U & (this->tl_d_o[2U] 
                                              >> 0x12U)))) 
                             | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 0U;
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
          & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xaU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xbU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xcU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xdU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xeU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((this->tl_d_o[2U] << 0x1fU) 
                             | (this->tl_d_o[1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((0xfffffU < ((this->tl_d_o[1U] << 0x1fU) | 
                     (this->tl_d_o[0U] >> 1U)))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    __Vtemp65[1U] = ((0xfff80000U & (this->tl_d_o[0U] 
                                     << 0x12U)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                               & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                                             << 0x32U) 
                                                            | (((QData)((IData)(
                                                                                ((this->tl_d_o[1U] 
                                                                                << 0x1fU) 
                                                                                | (this->tl_d_o[0U] 
                                                                                >> 1U)))) 
                                                                << 0x12U) 
                                                               | (QData)((IData)(
                                                                                ((0xfffe0000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xdU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                                << 0x11U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0x11U))) 
                                                                                | ((0x7feU 
                                                                                & this->tl_d_o[0U]) 
                                                                                | ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 5U) 
                                                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))))))) 
                                                           >> 0x20U)));
    __Vtemp66[0U] = (IData)((((QData)((IData)(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                 >> 7U) 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                              << 0x32U) | (((QData)((IData)(
                                                            (0xffffU 
                                                             & ((this->tl_d_o[1U] 
                                                                 << 0x1fU) 
                                                                | (this->tl_d_o[0U] 
                                                                   >> 1U))))) 
                                            << 0x22U) 
                                           | (((QData)((IData)(
                                                               ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                  >> 8U) 
                                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & ((this->tl_d_o[1U] 
                                                                       << 0xfU) 
                                                                      | (this->tl_d_o[0U] 
                                                                         >> 0x11U))))) 
                                                  << 0x11U) 
                                                 | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                          << 8U) 
                                                                         & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                            << 0x10U)) 
                                                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                           << 0x10U))) 
                                                                    | (0xffffU 
                                                                       & ((this->tl_d_o[1U] 
                                                                           << 0x1fU) 
                                                                          | (this->tl_d_o[0U] 
                                                                             >> 1U)))))))))));
    __Vtemp66[1U] = ((0xfff80000U & (this->tl_d_o[0U] 
                                     << 0x12U)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 7U) 
                                                                               & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                                             << 0x32U) 
                                                            | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((this->tl_d_o[1U] 
                                                                                << 0x1fU) 
                                                                                | (this->tl_d_o[0U] 
                                                                                >> 1U))))) 
                                                                << 0x22U) 
                                                               | (((QData)((IData)(
                                                                                ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 8U) 
                                                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                                                   << 0x21U) 
                                                                  | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((this->tl_d_o[1U] 
                                                                                << 0xfU) 
                                                                                | (this->tl_d_o[0U] 
                                                                                >> 0x11U))))) 
                                                                      << 0x11U) 
                                                                     | (QData)((IData)(
                                                                                ((0xffff0000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                                << 0x10U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0x10U))) 
                                                                                | (0xffffU 
                                                                                & ((this->tl_d_o[1U] 
                                                                                << 0x1fU) 
                                                                                | (this->tl_d_o[0U] 
                                                                                >> 1U)))))))))) 
                                                           >> 0x20U)));
    __Vtemp79[8U] = ((0x3ffffU & ((0x3ffc0U & (this->tl_d_o[0U] 
                                               >> 0xbU)) 
                                  | ((0x3ffe0U & ((
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                    >> 1U) 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                      << 5U)) 
                                                  & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                     << 5U))) 
                                     | (0x1fU & ((0x10U 
                                                  & (this->tl_d_o[1U] 
                                                     << 4U)) 
                                                 | (this->tl_d_o[0U] 
                                                    >> 0x1cU)))))) 
                     | (0xfffc0000U & ((0xff800000U 
                                        & (this->tl_d_o[0U] 
                                           << 0x16U)) 
                                       | ((0xffc00000U 
                                           & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                << 0x10U) 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                  << 0x16U)) 
                                              & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                 << 0x16U))) 
                                          | (0x3c0000U 
                                             & ((0xffe00000U 
                                                 & (this->tl_d_o[1U] 
                                                    << 0x15U)) 
                                                | (0x1c0000U 
                                                   & (this->tl_d_o[0U] 
                                                      >> 0xbU))))))));
    __Vtemp81[9U] = (0xfc0000U | ((0xff000000U & ((IData)(
                                                          (((QData)((IData)(
                                                                            ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                               >> 2U) 
                                                                              & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(
                                                                               ((this->tl_d_o[1U] 
                                                                                << 0x1fU) 
                                                                                | (this->tl_d_o[0U] 
                                                                                >> 1U)))) 
                                                               << 0x12U) 
                                                              | (QData)((IData)(
                                                                                ((0xfffe0000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xdU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                                << 0x11U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0x11U))) 
                                                                                | ((0x7feU 
                                                                                & this->tl_d_o[0U]) 
                                                                                | ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 5U) 
                                                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))))))))) 
                                                  << 0x18U)) 
                                  | (0x3ffffU & ((0x3ff00U 
                                                  & (this->tl_d_o[0U] 
                                                     >> 3U)) 
                                                 | ((0x3ff80U 
                                                     & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                          << 2U) 
                                                         & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                            << 7U)) 
                                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                           << 7U))) 
                                                    | ((0x7fU 
                                                        & (this->tl_d_o[0U] 
                                                           >> 0xaU)) 
                                                       | (0xffffU 
                                                          & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                               >> 0x10U) 
                                                              & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                 >> 0xaU)) 
                                                             & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                >> 0xaU)))))))));
    __Vtemp81[0xaU] = ((0xffffffU & ((IData)((((QData)((IData)(
                                                               ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                  >> 2U) 
                                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  ((this->tl_d_o[1U] 
                                                                    << 0x1fU) 
                                                                   | (this->tl_d_o[0U] 
                                                                      >> 1U)))) 
                                                  << 0x12U) 
                                                 | (QData)((IData)(
                                                                   ((0xfffe0000U 
                                                                     & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                          << 0xdU) 
                                                                         & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                            << 0x11U)) 
                                                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                           << 0x11U))) 
                                                                    | ((0x7feU 
                                                                        & this->tl_d_o[0U]) 
                                                                       | ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                            >> 5U) 
                                                                           & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))))))))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp65[1U] 
                                                   << 0x18U)));
    __Vtemp81[0xcU] = ((0xffffffU & ((0x7ffU & ((0x400U 
                                                 & (this->tl_d_o[1U] 
                                                    << 0xaU)) 
                                                | (this->tl_d_o[0U] 
                                                   >> 0x16U))) 
                                     | (0xfff800U & 
                                        ((IData)((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                         << 0xbU)))) 
                       | (0xff000000U & ((IData)((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                         << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
        = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q;
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U] 
        = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q;
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U] 
        = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q;
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U] 
        = (IData)((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U] 
        = (IData)(((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q))) 
                   >> 0x20U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
        = ((0xfffc0000U & (__Vtemp66[0U] << 0x12U)) 
           | ((0xfffe0000U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                << 8U) & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                          << 0x11U)) 
                              & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                 << 0x11U))) | ((0x1fffeU 
                                                 & ((this->tl_d_o[1U] 
                                                     << 0x10U) 
                                                    | (0xfffeU 
                                                       & (this->tl_d_o[0U] 
                                                          >> 0x10U)))) 
                                                | ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                     >> 9U) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
        = ((0x3ffffU & (__Vtemp66[0U] >> 0xeU)) | (0xfffc0000U 
                                                   & (__Vtemp66[1U] 
                                                      << 0x12U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
        = ((0x3ffffU & (__Vtemp66[1U] >> 0xeU)) | (0xfffc0000U 
                                                   & (this->tl_d_o[0U] 
                                                      << 4U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
        = __Vtemp79[8U];
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
        = __Vtemp81[9U];
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
        = __Vtemp81[0xaU];
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
        = ((0xffffffU & (__Vtemp65[1U] >> 8U)) | (0xff000000U 
                                                  & (this->tl_d_o[0U] 
                                                     << 0xaU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
        = __Vtemp81[0xcU];
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
        = ((0xffffffU & ((0x7ffU & ((IData)((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                    >> 0x15U)) | (0xfff800U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                                                              >> 0x20U)) 
                                                     << 0xbU)))) 
           | (0xff000000U & ((IData)(((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                                      >> 0x20U)) << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
        = (0x7ffU & ((IData)(((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                << 0x20U) | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                              >> 0x20U)) >> 0x15U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (1U & ((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                     ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                     : vlTOPp->gpio_i)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (2U & (((2U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                      : (vlTOPp->gpio_i >> 1U)) << 1U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (4U & (((4U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                      : (vlTOPp->gpio_i >> 2U)) << 2U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (8U & (((8U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                      : (vlTOPp->gpio_i >> 3U)) << 3U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x10U & (((0x10U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 4U)) 
                       << 4U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x20U & (((0x20U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 5U)) 
                       << 5U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x40U & (((0x40U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 6U)) 
                       << 6U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x80U & (((0x80U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 7U)) 
                       << 7U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x100U & (((0x100U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 8U)) 
                        << 8U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x200U & (((0x200U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 9U)) 
                        << 9U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x400U & (((0x400U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 0xaU)) 
                        << 0xaU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x800U & (((0x800U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 0xbU)) 
                        << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x1000U & (((0x1000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xcU)) 
                         << 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x2000U & (((0x2000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xdU)) 
                         << 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x4000U & (((0x4000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xeU)) 
                         << 0xeU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x8000U & (((0x8000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xfU)) 
                         << 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x10000U & (((0x10000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x10U)) 
                          << 0x10U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x20000U & (((0x20000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x11U)) 
                          << 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x40000U & (((0x40000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x12U)) 
                          << 0x12U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x80000U & (((0x80000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x13U)) 
                          << 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x100000U & (((0x100000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x14U)) 
                           << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x200000U & (((0x200000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x15U)) 
                           << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x400000U & (((0x400000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x16U)) 
                           << 0x16U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x800000U & (((0x800000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x17U)) 
                           << 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x1000000U & (((0x1000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x18U)) 
                            << 0x18U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x2000000U & (((0x2000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x19U)) 
                            << 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x4000000U & (((0x4000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x1aU)) 
                            << 0x1aU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x8000000U & (((0x8000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x1bU)) 
                            << 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x10000000U & (((0x10000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1cU)) 
                             << 0x1cU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x20000000U & (((0x20000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1dU)) 
                             << 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x40000000U & (((0x40000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1eU)) 
                             << 0x1eU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x80000000U & (((0x80000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1fU)) 
                             << 0x1fU)));
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_m1__pi3::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__238(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__238\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(this->__PVT__hrequest)) 
             & (IData)(this->__PVT__drsp_fifo_o))) {
            this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(this->__PVT__hrequest)) 
                 & (~ (IData)(this->__PVT__drsp_fifo_o)))) {
                this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_m1__pi3::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__242(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__242\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__dfifo_rspready = ((2U & (IData)(this->__PVT__dfifo_rspready)) 
                                   | (1U & (IData)(
                                                   ((0x8000000000000ULL 
                                                     == 
                                                     (0x8000800000000ULL 
                                                      & this->__PVT__drsp_fifo_o)) 
                                                    & this->__PVT__hreq_fifo_o
                                                    [0U][0U]))));
    this->__PVT__dfifo_rspready = ((1U & (IData)(this->__PVT__dfifo_rspready)) 
                                   | (2U & (((this->__PVT__hreq_fifo_o
                                              [1U][0U] 
                                              & (IData)(
                                                        (this->__PVT__drsp_fifo_o 
                                                         >> 0x23U))) 
                                             & (IData)(
                                                       (this->__PVT__drsp_fifo_o 
                                                        >> 0x33U))) 
                                            << 1U)));
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = this->__PVT__hreq_fifo_o[0U][0U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = this->__PVT__hreq_fifo_o[0U][1U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = this->__PVT__hreq_fifo_o[0U][2U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = this->__PVT__hreq_fifo_o[1U][0U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = this->__PVT__hreq_fifo_o[1U][1U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = this->__PVT__hreq_fifo_o[1U][2U];
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    this->__PVT__dreq_fifo_i[0U] = (IData)((((QData)((IData)(
                                                             (0xfU 
                                                              & ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                                  << 0x1fU) 
                                                                 | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                    >> 1U))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                  << 0x1fU) 
                                                                 | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                                    >> 1U)))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != (IData)(this->__PVT__dfifo_rspready)))))));
    this->__PVT__dreq_fifo_i[1U] = ((0xffffffe0U & 
                                     this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 (0xfU 
                                                                  & ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                                      << 0x1fU) 
                                                                     | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                        >> 1U))))) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                      << 0x1fU) 
                                                                     | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                                        >> 1U)))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (0U 
                                                                      != (IData)(this->__PVT__dfifo_rspready)))))) 
                                               >> 0x20U)));
    this->__PVT__dreq_fifo_i[2U] = ((0xffe00000U & 
                                     ((IData)((0U != (IData)(this->__PVT__hrequest))) 
                                      << 0x15U)) | 
                                    ((0x1c0000U & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                     | ((0x38000U & 
                                         this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                        | ((0x6000U 
                                            & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                           | ((0x1fe0U 
                                               & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                              | (0x1fU 
                                                 & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & this->__PVT__dreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & this->__PVT__dreq_fifo_i[1U]) 
                        | (0xfffffffeU & this->__PVT__dreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | (0x3fffffU & ((1U & this->__PVT__dreq_fifo_i[2U]) 
                                        | (0x1ffffeU 
                                           & this->__PVT__dreq_fifo_i[2U]))));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & this->__PVT__dreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & this->__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__PLIC__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__PLIC__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__PLIC__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__PLIC__tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[3U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[4U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[5U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[5U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[6U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[8U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[9U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[0xaU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[9U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[0xaU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[3U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [3U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[4U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [4U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[5U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [5U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[6U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [6U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[7U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [7U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[8U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [8U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[9U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [9U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[0xaU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [0xaU];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[0xbU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [0xbU];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[0xcU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h
        [0xcU];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[3U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [3U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[4U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [4U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[5U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [5U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[6U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [6U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[7U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [7U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[8U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [8U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[9U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [9U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[0xaU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [0xaU];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[0xbU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [0xbU];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i[0xcU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i
        [0xcU];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                           [2U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [2U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [2U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                             [2U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                           [3U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [3U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [3U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                             [3U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                           [4U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [4U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [4U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                             [4U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                           [5U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [5U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [5U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                             [5U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                           [0xcU])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                    [0xcU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
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
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                                                   [0xcU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_i
                                             [0xcU] 
                                             >> 0x33U))))) 
              << 0x33U));
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_m1__pi3::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1__239(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1__239\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(this->__PVT__hrequest)) 
             & (IData)(this->__PVT__drsp_fifo_o))) {
            this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(this->__PVT__hrequest)) 
                 & (~ (IData)(this->__PVT__drsp_fifo_o)))) {
                this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_m1__pi3::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1__240(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1__240\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(this->__PVT__hrequest)) 
             & (IData)(this->__PVT__drsp_fifo_o))) {
            this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(this->__PVT__hrequest)) 
                 & (~ (IData)(this->__PVT__drsp_fifo_o)))) {
                this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_m1__pi3::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1__245(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1__245\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__dfifo_rspready = ((2U & (IData)(this->__PVT__dfifo_rspready)) 
                                   | (1U & (IData)(
                                                   ((0x8000000000000ULL 
                                                     == 
                                                     (0x8000800000000ULL 
                                                      & this->__PVT__drsp_fifo_o)) 
                                                    & this->__PVT__hreq_fifo_o
                                                    [0U][0U]))));
    this->__PVT__dfifo_rspready = ((1U & (IData)(this->__PVT__dfifo_rspready)) 
                                   | (2U & (((this->__PVT__hreq_fifo_o
                                              [1U][0U] 
                                              & (IData)(
                                                        (this->__PVT__drsp_fifo_o 
                                                         >> 0x23U))) 
                                             & (IData)(
                                                       (this->__PVT__drsp_fifo_o 
                                                        >> 0x33U))) 
                                            << 1U)));
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = this->__PVT__hreq_fifo_o[0U][0U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = this->__PVT__hreq_fifo_o[0U][1U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = this->__PVT__hreq_fifo_o[0U][2U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = this->__PVT__hreq_fifo_o[1U][0U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = this->__PVT__hreq_fifo_o[1U][1U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = this->__PVT__hreq_fifo_o[1U][2U];
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    this->__PVT__dreq_fifo_i[0U] = (IData)((((QData)((IData)(
                                                             (0xfU 
                                                              & ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                                  << 0x1fU) 
                                                                 | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                    >> 1U))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                  << 0x1fU) 
                                                                 | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                                    >> 1U)))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != (IData)(this->__PVT__dfifo_rspready)))))));
    this->__PVT__dreq_fifo_i[1U] = ((0xffffffe0U & 
                                     this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 (0xfU 
                                                                  & ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                                      << 0x1fU) 
                                                                     | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                        >> 1U))))) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                      << 0x1fU) 
                                                                     | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                                        >> 1U)))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (0U 
                                                                      != (IData)(this->__PVT__dfifo_rspready)))))) 
                                               >> 0x20U)));
    this->__PVT__dreq_fifo_i[2U] = ((0xffe00000U & 
                                     ((IData)((0U != (IData)(this->__PVT__hrequest))) 
                                      << 0x15U)) | 
                                    ((0x1c0000U & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                     | ((0x38000U & 
                                         this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                        | ((0x6000U 
                                            & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                           | ((0x1fe0U 
                                               & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                              | (0x1fU 
                                                 & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & this->__PVT__dreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & this->__PVT__dreq_fifo_i[1U]) 
                        | (0xfffffffeU & this->__PVT__dreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | (0x3fffffU & ((1U & this->__PVT__dreq_fifo_i[2U]) 
                                        | (0x1ffffeU 
                                           & this->__PVT__dreq_fifo_i[2U]))));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & this->__PVT__dreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & this->__PVT__dreq_fifo_i[0U]));
    vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk 
        = ((this->tl_d_o[2U] >> 0x15U) & ((0U == (3U 
                                                  & (this->tl_d_o[2U] 
                                                     >> 0xdU)))
                                           ? (0U != 
                                              (0xfU 
                                               & (((this->tl_d_o[2U] 
                                                    << 0x1fU) 
                                                   | (this->tl_d_o[1U] 
                                                      >> 1U)) 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & ((this->tl_d_o[2U] 
                                                          << 0x1bU) 
                                                         | (this->tl_d_o[1U] 
                                                            >> 5U)))))))
                                           : ((1U == 
                                               (3U 
                                                & (this->tl_d_o[2U] 
                                                   >> 0xdU)))
                                               ? ((0x40U 
                                                   & this->tl_d_o[1U])
                                                   ? 
                                                  (3U 
                                                   == 
                                                   (3U 
                                                    & ((this->tl_d_o[2U] 
                                                        << 0x1dU) 
                                                       | (this->tl_d_o[1U] 
                                                          >> 3U))))
                                                   : 
                                                  (3U 
                                                   == 
                                                   (3U 
                                                    & ((this->tl_d_o[2U] 
                                                        << 0x1fU) 
                                                       | (this->tl_d_o[1U] 
                                                          >> 1U)))))
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (this->tl_d_o[2U] 
                                                       >> 0xdU))) 
                                                  & (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & ((this->tl_d_o[2U] 
                                                          << 0x1fU) 
                                                         | (this->tl_d_o[1U] 
                                                            >> 1U))))))));
    vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((this->tl_d_o[2U] >> 0x15U) & ((0U 
                                                 == 
                                                 (3U 
                                                  & (this->tl_d_o[2U] 
                                                     >> 0xdU))) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & (this->tl_d_o[2U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   (~ 
                                                    (this->tl_d_o[1U] 
                                                     >> 5U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (this->tl_d_o[2U] 
                                                         >> 0xdU))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & ((this->tl_d_o[2U] 
                                                                       << 0x1bU) 
                                                                      | (this->tl_d_o[1U] 
                                                                         >> 5U)))))))))));
    vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk 
        = (1U & ((this->tl_d_o[2U] >> 0x15U) & ((0U 
                                                 == 
                                                 (3U 
                                                  & (this->tl_d_o[2U] 
                                                     >> 0xdU)))
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (((this->tl_d_o[2U] 
                                                                  << 0x1fU) 
                                                                 | (this->tl_d_o[1U] 
                                                                    >> 1U)) 
                                                                & (~ 
                                                                   ((IData)(1U) 
                                                                    << 
                                                                    (3U 
                                                                     & ((this->tl_d_o[2U] 
                                                                         << 0x1bU) 
                                                                        | (this->tl_d_o[1U] 
                                                                           >> 5U))))))))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (this->tl_d_o[2U] 
                                                      >> 0xdU)))
                                                  ? 
                                                 ((0x40U 
                                                   & this->tl_d_o[1U])
                                                   ? 
                                                  (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & ((this->tl_d_o[2U] 
                                                                   << 0x1fU) 
                                                                  | (this->tl_d_o[1U] 
                                                                     >> 1U))))))
                                                   : 
                                                  (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xcU 
                                                               & ((this->tl_d_o[2U] 
                                                                   << 0x1fU) 
                                                                  | (this->tl_d_o[1U] 
                                                                     >> 1U)))))))
                                                  : 
                                                 (2U 
                                                  == 
                                                  (3U 
                                                   & (this->tl_d_o[2U] 
                                                      >> 0xdU)))))));
    vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack 
        = (1U & ((this->tl_d_o[2U] >> 0x15U) & (IData)(vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar)));
    vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack) 
           & ((0U == (7U & (this->tl_d_o[2U] >> 0x12U))) 
              | (1U == (7U & (this->tl_d_o[2U] >> 0x12U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0ULL != (0xffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) {
        if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q) 
                      << 1U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q) 
                      << 2U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q) 
                      << 3U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q) 
                      << 4U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q) 
                      << 5U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q) 
                      << 6U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q) 
                      << 7U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q) 
                      << 8U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q) 
                      << 9U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q) 
                      << 0xaU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q) 
                      << 0xbU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q) 
                      << 0xcU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q) 
                      << 0xdU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q) 
                      << 0xeU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q) 
                      << 0xfU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q) 
                      << 0x10U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q) 
                      << 0x11U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q) 
                      << 0x12U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q) 
                      << 0x13U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q) 
                      << 0x14U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q) 
                      << 0x15U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q) 
                      << 0x16U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q) 
                      << 0x17U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q) 
                      << 0x18U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q) 
                      << 0x19U));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q) 
                      << 0x1aU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q) 
                      << 0x1bU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q) 
                      << 0x1cU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q) 
                      << 0x1dU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q) 
                      << 0x1eU));
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q) 
                      << 0x1fU));
        } else {
            if ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                               >> 1U)))) {
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q) 
                          << 1U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q) 
                          << 2U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q) 
                          << 3U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q) 
                          << 4U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q) 
                          << 5U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q) 
                          << 6U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q) 
                          << 7U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q) 
                          << 8U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q) 
                          << 9U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q) 
                          << 0xaU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q) 
                          << 0xbU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q) 
                          << 0xcU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q) 
                          << 0xdU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q) 
                          << 0xeU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q) 
                          << 0xfU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q) 
                          << 0x10U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q) 
                          << 0x11U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q) 
                          << 0x12U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q) 
                          << 0x13U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q) 
                          << 0x14U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q) 
                          << 0x15U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q) 
                          << 0x16U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q) 
                          << 0x17U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q) 
                          << 0x18U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q) 
                          << 0x19U));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q) 
                          << 0x1aU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q) 
                          << 0x1bU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q) 
                          << 0x1cU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q) 
                          << 0x1dU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q) 
                          << 0x1eU));
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q) 
                          << 0x1fU));
            } else {
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffff8U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                         >> 2U))) ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q)
                           : ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 3U)))
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q)
                               : ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 4U)))
                                   ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q)
                                   : ((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                     >> 5U)))
                                       ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q)
                                       : ((1U & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                         >> 6U)))
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q)
                                           : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q)))))));
            }
        }
    } else {
        if ((IData)((0ULL != (0x1f700ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) {
            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                     >> 8U))) ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q)
                       : ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                         >> 9U))) ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q)
                           : ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0xaU)))
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q)
                               : ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 0xcU)))
                                   ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q)
                                   : ((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                     >> 0xdU)))
                                       ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q)
                                       : ((1U & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                         >> 0xeU)))
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q)
                                           : ((1U & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                             >> 0xfU)))
                                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q)
                                               : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q)))))))));
        } else {
            if ((IData)((0ULL != (0x1fe0000ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) {
                vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffff8U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                         >> 0x11U)))
                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q)
                           : ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x12U)))
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q)
                               : ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x13U)))
                                   ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q)
                                   : ((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                     >> 0x14U)))
                                       ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q)
                                       : ((1U & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                         >> 0x15U)))
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q)
                                           : ((1U & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                             >> 0x16U)))
                                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                              >> 0x17U)))
                                                   ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q)
                                                   : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q)))))))));
            } else {
                if ((IData)((0ULL != (0x1fe000000ULL 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) {
                    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                        = ((0xfffffff8U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                           | ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x19U)))
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q)
                               : ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x1aU)))
                                   ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q)
                                   : ((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                     >> 0x1bU)))
                                       ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q)
                                       : ((1U & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                         >> 0x1cU)))
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q)
                                           : ((1U & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                             >> 0x1dU)))
                                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                              >> 0x1eU)))
                                                   ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x1fU)))
                                                    ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q)
                                                    : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q)))))))));
                } else {
                    if ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                       >> 0x21U)))) {
                        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffff8U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                               | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q));
                    } else {
                        if ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                           >> 0x22U)))) {
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q) 
                                      << 1U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q) 
                                      << 2U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q) 
                                      << 3U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q) 
                                      << 4U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q) 
                                      << 5U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q) 
                                      << 6U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q) 
                                      << 7U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q) 
                                      << 8U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q) 
                                      << 9U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q) 
                                      << 0xaU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q) 
                                      << 0xbU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q) 
                                      << 0xcU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q) 
                                      << 0xdU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q) 
                                      << 0xeU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q) 
                                      << 0xfU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q) 
                                      << 0x10U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q) 
                                      << 0x11U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q) 
                                      << 0x12U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q) 
                                      << 0x13U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q) 
                                      << 0x14U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q) 
                                      << 0x15U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q) 
                                      << 0x16U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q) 
                                      << 0x17U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q) 
                                      << 0x18U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q) 
                                      << 0x19U));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q) 
                                      << 0x1aU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q) 
                                      << 0x1bU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q) 
                                      << 0x1cU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q) 
                                      << 0x1dU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q) 
                                      << 0x1eU));
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q) 
                                      << 0x1fU));
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next 
                                = ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x23U)))
                                    ? ((0xfffffff8U 
                                        & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q))
                                    : ((1U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                      >> 0x24U)))
                                        ? ((0xffffffc0U 
                                            & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                           | (0x3fU 
                                              & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U]))
                                        : ((1U & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                          >> 0x25U)))
                                            ? ((0xfffffffeU 
                                                & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next) 
                                               | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q))
                                            : 0xffffffffU)));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xaU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xbU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xcU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xdU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xeU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x11U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x23U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x25U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold[0U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                  << 0x17U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 9U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim = 0U;
    if ((2U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim 
            = (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim 
               | (0xffffffffULL & ((IData)(1U) << vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim_id
                                   [0U])));
    }
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete_id[0U] 
        = (0x1fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                     << 0x1dU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                  >> 3U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete = 0U;
    if ((4U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete 
            = (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete 
               | (0xffffffffULL & ((IData)(1U) << vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete_id
                                   [0U])));
    }
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
        = ((0x1fffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U]) 
           | (0xffe00000U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                             << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
        = ((0xffe00000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U]) 
           | (0x1fffffU & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                           >> 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
        = (((- (IData)((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                              >> 0xaU)))) & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                              << 0x15U) 
                                             | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                                >> 0xbU))) 
           | ((((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                  & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                 & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                    & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                   & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
               | ((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                  & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
              | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                 & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U])));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
        = ((0x1fffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U]) 
           | (0xffe00000U & ((IData)((((QData)((IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                                        | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                                            << 0x15U) 
                                                           | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                                              >> 0xbU))))) 
                                       << 1U) | (QData)((IData)(
                                                                (0U 
                                                                 != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event))))) 
                             << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
        = (0x3fffffU & ((0x1fffffU & ((IData)((((QData)((IData)(
                                                                (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                                                 | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                                                     << 0x15U) 
                                                                    | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                                                       >> 0xbU))))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event))))) 
                                      >> 0xbU)) | (0xffe00000U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                                                                | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                                                                >> 0xbU))))) 
                                                                 << 1U) 
                                                                | (QData)((IData)(
                                                                                (0U 
                                                                                != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)))) 
                                                               >> 0x20U)) 
                                                      << 0x15U))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__wr_data 
        = (((0x200000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U])
             ? ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                 << 0xaU) | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                             >> 0x16U)) : vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
           & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
               ? (~ ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                      << 0x1fU) | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                   >> 1U))) : 0xffffffffU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((1U & ((((((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                     | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                        >> 1U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                   >> 2U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                              >> 3U)) 
                  | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                     >> 4U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                >> 5U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                           >> 6U)) 
               | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                  >> 7U)))) {
        if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q;
        } else {
            if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q;
            } else {
                if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next = 0U;
                } else {
                    if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q;
                    } else {
                        if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                = ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                    << 0xcU) | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                >> 0x14U));
                        } else {
                            if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                    = ((0xfffffc00U 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                                       | (0x3ffU & 
                                          ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            << 0x16U) 
                                           | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                              >> 0xaU))));
                                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                    = (0xfff00000U 
                                       | (0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next));
                            } else {
                                if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                                    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                        = ((0xffff0000U 
                                            & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                                           | (0xffffU 
                                              & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                                    >> 0x10U))));
                                    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xffffU 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next);
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                        = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U];
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff0000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                  << 0x10U) | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                               >> 0x10U))));
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffff0000U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                     << 0x10U)));
        } else {
            if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffff0000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                       | (0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                      << 0x10U) | (
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                                   >> 0x10U))));
                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                       | (0xffff0000U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                         << 0x10U)));
            } else {
                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0x400U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                        ? vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q
                        : ((0x800U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                            ? vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q
                            : ((0x1000U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                                ? vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q
                                : ((0x2000U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                                    ? vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q
                                    : ((0x4000U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                                        ? vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q
                                        : 0xffffffffU)))));
            }
        }
    }
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_m1__pi3::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP__241(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP__241\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(this->__PVT__hrequest)) 
             & (IData)(this->__PVT__drsp_fifo_o))) {
            this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(this->__PVT__hrequest)) 
                 & (~ (IData)(this->__PVT__drsp_fifo_o)))) {
                this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_m1__pi3::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM__244(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM__244\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__dfifo_rspready = ((2U & (IData)(this->__PVT__dfifo_rspready)) 
                                   | (1U & (IData)(
                                                   ((0x8000000000000ULL 
                                                     == 
                                                     (0x8000800000000ULL 
                                                      & this->__PVT__drsp_fifo_o)) 
                                                    & this->__PVT__hreq_fifo_o
                                                    [0U][0U]))));
    this->__PVT__dfifo_rspready = ((1U & (IData)(this->__PVT__dfifo_rspready)) 
                                   | (2U & (((this->__PVT__hreq_fifo_o
                                              [1U][0U] 
                                              & (IData)(
                                                        (this->__PVT__drsp_fifo_o 
                                                         >> 0x23U))) 
                                             & (IData)(
                                                       (this->__PVT__drsp_fifo_o 
                                                        >> 0x33U))) 
                                            << 1U)));
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = this->__PVT__hreq_fifo_o[0U][0U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = this->__PVT__hreq_fifo_o[0U][1U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = this->__PVT__hreq_fifo_o[0U][2U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = this->__PVT__hreq_fifo_o[1U][0U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = this->__PVT__hreq_fifo_o[1U][1U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = this->__PVT__hreq_fifo_o[1U][2U];
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    this->__PVT__dreq_fifo_i[0U] = (IData)((((QData)((IData)(
                                                             (0xfU 
                                                              & ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                                  << 0x1fU) 
                                                                 | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                    >> 1U))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                  << 0x1fU) 
                                                                 | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                                    >> 1U)))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != (IData)(this->__PVT__dfifo_rspready)))))));
    this->__PVT__dreq_fifo_i[1U] = ((0xffffffe0U & 
                                     this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 (0xfU 
                                                                  & ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                                      << 0x1fU) 
                                                                     | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                        >> 1U))))) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                      << 0x1fU) 
                                                                     | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                                        >> 1U)))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (0U 
                                                                      != (IData)(this->__PVT__dfifo_rspready)))))) 
                                               >> 0x20U)));
    this->__PVT__dreq_fifo_i[2U] = ((0xffe00000U & 
                                     ((IData)((0U != (IData)(this->__PVT__hrequest))) 
                                      << 0x15U)) | 
                                    ((0x1c0000U & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                     | ((0x38000U & 
                                         this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                        | ((0x6000U 
                                            & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                           | ((0x1fe0U 
                                               & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                              | (0x1fU 
                                                 & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & this->__PVT__dreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & this->__PVT__dreq_fifo_i[1U]) 
                        | (0xfffffffeU & this->__PVT__dreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | (0x3fffffU & ((1U & this->__PVT__dreq_fifo_i[2U]) 
                                        | (0x1ffffeU 
                                           & this->__PVT__dreq_fifo_i[2U]))));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & this->__PVT__dreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & this->__PVT__dreq_fifo_i[0U]));
    vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
        = (0xfffffffffffffULL & (((QData)((IData)(this->tl_d_o[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              this->tl_d_o[0U]))));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack 
        = (1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                          >> 0x33U)) & vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U]));
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                   >> 0x15U) & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom)) 
                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))));
}
