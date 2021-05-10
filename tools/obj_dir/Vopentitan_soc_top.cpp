// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopentitan_soc_top.h for the primary calling header

#include "Vopentitan_soc_top.h"
#include "Vopentitan_soc_top__Syms.h"

#include "verilated_dpi.h"

//==========

VerilatedContext* Vopentitan_soc_top::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void Vopentitan_soc_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vopentitan_soc_top::eval\n"); );
    Vopentitan_soc_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/afs/eecs.umich.edu/vlsida/projects/restricted/google/khtaur/opentitan_soc/soc_top/opentitan_soc_top.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vopentitan_soc_top::_eval_initial_loop(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/afs/eecs.umich.edu/vlsida/projects/restricted/google/khtaur/opentitan_soc/soc_top/opentitan_soc_top.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vopentitan_soc_top::__Vdpiimwrap_opentitan_soc_top__DOT__u_jtagdpi__DOT__jtagdpi_create_TOP(std::string name, IData/*31:0*/ listen_port, QData/*63:0*/ (&jtagdpi_create__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::__Vdpiimwrap_opentitan_soc_top__DOT__u_jtagdpi__DOT__jtagdpi_create_TOP\n"); );
    // Body
    const char* name__Vcvt;
    for (size_t name__Vidx = 0; name__Vidx < 1; ++name__Vidx) name__Vcvt = name.c_str();
    int listen_port__Vcvt;
    for (size_t listen_port__Vidx = 0; listen_port__Vidx < 1; ++listen_port__Vidx) listen_port__Vcvt = listen_port;
    void* jtagdpi_create__Vfuncrtn__Vcvt;
    jtagdpi_create__Vfuncrtn__Vcvt = jtagdpi_create(name__Vcvt, listen_port__Vcvt);
    jtagdpi_create__Vfuncrtn = VL_CVT_VP_Q(jtagdpi_create__Vfuncrtn__Vcvt);
}

VL_INLINE_OPT void Vopentitan_soc_top::__Vdpiimwrap_opentitan_soc_top__DOT__u_jtagdpi__DOT__jtagdpi_tick_TOP(QData/*63:0*/ ctx, CData/*0:0*/ (&tck), CData/*0:0*/ (&tms), CData/*0:0*/ (&tdi), CData/*0:0*/ (&trst_n), CData/*0:0*/ (&srst_n), CData/*0:0*/ tdo) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::__Vdpiimwrap_opentitan_soc_top__DOT__u_jtagdpi__DOT__jtagdpi_tick_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    svBit tck__Vcvt;
    svBit tms__Vcvt;
    svBit tdi__Vcvt;
    svBit trst_n__Vcvt;
    svBit srst_n__Vcvt;
    svBit tdo__Vcvt;
    for (size_t tdo__Vidx = 0; tdo__Vidx < 1; ++tdo__Vidx) tdo__Vcvt = tdo;
    jtagdpi_tick(ctx__Vcvt, &tck__Vcvt, &tms__Vcvt, &tdi__Vcvt, &trst_n__Vcvt, &srst_n__Vcvt, tdo__Vcvt);
    tck = (1U & tck__Vcvt);
    tms = (1U & tms__Vcvt);
    tdi = (1U & tdi__Vcvt);
    trst_n = (1U & trst_n__Vcvt);
    srst_n = (1U & srst_n__Vcvt);
}

VL_INLINE_OPT void Vopentitan_soc_top::__Vdpiimwrap_opentitan_soc_top__DOT__u_jtagdpi__DOT__jtagdpi_close_TOP(QData/*63:0*/ ctx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::__Vdpiimwrap_opentitan_soc_top__DOT__u_jtagdpi__DOT__jtagdpi_close_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    jtagdpi_close(ctx__Vcvt);
}

VL_INLINE_OPT void Vopentitan_soc_top::_settle__TOP__13(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_settle__TOP__13\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->__Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__inp 
                            = (0x30U | ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                         ? 0xeU : (
                                                   (0x2000U 
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
                                                                : 0U)))))))))))))));
                        vlTOPp->__Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__Vfuncout 
                            = vlTOPp->__Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__inp;
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause 
                            = ((0U != (0x7fffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs))
                                ? (IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__Vfuncout)
                                : ((0x8000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                    ? 0x2bU : ((0x20000U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                ? 0x23U
                                                : 0x27U)));
                    }
                } else {
                    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 1U;
                        } else {
                            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 2U;
                            } else {
                                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause 
                                        = ((3U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                                            ? 0xbU : 8U);
                                } else {
                                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 3U;
                                        }
                                    } else {
                                        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 7U;
                                        } else {
                                            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause = 5U;
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
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__38(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__38\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->clk_i)))) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__en_latch = 1U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__en_latch) 
           & (IData)(vlTOPp->clk_i));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__40(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__40\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vdly__num_req_outstanding 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__num_req_outstanding;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vdly__err_resp__DOT__err_rsp_pending 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_rsp_pending;
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__42(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__42\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_d)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U] 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[0U];
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U] 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[1U];
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U] 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[2U];
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U] 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[3U];
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U] 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[4U];
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U] 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[5U];
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U] 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[6U];
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U] 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[7U];
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q 
                = vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d;
        } else {
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U] = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U] = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U] = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U] = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U] = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U] = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U] = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U] = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q = 0ULL;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q = 0U;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xefffffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfc00ffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xffff003fU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xffffffcfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q) 
                   | (1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U] = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U] = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U] = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U] = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U] = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U] = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U] = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U] = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q = 0ULL;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q = 0U;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q 
        = ((IData)(vlTOPp->rst_ni) & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy) 
                                       | ((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                      | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    if (vlTOPp->rst_ni) {
        if (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_req) {
            if ((1U & (~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_rsp)))) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vdly__num_req_outstanding 
                    = (0x1ffffU & ((IData)(1U) + vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__num_req_outstanding));
            }
        } else {
            if (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_rsp) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vdly__num_req_outstanding 
                    = (0x1ffffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__num_req_outstanding 
                                   - (IData)(1U)));
            }
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vdly__num_req_outstanding = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                    [0xdU][2U] >> 0x15U) & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o)))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_opcode 
                = (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [0xdU][2U] >> 0x12U));
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_opcode = 4U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                    [0xdU][2U] >> 0x15U) & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o)))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_source 
                = (0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [0xdU][2U] >> 5U));
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_source = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                    [0xdU][2U] >> 0x15U) & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o)))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_size 
                = (3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [0xdU][2U] >> 0xdU));
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_size = 0U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vdly__err_resp__DOT__err_rsp_pending 
        = ((IData)(vlTOPp->rst_ni) & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_req_pending) 
                                       | (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_rsp_pending)) 
                                      & (~ vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [0xdU][0U])));
    if (vlTOPp->rst_ni) {
        if (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_req) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__dev_select_outstanding 
                = (0xfU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]);
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__dev_select_outstanding = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__43(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__43\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__45(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__45\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__num_req_outstanding 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vdly__num_req_outstanding;
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__47(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__47\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)
            : 0U);
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__48(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__48\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__req = 0U;
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__req = 1U;
            }
        } else {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
                vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__req = 1U;
            }
        }
    }
    if (((3U < (7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
        vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__req = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be = 0U;
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx 
        = (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q));
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
                if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x13U)))) {
                    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be 
                        = ((0x40000U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)
                            ? 0xfU : ((0x20000U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)
                                       ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be) 
                                          | (0xfU & 
                                             ((IData)(3U) 
                                              << (2U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx)))))
                                       : ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be) 
                                          | (0xfU & 
                                             ((IData)(1U) 
                                              << (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx))))));
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we = 0U;
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we = 1U;
            }
        }
    }
    if (vlTOPp->rst_ni) {
        if ((1U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                    [0xdU][2U] >> 0x15U) & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o)))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_req_pending = 1U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_rsp_pending)))) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_req_pending = 0U;
            }
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_req_pending = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__50(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__50\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U] 
        = (IData)((1ULL | (((QData)((IData)(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                              ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                              : 0xfU))) 
                            << 0x21U) | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)) 
                                         << 1U))));
    vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
        = ((0xffffff80U & ((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q 
                                    >> 2U)) << 7U)) 
           | (IData)(((1ULL | (((QData)((IData)(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                                  ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                                  : 0xfU))) 
                                << 0x21U) | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)) 
                                             << 1U))) 
                      >> 0x20U)));
    vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
        = ((0xffffffe0U & (0x4000U | (((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__req) 
                                       << 0x15U) | 
                                      (((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                         ? ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be))
                                             ? 0U : 1U)
                                         : 4U) << 0x12U)))) 
           | (0x1fU & ((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q 
                                >> 2U)) >> 0x19U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]) 
           | (0x200000U & vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]) 
           | (1U & vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U]));
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__51(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__51\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out = 0U;
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out = 1U;
            } else {
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__52(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__52\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req 
                = (1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q)));
        }
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__53(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__53\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_req 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out) 
           & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err) 
                 >> 1U)));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__54(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__54\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if ((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((2U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((4U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((8U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x20U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x80U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x200U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x400U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x800U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x1000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x8000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x20000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x80000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x200000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x400000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x1000000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x2000000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x4000000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x20000000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU] 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU] = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU];
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__55(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__55\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__56(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__56\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0 = 0U;
    vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1 = 0U;
    vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2 = 0U;
    vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3 = 0U;
    vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 = 0U;
    vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 = 0U;
    vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 = 0U;
    vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 = 0U;
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__57(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__57\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
             & ((IData)((0x800U == (0x1c00U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))) {
            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))) {
            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))) {
            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
             & ((IData)((0x800U == (0x1c00U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))) {
            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))) {
            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))) {
            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__58(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__58\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req) {
        if ((1U & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__data_we)) {
            vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0 
                = (0xffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__wdata);
            vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0 = 1U;
            vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0 = 0U;
            vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0 
                = vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr;
        }
        if ((2U & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__data_we)) {
            vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1 
                = (0xffU & (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata 
                            >> 8U));
            vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1 = 1U;
            vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1 = 8U;
            vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1 
                = vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr;
        }
        if ((4U & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__data_we)) {
            vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2 
                = (0xffU & (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__wdata 
                            >> 0x10U));
            vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2 = 1U;
            vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2 = 0x10U;
            vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2 
                = vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr;
        }
        if ((8U & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__data_we)) {
            vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3 
                = (0xffU & (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__wdata 
                            >> 0x18U));
            vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3 = 1U;
            vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3 = 0x18U;
            vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3 
                = vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr;
        }
    }
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__instr_valid 
        = ((IData)(vlTOPp->rst_ni) & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__we)) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req)));
    if (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1 
            = ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
               << 1U);
        if ((0x41U >= (0x7fU & ((IData)(0x21U) * (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WIIQ(66,33,(0x7fU & ((IData)(0x21U) 
                                              * (1U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage, vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1);
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1 
            = ((((4U != (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                               >> 0x12U))) ? 0U : 1U) 
                << 0xbU) | (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                             << 0xaU) | (0x3ffU & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                   >> 5U))));
        if ((0x19U >= (0x1fU & ((IData)(0xdU) * (1U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fffU) << (0x1fU 
                                             & ((IData)(0xdU) 
                                                * (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | (0x3ffffffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1) 
                                    << (0x1fU & ((IData)(0xdU) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1 
            = (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[1U]);
        if ((9U >= (0xfU & ((IData)(5U) * (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fU) << (0xfU & ((IData)(5U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)) 
                   | (0x3ffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1) 
                                << (0xfU & ((IData)(5U) 
                                            * (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
    if (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req) {
        if ((1U & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we)) {
            vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 
                = (0xffU & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int);
            vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 = 1U;
            vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 = 0U;
            vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 
                = vlTOPp->opentitan_soc_top__DOT__dccm__DOT__addr;
        }
        if ((2U & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we)) {
            vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 
                = (0xffU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
                            >> 8U));
            vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 = 1U;
            vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 = 8U;
            vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 
                = vlTOPp->opentitan_soc_top__DOT__dccm__DOT__addr;
        }
        if ((4U & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we)) {
            vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 
                = (0xffU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
                            >> 0x10U));
            vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 = 1U;
            vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 = 0x10U;
            vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 
                = vlTOPp->opentitan_soc_top__DOT__dccm__DOT__addr;
        }
        if ((8U & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_we)) {
            vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 
                = (0xffU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
                            >> 0x18U));
            vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 = 1U;
            vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 = 0x18U;
            vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 
                = vlTOPp->opentitan_soc_top__DOT__dccm__DOT__addr;
        }
    }
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rvalid 
        = ((IData)(vlTOPp->rst_ni) & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we)) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req)));
    if (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1 
            = ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
               << 1U);
        if ((0x83U >= (0xffU & ((IData)(0x21U) * (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WIIQ(132,33,(0xffU & ((IData)(0x21U) 
                                               * (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage, vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1);
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1 
            = ((((4U != (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                               >> 0x12U))) ? 0U : 1U) 
                << 0xbU) | (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                             << 0xaU) | (0x3ffU & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                                   >> 5U))));
        if ((0x33U >= (0x3fU & ((IData)(0xdU) * (3U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ (0x1fffULL << (0x3fU & ((IData)(0xdU) 
                                               * (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | (0xfffffffffffffULL & ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1)) 
                                            << (0x3fU 
                                                & ((IData)(0xdU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1 
            = (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[1U]);
        if ((0x13U >= (0x1fU & ((IData)(5U) * (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fU) << (0x1fU & 
                                           ((IData)(5U) 
                                            * (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | (0xfffffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1) 
                                  << (0x1fU & ((IData)(5U) 
                                               * (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        }
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__59(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__59\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__61(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__61\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__62(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__62\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata 
            = vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
            [vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr];
    }
    if (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req) {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
            = vlTOPp->opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem
            [vlTOPp->opentitan_soc_top__DOT__dccm__DOT__addr];
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__63(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__63\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x19U >= (0x1fU & ((IData)(0xdU) 
                                        * (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fffU & (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                   >> (0x1fU & ((IData)(0xdU) 
                                                * (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__instr_valid) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((9U >= (0xfU & ((IData)(5U) * (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                 >> (0xfU & ((IData)(5U) 
                                             * (1U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                        * (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fffU & (IData)((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x3fU 
                                               & ((IData)(0xdU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                     : 0U));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rvalid) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x13U >= (0x1fU & ((IData)(5U) 
                                        * (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                 >> (0x1fU & ((IData)(5U) 
                                              * (3U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__64(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__64\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0) {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem[vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0))) 
                & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0))));
    }
    if (vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1) {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem[vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1))) 
                & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1))));
    }
    if (vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2) {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem[vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2))) 
                & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2))));
    }
    if (vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3) {
        vlTOPp->opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem[vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3))) 
                & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3))));
    }
    if (vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0))) 
                & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
                [vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0))));
    }
    if (vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1))) 
                & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
                [vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1))));
    }
    if (vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2))) 
                & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
                [vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2))));
    }
    if (vlTOPp->__Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3))) 
                & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem
                [vlTOPp->__Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(vlTOPp->__Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3) 
                                   << (IData)(vlTOPp->__Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3))));
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__65(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__65\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask = 0U;
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = ((0xffffff00U & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | (0xffffffffULL & (0xffU & (- (IData)((1U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                      >> 1U)))))));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 2U))))) 
                               << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 3U))))) 
                               << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 4U))))) 
                               << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid)));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask = 0U;
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = ((0xffffff00U & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | (0xffffffffULL & (0xffU & (- (IData)((1U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                      >> 1U)))))));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 2U))))) 
                               << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 3U))))) 
                               << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | (0xffffffffULL & ((0xffU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                       >> 4U))))) 
                               << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid)));
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__66(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__66\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword 
        = (((IData)(vlTOPp->rst_ni) ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
             : 0U) & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask);
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__67(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__67\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (IData)(((0x800U != (0x1c00U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))) 
                            | (1U != (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))))));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (IData)(((0x800U != (0x1c00U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))) 
                            | (1U != (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))))));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword 
        = (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
           & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask);
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__68(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__68\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x1ffffffffULL & (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
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
                                          : 0ULL))));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__69(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__69\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x1ffffffffULL & (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
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
                                          : 0ULL))));
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__70(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__70\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar = 
        (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid)) 
          << 0x33U) | (((QData)((IData)((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid) 
                                          & (1U != 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))))
                                          ? 0U : 1U))) 
                        << 0x30U) | (((QData)((IData)(
                                                      ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                           >> 8U))
                                                        : 0U))) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(
                                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                                      : 0U))) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       ((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid) 
                                                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                                         & (1U 
                                                                            == 
                                                                            (3U 
                                                                             & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU))))
                                                                         ? (IData)(
                                                                                (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                                >> 1U))
                                                                         : 0U))) 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid) 
                                                                           & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                              & ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU)))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU)))) 
                                                                          << 1U) 
                                                                         | (1U 
                                                                            & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                             >> 0x33U))))) 
              << 0x33U));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__71(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__71\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar = 
        (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid)) 
          << 0x33U) | (((QData)((IData)((((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                          & (1U != 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))))
                                          ? 0U : 1U))) 
                        << 0x30U) | (((QData)((IData)(
                                                      ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                           >> 8U))
                                                        : 0U))) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(
                                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                                      : 0U))) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       ((((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                                         & (1U 
                                                                            == 
                                                                            (3U 
                                                                             & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU))))
                                                                         ? (IData)(
                                                                                (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                                >> 1U))
                                                                         : 0U))) 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                                                           & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                              & ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xbU)))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                                >> 0xaU)))) 
                                                                          << 1U) 
                                                                         | (1U 
                                                                            & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                             >> 0x33U))))) 
              << 0x33U));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__74(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__74\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id 
            = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn;
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q 
            = (1U & (((((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))));
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q 
            = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id;
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q 
            = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id;
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q 
            = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                    ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                    : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
                : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex);
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q 
            = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing)) 
               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)));
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q 
            = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                    ? 1U : 0U) : 2U);
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
            = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed;
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q 
            = (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                        >> 7U));
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__75(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__75\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q 
                = (IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                           >> 1U));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                = ((3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U]) 
                   | (0xfffffffcU & ((IData)((0x3ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[1U])) 
                                                    >> 2U)))) 
                                     << 2U)));
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                = (0xfU & ((3U & ((IData)((0x3ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[2U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[1U])) 
                                                 >> 2U)))) 
                                  >> 0x1eU)) | (0xfffffffcU 
                                                & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[2U])) 
                                                                 << 0x1eU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[1U])) 
                                                                   >> 2U))) 
                                                            >> 0x20U)) 
                                                   << 2U))));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
            = (3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U]);
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] 
                = (IData)((0x3ffffffffULL & (((QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[0U])))));
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                = ((0xfffffffcU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U]) 
                   | (IData)(((0x3ffffffffULL & (((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[0U])))) 
                              >> 0x20U)));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] = 0U;
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
            = (0xfffffffcU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U]);
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d));
    if (vlTOPp->rst_ni) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q 
                = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__78(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__78\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id 
            = (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
               << 1U);
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id 
            = (3U != (3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata));
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
            = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__79(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__79\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                          >> 2U)))) 
                                      << 1U)));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                   >> 2U)))) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_write_wb 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
           & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q) 
              | (0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__81(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__81\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0x26U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex = 0U;
    if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                            ? ((0x1000U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 0x16U
                                                : 0x14U)
                                            : ((0x1000U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 0x15U
                                                : 0x13U));
                                } else {
                                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0xdU)))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 0x18U
                                                : 0x17U);
                                    }
                                }
                                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0x1fU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                                                    = 
                                                                    ((0x4000U 
                                                                      & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                      ? 
                                                                     ((0x2000U 
                                                                       & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                        ? 4U
                                                                        : 3U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                        ? 9U
                                                                        : 2U))
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                        ? 0x26U
                                                                        : 0x25U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                                        ? 0xaU
                                                                        : 0U)));
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
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                              >> 0xeU)))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 4U
                                                : 3U);
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                            if ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1bU)))) {
                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                                            } else {
                                                if (
                                                    (8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                                        }
                                    }
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                            ? ((0x1000U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 0x26U
                                                : 0x25U)
                                            : ((0x1000U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                ? 0xaU
                                                : 0U));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id);
    if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == (0xfffU 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                    } else {
                                        if ((1U == 
                                             (0xfffU 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                                        } else {
                                            if ((0x302U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x7b2U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x105U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                                                    } else {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((IData)((0U 
                                                 != 
                                                 (0xf8f80U 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access = 1U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xeU)))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                    }
                                    if ((1U == (3U 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                                        } else {
                                            if ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                                            } else {
                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        }
                                    }
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                                }
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                }
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                }
                                if ((0U != (7U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                    = (IData)((0x2000U 
                                               == (0x6000U 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)));
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                if ((5U == ((4U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x18U)) 
                                            | (3U & 
                                               (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU))))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                } else {
                                    if ((0x80000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                = (1U 
                                                   & (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3e000000U 
                                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                                              | ((0x4000U 
                                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                  ? (IData)(
                                                                            (0x1000U 
                                                                             != 
                                                                             (0x3000U 
                                                                              & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)))
                                                                  : (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x3000U 
                                                                              & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)))))));
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                                if ((0U == (3U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                        } else {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                    = (1U & ((0x4000U 
                                              & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)
                                              ? (IData)(
                                                        ((0x1000U 
                                                          == 
                                                          (0x3000U 
                                                           & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                                         & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x1aU) 
                                                            | ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                >> 0x1fU) 
                                                               | ((0x40000000U 
                                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                   ? (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x3e000000U 
                                                                               & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)))
                                                                   : (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x3e000000U 
                                                                               & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id))))))))
                                              : (IData)(
                                                        ((0x1000U 
                                                          == 
                                                          (0x3000U 
                                                           & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfe000000U 
                                                                     & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)))))));
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval = 1U;
                                        }
                                    } else {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                                    = (1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xeU)));
                                if ((0U == (3U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                            if ((0x4000U 
                                                 & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            }
                                        } else {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access = 0U;
    }
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__82(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__82\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
            == (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                         >> 0xfU))) & (0U != (0x1fU 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
            == (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                         >> 0x14U))) & (0U != (0x1fU 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))));
}

VL_INLINE_OPT void Vopentitan_soc_top::_sequent__TOP__83(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_sequent__TOP__83\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex) 
           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex));
    vlTOPp->__Vtableidx2 = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = vlTOPp->__Vtable2_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate
        [vlTOPp->__Vtableidx2];
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_write_wb))
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q
            : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
           (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                     >> 0xfU))]);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_write_wb))
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q
            : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
           (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                     >> 0x14U))]);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b 
        = ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? 4U : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                         ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                             ? 2U : 4U) : ((0xfff00000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                              >> 0x1fU)))) 
                                               << 0x14U)) 
                                           | ((0xff000U 
                                               & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                              | ((0x800U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0x14U)))))))
            : ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (0xfffff000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)
                    : ((0xffffe000U & ((- (IData)((1U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xdU)) | 
                       ((0x1000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x13U)) | ((0x800U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 7U)))))))
                : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0xfe0U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 7U))))
                    : ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x14U))))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xfU))) : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id)
            : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))) 
                   << 1U));
    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (
                                                   (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                      >> 2U))))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ 
                                                                   vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]))) 
                                                  << 1U)));
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))) 
                                                  << 1U)))
                : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))) 
                                                  << 1U))));
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
            | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b
            : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                               ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                               : (1ULL | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                          << 1U))) 
                             + (0x1ffffffffULL & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                   ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                                   : 
                                                  ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                    << 1U))))));
    vlTOPp->__Vtableidx6 = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                             << 4U) | ((0xcU & ((IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)) 
                                                << 2U)) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be 
        = vlTOPp->__Vtable6_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be
        [vlTOPp->__Vtableidx6];
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__84(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__84\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp279[3];
    // Body
    __Vtemp279[0U] = (IData)((1ULL | (((QData)((IData)(
                                                       ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                                         : 0xfU))) 
                                       << 0x21U) | 
                                      ((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                    >> 2U)))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                     >> 1U)))
                                                          ? 
                                                         ((0xff000000U 
                                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                              << 0x18U)) 
                                                          | (0xffffffU 
                                                             & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                >> 8U)))
                                                          : 
                                                         ((0xffff0000U 
                                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                              << 0x10U)) 
                                                          | (0xffffU 
                                                             & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                >> 0x10U))))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                     >> 1U)))
                                                          ? 
                                                         ((0xffffff00U 
                                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                >> 0x18U)))
                                                          : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd)))) 
                                       << 1U))));
    __Vtemp279[1U] = ((0xffffff80U & ((IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 3U)) 
                                      << 7U)) | (IData)(
                                                        ((1ULL 
                                                          | (((QData)((IData)(
                                                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                                                                ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                                                                : 0xfU))) 
                                                              << 0x21U) 
                                                             | ((QData)((IData)(
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 2U)))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((0xff000000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                << 0x18U)) 
                                                                                | (0xffffffU 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                >> 8U)))
                                                                                 : 
                                                                                ((0xffff0000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                >> 0x10U))))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((0xffffff00U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                                                >> 0x18U)))
                                                                                 : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd)))) 
                                                                << 1U))) 
                                                         >> 0x20U)));
    vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U] 
        = __Vtemp279[0U];
    vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
        = __Vtemp279[1U];
    vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
        = ((0xffffffe0U & (0x4000U | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_req) 
                                       << 0x15U) | 
                                      ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                          ? ((0xfU 
                                              == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be))
                                              ? 0U : 1U)
                                          : 4U) << 0x12U) 
                                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q) 
                                          << 5U))))) 
           | (0x1fU & ((IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                >> 3U)) >> 0x19U)));
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__85(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__85\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 0xcU;
    if ((0x20000000U == (0xffff0000U & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                           >> 5U))))) {
        vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 0U;
    } else {
        if ((0x10000000U == (0xffff0000U & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                               >> 5U))))) {
            vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 1U;
        } else {
            if ((0x40080000U == (0xffff0000U & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 2U;
            } else {
                if ((0x40090000U == (0xffff0000U & 
                                     ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                       >> 5U))))) {
                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 3U;
                } else {
                    if ((0x400a0000U == (0xffff0000U 
                                         & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                               >> 5U))))) {
                        vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 4U;
                    } else {
                        if ((0x400b0000U == (0xffff0000U 
                                             & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                            vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 5U;
                        } else {
                            if ((0x400c0000U == (0xffff0000U 
                                                 & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                       >> 5U))))) {
                                vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 6U;
                            } else {
                                if ((0x400d0000U == 
                                     (0xffff0000U & 
                                      ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                        >> 5U))))) {
                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 7U;
                                } else {
                                    if ((0x400e0000U 
                                         == (0xffff0000U 
                                             & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                                        vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 8U;
                                    } else {
                                        if ((0x400f0000U 
                                             == (0xffff0000U 
                                                 & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                       >> 5U))))) {
                                            vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 9U;
                                        } else {
                                            if ((0x40050000U 
                                                 == 
                                                 (0xffff0000U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                        >> 5U))))) {
                                                vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 0xaU;
                                            } else {
                                                if (
                                                    (0x10040000U 
                                                     == 
                                                     (0xffff0000U 
                                                      & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                          << 0x1bU) 
                                                         | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                            >> 5U))))) {
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11 = 0xbU;
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
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
        = ((0xfffffff0U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U] 
                           << 3U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
        = ((0xfU & ((8U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                           << 3U)) | (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U] 
                                      >> 0x1dU))) | 
           (0xfffffff0U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                           << 3U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
        = ((0xfU & ((8U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                           << 3U)) | (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                                      >> 0x1dU))) | 
           (0xfffff0U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                         << 3U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests 
        = ((0U != vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__num_req_outstanding) 
           & ((0xfU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]) 
              != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__dev_select_outstanding)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]) 
           | (0xfffffffeU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                              << 0x1dU) | (0x1ffffffeU 
                                           & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
                                              >> 3U)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U] 
        = ((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                  >> 3U)) | (0xfffffffeU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                             << 0x1dU) 
                                            | (0x1ffffffeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                                                  >> 3U)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]) 
           | (0x3fffffU & ((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                  >> 3U)) | (0x1ffffeU 
                                             & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                                >> 3U)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                       & ((0U == (0xfU 
                                                  & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                         << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                       & ((1U == (0xfU 
                                                  & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                         << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                       & ((2U == (0xfU 
                                                  & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                         << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                       & ((3U == (0xfU 
                                                  & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                         << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                       & ((4U == (0xfU 
                                                  & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                         << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                       & ((5U == (0xfU 
                                                  & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                         << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                       & ((6U == (0xfU 
                                                  & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                         << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                       & ((7U == (0xfU 
                                                  & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                         << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                       & ((8U == (0xfU 
                                                  & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                         << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                       & ((9U == (0xfU 
                                                  & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                          << 0x15U)) 
                                      & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                         << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                         & ((0xaU == 
                                             (0xfU 
                                              & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                           << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                         & ((0xbU == 
                                             (0xfU 
                                              & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                           << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                         & ((0xcU == 
                                             (0xfU 
                                              & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                           << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0U][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[1U][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[2U][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[3U][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[4U][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[5U][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[6U][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[7U][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[8U][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[9U][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xaU][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xbU][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xcU][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][0U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][2U]) | (0x200000U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                         & ((0xdU == 
                                             (0xfU 
                                              & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests)) 
                                           << 0x15U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][2U] 
        = ((0x23ffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][2U]) | (0x1c0000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][2U] 
        = ((0x3c7fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][2U]) | (0x38000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][2U] 
        = ((0x3f9fffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][2U]) | (0x6000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][2U] 
        = ((0x3fe01fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][2U]) | (0x1fe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][1U] 
        = ((0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][1U]) | (0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][2U] 
        = ((0x3fffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][2U]) | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][1U] 
        = ((0xffffffe1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][1U]) | (0x1eU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][0U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o[0xdU][1U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xdU][1U]) | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0U][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [0U][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [0U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0U][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [1U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [1U][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [1U][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [1U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [1U][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [1U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [2U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [2U][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [2U][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [2U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [2U][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [2U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [3U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [3U][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [3U][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [3U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [3U][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [3U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [4U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [4U][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [4U][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [4U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [4U][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [4U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [5U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [5U][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [5U][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [5U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [5U][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [5U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [6U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [6U][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [6U][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [6U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [6U][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [6U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [7U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [7U][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [7U][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [7U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [7U][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [7U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [8U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [8U][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [8U][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [8U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [8U][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [8U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [9U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [9U][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                         [9U][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                         [9U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [9U][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [9U][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0xaU][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xaU][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                           [0xaU][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [0xaU][2U]) | (0x1ffffeU 
                                           & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                           [0xaU][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0xaU][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0xaU][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0xbU][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xbU][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                           [0xbU][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [0xbU][2U]) | (0x1ffffeU 
                                           & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                           [0xbU][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0xbU][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0xbU][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0xcU][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
            [0xcU][1U]) | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                           [0xcU][1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                            [0xcU][2U]) | (0x1ffffeU 
                                           & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                           [0xcU][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0xcU][2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
              [0xcU][0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[2U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[2U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[2U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[3U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[3U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[3U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[4U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[4U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[4U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[5U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[5U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[5U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[6U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[6U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[6U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[7U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[7U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[7U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[8U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[8U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[8U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[9U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[9U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[9U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0xaU][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0xaU][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0xaU][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0xbU][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0xbU][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0xbU][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0xcU][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0xcU][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o[0xcU][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[2U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [2U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[2U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [2U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[2U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [2U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[3U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [3U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[3U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [3U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[3U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [3U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[4U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [4U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[4U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [4U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[4U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [4U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[5U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [5U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[5U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [5U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[5U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [5U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[6U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [6U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[6U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [6U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[6U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [6U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[7U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [7U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[7U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [7U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[7U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [7U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[8U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [8U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[8U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [8U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[8U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [8U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[9U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [9U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[9U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [9U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[9U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [9U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0xaU][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0xaU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0xaU][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0xaU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0xaU][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0xaU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0xbU][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0xbU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0xbU][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0xbU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0xbU][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0xbU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0xcU][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0xcU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0xcU][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0xcU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[0xcU][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
        [0xcU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[2U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [2U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[2U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [2U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[2U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [2U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[3U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [3U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[3U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [3U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[3U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [3U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[4U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [4U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[4U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [4U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[4U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [4U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[5U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [5U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[5U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [5U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[5U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [5U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[6U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [6U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[6U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [6U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[6U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [6U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[7U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [7U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[7U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [7U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[7U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [7U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[8U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [8U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[8U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [8U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[8U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [8U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[9U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [9U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[9U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [9U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[9U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [9U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0xaU][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0xaU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0xaU][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0xaU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0xaU][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0xaU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0xbU][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0xbU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0xbU][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0xbU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0xbU][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0xbU][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0xcU][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0xcU][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0xcU][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0xcU][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[0xcU][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o
        [0xcU][2U];
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__86(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__86\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp409[3];
    WData/*95:0*/ __Vtemp410[3];
    WData/*95:0*/ __Vtemp427[3];
    WData/*95:0*/ __Vtemp428[3];
    // Body
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [3U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [3U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [3U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [3U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [3U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [3U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [4U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [4U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [4U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [4U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [4U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [4U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
        [1U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
        [0U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
        [0U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
        [0U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
        [1U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
        [1U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i
        [1U][2U];
    __Vtemp409[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
        [0U][0U];
    __Vtemp409[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
        [0U][1U];
    __Vtemp409[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp410, __Vtemp409);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp410[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp410[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp410[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
        = (0x20U | ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                     [1U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                              [1U][2U] 
                                              << 1U)) 
                                  | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                     [1U][2U]))));
    __Vtemp427[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
        [0U][0U];
    __Vtemp427[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
        [0U][1U];
    __Vtemp427[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp428, __Vtemp427);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp428[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp428[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp428[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
        = (0x20U | ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                     [1U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                              [1U][2U] 
                                              << 1U)) 
                                  | (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                     [1U][2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrequest 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrequest)) 
           | (1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                    [0U][2U] >> 0x15U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrequest 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrequest)) 
           | (2U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                    [1U][2U] >> 0x14U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dfifo_rspready 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dfifo_rspready)) 
           | (1U & (IData)(((0x8000000000000ULL == 
                             (0x8000800000000ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o)) 
                            & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                            [0U][0U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dfifo_rspready 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dfifo_rspready)) 
           | (2U & (((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                      [1U][0U] & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                          >> 0x23U))) 
                     & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                >> 0x33U))) << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
        [0U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
        [0U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
        [0U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
        [1U][0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
        [1U][1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
        [1U][2U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest)) 
           | (1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                    [0U][2U] >> 0x15U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest)) 
           | (2U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                    [1U][2U] >> 0x14U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U] 
        = (IData)((((QData)((IData)((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              << 0x1fU) 
                                             | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                >> 1U))))) 
                    << 0x21U) | (((QData)((IData)((
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                      >> 1U)))) 
                                  << 1U) | (QData)((IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dfifo_rspready)))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U] 
        = ((0xffffffe0U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
           | (IData)(((((QData)((IData)((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U))))) 
                        << 0x21U) | (((QData)((IData)(
                                                      ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                        << 0x1fU) 
                                                       | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                          >> 1U)))) 
                                      << 1U) | (QData)((IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dfifo_rspready)))))) 
                      >> 0x20U)));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
        = ((0xffe00000U & ((IData)((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest))) 
                           << 0x15U)) | ((0x1c0000U 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                         | ((0x38000U 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                            | ((0x6000U 
                                                & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                               | ((0x1fe0U 
                                                   & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                                  | (0x1fU 
                                                     & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hgrant))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[0U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[1U] 
        = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U]) 
           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U]) 
           | (0x3fffffU & ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U]))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U]) 
           | (0x200000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[0U]) 
           | (1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U]));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__LDO1__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__LDO1__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__LDO2__tl_h_o[0U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__LDO2__tl_h_o[1U] 
        = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__LDO1__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__LDO1__tl_h_o
        [1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5[0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__LDO2__tl_h_o
        [0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5[1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__LDO2__tl_h_o
        [1U];
}

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__87(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__87\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp490[3];
    WData/*95:0*/ __Vtemp491[3];
    WData/*95:0*/ __Vtemp508[3];
    WData/*95:0*/ __Vtemp509[3];
    // Body
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [6U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [6U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [6U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [6U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [6U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [6U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [9U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [9U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [9U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [9U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [9U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [9U][2U];
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
    __Vtemp490[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
        [0U][0U];
    __Vtemp490[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
        [0U][1U];
    __Vtemp490[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp491, __Vtemp490);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp491[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp491[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp491[2U]));
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
    __Vtemp508[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
        [0U][0U];
    __Vtemp508[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
        [0U][1U];
    __Vtemp508[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp509, __Vtemp508);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp509[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp509[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp509[2U]));
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

VL_INLINE_OPT void Vopentitan_soc_top::_combo__TOP__88(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_combo__TOP__88\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp586[3];
    WData/*95:0*/ __Vtemp587[3];
    WData/*95:0*/ __Vtemp604[3];
    WData/*95:0*/ __Vtemp605[3];
    // Body
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[0U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [7U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[0U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [7U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[0U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
        [7U][2U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[1U][0U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [7U][0U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[1U][1U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [7U][1U];
    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[1U][2U] 
        = vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
        [7U][2U];
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
    __Vtemp586[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
        [0U][0U];
    __Vtemp586[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
        [0U][1U];
    __Vtemp586[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp587, __Vtemp586);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp587[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp587[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp587[2U]));
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
    __Vtemp604[0U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
        [0U][0U];
    __Vtemp604[1U] = vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
        [0U][1U];
    __Vtemp604[2U] = (0x1fU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                      [0U][2U]);
    VL_EXTEND_WW(70,69, __Vtemp605, __Vtemp604);
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
        = __Vtemp605[0U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
        = __Vtemp605[1U];
    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
        = ((0x3fe000U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
            [0U][2U]) | ((0x1fc0U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                     [0U][2U] << 1U)) 
                         | __Vtemp605[2U]));
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
