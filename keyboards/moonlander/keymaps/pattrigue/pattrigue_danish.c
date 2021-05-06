/*
Add the following to the switch case in process_record_user:

case KC_A:
	return danish_mod_tap_key(keycode, record, DK_ARNG, 0);
case KC_E:
	return danish_mod_tap_key(keycode, record, DK_AE, 1);
case KC_O:
	return danish_mod_tap_key(keycode, record, DK_OSTR, 2);
*/


#define NUM_DANISH_MOD_TAPS 3

typedef struct {
    uint16_t timer;
    uint16_t keycode;
    bool     held;
} danish_mod_tap;

danish_mod_tap danish_mod_taps[NUM_DANISH_MOD_TAPS];

bool danish_mod_tap_key(uint16_t keycode, keyrecord_t *record, uint16_t mod_key, uint16_t i) {
    if (record->event.pressed) {
        danish_mod_taps[i].timer = timer_read();
        danish_mod_taps[i].held = true;
        danish_mod_taps[i].keycode = mod_key;
        tap_code16(keycode);
    } else {
        danish_mod_taps[i].held = false;
        danish_mod_taps[i].timer = 0;
    }
    return false;
}

void check_danish_mod_tap_timers(void) {
	for (int i = 0; i < NUM_DANISH_MOD_TAPS; i++) {
        if (danish_mod_taps[i].held) {
            if (timer_elapsed(danish_mod_taps[i].timer) > TAPPING_TERM) {
                tap_code16(KC_BSPACE);
                tap_code16(danish_mod_taps[i].keycode);

       			danish_mod_taps[i].timer = 0;
                danish_mod_taps[i].held = false;
            }
        }
    }
}