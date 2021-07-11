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
#include "pattrigue_danish.c"

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

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  DK_LSPO,
  DK_RSPC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_PSCREEN,                                     KC_INSERT,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(3),          
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           ST_MACRO_0,                                     KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           DK_QUOT,        DK_GRV,         
    KC_LCTRL,       KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           ST_MACRO_1,                                                                     KC_TRANSPARENT, KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_ENTER,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           DK_COMM,        DK_DOT,         DK_MINS,        OSM(MOD_RSFT),  
    KC_NO,          KC_NO,          KC_RGUI,        KC_LALT,        MO(1),          ST_MACRO_2,                                                                                                     ST_MACRO_3,     MO(2),          LCTL(KC_LSHIFT),KC_NO,          KC_NO,          KC_NO,          
    KC_SPACE,       KC_DELETE,      KC_TRANSPARENT,                 KC_TRANSPARENT, KC_F24,         KC_BSPACE
  ),
  [1] = LAYOUT_moonlander(
    LALT(KC_F4),    KC_F1,          KC_F2,          KC_F2,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, DK_TILD,        DK_DQUO,        DK_LCBR,        DK_RCBR,        DK_HASH,        KC_TRANSPARENT,                                 KC_TRANSPARENT, DK_PERC,        KC_7,           KC_8,           KC_9,           DK_CIRC,        DK_ACUT,        
    KC_TRANSPARENT, DK_EQL,         DK_EXLM,        DK_LPRN,        DK_RPRN,        DK_RABK,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, DK_ASTR,        KC_4,           KC_5,           KC_6,           DK_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, DK_DLR,         DK_QUES,        DK_LBRC,        DK_RBRC,        DK_LABK,                                        DK_SLSH,        KC_1,           KC_2,           KC_3,           DK_MINS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, LT(2,KC_0),     KC_DOT,         KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_SYSTEM_SLEEP,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_MS_BTN1,     KC_MS_WH_UP,    TO(3),                                          KC_AUDIO_VOL_UP,ST_MACRO_4,     KC_HOME,        KC_UP,          KC_END,         ST_MACRO_5,     KC_TRANSPARENT, 
    KC_TRANSPARENT, DK_BSLS,        DK_AT,          DK_PIPE,        DK_AMPR,        KC_MS_WH_DOWN,  KC_TRANSPARENT,                                                                 KC_AUDIO_VOL_DOWN,LCTL(LSFT(KC_LEFT)),KC_LEFT,        KC_DOWN,        KC_RIGHT,       LCTL(LSFT(KC_RIGHT)),KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_D),     LCTL(KC_V),                                     KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,DK_SCLN,        DK_COLN,        DK_UNDS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 WEBUSB_PAIR,    RESET,          KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_LSHIFT,      KC_TRANSPARENT, KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           DK_QUOT,        KC_TRANSPARENT, 
    KC_LCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LGUI,        KC_LALT,        KC_SPACE,       KC_SPACE,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {0,0,0}, {180,255,233}, {205,255,255}, {233,218,217}, {205,255,255}, {180,255,233}, {180,255,233}, {205,255,255}, {233,218,217}, {205,255,255}, {180,255,233}, {180,255,233}, {205,255,255}, {233,218,217}, {205,255,255}, {180,255,233}, {180,255,233}, {205,255,255}, {233,218,217}, {205,255,255}, {180,255,233}, {180,255,233}, {205,255,255}, {233,218,217}, {205,255,255}, {180,255,233}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {0,0,0}, {180,255,233}, {205,255,255}, {233,218,217}, {205,255,255}, {180,255,233}, {180,255,233}, {205,255,255}, {233,218,217}, {205,255,255}, {180,255,233}, {180,255,233}, {205,255,255}, {233,218,217}, {205,255,255}, {180,255,233}, {180,255,233}, {205,255,255}, {233,218,217}, {205,255,255}, {180,255,233}, {180,255,233}, {205,255,255}, {233,218,217}, {205,255,255}, {180,255,233}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {205,255,255} },

    [1] = { {250,159,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {205,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {205,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {205,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {205,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {205,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {205,255,255}, {180,255,233}, {180,255,233}, {180,255,233}, {141,255,233}, {205,255,255}, {180,255,233}, {180,255,233}, {180,255,233}, {141,255,233}, {205,255,255}, {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {205,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {205,255,255}, {0,0,0}, {0,0,0}, {180,255,233}, {0,0,0}, {0,0,0}, {205,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {0,0,0}, {141,255,233}, {180,255,233}, {0,0,0}, {205,255,255}, {0,0,0}, {141,255,233}, {180,255,233}, {0,0,0}, {205,255,255}, {0,0,0}, {141,255,233}, {180,255,233}, {0,0,0}, {205,255,255}, {146,224,255}, {141,255,233}, {180,255,233}, {0,0,0}, {205,255,255}, {146,224,255}, {146,224,255}, {180,255,233}, {205,255,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {250,159,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {180,255,233}, {105,255,255}, {31,255,255}, {0,0,0}, {205,255,255}, {105,255,255}, {146,224,255}, {31,255,255}, {0,0,0}, {205,255,255}, {146,224,255}, {146,224,255}, {31,255,255}, {252,119,255}, {205,255,255}, {105,255,255}, {146,224,255}, {252,119,255}, {0,0,0}, {205,255,255}, {180,255,233}, {105,255,255}, {252,119,255}, {205,255,255}, {252,119,255}, {252,119,255}, {0,0,0}, {0,183,238}, {169,120,255}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_record_user_danish(keycode, record)) return false;
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_D)));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_E)));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_S))));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LGUI(SS_TAP(X_K))));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_END) SS_DELAY(100) SS_LSFT(SS_TAP(X_HOME)));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)) SS_DELAY(100) SS_LCTL(SS_LSFT(SS_TAP(X_RIGHT))));

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
	 check_danish_mod_tap_timers(); 
}