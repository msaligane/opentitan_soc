// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopentitan_soc_top.h for the primary calling header

#include "Vopentitan_soc_top_tlul_socket_1n__pi2.h"
#include "Vopentitan_soc_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__4(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__4\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__err_resp__tl_h_o = ((0x7ffffffffffffULL 
                                           & this->__Vcellout__err_resp__tl_h_o) 
                                          | ((QData)((IData)(
                                                             ((IData)(this->__PVT__err_resp__DOT__err_req_pending) 
                                                              | (IData)(this->__PVT__err_resp__DOT__err_rsp_pending)))) 
                                             << 0x33U));
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_1n__pi2::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__34(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__34\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if ((1U & ((this->__PVT__tl_u_o[0xdU][2U] >> 0x15U) 
                   & (IData)(this->__Vcellout__err_resp__tl_h_o)))) {
            this->__PVT__err_resp__DOT__err_req_pending = 1U;
        } else {
            if ((1U & (~ (IData)(this->__PVT__err_resp__DOT__err_rsp_pending)))) {
                this->__PVT__err_resp__DOT__err_req_pending = 0U;
            }
        }
    } else {
        this->__PVT__err_resp__DOT__err_req_pending = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_1n__pi2::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__35(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__35\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tl_t_o[2U] = ((0x1fffffU & this->__PVT__tl_t_o[2U]) 
                               | (0x200000U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U]));
    this->__PVT__tl_t_o[0U] = ((0xfffffffeU & this->__PVT__tl_t_o[0U]) 
                               | (1U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U]));
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 0xcU;
    if ((0x10000000U == (0xffff0000U & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                           >> 5U))))) {
        vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 1U;
    } else {
        if ((0x40080000U == (0xffff0000U & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                               >> 5U))))) {
            vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 2U;
        } else {
            if ((0x40090000U == (0xffff0000U & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 3U;
            } else {
                if ((0x400a0000U == (0xffff0000U & 
                                     ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                       >> 5U))))) {
                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 4U;
                } else {
                    if ((0x400b0000U == (0xffff0000U 
                                         & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                               >> 5U))))) {
                        vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 5U;
                    } else {
                        if ((0x400c0000U == (0xffff0000U 
                                             & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                            vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 6U;
                        } else {
                            if ((0x400d0000U == (0xffff0000U 
                                                 & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                       >> 5U))))) {
                                vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 7U;
                            } else {
                                if ((0x400e0000U == 
                                     (0xffff0000U & 
                                      ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                        >> 5U))))) {
                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 8U;
                                } else {
                                    if ((0x400f0000U 
                                         == (0xffff0000U 
                                             & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                                        vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 9U;
                                    } else {
                                        if ((0x40050000U 
                                             == (0xffff0000U 
                                                 & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                       >> 5U))))) {
                                            vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 0xaU;
                                        } else {
                                            if ((0x10040000U 
                                                 == 
                                                 (0xffff0000U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                        >> 5U))))) {
                                                vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10 = 0xbU;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
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
    this->__PVT__hold_all_requests = ((0U != this->__PVT__num_req_outstanding) 
                                      & ((0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]) 
                                         != (IData)(this->__PVT__dev_select_outstanding)));
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
    this->__PVT__tl_u_o[0xcU][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                      [0xcU][2U]) | 
                                     (0x200000U & (
                                                   (this->__PVT__tl_t_o[2U] 
                                                    & ((0xcU 
                                                        == 
                                                        (0xfU 
                                                         & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                       << 0x15U)) 
                                                   & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                      << 0x15U))));
    this->__PVT__tl_u_o[0xcU][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                      [0xcU][2U]) | 
                                     (0x1c0000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xcU][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                      [0xcU][2U]) | 
                                     (0x38000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xcU][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                      [0xcU][2U]) | 
                                     (0x6000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xcU][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                      [0xcU][2U]) | 
                                     (0x1fe0U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xcU][1U] = ((0x1fU & this->__PVT__tl_u_o
                                      [0xcU][1U]) | 
                                     (0xffffffe0U & 
                                      this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xcU][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                      [0xcU][2U]) | 
                                     (0x1fU & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xcU][1U] = ((0xffffffe1U & 
                                      this->__PVT__tl_u_o
                                      [0xcU][1U]) | 
                                     (0x1eU & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xcU][0U] = ((1U & this->__PVT__tl_u_o
                                      [0xcU][0U]) | 
                                     (0xfffffffeU & 
                                      this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xcU][1U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xcU][1U]) | 
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
    this->__PVT__tl_u_o[0xcU][0U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xcU][0U]) | 
                                     (1U & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xdU][0U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xdU][0U]) | 
                                     (1U & this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xdU][2U] = ((0x1fffffU & this->__PVT__tl_u_o
                                      [0xdU][2U]) | 
                                     (0x200000U & (
                                                   (this->__PVT__tl_t_o[2U] 
                                                    & ((0xdU 
                                                        == 
                                                        (0xfU 
                                                         & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                                       << 0x15U)) 
                                                   & ((~ (IData)(this->__PVT__hold_all_requests)) 
                                                      << 0x15U))));
    this->__PVT__tl_u_o[0xdU][2U] = ((0x23ffffU & this->__PVT__tl_u_o
                                      [0xdU][2U]) | 
                                     (0x1c0000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xdU][2U] = ((0x3c7fffU & this->__PVT__tl_u_o
                                      [0xdU][2U]) | 
                                     (0x38000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xdU][2U] = ((0x3f9fffU & this->__PVT__tl_u_o
                                      [0xdU][2U]) | 
                                     (0x6000U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xdU][2U] = ((0x3fe01fU & this->__PVT__tl_u_o
                                      [0xdU][2U]) | 
                                     (0x1fe0U & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xdU][1U] = ((0x1fU & this->__PVT__tl_u_o
                                      [0xdU][1U]) | 
                                     (0xffffffe0U & 
                                      this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xdU][2U] = ((0x3fffe0U & this->__PVT__tl_u_o
                                      [0xdU][2U]) | 
                                     (0x1fU & this->__PVT__tl_t_o[2U]));
    this->__PVT__tl_u_o[0xdU][1U] = ((0xffffffe1U & 
                                      this->__PVT__tl_u_o
                                      [0xdU][1U]) | 
                                     (0x1eU & this->__PVT__tl_t_o[1U]));
    this->__PVT__tl_u_o[0xdU][0U] = ((1U & this->__PVT__tl_u_o
                                      [0xdU][0U]) | 
                                     (0xfffffffeU & 
                                      this->__PVT__tl_t_o[0U]));
    this->__PVT__tl_u_o[0xdU][1U] = ((0xfffffffeU & 
                                      this->__PVT__tl_u_o
                                      [0xdU][1U]) | 
                                     (1U & this->__PVT__tl_t_o[1U]));
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
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[0xbU][0U]));
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[0xbU][1U]) | (0xfffffffeU 
                                                   & this->__PVT__tl_u_o
                                                   [0xbU][1U]));
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [0xbU][2U]) | (0x1ffffeU 
                                           & this->__PVT__tl_u_o
                                           [0xbU][2U]))));
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[0xbU][2U]));
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[0xbU][0U]));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & this->__PVT__tl_u_o[0xcU][0U]));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & this->__PVT__tl_u_o[0xcU][1U]) | (0xfffffffeU 
                                                   & this->__PVT__tl_u_o
                                                   [0xcU][1U]));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & this->__PVT__tl_u_o
                            [0xcU][2U]) | (0x1ffffeU 
                                           & this->__PVT__tl_u_o
                                           [0xcU][2U]))));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & this->__PVT__tl_u_o[0xcU][2U]));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & this->__PVT__tl_u_o[0xcU][0U]));
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
    this->tl_d_o[0xbU][0U] = this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[0xbU][1U] = this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[0xbU][2U] = this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U];
    this->tl_d_o[0xcU][0U] = this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U];
    this->tl_d_o[0xcU][1U] = this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U];
    this->tl_d_o[0xcU][2U] = this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0U][0U] 
        = this->tl_d_o[0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0U][1U] 
        = this->tl_d_o[0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0U][2U] 
        = this->tl_d_o[0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[1U][0U] 
        = this->tl_d_o[1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[1U][1U] 
        = this->tl_d_o[1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[1U][2U] 
        = this->tl_d_o[1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[2U][0U] 
        = this->tl_d_o[2U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[2U][1U] 
        = this->tl_d_o[2U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[2U][2U] 
        = this->tl_d_o[2U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[3U][0U] 
        = this->tl_d_o[3U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[3U][1U] 
        = this->tl_d_o[3U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[3U][2U] 
        = this->tl_d_o[3U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[4U][0U] 
        = this->tl_d_o[4U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[4U][1U] 
        = this->tl_d_o[4U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[4U][2U] 
        = this->tl_d_o[4U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[5U][0U] 
        = this->tl_d_o[5U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[5U][1U] 
        = this->tl_d_o[5U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[5U][2U] 
        = this->tl_d_o[5U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[6U][0U] 
        = this->tl_d_o[6U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[6U][1U] 
        = this->tl_d_o[6U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[6U][2U] 
        = this->tl_d_o[6U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[7U][0U] 
        = this->tl_d_o[7U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[7U][1U] 
        = this->tl_d_o[7U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[7U][2U] 
        = this->tl_d_o[7U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[8U][0U] 
        = this->tl_d_o[8U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[8U][1U] 
        = this->tl_d_o[8U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[8U][2U] 
        = this->tl_d_o[8U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[9U][0U] 
        = this->tl_d_o[9U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[9U][1U] 
        = this->tl_d_o[9U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[9U][2U] 
        = this->tl_d_o[9U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0xaU][0U] 
        = this->tl_d_o[0xaU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0xaU][1U] 
        = this->tl_d_o[0xaU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0xaU][2U] 
        = this->tl_d_o[0xaU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0xbU][0U] 
        = this->tl_d_o[0xbU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0xbU][1U] 
        = this->tl_d_o[0xbU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0xbU][2U] 
        = this->tl_d_o[0xbU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0xcU][0U] 
        = this->tl_d_o[0xcU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0xcU][1U] 
        = this->tl_d_o[0xcU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[0xcU][2U] 
        = this->tl_d_o[0xcU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[2U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [2U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[2U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [2U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[2U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [2U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[3U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [3U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[3U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [3U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[3U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [3U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[4U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [4U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[4U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [4U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[4U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [4U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[5U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [5U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[5U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [5U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[5U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [5U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[6U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [6U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[6U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [6U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[6U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [6U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[7U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [7U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[7U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [7U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[7U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [7U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[8U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [8U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[8U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [8U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[8U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [8U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[9U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [9U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[9U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [9U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[9U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [9U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0xaU][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0xaU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0xaU][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0xaU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0xaU][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0xaU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0xbU][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0xbU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0xbU][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0xbU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0xbU][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0xbU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0xcU][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0xcU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0xcU][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0xcU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[0xcU][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o
        [0xcU][2U];
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_1n__pi2::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__39(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__39\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__err_resp__DOT__err_rsp_pending = this->__Vdly__err_resp__DOT__err_rsp_pending;
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_1n__pi2::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__41(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__41\n"); );
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
                                                                       [0xdU][0U]))))))));
    this->__PVT__tl_u_i[0xdU] = this->__Vcellout__err_resp__tl_h_o;
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
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [0xbU])))));
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [0xbU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [0xbU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [0xbU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [0xbU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [0xbU] 
                                             >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [0xcU])))));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [0xcU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [0xcU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [0xcU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [0xcU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [0xcU] 
                                             >> 0x33U))))) 
              << 0x33U));
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
    this->__PVT__tl_u_i[0xbU] = this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[0xcU] = this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_t_p = this->__PVT__tl_u_i[0xdU];
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
    if ((0xbU == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[0xbU];
    }
    if ((0xcU == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[0xcU];
    }
    this->__PVT__hfifo_reqready = (1U & (IData)(this->__PVT__tl_u_i
                                                [0xdU]));
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
    if ((0xbU == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [0xbU]));
    }
    if ((0xcU == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [0xcU]));
    }
    if (this->__PVT__hold_all_requests) {
        this->__PVT__hfifo_reqready = 0U;
    }
    this->__PVT__tl_t_i = ((1ULL & this->__PVT__tl_t_i) 
                           | (0xffffffffffffeULL & this->__PVT__tl_t_p));
    this->__PVT__tl_t_i = ((0xffffffffffffeULL & this->__PVT__tl_t_i) 
                           | (IData)((IData)(((this->__PVT__tl_t_o[2U] 
                                               >> 0x15U) 
                                              & (IData)(this->__PVT__hfifo_reqready)))));
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
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q;
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_req) 
         & (IData)(this->tl_h_o))) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d 
            = (1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q)) 
                     & ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q))));
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(this->tl_h_o) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else {
                if ((1U & ((IData)((this->tl_h_o >> 0x33U)) 
                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                        = (1U & (~ (IData)(this->tl_h_o)));
                } else {
                    if ((1U & (IData)(this->tl_h_o))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(this->tl_h_o) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
                }
            } else {
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    if ((1U & (IData)(this->tl_h_o))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                            = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = (1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
                  | (IData)((this->tl_h_o >> 1U))) 
                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            } else {
                if ((1U & (IData)((this->tl_h_o >> 0x33U)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(this->tl_h_o) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                }
            } else {
                if ((1U & ((IData)((this->tl_h_o >> 0x33U)) 
                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                        = ((1U & (IData)(this->tl_h_o))
                            ? 0U : 3U);
                } else {
                    if ((1U & (IData)(this->tl_h_o))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(this->tl_h_o) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
                }
            } else {
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                        = ((1U & (IData)(this->tl_h_o))
                            ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                                ? 2U : 0U) : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                                               ? 1U
                                               : 3U));
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid 
        = (((IData)((this->tl_h_o >> 0x33U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)) 
           | (((((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                 & (IData)((this->tl_h_o >> 0x33U))) 
                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
              << 1U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)) 
           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done 
        = ((2U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)) 
           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
            | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
           & (0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__outstanding_load_wb) 
            | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
               & (1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
             & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done)) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q)) 
           & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid) 
                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err) 
                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
            | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)) 
           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb 
        = (1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q)) 
                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
              | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending 
        = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                 | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill 
        = (1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err) 
                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception)) 
                 | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done 
        = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                  ? (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem))
                  : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) 
                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
                }
            } else {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
        } else {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) {
                if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                }
            } else {
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                    }
                } else {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
                        = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)
                                  ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                      >> 1U) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                  : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec)));
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz))) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) 
                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump 
                        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) 
                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                            = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) 
                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv 
                        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id 
        = ((((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz) 
               | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem)) 
              | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv)) 
             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump)) 
            | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch)) 
           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done 
        = (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))) 
           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing)) 
           & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)));
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_1n__pi2::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__36(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__36\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__err_resp__DOT__err_rsp_pending = this->__Vdly__err_resp__DOT__err_rsp_pending;
    this->__Vcellout__err_resp__tl_h_o = ((0x7ffffffffffffULL 
                                           & this->__Vcellout__err_resp__tl_h_o) 
                                          | ((QData)((IData)(
                                                             ((IData)(this->__PVT__err_resp__DOT__err_req_pending) 
                                                              | (IData)(this->__PVT__err_resp__DOT__err_rsp_pending)))) 
                                             << 0x33U));
}

VL_INLINE_OPT void Vopentitan_soc_top_tlul_socket_1n__pi2::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__37(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vopentitan_soc_top_tlul_socket_1n__pi2::_combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__37\n"); );
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
                                                                       [0xdU][0U]))))))));
    this->__PVT__tl_u_i[0xdU] = this->__Vcellout__err_resp__tl_h_o;
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[3U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[4U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[6U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[8U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[9U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[0xaU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[9U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[0xaU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[3U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [3U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[4U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [4U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[5U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [5U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[6U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [6U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[7U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [7U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[8U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [8U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[9U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [9U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[0xaU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [0xaU];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[0xbU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [0xbU];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[0xcU] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
        [0xcU];
    this->tl_d_i[0U] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [0U];
    this->tl_d_i[1U] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [1U];
    this->tl_d_i[2U] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [2U];
    this->tl_d_i[3U] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [3U];
    this->tl_d_i[4U] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [4U];
    this->tl_d_i[5U] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [5U];
    this->tl_d_i[6U] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [6U];
    this->tl_d_i[7U] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [7U];
    this->tl_d_i[8U] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [8U];
    this->tl_d_i[9U] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [9U];
    this->tl_d_i[0xaU] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [0xaU];
    this->tl_d_i[0xbU] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [0xbU];
    this->tl_d_i[0xcU] = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i
        [0xcU];
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
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [0xbU])))));
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [0xbU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [0xbU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [0xbU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [0xbU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [0xbU] 
                                             >> 0x33U))))) 
              << 0x33U));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
        = ((0xffffffffffffeULL & this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->tl_d_i
                                           [0xcU])))));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
        = ((0x8000000000001ULL & this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->tl_d_i
                                                    [0xcU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->tl_d_i
                                                           [0xcU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->tl_d_i
                                                          [0xcU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->tl_d_i
                                                                   [0xcU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
        = ((0x7ffffffffffffULL & this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->tl_d_i
                                             [0xcU] 
                                             >> 0x33U))))) 
              << 0x33U));
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
    this->__PVT__tl_u_i[0xbU] = this->__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_u_i[0xcU] = this->__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o;
    this->__PVT__tl_t_p = this->__PVT__tl_u_i[0xdU];
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
    if ((0xbU == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[0xbU];
    }
    if ((0xcU == (IData)(this->__PVT__dev_select_outstanding))) {
        this->__PVT__tl_t_p = this->__PVT__tl_u_i[0xcU];
    }
    this->__PVT__hfifo_reqready = (1U & (IData)(this->__PVT__tl_u_i
                                                [0xdU]));
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
    if ((0xbU == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [0xbU]));
    }
    if ((0xcU == (0xfU & this->fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]))) {
        this->__PVT__hfifo_reqready = (1U & (IData)(
                                                    this->__PVT__tl_u_i
                                                    [0xcU]));
    }
    if (this->__PVT__hold_all_requests) {
        this->__PVT__hfifo_reqready = 0U;
    }
    this->__PVT__tl_t_i = ((1ULL & this->__PVT__tl_t_i) 
                           | (0xffffffffffffeULL & this->__PVT__tl_t_p));
    this->__PVT__tl_t_i = ((0xffffffffffffeULL & this->__PVT__tl_t_i) 
                           | (IData)((IData)(((this->__PVT__tl_t_o[2U] 
                                               >> 0x15U) 
                                              & (IData)(this->__PVT__hfifo_reqready)))));
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
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_sba_csrs 
        = (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q);
    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
                if ((1U & (IData)((this->tl_h_o >> 0x33U)))) {
                    if ((0x10000U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)) {
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_sba_csrs 
                            = ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q) 
                               + ((IData)(1U) << (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x11U))));
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
                if ((1U & (IData)((this->tl_h_o >> 0x33U)))) {
                    if ((0x10000U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)) {
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_sba_csrs 
                            = ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q) 
                               + ((IData)(1U) << (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x11U))));
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d 
        = (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_sba_csrs));
    if ((((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)) 
          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty))) 
         & (2U == (3U & (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                            >> 0x22U))))) {
                if ((0x39U == (0x7fU & (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                >> 0x22U))))) {
                    if ((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
                        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d 
                            = ((0xffffffff00000000ULL 
                                & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d) 
                               | (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o)));
                    }
                } else {
                    if ((0x3aU == (0x7fU & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                    >> 0x22U))))) {
                        if ((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
                            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d 
                                = ((0xffffffffULL & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d) 
                                   | ((QData)((IData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o))) 
                                      << 0x20U));
                        }
                    }
                }
            }
        }
    }
}
