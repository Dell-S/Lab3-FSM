// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchallenge.h for the primary calling header

#include "verilated.h"

#include "Vchallenge___024root.h"

VL_INLINE_OPT void Vchallenge___024root___sequent__TOP__0(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__challenge__DOT__clock__DOT__count;
    // Body
    __Vdly__challenge__DOT__clock__DOT__count = vlSelf->challenge__DOT__clock__DOT__count;
    if (vlSelf->rst) {
        vlSelf->challenge__DOT__FSM__DOT__curr_state = 1U;
        vlSelf->challenge__DOT__tick = 0U;
        __Vdly__challenge__DOT__clock__DOT__count = vlSelf->N;
    } else {
        if (vlSelf->challenge__DOT__tick) {
            vlSelf->challenge__DOT__FSM__DOT__curr_state 
                = vlSelf->challenge__DOT__FSM__DOT__nxt_state;
        }
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->challenge__DOT__clock__DOT__count))) {
                vlSelf->challenge__DOT__tick = 1U;
                __Vdly__challenge__DOT__clock__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__challenge__DOT__clock__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->challenge__DOT__clock__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->challenge__DOT__tick = 0U;
            }
        }
    }
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
    vlSelf->challenge__DOT__clock__DOT__count = __Vdly__challenge__DOT__clock__DOT__count;
}

void Vchallenge___024root___eval(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vchallenge___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vchallenge___024root___eval_debug_assertions(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
