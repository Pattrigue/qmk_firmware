#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

#define NUM_DANISH_MOD_TAPS 3

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    ST_MACRO_0,
    ST_MACRO_1,
    ST_MACRO_2,
    ST_MACRO_3,
    ST_MACRO_4,
    DK_LSPO,
    DK_RSPC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRANSPARENT, KC_TRANSPARENT, KC_6, KC_7, KC_8, KC_9, KC_0, DK_PLUS, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_TRANSPARENT, KC_TRANSPARENT, KC_J, KC_L, KC_U, KC_Y, DK_QUOT, KC_TRANSPARENT, KC_LSHIFT, KC_A, KC_R, KC_S, KC_T, KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_M, KC_N, KC_E, KC_I, KC_O, KC_ENTER, KC_LCTRL, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, DK_COMM, DK_DOT, DK_MINS, LSFT(KC_RCTRL), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LALT, MO(1), ST_MACRO_0, ST_MACRO_1, MO(2), KC_LGUI, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE, KC_DELETE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE),
    [1] = LAYOUT_moonlander(DK_HALF, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT, KC_TRANSPARENT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRANSPARENT, DK_HASH, DK_AT, DK_LCBR, DK_RCBR, DK_LABK, KC_TRANSPARENT, KC_TRANSPARENT, DK_DLR, DK_AMPR, DK_PIPE, DK_PERC, DK_CIRC, KC_F12, KC_TRANSPARENT, DK_EXLM, DK_DQUO, DK_LPRN, DK_RPRN, DK_RABK, KC_TRANSPARENT, KC_TRANSPARENT, DK_MINS, DK_EQL, DK_SLSH, DK_ASTR, DK_QUES, KC_TRANSPARENT, KC_TRANSPARENT, DK_GRV, DK_ACUT, DK_LBRC, DK_RBRC, DK_BSLS, DK_TILD, DK_PLUS, DK_SCLN, DK_COLN, DK_UNDS, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(3), OSM(MOD_RALT), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [2] = LAYOUT_moonlander(KC_PSCREEN, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT, KC_TRANSPARENT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRANSPARENT, KC_TRANSPARENT, WEBUSB_PAIR, ST_MACRO_2, LGUI(KC_D), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME, KC_UP, KC_END, KC_TRANSPARENT, KC_F12, KC_TRANSPARENT, DK_ARNG, DK_AE, DK_OSTR, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_RIGHT, LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_3, ST_MACRO_4, KC_CAPSLOCK, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(3), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET, KC_TRANSPARENT),
    [3] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_MS_WH_DOWN, KC_MS_UP, KC_MS_WH_UP, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [4] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_E, KC_R, KC_T, KC_TRANSPARENT, KC_TRANSPARENT, KC_Y, KC_U, KC_I, KC_O, KC_P, DK_ARNG, KC_CAPSLOCK, KC_TRANSPARENT, KC_S, KC_D, KC_F, KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_H, KC_J, KC_K, KC_L, DK_AE, DK_OSTR, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_V, KC_B, KC_N, KC_M, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE),
};

extern bool         g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) { rgb_matrix_enable(); }

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {{180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {0, 0, 0}, {180, 255, 233}, {205, 255, 255}, {233, 218, 217}, {205, 255, 255}, {0, 0, 0}, {180, 255, 233}, {205, 255, 255}, {233, 218, 217}, {205, 255, 255}, {0, 0, 0}, {180, 255, 233}, {205, 255, 255}, {233, 218, 217}, {205, 255, 255}, {180, 255, 233}, {180, 255, 233}, {205, 255, 255}, {233, 218, 217}, {205, 255, 255}, {180, 255, 233}, {180, 255, 233}, {205, 255, 255}, {233, 218, 217}, {205, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {205, 255, 255}, {205, 255, 255}, {205, 255, 255}, {205, 255, 255},
           {180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {180, 255, 233}, {0, 0, 0}, {180, 255, 233}, {205, 255, 255}, {233, 218, 217}, {205, 255, 255}, {0, 0, 0}, {180, 255, 233}, {205, 255, 255}, {233, 218, 217}, {205, 255, 255}, {0, 0, 0}, {180, 255, 233}, {205, 255, 255}, {233, 218, 217}, {205, 255, 255}, {180, 255, 233}, {180, 255, 233}, {205, 255, 255}, {233, 218, 217}, {205, 255, 255}, {180, 255, 233}, {180, 255, 233}, {205, 255, 255}, {233, 218, 217}, {205, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {205, 255, 255}, {205, 255, 255}, {205, 255, 255}, {205, 255, 255}},

    [1] = {{85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158},
           {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}},

    [2] = {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {146, 224, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 255}, {146, 224, 255}, {146, 224, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {146, 224, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},

    [3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {180, 255, 233}, {205, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {205, 255, 255}, {205, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {180, 255, 233}, {205, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {205, 255, 255}, {180, 255, 233}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {205, 255, 255}, {180, 255, 233}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {205, 255, 255}, {180, 255, 233}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

void rgb_matrix_indicators_user(void) {
    if (g_suspend_state || keyboard_config.disable_layer_led) {
        return;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
}

bool is_danish_mod_held;

uint16_t key_timer;

typedef struct {
    uint16_t timer;
    uint16_t keycode;
    bool     held;
} danish_mod_tap;

danish_mod_tap danish_mod_taps[NUM_DANISH_MOD_TAPS];

danish_mod_taps[0].keycode = DK_ARNG;
danish_mod_taps[1].keycode = DK_OSTR;
danish_mod_taps[2].keycode = DK_AE;

bool danish_mod_tap_key(uint16_t keycode, keyrecord_t *record, uint16_t i) {
    if (record->event.pressed) {
        danish_mod_taps[i].timer = timer_read();
        danish_mod_taps[i].held = true;
        tap_code16(keycode);
    } else {
        danish_mod_taps[i].held = false;
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_A:
            return danish_mod_tap_key(keycode, record, 0);
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_S))));
            }
            break;
        case ST_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LGUI(SS_TAP(X_K))));
            }
            break;
        case ST_MACRO_2:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(SS_TAP(X_E)));
            }
            break;
        case ST_MACRO_3:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_F4)));
            }
            break;
        case ST_MACRO_4:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_F9)));
            }
            break;
        case DK_LSPO:
            perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_8);
            return false;
        case DK_RSPC:
            perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_9);
            return false;
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}

void matrix_scan_user(void) {
    for (int i = 0; i < NUM_DANISH_MOD_TAPS; i++) {
        if (danish_mod_taps[i].held) {
            if (timer_elapsed(danish_mod_taps[i].timer) > TAPPING_TERM) {
                tap_code16(KC_BSPACE);
                tap_code16(danish_mod_taps[i].keycode);
                danish_mod_taps[i].held = false;
            }
        }
  }
}
