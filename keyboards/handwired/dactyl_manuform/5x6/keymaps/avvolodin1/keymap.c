#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)


enum custom_keycodes {
    KC_PRVWD = SAFE_RANGE,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE,
    KC_TERM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
        KC_GRV , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_LBRC,
        KC_TAB, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
        KC_MUTE,         KC_LGUI, KC_LALT, KC_LCTRL, LOWER, KC_ENT,       KC_SPC, RAISE, KC_RCTRL, KC_RALT, KC_RGUI,      KC_MUTE
    ),

    [_LOWER] = LAYOUT_5x6(
        _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                          KC_F6,   KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11,
        KC_UNDS,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_F12,
        _______,KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_PIPE,
        _______,KC_EQL, KC_MINS,KC_PLUS,KC_LCBR,KC_RCBR,                        KC_LBRC,KC_RBRC,KC_SCLN,KC_COLN,KC_BSLS,_______,
                _______,_______,_______,_______,_______, _______,       _______,_______,_______,_______,_______,_______

    ),

    [_RAISE] = LAYOUT_5x6(
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
          _______,KC_INS, KC_PSCR,KC_APP, XXXXXXX,KC_SCRL,                        KC_PGUP,KC_PRVWD,KC_UP, KC_NXTWD,KC_DLINE,KC_RBRC,
          _______,KC_LALT,KC_LCTL,KC_LSFT,XXXXXXX,KC_CAPS,                        KC_PGDN,KC_LEFT,KC_DOWN,KC_RGHT, KC_DEL,  KC_BSPC,
          _______,KC_UNDO,KC_CUT, KC_COPY,KC_PASTE,KC_NUM,                       XXXXXXX,KC_LSTRT,XXXXXXX,KC_LEND,XXXXXXX,_______,
                  _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,KC_VOLD

    )
};

bool led_update_user(led_t led_state){
    if(led_state.caps_lock){
        rgblight_sethsv(HSV_GOLD);
    } else {
        rgblight_sethsv(HSV_OFF);
    }
   
    return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
            break;
        case KC_TERM:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_GRV);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_GRV);
            }
            return false;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDOWN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

#endif

