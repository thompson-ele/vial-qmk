// Copyright 2022 sidrow (@sidrow)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define CTL_TAB LCTL_T(KC_TAB)
#define SPC_L1  LT(1, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
        KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,
        KC_ESC, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
        CTL_TAB,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,
                        KC_LALT,KC_LGUI,        SPC_L1,         MO(2),  KC_RCTL
    ),

    [1] = LAYOUT_all(
        KC_MPLY,KC_MPRV,KC_MNXT,KC_VOLU,KC_VOLD,
        KC_0,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_MINS,KC_EQL,
        KC_ESC, KC_Q,   KC_W,   KC_LPRN,KC_RPRN,KC_LBRC,KC_RBRC,KC_4,   KC_5,   KC_6,   KC_PDOT,KC_ENT,
        CTL_TAB,KC_A,   KC_S,   KC_D,   KC_F,   KC_LCBR,KC_RCBR,KC_1,   KC_2,   KC_3,   KC_COLN,KC_BSLS,
                        KC_TRNS,KC_TRNS,        KC_TRNS,        KC_0,   KC_TRNS
    ),

    [2] = LAYOUT_all(
        RGB_TOG,RGB_MOD,RGB_RMOD,RGB_VAI,RGB_VAD,
        RESET,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_UP,  KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,KC_TRNS,
        KC_LSFT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                        KC_TRNS,KC_TRNS,        KC_TRNS,        KC_TRNS,KC_TRNS
    ),

    [3] = LAYOUT_all(
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_LSFT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                        KC_TRNS,KC_TRNS,        KC_TRNS,        KC_TRNS,KC_TRNS
    )
};
