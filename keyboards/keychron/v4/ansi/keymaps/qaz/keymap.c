/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers {
    BASE,
    QAZ_BASE,
    _B1,
    _B2,
    _Q1
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_60_ansi(
        KC_ESC,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_5,    KC_6,    KC_7,    KC_9,    KC_0,     KC_MINUS, KC_EQUAL, KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL, KC_LWIN,  KC_LALT,                            KC_SPC,                             KC_RALT,  MO(_B1), MO(_B2), KC_RCTL),

    [QAZ_BASE] = LAYOUT_60_ansi(
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,   _______,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL, KC_LOPT,  KC_LCMD,                            KC_SPC,                             KC_RCMD,  _______,  _______,  KC_RCTL),

    [_B1] = LAYOUT_60_ansi(
        QK_GESC, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_MUTE,
        RGB_TOG, _______,  _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SCRL, KC_BRK,   KC_VOLD,  KC_VOLU,  _______,
        _______, KC_MPLY,  KC_MPRV, KC_MNXT, KC_MSTP, _______, KC_UP,   _______, KC_INS,  KC_HOME, KC_PGUP,  _______,             _______,
        _______,           _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  KC_END,   KC_PGDN,             _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______),

    [_B2] = LAYOUT_60_ansi(
        QK_GESC, KC_F13,   KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,   KC_F23,   KC_F24,   _______,
        RGB_TOG, _______,  KC_MS_U, _______, KC_WH_U, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,
        _______, KC_MS_L,  KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, _______, _______, _______,  _______,            _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN3,  KC_BTN2,             _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______),

    [_Q1] = LAYOUT_60_ansi(
        KC_TILD, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,
        RGB_TOG, RGB_MOD,  RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______,  _______,  _______,  _______,
        _______, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, _______, _______, _______,  _______,            _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______)
};
