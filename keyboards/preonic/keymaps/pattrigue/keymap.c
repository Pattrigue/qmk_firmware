/* Copyright 2015-2017 Jack Humbert
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

  qmk compile -kb preonic/rev3 -km pattrigue
 */

#include QMK_KEYBOARD_H
#include "muse.h"
#include "keymap_danish.h"
#include "pattrigue_danish.c"

enum preonic_layers {
  _BASE,
  _LOWER,
  _RAISE
};

enum custom_keycodes {
  BACKLIT = SAFE_RANGE,
  SELECT_LINE,
  SELECT_WORD,
  SCRSHOT,
  KEYPIRANHA,
  DESKTOP_LEFT,
  DESKTOP_RIGHT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* Base
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   +  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |   Y  |   L  |   U  |   Y  |   '  |  `   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl |   A  |   R  |   S  |   T  |   G  |   M  |   N  |   E  |   I  |   O  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift |  Z  |   X  |   C  |   D  |   V  |   K  |   H  |   ,  |   .  |   -  |OSMSFT|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |CTLSFT| GUI  | Alt  | Del  |Lower | Spce | Bksp |Raise |CTLSFT|      |      | F24  |
 * -------------------------------------------------------------------------------------
 */
[_BASE] = LAYOUT_preonic_grid(
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,   KC_7,    KC_8,          KC_9,    KC_0,       KC_DEL,
  KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,      KC_J,   KC_L,    KC_U,          KC_Y,    DK_QUOT,    DK_SCLN,
  KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,      KC_M,   KC_N,    KC_E,          KC_I,    KC_O,       KC_BSPC,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,      KC_K,   KC_H,    DK_COMM,       DK_DOT,  DK_MINS,    DK_BSLS,
  KC_F24,  MO(4),   KC_LGUI, KC_LALT, MO(1),   KC_SFTENT, KC_SPC, MO(2),   LCTL(KC_LSFT), SCRSHOT, DK_GRV,     KEYPIRANHA
),


/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid(
  KC_F12,       KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,      KC_F8,    KC_F9,    KC_F10,   KC_F11,
  _______,      DK_DLR,  DK_QUES,  DK_LCBR, DK_RCBR, DK_PIPE, DK_PERC, KC_7,       KC_8,    KC_9,     DK_DQUO,  DK_COLN,
  _______,      DK_EQL,  DK_EXLM,  DK_LPRN, DK_RPRN, DK_AMPR, DK_ASTR, KC_4,       KC_5,    KC_6,     DK_PLUS,  _______,
  _______,      DK_AT,   DK_LABK,  DK_LBRC, DK_RBRC, DK_RABK, DK_SLSH, KC_1,       KC_2,    KC_3,     DK_MINS,  DK_HASH,
  TO(0),       _______, _______,  _______, _______, _______,  _______, LT(2,KC_0), KC_DOT,  KC_COMMA, DK_ACUT,  _______
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / | Pg Up| Pg Dn|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid(
  LALT(KC_F4),     _______,              _______,         _______,       _______,    _______,    _______,             _______,             _______,             _______,          _______,              KC_SYSTEM_SLEEP,
  _______,         DK_TILD,              DK_CIRC,         KC_MS_WH_UP,   _______,    _______,    SELECT_LINE,         KC_HOME,             KC_UP,               KC_END,           SELECT_WORD,          _______,
  _______,         KC_AUDIO_VOL_DOWN,    KC_AUDIO_VOL_UP, KC_MS_WH_DOWN, KC_MS_BTN1, _______,    LCTL(LSFT(KC_LEFT)), KC_LEFT,             KC_DOWN,             KC_RIGHT,         LCTL(LSFT(KC_RIGHT)), _______,
  _______,         LCTL(KC_Z),           LCTL(KC_X),      LCTL(KC_C),    LCTL(KC_D), LCTL(KC_V), KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, DK_SCLN,             DK_COLN,          DK_UNDS,              _______,
  TO(0),           _______,              _______,         _______,       _______,    _______,    _______,             _______,             KC_MEDIA_PLAY_PAUSE, BACKLIT,          TO(3),                RESET
),

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[3] = LAYOUT_preonic_grid(
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,     KC_8,     KC_9,    KC_0,       _______,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,     KC_O,    KC_P,       _______,
  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,     KC_K,     KC_L,    DK_QUOT,    _______,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,     KC_COMM,  KC_DOT,  KC_UP,      KC_LSFT,
  KC_F24,  KC_LGUI, KC_LALT, KC_SPC,  KC_SPC,  KC_SPC,  _______, _______,  _______,  _______, TO(0),      _______
),

[4] = LAYOUT_preonic_grid(
  _______, _______, _______,      _______,      _______,        _______, _______, _______,    _______, _______, _______, _______,
  _______, _______, _______,      _______,      _______,        _______, _______, _______,    _______, _______, _______, _______,
  _______, _______, DESKTOP_LEFT, _______, DESKTOP_RIGHT,  _______, _______, _______,    _______, _______, _______, _______,
  _______, _______, _______,      _______,      _______,        _______, _______, _______,    _______, _______, _______, _______,
  _______, _______, _______,      _______,      TO(_LOWER),     _______, _______, TO(_RAISE), _______, _______, _______, _______
),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_record_user_danish(keycode, record)) return false;

  switch (keycode) {
      case SELECT_LINE:
        if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_END) SS_DELAY(100) SS_LSFT(SS_TAP(X_HOME)));
        }
        break;
      case SELECT_WORD:
        if (record->event.pressed) {
          SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)) SS_DELAY(100) SS_LCTL(SS_LSFT(SS_TAP(X_RIGHT))));
        }
        break;
      case SCRSHOT:
        if (record->event.pressed) {
          SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_S))));

        }
      break;
      case KEYPIRANHA:
        if (record->event.pressed) {
          SEND_STRING(SS_LCTL(SS_LGUI(SS_TAP(X_K))));
        }
        break;
      case DESKTOP_LEFT:
        if (record->event.pressed) {
          SEND_STRING(SS_LGUI(SS_LCTL(SS_TAP(X_LEFT))));
        }
        break;
      case DESKTOP_RIGHT:
        if (record->event.pressed) {
          SEND_STRING(SS_LGUI(SS_LCTL(SS_TAP(X_RIGHT))));
        }
        break;
      case BACKLIT:
        if (record->event.pressed) {
          register_code(KC_RSFT);
          #ifdef BACKLIGHT_ENABLE
            backlight_step();
          #endif
          #ifdef RGBLIGHT_ENABLE
            rgblight_step();
          #endif
          #ifdef __AVR__
          writePinLow(E6);
          #endif
        } else {
          unregister_code(KC_RSFT);
          #ifdef __AVR__
          writePinHigh(E6);
          #endif
        }
        return false;
        break;
    }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC_PGDN);
      unregister_code(KC_PGDN);
    } else {
      register_code(KC_PGUP);
      unregister_code(KC_PGUP);
    }
  }
    return true;
}

void matrix_scan_user(void) {
	 check_danish_mod_tap_timers(); 
}
