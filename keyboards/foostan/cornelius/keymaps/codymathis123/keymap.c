/* Copyright 2020 foostan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "features/autocorrection.h"
#include "codymathis123.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE]      = LAYOUT(
        KC_EQL, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS,
        KC_LCTL, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_QUOT), KC_BSLS,
        KC_CAPS, KC_Z, ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), KC_SLSH, KC_SCLN, 
        KC_MUTE, KC_VOLD, KC_VOLU, LT(MEDR, KC_ESC), LT(NAVR, KC_SPC), LT(MOUR, KC_TAB), LT(NSSL, KC_ENT), LT(NSL, KC_BSPC), LT(FUNL, KC_DEL), U_NU, U_NU, NK_TOGG
        ),
    [NAVR]      = LAYOUT(
        KC_EQL,  RESET,   U_NA,    U_NA,    U_NA,    U_NA,  U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   KC_MINS,
        KC_LCTL, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,  KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSLS, 
        KC_CAPS, U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO, KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_SCLN,
        U_NU,    U_NU,    U_NU,    U_NA,    U_NA,    U_NA,  KC_ENT,  KC_BSPC, KC_DEL,  U_NU,    U_NU,    U_NU
        ),
    [MOUR]      = LAYOUT(
        KC_EQL, RESET, U_NA, U_NA, U_NA, U_NA, U_NU, U_NU, U_NU, U_NU, U_NU, KC_MINS,
        KC_LCTL, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, U_NU, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BSLS, 
        KC_CAPS, U_NA, KC_ALGR, U_NA, U_NA, U_NA, U_NU, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_SCLN,
        U_NU, U_NU, U_NU, U_NA, U_NA, U_NA, KC_BTN1, KC_BTN3, KC_BTN2, U_NU, U_NU, U_NU
        ),
    [MEDR]      = LAYOUT(
        KC_EQL, RESET, U_NA, U_NA, U_NA, U_NA, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_MINS,
        KC_LCTL, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, U_NU, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_BSLS, 
        KC_CAPS, U_NA, KC_ALGR, U_NA, U_NA, U_NA, U_NU, U_NU, U_NU, U_NU, U_NU, KC_SCLN,
        U_NU, U_NU, U_NU, U_NA, U_NA, U_NA, KC_MSTP, KC_MPLY, KC_MUTE, U_NU, U_NU, U_NU
        ),
    [MBO]       = LAYOUT(
        KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS,
        KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS, 
        KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SCLN,
        U_NU, U_NU, U_NU, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, U_NU, U_NU, U_NU
        ),
    [FUNL]      = LAYOUT(
        KC_EQL, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, U_NA, U_NA, U_NA, U_NA, RESET, KC_MINS,
        KC_LCTL, KC_F11, KC_F4, KC_F5, KC_F6, KC_SLCK, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_BSLS, 
        KC_CAPS, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, U_NA, U_NA, U_NA, KC_ALGR, U_NA, KC_SCLN,
        U_NU, U_NU, U_NU, KC_APP, KC_SPC, KC_TAB, U_NA, U_NA, U_NA, U_NU, U_NU, U_NU
        ),
    [NSL]       = LAYOUT(
        KC_EQL, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, U_NA, U_NA, U_NA, U_NA, RESET, KC_MINS,
        KC_LCTL, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_BSLS, 
        KC_CAPS, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, U_NA, U_NA, U_NA, KC_ALGR, U_NA, KC_SCLN,
        U_NU, U_NU, U_NU, KC_DOT, KC_0, KC_MINS, U_NA, U_NA, U_NA, U_NU, U_NU, U_NU
        ),
    [NSSL]      = LAYOUT(
        KC_EQL, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA, U_NA, U_NA, U_NA, RESET, KC_MINS,
        KC_LCTL, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_BSLS, 
        KC_CAPS, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, U_NA, U_NA, U_NA, KC_ALGR, U_NA, KC_SCLN,
        U_NU, U_NU, U_NU, KC_LPRN, KC_RPRN, KC_UNDS, U_NA, U_NA, U_NA, U_NU, U_NU, U_NU
        )};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_autocorrection(keycode, record)) {
        return false;
    }
    // Your macros ...

    return true;
}
