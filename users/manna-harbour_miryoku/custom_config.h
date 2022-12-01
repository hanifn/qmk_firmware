// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

// custom QWERTY keymappings
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_SCLN),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

// Gaming keymappings
#define MIRYOKU_LAYER_GAME \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_A,      KC_S,      KC_D,      KC_F,      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_SCLN),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

// Layout for Boardsoarce Lulu
#if defined (KEYBOARD_boardsource_lulu_rp2040)
    // all layers
    #define MIRYOKU_MAPPING(\
        K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
        K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
        K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
        N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39\
    )\
    LAYOUT(\
    XXX, XXX, XXX, XXX, XXX, XXX,                XXX, XXX, XXX, XXX, XXX, XXX,\
    XXX, K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, XXX,\
    XXX, K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, XXX,\
    XXX, K20, K21, K22, K23, K24, XXX,      XXX, K25, K26, K27, K28, K29, XXX,\
                   XXX, K32, K33, K34,      K35, K36, K37, XXX\
    )
    // base layer
    #define MIRYOKU_LAYERMAPPING_BASE(\
        K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
        K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
        K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
        N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39\
    )\
    LAYOUT(\
    KC_EQL,  KC_1, KC_2, KC_3, KC_4, KC_5,                               KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,\
    KC_GRV,  K00,  K01,  K02,  K03,  K04,                                K05,  K06,  K07,  K08,  K09,  KC_BSLS,\
    KC_LCTL, K10,  K11,  K12,  K13,  K14,                                K15,  K16,  K17,  K18,  K19,  KC_QUOT,\
    SC_LSPO, K20,  K21,  K22,  K23,  K24, LCTL(KC_SPC),      TG(U_GAME), K25,  K26,  K27,  K28,  K29,  SC_RSPC,\
                     KC_LBRC,  K32,  K33, K34,               K35,        K36,  K37,  KC_RBRC\
    )
    // game layer
    #define MIRYOKU_LAYERMAPPING_GAME(\
        K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
        K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
        K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
        N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39\
    )\
    LAYOUT(\
    KC_EQL,  KC_1, KC_2, KC_3, KC_4, KC_5,                          KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,\
    KC_GRV,  K00,  K01,  K02,  K03,  K04,                           K05,  K06,  K07,  K08,  K09,  KC_BSLS,\
    KC_LCTL, K10,  K11,  K12,  K13,  K14,                           K15,  K16,  K17,  K18,  K19,  KC_QUOT,\
    KC_LSFT, K20,  K21,  K22,  K23,  K24, KC_CAPS,      TG(U_GAME), K25,  K26,  K27,  K28,  K29,  KC_RSFT,\
                     KC_LALT,  K32,  K33, K34,          K35,        K36,  K37,  KC_RGUI\
    )
#endif

// cutom layer list
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Gaming")

#ifdef RGB_MATRIX_ENABLE
    // Configure RGB Matrix
    #define RGB_MATRIX_KEYPRESSES // enable keypress effects
    #define RGB_MATRIX_LED_FLUSH_LIMIT 16
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
    #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
    #define RGB_MATRIX_DEFAULT_HUE 10
    #define RGB_MATRIX_DEFAULT_SAT 255
    #define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
    // Disable RGB Matrix effects (from lulu/config.h)
    #undef ENABLE_RGB_MATRIX_ALPHAS_MODS
    #undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
    #undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    #undef ENABLE_RGB_MATRIX_BREATHING
    #undef ENABLE_RGB_MATRIX_BAND_SAT
    #undef ENABLE_RGB_MATRIX_BAND_VAL
    // Enable RGB Matrix effects
    #define ENABLE_RGB_MATRIX_BREATHING
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    #define ENABLE_RGB_MATRIX_SOLID_COLOR
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#endif

#define COMBO_COUNT 6
#define COMBO_TERM 200
#define EXTRA_SHORT_COMBOS
