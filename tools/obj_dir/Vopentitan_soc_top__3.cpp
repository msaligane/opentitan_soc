// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopentitan_soc_top.h for the primary calling header

#include "Vopentitan_soc_top.h"
#include "Vopentitan_soc_top__Syms.h"

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__198(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__198\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_watermark_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_watermark_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_empty_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_overflow_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_frame_err_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_break_err_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_timeout_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_parity_err_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_tx_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rx_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nf_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_slpbk_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_llpbk_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_en_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_odd_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rxblvl_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nco_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wdata_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxrst_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txrst_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txen_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txval_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_val_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 0xbU) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_en_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 0xbU) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_rxrst 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                  >> 5U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                            >> 4U)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_txrst 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                  >> 3U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                            >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                  >> 6U) & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->uart_tx = ((0x1000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                        ? (IData)(vlTOPp->uart_rx) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_out_q));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in 
        = (1U & ((0x2000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                  ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_q)
                  : ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                      >> 0x18U) | ((0x4000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                                    ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                        & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))
                                    : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 3U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 4U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d 
        = ((0U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                          << 4U) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
                                    >> 0x1cU)))) ? 
           (2U > (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth))
            : ((1U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                              << 4U) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
                                        >> 0x1cU))))
                ? (4U > (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth))
                : ((2U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                                  << 4U) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 0x1cU))))
                    ? (8U > (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth))
                    : (0x10U > (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth)))));
    vlTOPp->__Vtableidx7 = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                             << 3U) | (7U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                                              << 1U) 
                                             | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
                                                >> 0x1fU))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d 
        = vlTOPp->__Vtable7_opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d
        [vlTOPp->__Vtableidx7];
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout 
        = ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q 
            == (0xffffffU & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                              << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
                                           >> 1U)))) 
           & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U]);
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle 
        = (1U & ((~ (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                     >> 0x1cU)) | (0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err 
        = (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
             >> 0x17U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q)) 
           & (VL_REDXOR_32((0x1ffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                      >> 1U))) ^ (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                                  >> 0x16U)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data 
        = (0xffU & ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                     ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                        >> 1U) : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                  >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_d 
        = ((1U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U])
            ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)
                ? 0U : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                         != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? 0U : ((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth))
                                  ? 0U : (0xffffffU 
                                          & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q)
                                              ? ((IData)(1U) 
                                                 + vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)
                                              : vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)))))
            : 0U);
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U]) 
           | (0xffffe000U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle) 
                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                             << 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                   >> 0x1fU) & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U]) 
                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                   >> 0x1dU) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                >> 0x1eU)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 0xbU) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                               >> 0xcU)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d) 
                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 9U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 0xaU)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 7U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 8U)) | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q))) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err))) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__break_st_q) 
            | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)) 
                  | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data)))))
            ? 0U : (0x1fU & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err) 
                              & (0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data)))
                              ? ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_q))
                              : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_q))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 5U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 6U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err 
        = (((0U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                           << 0xcU) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                       >> 0x14U))))
             ? (2U <= (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
             : ((1U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                               << 0xcU) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x14U))))
                 ? (4U <= (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
                 : ((2U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                   << 0xcU) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                               >> 0x14U))))
                     ? (8U <= (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
                     : (0x10U <= (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))))) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__break_st_q)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 1U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 2U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
        = ((0x1ffffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U]) 
           | (0xfffe0000U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event) 
                              << 0x1fU) | ((0x40000000U 
                                            & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                                << 0x1eU) 
                                               | (0xc0000000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                     << 3U)))) 
                                           | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                               << 0x1dU) 
                                              | ((0x10000000U 
                                                  & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                                      << 0x1cU) 
                                                     | (0xf0000000U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                           << 2U)))) 
                                                 | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                                     << 0x1bU) 
                                                    | ((0x4000000U 
                                                        & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                                            << 0x1aU) 
                                                           | (0xfc000000U 
                                                              & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                 << 1U)))) 
                                                       | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                                           << 0x19U) 
                                                          | ((0x1000000U 
                                                              & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                                                  << 0x18U) 
                                                                 | (0xff000000U 
                                                                    & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U]))) 
                                                             | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                                                 << 0x17U) 
                                                                | ((0x400000U 
                                                                    & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                                                        << 0x16U) 
                                                                       | (0x7fc00000U 
                                                                          & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                             >> 1U)))) 
                                                                   | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                                                       << 0x15U) 
                                                                      | ((0x100000U 
                                                                          & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                                                              << 0x14U) 
                                                                             | (0x3ff00000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                                >> 2U)))) 
                                                                         | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                                                             << 0x13U) 
                                                                            | ((0x40000U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                                                                << 0x12U) 
                                                                                | (0x1ffc0000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                                >> 3U)))) 
                                                                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                                                                << 0x11U)))))))))))))))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[2U] 
        = (1U & ((1U & ((0x1ffffU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event)) 
                        | (0xfU & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                   >> 0x1cU)))) | (
                                                   (0x1ffffU 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event) 
                                                       >> 1U)) 
                                                   | ((0x1ffffU 
                                                       & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                                          >> 3U)) 
                                                      | ((0x1ffffU 
                                                          & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                                             >> 5U)) 
                                                         | ((0x1ffffU 
                                                             & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                                                >> 7U)) 
                                                            | ((0x1ffffU 
                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                                                   >> 9U)) 
                                                               | ((0x1ffffU 
                                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                                                      >> 0xbU)) 
                                                                  | ((0x1ffffU 
                                                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                                                         >> 0xdU)) 
                                                                     | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                                                        >> 0xfU))))))))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data 
        = (1U & (((0x80000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[2U]
                   : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 1U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data 
        = (1U & (((0x20000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1eU) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 2U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data 
        = (1U & (((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1cU) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 3U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = (1U & (((0x2000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1aU) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 4U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = (1U & (((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x18U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 5U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = (1U & (((0x200000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x16U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 6U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = (1U & (((0x80000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x14U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 7U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = (1U & (((0x20000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x12U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 8U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((1U & ((((((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                     | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                        >> 1U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                   >> 2U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                              >> 3U)) 
                  | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                     >> 4U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                >> 5U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                           >> 6U)) 
               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                  >> 7U)))) {
        if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                      << 1U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 2U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                      << 3U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                      << 4U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                      << 5U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                      << 6U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                      << 7U));
        } else {
            if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                          << 1U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                          << 2U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                          << 3U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                          << 4U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                          << 5U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                          << 6U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                          << 7U));
            } else {
                if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                } else {
                    if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                  << 2U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                  << 4U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                  << 5U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                  << 6U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                  << 7U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffcffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                  << 8U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                  << 0x10U));
                    } else {
                        if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (1U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0x10U)));
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (2U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0xeU)));
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (4U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0xcU)));
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (8U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0xaU)));
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (0x10U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 8U)));
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (0x20U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 6U)));
                        } else {
                            if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                    = ((0xffffff00U 
                                        & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                       | (0xffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[2U] 
                                                    << 0x1dU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                                      >> 3U))));
                            } else {
                                if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xffffff00U 
                                           & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xfffffffeU 
                                           & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xfffffffdU 
                                           & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = ((0xffffffe3U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                              << 2U));
                                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = ((0xffffff9fU 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                              << 5U));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffc0U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0x3fU & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                << 0xaU) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[0U] 
                                            >> 0x16U))));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffc0ffffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0x3f0000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[0U]));
        } else {
            if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                          << 1U));
            } else {
                if ((0x400U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = ((0xffff0000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                           | (0xffffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[0U]));
                } else {
                    if ((0x800U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xff000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                  << 0x1fU));
                    } else {
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__199(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__199\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd 
        = (1ULL + vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))
                ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd
                : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd 
        = (1ULL + vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : ((1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                       >> 2U) & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 2U)))) ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd
                : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__200(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__200\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x19U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1aU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x25U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q;
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
        } else {
            if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
                    = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                         == ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                              ? 0xbU : 0xaU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)) 
                       | (1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
    }
    if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        if ((0x10000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q)) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
        }
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
    }
    if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                    ? 0xbU : 0xaU);
        } else {
            if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                    = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                         == ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                              ? 0xbU : 0xaU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in))
                        ? 0U : (0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                        - (IData)(1U))));
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
    }
    if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        if ((0x10000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q)) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                = (1U & (((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                         >> 4U));
        }
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
    }
    if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q;
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
        } else {
            if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                if ((1U & (~ (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                               == ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                                    ? 0xbU : 0xaU)) 
                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in))))) {
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
                        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in) 
                            << 0xaU) | (0x3ffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                                  >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty))) 
           & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
              >> 0x1cU));
    if ((0x10000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        if (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                    ? 0xbU : 0xaU);
        } else {
            if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                    = (0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                               - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
    }
    if ((0x10000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | ((0x200U & (((~ (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                             >> 0x17U)) 
                                         << 9U) | (
                                                   (VL_REDXOR_32((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_data)) 
                                                    << 9U) 
                                                   ^ 
                                                   (0x7fe00U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                                       >> 0xdU))))) 
                             | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_data) 
                                << 1U)));
        } else {
            if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                    = (0x400U | (0x3ffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                           >> 1U)));
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x7ffU;
    }
    if ((0x10000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready)))) {
            if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
    }
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__wr_data 
        = (((0x200000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U])
             ? ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                 << 0xaU) | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                             >> 0x16U)) : vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
           & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
               ? (~ ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                      [1U][1U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U)))
               : 0xffffffffU));
}

