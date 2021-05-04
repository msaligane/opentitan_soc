// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopentitan_soc_top.h for the primary calling header

#include "Vopentitan_soc_top_tlul_socket_1n__pi2.h"
#include "Vopentitan_soc_top__Syms.h"

#include "verilated_dpi.h"

//==========

Vopentitan_soc_top_tlul_socket_1n__pi2::Vopentitan_soc_top_tlul_socket_1n__pi2(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::__Vconfigure(Vopentitan_soc_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vopentitan_soc_top_tlul_socket_1n__pi2::~Vopentitan_soc_top_tlul_socket_1n__pi2() {
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__2(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__2\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__err_resp__tl_h_o = (0x3fffffffcULL 
                                          | this->__Vcellout__err_resp__tl_h_o);
    this->__Vcellout__err_resp__tl_h_o = (2ULL | this->__Vcellout__err_resp__tl_h_o);
    this->__Vcellout__err_resp__tl_h_o = ((0xff803ffffffffULL 
                                           & this->__Vcellout__err_resp__tl_h_o) 
                                          | ((QData)((IData)(
                                                             ((IData)(this->__PVT__err_resp__DOT__err_source) 
                                                              << 1U))) 
                                             << 0x22U));
    this->__Vcellout__err_resp__tl_h_o = ((0xf07ffffffffffULL 
                                           & this->__Vcellout__err_resp__tl_h_o) 
                                          | ((QData)((IData)(this->__PVT__err_resp__DOT__err_size)) 
                                             << 0x2bU));
    this->__Vcellout__err_resp__tl_h_o = ((0x8ffffffffffffULL 
                                           & this->__Vcellout__err_resp__tl_h_o) 
                                          | ((QData)((IData)(
                                                             ((4U 
                                                               == (IData)(this->__PVT__err_resp__DOT__err_opcode))
                                                               ? 1U
                                                               : 0U))) 
                                             << 0x30U));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__6(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__6\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_t_o[2U] = ((0x1fffffU & this->__PVT__tl_t_o[2U]) 
                               | (0x200000U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U]));
    this->__PVT__tl_t_o[0U] = ((0xfffffffeU & this->__PVT__tl_t_o[0U]) 
                               | (1U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U]));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__7(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__7\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
        = ((0xfffffff0U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U] 
                           << 3U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10));
    this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
        = ((0xfU & ((8U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                           << 3U)) | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U] 
                                      >> 0x1dU))) | 
           (0xfffffff0U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                           << 3U)));
    this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
        = ((0xfU & ((8U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                           << 3U)) | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                      >> 0x1dU))) | 
           (0xfffff0U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                         << 3U)));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__9(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__9\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hold_all_requests = ((0U != this->__PVT__num_req_outstanding) 
                                      & ((0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]) 
                                         != (IData)(this->__PVT__dev_select_outstanding)));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__11(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__11\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_t_o[0U] = ((1U & this->__PVT__tl_t_o[0U]) 
                               | (0xfffffffeU & ((this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                                                  << 0x1dU) 
                                                 | (0x1ffffffeU 
                                                    & (this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
                                                       >> 3U)))));
    this->__PVT__tl_t_o[1U] = ((1U & (this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                                      >> 3U)) | (0xfffffffeU 
                                                 & ((this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                                     << 0x1dU) 
                                                    | (0x1ffffffeU 
                                                       & (this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                                                          >> 3U)))));
    this->__PVT__tl_t_o[2U] = ((0x200000U & this->__PVT__tl_t_o[2U]) 
                               | (0x3fffffU & ((1U 
                                                & (this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                                   >> 3U)) 
                                               | (0x1ffffeU 
                                                  & (this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                                     >> 3U)))));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__13(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__13\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_u_o[0U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((0U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[0U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [0U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [0U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0U][0U] = ((1U & this->__PVT__tl_u_o
                                    [0U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [0U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[1U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((1U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[1U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[1U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[1U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[1U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[1U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [1U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[1U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[1U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [1U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[1U][0U] = ((1U & this->__PVT__tl_u_o
                                    [1U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[1U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [1U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[2U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((2U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[2U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[2U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[2U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[2U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[2U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [2U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[2U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[2U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [2U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[2U][0U] = ((1U & this->__PVT__tl_u_o
                                    [2U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[2U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [2U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[3U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((3U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[3U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[3U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[3U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[3U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[3U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [3U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[3U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[3U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [3U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[3U][0U] = ((1U & this->__PVT__tl_u_o
                                    [3U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[3U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [3U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[4U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((4U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[4U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[4U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[4U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[4U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[4U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [4U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[4U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[4U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [4U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[4U][0U] = ((1U & this->__PVT__tl_u_o
                                    [4U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[4U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [4U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[5U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((5U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[5U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[5U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[5U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[5U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[5U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [5U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[5U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[5U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [5U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[5U][0U] = ((1U & this->__PVT__tl_u_o
                                    [5U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[5U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [5U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[6U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((6U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[6U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[6U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[6U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[6U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[6U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [6U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[6U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[6U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [6U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[6U][0U] = ((1U & this->__PVT__tl_u_o
                                    [6U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[6U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [6U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[7U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((7U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[7U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[7U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[7U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[7U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[7U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [7U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[7U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[7U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [7U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[7U][0U] = ((1U & this->__PVT__tl_u_o
                                    [7U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[7U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [7U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[8U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((8U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[8U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[8U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[8U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[8U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[8U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [8U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[8U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[8U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [8U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[8U][0U] = ((1U & this->__PVT__tl_u_o
                                    [8U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[8U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [8U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[9U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((9U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[9U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[9U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[9U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[9U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[9U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [9U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[9U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[9U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [9U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[9U][0U] = ((1U & this->__PVT__tl_u_o
                                    [9U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[9U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [9U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x200000U & (
                                                   (this->__PVT__tl_t_o[2U] 
                                                    & ((0xaU 
                                                        == 
                                                        (0xfU 
                                                         & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                       << 0x15U)) 
                                                   & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                      << 0x15U))));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x1c0000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x38000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x6000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x1fe0U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xaU][1U] = ((0x1fU & this->__PVT__tl_u_o
                                      [0xaU][1U]) | 
                                     (0xffffffe0U & 
                                      this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x1fU & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xaU][1U] = ((0xffffffe1U & 
                                      this->__PVT__tl_u_o
                                      [0xaU][1U]) | 
                                     (0x1eU & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xaU][0U] = ((1U & this->__PVT__tl_u_o
                                      [0xaU][0U]) | 
                                     (0xfffffffeU & 
                                      this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xaU][1U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xaU][1U]) | 
                                     (1U & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [0U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[1U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [1U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[2U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [2U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[3U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [3U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[4U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [4U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[5U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [5U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[6U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [6U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[7U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [7U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[8U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [8U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[9U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [9U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xaU][0U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xaU][0U]) | 
                                     (1U & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xbU][0U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xbU][0U]) | 
                                     (1U & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x200000U & (
                                                   (this->__PVT__tl_t_o[2U] 
                                                    & ((0xbU 
                                                        == 
                                                        (0xfU 
                                                         & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                       << 0x15U)) 
                                                   & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                      << 0x15U))));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x1c0000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x38000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x6000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x1fe0U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xbU][1U] = ((0x1fU & this->__PVT__tl_u_o
                                      [0xbU][1U]) | 
                                     (0xffffffe0U & 
                                      this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x1fU & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xbU][1U] = ((0xffffffe1U & 
                                      this->__PVT__tl_u_o
                                      [0xbU][1U]) | 
                                     (0x1eU & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xbU][0U] = ((1U & this->__PVT__tl_u_o
                                      [0xbU][0U]) | 
                                     (0xfffffffeU & 
                                      this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xbU][1U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xbU][1U]) | 
                                     (1U & this->__PVT__tl_t_o[1U]));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__15(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__15\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__err_resp__tl_h_o = ((0xffffffffffffeULL 
                                           & this->__Vcellout__err_resp__tl_h_o) 
                                          | (IData)((IData)(
                                                            (1U 
                                                             & ((~ (IData)(this->__PVT__err_resp__DOT__err_rsp_pending)) 
                                                                & (~ 
                                                                   ((IData)(this->__PVT__err_resp__DOT__err_req_pending) 
                                                                    & (~ 
                                                                       this->__PVT__tl_u_o
                                                                       [0xbU][0U]))))))));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[0U][0U]));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[0U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [0U][1U]));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [0U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[0U][2U]));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[0U][0U]));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[1U][0U]));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[1U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [1U][1U]));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [1U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[1U][2U]));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[1U][0U]));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[2U][0U]));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[2U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [2U][1U]));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [2U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[2U][2U]));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[2U][0U]));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[3U][0U]));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[3U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [3U][1U]));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [3U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[3U][2U]));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[3U][0U]));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[4U][0U]));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[4U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [4U][1U]));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [4U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[4U][2U]));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[4U][0U]));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[5U][0U]));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[5U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [5U][1U]));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [5U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[5U][2U]));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[5U][0U]));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[6U][0U]));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[6U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [6U][1U]));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [6U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[6U][2U]));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[6U][0U]));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[7U][0U]));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[7U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [7U][1U]));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [7U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[7U][2U]));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[7U][0U]));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[8U][0U]));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[8U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [8U][1U]));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [8U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[8U][2U]));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[8U][0U]));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[9U][0U]));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[9U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [9U][1U]));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [9U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[9U][2U]));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[9U][0U]));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[0xaU][0U]));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[0xaU][1U]) | (0xfffffffeU 
                                                   & this->__PVT__tl_u_o
                                                   [0xaU][1U]));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [0xaU][2U]) | (0x1ffffeU 
                                           & this->__PVT__tl_u_o
                                           [0xaU][2U]))));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[0xaU][2U]));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[0xaU][0U]));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__18(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__18\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_u_i[0xbU] = this->__Vcellout__err_resp__tl_h_o;
    this->tl_d_o[0U][0U] = this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[0U][1U] = this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[0U][2U] = this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[1U][0U] = this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[1U][1U] = this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[1U][2U] = this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[2U][0U] = this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[2U][1U] = this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[2U][2U] = this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[3U][0U] = this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[3U][1U] = this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[3U][2U] = this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[4U][0U] = this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[4U][1U] = this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[4U][2U] = this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[5U][0U] = this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[5U][1U] = this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[5U][2U] = this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[6U][0U] = this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[6U][1U] = this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[6U][2U] = this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[7U][0U] = this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[7U][1U] = this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[7U][2U] = this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[8U][0U] = this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[8U][1U] = this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[8U][2U] = this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[9U][0U] = this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[9U][1U] = this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[9U][2U] = this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[0xaU][0U] = this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[0xaU][1U] = this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[0xaU][2U] = this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U];
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__21(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__21\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [0U])))));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [1U])))));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [2U])))));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [2U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [2U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [2U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [2U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [2U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [3U])))));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [3U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [3U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [3U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [3U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [3U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [4U])))));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [4U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [4U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [4U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [4U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [4U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [5U])))));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [5U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [5U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [5U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [5U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [5U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [6U])))));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [6U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [6U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [6U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [6U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [6U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [7U])))));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [7U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [7U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [7U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [7U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [7U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [8U])))));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [8U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [8U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [8U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [8U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [8U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [9U])))));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [9U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [9U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [9U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [9U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [9U] >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [0xaU])))));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [0xaU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [0xaU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [0xaU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [0xaU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [0xaU] 
                                             >> 0x33U))))) 
              << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__23(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__23\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_u_i[0U] = this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[1U] = this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[2U] = this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[3U] = this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[4U] = this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[5U] = this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[6U] = this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[7U] = this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[8U] = this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[9U] = this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[0xaU] = this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o;
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__25(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__25\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_t_p = this->__PVT__tl_u_i[0xbU];
    if ((0U == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[0U];
    }
    if ((1U == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[1U];
    }
    if ((2U == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[2U];
    }
    if ((3U == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[3U];
    }
    if ((4U == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[4U];
    }
    if ((5U == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[5U];
    }
    if ((6U == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[6U];
    }
    if ((7U == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[7U];
    }
    if ((8U == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[8U];
    }
    if ((9U == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[9U];
    }
    if ((0xaU == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[0xaU];
    }
    this->__PVT__hfifo_reqready = (1U & (IData)(this->__PVT__tl_u_i
                                                [0xbU]));
    if ((0U == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [0U]));
    }
    if ((1U == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [1U]));
    }
    if ((2U == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [2U]));
    }
    if ((3U == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [3U]));
    }
    if ((4U == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [4U]));
    }
    if ((5U == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [5U]));
    }
    if ((6U == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [6U]));
    }
    if ((7U == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [7U]));
    }
    if ((8U == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [8U]));
    }
    if ((9U == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [9U]));
    }
    if ((0xaU == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [0xaU]));
    }
    if (this->__PVT__hold_all_requests) {
        this->__PVT__hfifo_reqready = 0U;
    }
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__27(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__27\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_t_i = ((1ULL & this->__PVT__tl_t_i) 
                           | (0xffffffffffffeULL & this->__PVT__tl_t_p));
    this->__PVT__tl_t_i = ((0xffffffffffffeULL & this->__PVT__tl_t_i) 
                           | (IData)((IData)(((this->__PVT__tl_t_o[2U] 
                                               >> 0x15U) 
                                              & (IData)(this->__PVT__hfifo_reqready)))));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__28(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__28\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__accept_t_req = (1U & ((this->__PVT__tl_t_o[2U] 
                                        >> 0x15U) & (IData)(this->__PVT__tl_t_i)));
    this->__PVT__accept_t_rsp = (1U & ((IData)((this->__PVT__tl_t_i 
                                                >> 0x33U)) 
                                       & this->__PVT__tl_t_o[0U]));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__30(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__30\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(this->__PVT__tl_t_i)))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (this->__PVT__tl_t_i 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (this->__PVT__tl_t_i 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (this->__PVT__tl_t_i 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (this->__PVT__tl_t_i 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (this->__PVT__tl_t_i 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__5(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__5\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_t_o[2U] = ((0x1fffffU & this->__PVT__tl_t_o[2U]) 
                               | (0x200000U & vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U]));
    this->__PVT__tl_t_o[0U] = ((0xfffffffeU & this->__PVT__tl_t_o[0U]) 
                               | (1U & vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U]));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__8(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__8\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
        = ((0xfffffff0U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U] 
                           << 3U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11));
    this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
        = ((0xfU & ((8U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                           << 3U)) | (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U] 
                                      >> 0x1dU))) | 
           (0xfffffff0U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                           << 3U)));
    this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
        = ((0xfU & ((8U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                           << 3U)) | (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                                      >> 0x1dU))) | 
           (0xfffff0U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                         << 3U)));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__14(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__14\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_u_o[0U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((0U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[0U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [0U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [0U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [0U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0U][0U] = ((1U & this->__PVT__tl_u_o
                                    [0U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [0U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[1U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((1U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[1U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[1U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[1U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[1U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[1U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [1U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[1U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [1U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[1U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [1U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[1U][0U] = ((1U & this->__PVT__tl_u_o
                                    [1U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[1U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [1U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[2U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((2U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[2U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[2U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[2U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[2U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[2U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [2U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[2U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [2U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[2U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [2U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[2U][0U] = ((1U & this->__PVT__tl_u_o
                                    [2U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[2U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [2U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[3U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((3U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[3U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[3U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[3U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[3U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[3U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [3U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[3U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [3U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[3U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [3U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[3U][0U] = ((1U & this->__PVT__tl_u_o
                                    [3U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[3U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [3U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[4U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((4U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[4U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[4U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[4U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[4U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[4U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [4U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[4U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [4U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[4U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [4U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[4U][0U] = ((1U & this->__PVT__tl_u_o
                                    [4U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[4U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [4U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[5U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((5U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[5U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[5U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[5U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[5U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[5U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [5U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[5U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [5U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[5U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [5U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[5U][0U] = ((1U & this->__PVT__tl_u_o
                                    [5U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[5U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [5U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[6U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((6U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[6U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[6U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[6U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[6U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[6U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [6U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[6U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [6U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[6U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [6U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[6U][0U] = ((1U & this->__PVT__tl_u_o
                                    [6U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[6U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [6U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[7U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((7U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[7U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[7U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[7U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[7U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[7U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [7U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[7U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [7U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[7U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [7U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[7U][0U] = ((1U & this->__PVT__tl_u_o
                                    [7U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[7U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [7U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[8U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((8U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[8U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[8U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[8U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[8U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[8U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [8U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[8U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [8U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[8U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [8U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[8U][0U] = ((1U & this->__PVT__tl_u_o
                                    [8U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[8U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [8U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[9U][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x200000U 
                                                 & ((this->__PVT__tl_t_o[2U] 
                                                     & ((9U 
                                                         == 
                                                         (0xfU 
                                                          & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                        << 0x15U)) 
                                                    & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                       << 0x15U))));
    this->__PVT__tl_u_o[9U][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x1c0000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[9U][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x38000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[9U][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x6000U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[9U][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x1fe0U 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[9U][1U] = ((0x1fU & this->__PVT__tl_u_o
                                    [9U][1U]) | (0xffffffe0U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[9U][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                    [9U][2U]) | (0x1fU 
                                                 & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[9U][1U] = ((0xffffffe1U & this->__PVT__tl_u_o
                                    [9U][1U]) | (0x1eU 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[9U][0U] = ((1U & this->__PVT__tl_u_o
                                    [9U][0U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[9U][1U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [9U][1U]) | (1U 
                                                 & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x200000U & (
                                                   (this->__PVT__tl_t_o[2U] 
                                                    & ((0xaU 
                                                        == 
                                                        (0xfU 
                                                         & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                       << 0x15U)) 
                                                   & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                      << 0x15U))));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x1c0000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x38000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x6000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x1fe0U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xaU][1U] = ((0x1fU & this->__PVT__tl_u_o
                                      [0xaU][1U]) | 
                                     (0xffffffe0U & 
                                      this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xaU][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                      [0xaU][2U]) | 
                                     (0x1fU & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xaU][1U] = ((0xffffffe1U & 
                                      this->__PVT__tl_u_o
                                      [0xaU][1U]) | 
                                     (0x1eU & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xaU][0U] = ((1U & this->__PVT__tl_u_o
                                      [0xaU][0U]) | 
                                     (0xfffffffeU & 
                                      this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xaU][1U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xaU][1U]) | 
                                     (1U & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [0U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[1U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [1U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[2U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [2U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[3U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [3U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[4U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [4U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[5U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [5U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[6U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [6U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[7U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [7U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[8U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [8U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[9U][0U] = ((0xfffffffeU & this->__PVT__tl_u_o
                                    [9U][0U]) | (1U 
                                                 & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xaU][0U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xaU][0U]) | 
                                     (1U & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xbU][0U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xbU][0U]) | 
                                     (1U & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x200000U & (
                                                   (this->__PVT__tl_t_o[2U] 
                                                    & ((0xbU 
                                                        == 
                                                        (0xfU 
                                                         & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                       << 0x15U)) 
                                                   & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                      << 0x15U))));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x1c0000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x38000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x6000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x1fe0U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xbU][1U] = ((0x1fU & this->__PVT__tl_u_o
                                      [0xbU][1U]) | 
                                     (0xffffffe0U & 
                                      this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xbU][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                      [0xbU][2U]) | 
                                     (0x1fU & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xbU][1U] = ((0xffffffe1U & 
                                      this->__PVT__tl_u_o
                                      [0xbU][1U]) | 
                                     (0x1eU & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xbU][0U] = ((1U & this->__PVT__tl_u_o
                                      [0xbU][0U]) | 
                                     (0xfffffffeU & 
                                      this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xbU][1U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xbU][1U]) | 
                                     (1U & this->__PVT__tl_t_o[1U]));
    this->__Vcellout__err_resp__tl_h_o = ((0xffffffffffffeULL 
                                           & this->__Vcellout__err_resp__tl_h_o) 
                                          | (IData)((IData)(
                                                            (1U 
                                                             & ((~ (IData)(this->__PVT__err_resp__DOT__err_rsp_pending)) 
                                                                & (~ 
                                                                   ((IData)(this->__PVT__err_resp__DOT__err_req_pending) 
                                                                    & (~ 
                                                                       this->__PVT__tl_u_o
                                                                       [0xbU][0U]))))))));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__16(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__16\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[0U][0U]));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[0U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [0U][1U]));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [0U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[0U][2U]));
    this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[0U][0U]));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[1U][0U]));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[1U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [1U][1U]));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [1U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[1U][2U]));
    this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[1U][0U]));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[2U][0U]));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[2U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [2U][1U]));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [2U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[2U][2U]));
    this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[2U][0U]));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[3U][0U]));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[3U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [3U][1U]));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [3U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[3U][2U]));
    this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[3U][0U]));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[4U][0U]));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[4U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [4U][1U]));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [4U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[4U][2U]));
    this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[4U][0U]));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[5U][0U]));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[5U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [5U][1U]));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [5U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[5U][2U]));
    this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[5U][0U]));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[6U][0U]));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[6U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [6U][1U]));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [6U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[6U][2U]));
    this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[6U][0U]));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[7U][0U]));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[7U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [7U][1U]));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [7U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[7U][2U]));
    this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[7U][0U]));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[8U][0U]));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[8U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [8U][1U]));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [8U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[8U][2U]));
    this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[8U][0U]));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[9U][0U]));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[9U][1U]) | (0xfffffffeU 
                                                 & this->__PVT__tl_u_o
                                                 [9U][1U]));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & this->__PVT__tl_u_o
                                         [9U][2U]))));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[9U][2U]));
    this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[9U][0U]));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[0xaU][0U]));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[0xaU][1U]) | (0xfffffffeU 
                                                   & this->__PVT__tl_u_o
                                                   [0xaU][1U]));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [0xaU][2U]) | (0x1ffffeU 
                                           & this->__PVT__tl_u_o
                                           [0xaU][2U]))));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[0xaU][2U]));
    this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[0xaU][0U]));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__17(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__17\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_u_i[0xbU] = this->__Vcellout__err_resp__tl_h_o;
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__19(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__19\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U][0U] = this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[0U][1U] = this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[0U][2U] = this->__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[1U][0U] = this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[1U][1U] = this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[1U][2U] = this->__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[2U][0U] = this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[2U][1U] = this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[2U][2U] = this->__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[3U][0U] = this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[3U][1U] = this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[3U][2U] = this->__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[4U][0U] = this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[4U][1U] = this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[4U][2U] = this->__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[5U][0U] = this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[5U][1U] = this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[5U][2U] = this->__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[6U][0U] = this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[6U][1U] = this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[6U][2U] = this->__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[7U][0U] = this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[7U][1U] = this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[7U][2U] = this->__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[8U][0U] = this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[8U][1U] = this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[8U][2U] = this->__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[9U][0U] = this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[9U][1U] = this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[9U][2U] = this->__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[0xaU][0U] = this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[0xaU][1U] = this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[0xaU][2U] = this->__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U];
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__29(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__29\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__accept_t_req = (1U & ((this->__PVT__tl_t_o[2U] 
                                        >> 0x15U) & (IData)(this->__PVT__tl_t_i)));
    this->__PVT__accept_t_rsp = (1U & ((IData)((this->__PVT__tl_t_i 
                                                >> 0x33U)) 
                                       & this->__PVT__tl_t_o[0U]));
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(this->__PVT__tl_t_i)))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (this->__PVT__tl_t_i 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (this->__PVT__tl_t_i 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (this->__PVT__tl_t_i 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (this->__PVT__tl_t_i 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (this->__PVT__tl_t_i 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void Vopentitan_soc_top_tlul_socket_1n__pi2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(86, tl_h_i);
    tl_h_o = VL_RAND_RESET_Q(52);
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        VL_RAND_RESET_W(86, tl_d_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        tl_d_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    dev_select_i = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(86, __PVT__tl_t_o);
    __PVT__tl_t_i = VL_RAND_RESET_Q(52);
    __PVT__num_req_outstanding = VL_RAND_RESET_I(17);
    __PVT__dev_select_outstanding = VL_RAND_RESET_I(4);
    __PVT__hold_all_requests = VL_RAND_RESET_I(1);
    __PVT__accept_t_req = VL_RAND_RESET_I(1);
    __PVT__accept_t_rsp = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        VL_RAND_RESET_W(86, __PVT__tl_u_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        __PVT__tl_u_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    __PVT__tl_t_p = VL_RAND_RESET_Q(52);
    __PVT__hfifo_reqready = VL_RAND_RESET_I(1);
    __Vcellout__err_resp__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, __Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o);
    __Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(88, fifo_h__DOT____Vcellinp__reqfifo__wdata_i);
    __PVT__err_resp__DOT__err_opcode = VL_RAND_RESET_I(3);
    __PVT__err_resp__DOT__err_source = VL_RAND_RESET_I(8);
    __PVT__err_resp__DOT__err_size = VL_RAND_RESET_I(2);
    __PVT__err_resp__DOT__err_req_pending = VL_RAND_RESET_I(1);
    __PVT__err_resp__DOT__err_rsp_pending = VL_RAND_RESET_I(1);
    __Vdly__num_req_outstanding = VL_RAND_RESET_I(17);
    __Vdly__err_resp__DOT__err_rsp_pending = VL_RAND_RESET_I(1);
}
