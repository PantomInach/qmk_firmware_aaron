/*
Copyright 2022 @RoyMeetsWorld

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN,
    _PROGRAMMING,
    _BLANK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
		QK_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                                                KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,      KC_EQL,                   KC_BSPC,
		KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_F1,   KC_F2,           KC_F7,   KC_F8,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,         KC_LBRC,      KC_RBRC,    KC_BSLS,
		MO(_FN),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_F3,   KC_F4,           KC_F9,   KC_F10,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,      KC_QUOT,                  KC_ENT,
		KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_F5,   KC_F6,           KC_F11,  KC_F12,  KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,       KC_SLSH,                  MO(_FN),
		KC_LCTL,  KC_LGUI, KC_LALT, MO(_PROGRAMMING),          KC_SPC,  MO(_FN),                  KC_RALT, KC_BSPC,                                     KC_RALT,      KC_PAGE_DOWN, KC_PAGE_UP, TG(_FN),
                                                                 KC_RALT,                            KC_DEL
    ),
    [_FN] = LAYOUT(
		KC_TRNS, KC_F1,    KC_F2, KC_F3, KC_F4,   KC_F5,   KC_F6,                                                           KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,     KC_F12,                 KC_DEL,
		KC_TRNS,  KC_1,    KC_2,  KC_3,  KC_TRNS, KC_TRNS, KC_TRNS, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR,    KC_TRNS,       KC_TRNS, ALGR(KC_NUBS),
		KC_TRNS,  KC_4,    KC_5,  KC_6,  KC_TRNS, KC_TRNS,          KC_TRNS,           KC_TRNS,           KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,    KC_TRNS,                KC_TRNS,
		KC_TRNS,           KC_7,  KC_8,  KC_9,    KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUBS, S(KC_NUBS), ALGR(KC_NUBS),          KC_TRNS,
		KC_TRNS,  KC_TRNS, KC_0,  KC_0,                    KC_SPC,  KC_PAGE_UP,                           KC_TRNS, KC_END,                                      KC_TRNS,    KC_TRNS,       KC_TRNS, KC_TRNS,
                                                             KC_PAGE_DOWN,                                      KC_HOME
    ),
    [_PROGRAMMING] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,                KC_TRNS,
		KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, ALGR(KC_8), ALGR(KC_9), KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, ALGR(KC_7), S(KC_8), S(KC_9), ALGR(KC_0), KC_TRNS, S(KC_COMM),             KC_TRNS,
		KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,                KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS,                           KC_TRNS, KC_TRNS,                                  KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                    KC_TRNS,                                 KC_TRNS
    ),
    [_BLANK] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
		KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS,                           KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                                    KC_TRNS,                                 KC_TRNS
    )
};