void Vopentitan_soc_top::_eval(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_eval\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vm_even_cycle = !vlTOPp->__Vm_even_cycle;
    vlTOPp->__Vm_threadPoolp->workerp(0)->addTask(__Vmtask__1, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(1)->addTask(__Vmtask__7, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(2)->addTask(__Vmtask__15, vlTOPp->__Vm_even_cycle, vlSymsp);
    __Vmtask__16(vlTOPp->__Vm_even_cycle, vlSymsp);
    Verilated::mtaskId(0);
    vlTOPp->__Vm_mt_final.waitUntilUpstreamDone(vlTOPp->__Vm_even_cycle);
    // Final
    vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk;
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vopentitan_soc_top::_change_request(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_change_request\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vopentitan_soc_top::_change_request_1(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_change_request_1\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req)
         | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree)
         | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7])|| (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[10] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[10]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[11] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[11])
         | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5]));
    VL_DEBUG_IF( if(__req && ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req))) VL_DBG_MSGF("        CHANGE: /afs/eecs.umich.edu/vlsida/projects/restricted/google/naomikmo/gf12_opentitan/opentitan_soc/ibex/rtl/ibex_id_stage.v:315: opentitan_soc_top.u_top.u_core.u_ibex_core.id_stage_i.lsu_req\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) VL_DBG_MSGF("        CHANGE: /afs/eecs.umich.edu/vlsida/projects/restricted/google/naomikmo/gf12_opentitan/opentitan_soc/ip/rv_plic/rtl/rv_plic_target.sv:43: opentitan_soc_top.intr_controller.gen_target[0].u_target.is_tree\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9])|| (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[10] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[10]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[11] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[11]))) VL_DBG_MSGF("        CHANGE: /afs/eecs.umich.edu/vlsida/projects/restricted/google/naomikmo/gf12_opentitan/opentitan_soc/ip/rv_plic/rtl/rv_plic_target.sv:44: opentitan_soc_top.intr_controller.gen_target[0].u_target.id_tree\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4]) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5] ^ vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5]))) VL_DBG_MSGF("        CHANGE: /afs/eecs.umich.edu/vlsida/projects/restricted/google/naomikmo/gf12_opentitan/opentitan_soc/ip/rv_plic/rtl/rv_plic_target.sv:45: opentitan_soc_top.intr_controller.gen_target[0].u_target.max_tree\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req;
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U];
    vlTOPp->__Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U];
    return __req;
}

