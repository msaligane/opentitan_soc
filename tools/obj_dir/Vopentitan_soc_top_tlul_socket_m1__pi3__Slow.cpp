// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopentitan_soc_top.h for the primary calling header

#include "Vopentitan_soc_top_tlul_socket_m1__pi3.h"
#include "Vopentitan_soc_top__Syms.h"

#include "verilated_dpi.h"

//==========

Vopentitan_soc_top_tlul_socket_m1__pi3::Vopentitan_soc_top_tlul_socket_m1__pi3(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::__Vconfigure(Vopentitan_soc_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vopentitan_soc_top_tlul_socket_m1__pi3::~Vopentitan_soc_top_tlul_socket_m1__pi3() {
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__26(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__26\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(this->__PVT__hrequest));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__27(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__27\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__28(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__28\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__29(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__29\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__30(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__30\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
                                                                  ((1U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                                                >> 0x30U))))
                                                                    ? (IData)(
                                                                              (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                                               >> 2U))
                                                                    : 0U))) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                               >> 0x33U))))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__32(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__32\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hgrant = ((1U & (IData)(this->__PVT__drsp_fifo_o))
                            ? (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
                            : 0U);
    this->__PVT__hfifo_rspvalid = ((2U & (IData)(this->__PVT__hfifo_rspvalid)) 
                                   | (IData)((0x8000000000000ULL 
                                              == (0x8000800000000ULL 
                                                  & this->__PVT__drsp_fifo_o))));
    this->__PVT__hfifo_rspvalid = ((1U & (IData)(this->__PVT__hfifo_rspvalid)) 
                                   | ((IData)((0x8000800000000ULL 
                                               == (0x8000800000000ULL 
                                                   & this->__PVT__drsp_fifo_o))) 
                                      << 1U));
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
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__34(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__34\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hrsp_fifo_i[0U] = (((QData)((IData)(
                                                     (1U 
                                                      & (IData)(this->__PVT__hfifo_rspvalid)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (this->__PVT__drsp_fifo_o 
                                                                               >> 0x30U))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2bU))))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x24U))))) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x22U))))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 2U))) 
                                                                  << 2U) 
                                                                 | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(this->__PVT__hgrant))))))))))));
    this->__PVT__hrsp_fifo_i[1U] = (((QData)((IData)(
                                                     (1U 
                                                      & ((IData)(this->__PVT__hfifo_rspvalid) 
                                                         >> 1U)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (this->__PVT__drsp_fifo_o 
                                                                               >> 0x30U))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2bU))))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x24U))))) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x22U))))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 2U))) 
                                                                  << 2U) 
                                                                 | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(this->__PVT__hgrant) 
                                                                                >> 1U))))))))))));
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
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__35(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__35\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->__PVT__hrsp_fifo_i
                                           [0U])))));
    this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->__PVT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->__PVT__hrsp_fifo_i
                                           [1U])))));
    this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->__PVT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
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
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__36(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__36\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o[0U] = this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    this->tl_h_o[1U] = this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__31(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__31\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
                                                                  ((1U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                                                >> 0x30U))))
                                                                    ? (IData)(
                                                                              (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                                               >> 2U))
                                                                    : 0U))) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                               >> 0x33U))))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__86(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__86\n"); );
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
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__96(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__96\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hrequest = ((2U & (IData)(this->__PVT__hrequest)) 
                             | (1U & (this->__PVT__hreq_fifo_o
                                      [0U][2U] >> 0x15U)));
    this->__PVT__hrequest = ((1U & (IData)(this->__PVT__hrequest)) 
                             | (2U & (this->__PVT__hreq_fifo_o
                                      [1U][2U] >> 0x14U)));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__163(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__163\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__166(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__166\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hgrant = ((1U & (IData)(this->__PVT__drsp_fifo_o))
                            ? (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
                            : 0U);
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__185(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__185\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__188(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__188\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hrsp_fifo_i[0U] = (((QData)((IData)(
                                                     (1U 
                                                      & (IData)(this->__PVT__hfifo_rspvalid)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (this->__PVT__drsp_fifo_o 
                                                                               >> 0x30U))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2bU))))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x24U))))) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x22U))))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 2U))) 
                                                                  << 2U) 
                                                                 | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(this->__PVT__hgrant))))))))))));
    this->__PVT__hrsp_fifo_i[1U] = (((QData)((IData)(
                                                     (1U 
                                                      & ((IData)(this->__PVT__hfifo_rspvalid) 
                                                         >> 1U)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (this->__PVT__drsp_fifo_o 
                                                                               >> 0x30U))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2bU))))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x24U))))) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x22U))))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 2U))) 
                                                                  << 2U) 
                                                                 | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(this->__PVT__hgrant) 
                                                                                >> 1U))))))))))));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__207(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__207\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__210(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__210\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->__PVT__hrsp_fifo_i
                                           [0U])))));
    this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->__PVT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->__PVT__hrsp_fifo_i
                                           [1U])))));
    this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->__PVT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO__21(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO__21\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                               >> 0x33U))))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__3(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__3\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__12(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__12\n"); );
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

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__70(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__70\n"); );
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
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__76(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__76\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2__4(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2__4\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC__10(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC__10\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1__5(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1__5\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1__8(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1__8\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP__7(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP__7\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC__22(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC__22\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                               >> 0x33U))))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM__9(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM__9\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U]))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                           >> 2U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U] 
                                                                        >> 1U)))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                       >> 0x13U)))) 
                                   << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_m1__pi3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_m1__pi3::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    VL_RAND_RESET_W(86, tl_d_o);
    tl_d_i = VL_RAND_RESET_Q(52);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, __PVT__hreq_fifo_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__hrsp_fifo_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    __PVT__hrequest = VL_RAND_RESET_I(2);
    __PVT__hgrant = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(86, __PVT__dreq_fifo_i);
    __PVT__drsp_fifo_o = VL_RAND_RESET_Q(52);
    __PVT__hfifo_rspvalid = VL_RAND_RESET_I(2);
    __PVT__dfifo_rspready = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(86, __PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i);
    VL_RAND_RESET_W(86, __Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o);
    __Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i);
    VL_RAND_RESET_W(86, __Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o);
    __Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, __Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[__Vi0]);
    }
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = VL_RAND_RESET_I(1);
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req = VL_RAND_RESET_I(2);
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out = VL_RAND_RESET_I(2);
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req = VL_RAND_RESET_I(2);
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = VL_RAND_RESET_I(2);
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner = VL_RAND_RESET_I(2);
}
