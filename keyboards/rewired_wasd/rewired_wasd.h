/* Copyright 2019 REPLACE_WITH_YOUR_NAME
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
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
/*
 #define LAYOUT( \
     k00, k01, k02, \
     k10,  k11      \
 ) \
 { \
     { k00, k01,   k02 }, \
     { k10, KC_NO, k11 }, \
 }
*/

#define LAYOUT( \
    K_ESC,     K_F1, K_F2, K_F3, K_F4,     K_F5, K_F6, K_F7, K_F8,     K_F9, K_F10, K_F11, K_F12,      K_PSCR, K_SLCK, K_PAUS, \
    K_GRV,  K_1,  K_2,  K_3,  K_4,  K_5,  K_6,  K_7,  K_8,  K_9,  K_0,  K_MINS,  K_EQL,   K_BSPC,      K_INS,  K_HOME, K_PGUP, \
    K_TAB,   K_Q,  K_W,  K_E,  K_R,  K_T,  K_Y,  K_U,  K_I,  K_O,  K_P,  K_LBRC,  K_RBRC, K_BSLS,      K_DEL,  K_END,  K_PGDN, \
    K_CAPS,   K_A,  K_S,  K_D,  K_F,  K_G,  K_H,  K_J,  K_K,  K_L,  K_SCLN, K_QUOT,       K_ENT,                               \
    K_LSFT,    K_Z,  K_X,  K_C,  K_V,  K_B,  K_N,  K_M,  K_COMM,  K_DOT,  K_SLSH,         K_RSFT,               K_UP,          \
    K_LCTL,  K_LGUI,  K_LALT,             K_SPC,                K_RALT,  K_RGUI,  K_APP,  K_RCTL,      K_LEFT, K_DOWN, K_RGHT  \
) \
{ \
  { KC_NO,   KC_NO,   K_C,     K_X,     K_Z,     K_V,     K_RCTL,  KC_NO,   KC_NO,   KC_NO,   K_M,     KC_NO,   KC_NO,   K_ENT,   KC_NO,   K_COMM,  KC_NO,   K_DOT }, \
  { KC_NO,   KC_NO,   K_F2,    K_F1,    K_GRV,   K_5,     K_LCTL,  KC_NO,   K_PGUP,  K_INS,   K_6,     K_DEL,   KC_NO,   K_F9,    K_MINS,  K_EQL,   K_HOME,  K_F8  }, \
  { KC_NO,   KC_NO,   K_3,     K_2,     K_1,     K_4,     K_F5,    K_PSCR,  K_PGDN,  KC_NO,   K_7,     KC_NO,   KC_NO,   K_F10,   K_0,     K_8,     K_END,   K_9   }, \
  { KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   K_B,     KC_NO,   K_LALT,  KC_NO,   K_RGHT,  K_N,     K_DOWN,  KC_NO,   K_F12,   K_SLSH,  KC_NO,   K_LEFT,  KC_NO }, \
  { KC_NO,   KC_NO,   K_E,     K_W,     K_Q,     K_R,     KC_PAUS, K_SLCK,  KC_NO,   KC_NO,   K_U,     KC_NO,   KC_NO,   KC_NO,   K_P,     K_I,     KC_NO,   K_O   }, \
  { KC_NO,   K_LGUI,  K_F3,    K_CAPS,  K_TAB,   K_T,     KC_NO,   K_APP,   KC_NO,   KC_NO,   K_Y,     KC_NO,   K_LSFT,  K_BSPC,  K_LBRC,  K_RBRC,  KC_NO,   K_F7  }, \
  { K_RGUI,  KC_NO,   K_D,     K_S,     K_A,     K_F,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   K_J,     KC_NO,   K_RSFT,  K_BSLS,  K_SCLN,  K_K,     KC_NO,   K_L   }, \
  { KC_NO,   KC_NO,   K_F3,    KC_NO,   K_ESC,   K_G,     KC_NO,   K_RALT,  KC_NO,   KC_NO,   K_H,     K_SPC,   KC_NO,   K_F11,   K_QUOT,  K_F6,    K_UP,    KC_NO }, \
}