#ifdef VL_DEBUG
void Vopentitan_soc_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((gpio_i & 0xfff00000U))) {
        Verilated::overWidthError("gpio_i");}
    if (VL_UNLIKELY((uart_rx & 0xfeU))) {
        Verilated::overWidthError("uart_rx");}
    if (VL_UNLIKELY((uart_rx_i & 0xfeU))) {
        Verilated::overWidthError("uart_rx_i");}
}
#endif  // VL_DEBUG

void Vopentitan_soc_top::__Vmtask__1(bool even_cycle, void* symtab) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = (Vopentitan_soc_top__Syms*)symtab;
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(1);
    vlTOPp->_combo__TOP__4(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_15.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_16.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(2);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    vlTOPp->_combo__TOP__16(vlSymsp);
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__17(vlSymsp);
    }
    vlTOPp->_combo__TOP__18(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_7.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_9.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_10.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_17.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_19.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(12);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__44(vlSymsp);
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__45(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((IData)(vlTOPp->rst_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst_ni))))) {
        vlTOPp->_sequent__TOP__46(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__47(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__48(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((IData)(vlTOPp->rst_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst_ni))))) {
        vlTOPp->_sequent__TOP__49(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((IData)(vlTOPp->rst_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst_ni))))) {
        vlTOPp->_sequent__TOP__52(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__53(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x11U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__54(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((IData)(vlTOPp->rst_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst_ni))))) {
        vlTOPp->_sequent__TOP__55(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x12U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__56(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((IData)(vlTOPp->rst_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst_ni))))) {
        vlTOPp->_sequent__TOP__57(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x13U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__58(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((IData)(vlTOPp->rst_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst_ni))))) {
        vlTOPp->_sequent__TOP__59(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((IData)(vlTOPp->rst_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst_ni))))) {
        vlTOPp->_sequent__TOP__61(vlSymsp);
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__62(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_27.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_3.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_8.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_37.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(11);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__43(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_27.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_3.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_6.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_18.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(18);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__88(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1dU] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__89(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1eU] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__90(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1fU] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__92(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x20U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_4.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_28.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_35.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(35);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__160(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x45U] = 1U;
    }
    vlTOPp->_combo__TOP__162(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x46U] = 1U;
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__163(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x47U] = 1U;
    }
    vlTOPp->_combo__TOP__164(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_31.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_52.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_5.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(5);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__183(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x56U] = 1U;
    }
    vlTOPp->_combo__TOP__184(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x57U] = 1U;
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__185(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x58U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_31.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_39.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_52.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_40.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(40);
    vlTOPp->_combo__TOP__172(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x4eU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_44.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_45.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_46.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_33.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(33);
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__189(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__190(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x5cU] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__191(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x5dU] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__192(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x5eU] = 1U;
    }
    vlTOPp->_combo__TOP__193(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x5fU] = 1U;
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__194(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x60U] = 1U;
    }
    vlTOPp->_combo__TOP__195(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_53.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_51.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(51);
    vlTOPp->_combo__TOP__182(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x55U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_50.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(50);
    vlTOPp->_combo__TOP__181(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x54U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vopentitan_soc_top::__Vmtask__7(bool even_cycle, void* symtab) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = (Vopentitan_soc_top__Syms*)symtab;
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vlTOPp->__Vm_mt_7.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(7);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__19(vlSymsp);
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__20(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    vlTOPp->_combo__TOP__25(vlSymsp);
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__26(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__27(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__28(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__29(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__30(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    vlTOPp->_combo__TOP__31(vlSymsp);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__32(vlSymsp);
    }
    vlTOPp->_combo__TOP__33(vlSymsp);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__34(vlSymsp);
    }
    vlTOPp->_combo__TOP__35(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_4.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_35.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_5.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_17.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(17);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__75(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1aU] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__79(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1bU] = 1U;
    }
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__82(vlSymsp);
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__83(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__85(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_3.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_8.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_13.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_40.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_43.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_20.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(20);
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__96(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x22U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__97(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__99(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x23U] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__100(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x24U] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__101(vlSymsp);
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__102(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x25U] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__103(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x26U] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__104(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_23.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_31.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_22.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(22);
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__138(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_28.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_14.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(14);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__136(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3bU] = 1U;
    }
    vlTOPp->_combo__TOP__137(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_38.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_37.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(37);
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__165(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x48U] = 1U;
    }
    vlTOPp->_combo__TOP__166(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x49U] = 1U;
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__167(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4aU] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__168(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4bU] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__169(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4cU] = 1U;
    }
    vlTOPp->_combo__TOP__170(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_51.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_21.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_33.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_41.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(41);
    vlTOPp->_combo__TOP__173(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_32.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(32);
    vlTOPp->_combo__TOP__157(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x42U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_47.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(47);
    vlTOPp->_combo__TOP__178(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x52U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_48.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_50.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(49);
    vlTOPp->_combo__TOP__180(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x53U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_53.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(53);
    vlTOPp->_combo__TOP__199(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x63U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vopentitan_soc_top::__Vmtask__15(bool even_cycle, void* symtab) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = (Vopentitan_soc_top__Syms*)symtab;
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vlTOPp->__Vm_mt_15.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(15);
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__65(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__66(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x15U] = 1U;
    }
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__69(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x16U] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__70(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__72(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x18U] = 1U;
    }
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__73(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_17.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_19.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(19);
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__93(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x21U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_20.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_24.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(24);
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__105(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x27U] = 1U;
    }
    vlTOPp->_combo__TOP__106(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x28U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_22.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_23.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(25);
    vlTOPp->_combo__TOP__107(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x29U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_27.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(26);
    vlTOPp->_combo__TOP__108(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x2aU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_27.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_3.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(3);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__113(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__115(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2dU] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__116(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2eU] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__117(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2fU] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__119(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x30U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_35.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_41.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_5.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_29.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(29);
    vlTOPp->_combo__TOP__110(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_36.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_34.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(34);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__158(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x43U] = 1U;
    }
    vlTOPp->_combo__TOP__159(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x44U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_31.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_52.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_4.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(4);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__120(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x31U] = 1U;
    }
    vlTOPp->_combo__TOP__121(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x32U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_31.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_52.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_38.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(38);
    vlTOPp->_combo__TOP__171(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x4dU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_40.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_41.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_31.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_43.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(43);
    vlTOPp->_combo__TOP__174(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_39.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(39);
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__196(vlSymsp);
    }
    vlTOPp->_combo__TOP__197(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x61U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_42.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_44.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(44);
    vlTOPp->_combo__TOP__175(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x4fU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_47.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_45.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(45);
    vlTOPp->_combo__TOP__176(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x50U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_47.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_46.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(46);
    vlTOPp->_combo__TOP__177(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x51U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_47.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_21.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(21);
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__186(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x59U] = 1U;
    }
    vlTOPp->_combo__TOP__187(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x5aU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_53.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_48.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(48);
    vlTOPp->_combo__TOP__179(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vopentitan_soc_top::__Vmtask__16(bool even_cycle, void* symtab) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = (Vopentitan_soc_top__Syms*)symtab;
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vlTOPp->__Vm_mt_16.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(16);
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__74(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x19U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_24.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_10.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(10);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__38(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__40(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__41(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__42(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_18.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_3.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_9.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(9);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__37(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_3.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_6.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(6);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__122(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x33U] = 1U;
    }
    vlTOPp->_combo__TOP__123(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x34U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_5.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_27.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(27);
    vlTOPp->_combo__TOP__109(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x2bU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_29.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_4.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_35.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_13.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(13);
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__127(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x36U] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__128(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x37U] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__130(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x38U] = 1U;
    }
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__131(vlSymsp);
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__132(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x39U] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__134(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3aU] = 1U;
    }
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__135(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(30);
    vlTOPp->_combo__TOP__111(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x2cU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_14.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_23.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(23);
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__141(vlSymsp);
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__142(vlSymsp);
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__144(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__145(vlSymsp);
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__147(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3dU] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__148(vlSymsp);
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__149(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__150(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3eU] = 1U;
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__151(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3fU] = 1U;
    }
    if (((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_multiclk__TOP__152(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x40U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_37.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_36.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(36);
    vlTOPp->_combo__TOP__112(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_38.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_28.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(28);
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__153(vlSymsp);
    }
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__154(vlSymsp);
    }
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__155(vlSymsp);
    }
    vlTOPp->_combo__TOP__156(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x41U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_32.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_51.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_21.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_33.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_8.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(8);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__124(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x35U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_52.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(52);
    vlTOPp->_combo__TOP__198(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x62U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_31.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(31);
    vlTOPp->_combo__TOP__188(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x5bU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_42.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(42);
    vlTOPp->_combo__TOP__200(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x64U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}
