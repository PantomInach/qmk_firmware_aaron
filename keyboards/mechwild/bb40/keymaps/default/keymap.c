// Copyright 2023 Kyle McCreery (@kylemccreery)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap

enum layer_names {
  _BASE,
  _FN1,
  _FN2,
  _FN3,
  _BLANK,
  _DEFAULT
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
    KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,       KC_MINS,
    MO(1),            KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,                KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,             KC_COMM, KC_DOT,     KC_SLSH,
    KC_LCTL, KC_LGUI, SC_LAPO,          KC_SPC,           MO(2),            KC_BSPC,          SC_RAPC, MO(1),      MO(3), KC_MUTE
    ),

    [_FN1] = LAYOUT(
    QK_GESC,          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,       ALGR(KC_NUBS),
    _______,          _______, _______, _______, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,             KC_END,
    _______,          _______, _______, _______, _______, _______, _______, _______,          KC_NUBS, S(KC_NUBS), KC_RBRC,
    _______, _______, _______,          MO(3),            _______,          KC_DEL,           _______, _______,    _______, KC_MUTE
    ),

    [_FN2] = LAYOUT(
    KC_GRV,           _______, _______, _______, _______, _______, _______, KC_LBRC, _______, KC_QUOT, _______,    KC_PLUS,
    _______,          KC_SCLN, _______, _______, _______, _______, _______, _______, _______, _______,             _______,
    _______,          _______, _______, _______, _______, _______, _______, _______,          _______, _______,    _______,
    _______, _______, _______,          _______,          _______,          _______,          _______, _______,    _______, _______
    ),

    [_FN3] = LAYOUT(
    _______,          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,     KC_F11,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,             KC_F12,
    _______,          _______, _______, _______, _______, _______, _______, _______,          _______, _______,    _______,
    _______, _______, _______,          _______,          _______,          _______,          _______, _______,    _______, _______
    ),

    [_BLANK] = LAYOUT(
    _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______,
    _______,          _______, _______, _______, _______, _______, _______, _______,          _______, _______,    _______,
    _______, _______, _______,          _______,          _______,          _______,          _______, _______,    _______, _______
    ),

    [_DEFAULT] = LAYOUT(
    KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    MO(1),            KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,             KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,             KC_RSFT, KC_UP,   KC_SLSH,
    KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           KC_SPC,           KC_SPC,           KC_LEFT, KC_DOWN, KC_RIGHT, KC_MUTE
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [_FN1]  = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_FN2]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_FN3]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_BLANK]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_DEFAULT] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif
