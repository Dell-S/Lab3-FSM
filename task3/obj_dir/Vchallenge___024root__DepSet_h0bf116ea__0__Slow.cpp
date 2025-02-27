// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchallenge.h for the primary calling header

#include "verilated.h"

#include "Vchallenge___024root.h"

VL_ATTR_COLD void Vchallenge___024root___settle__TOP__0(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->challenge__DOT__FSM__DOT__curr_state) 
               | (1U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) 
              | (2U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) 
             | (3U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) 
            | (4U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) 
           | (5U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) 
          | (6U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) 
         | (7U == vlSelf->challenge__DOT__FSM__DOT__curr_state))) {
        if ((0U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) {
            vlSelf->challenge__DOT__FSM__DOT__nxt_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) {
            vlSelf->challenge__DOT__FSM__DOT__nxt_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) {
            vlSelf->challenge__DOT__FSM__DOT__nxt_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) {
            vlSelf->challenge__DOT__FSM__DOT__nxt_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) {
            vlSelf->challenge__DOT__FSM__DOT__nxt_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) {
            vlSelf->challenge__DOT__FSM__DOT__nxt_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->challenge__DOT__FSM__DOT__curr_state)) {
            vlSelf->challenge__DOT__FSM__DOT__nxt_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->challenge__DOT__FSM__DOT__nxt_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->challenge__DOT__FSM__DOT__nxt_state = 0U;
        vlSelf->data_out = ((8U == vlSelf->challenge__DOT__FSM__DOT__curr_state)
                             ? 0xffU : 0U);
    }
}

VL_ATTR_COLD void Vchallenge___024root___eval_initial(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vchallenge___024root___eval_settle(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___eval_settle\n"); );
    // Body
    Vchallenge___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vchallenge___024root___final(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___final\n"); );
}

VL_ATTR_COLD void Vchallenge___024root___ctor_var_reset(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->challenge__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->challenge__DOT__FSM__DOT__curr_state = 0;
    vlSelf->challenge__DOT__FSM__DOT__nxt_state = 0;
    vlSelf->challenge__DOT__clock__DOT__count = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
