//
// Created by avvol on 19.12.2023.
//


#include QMK_KEYBOARD_H

enum layer_names {
    _QW = 0,
    _LFT,
    _RGT,
    _BTH,
    _GME,
    _DVK
};

#define LEFTER TT(_LFT)
#define RIGHTER TT(_RGT)


//clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = LAYOUT_manuform5x6(
      KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                                                       KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_BSPC,
      KC_GRV,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                                                       KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,
      KC_TAB,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                                                       KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,
      KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,                                                       KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,
                           KC_LGUI,KC_LALT,                                                                                            KC_RALT,   KC_RGUI,
                                               KC_LCTL,MO(1),                                                      MO(2),  KC_RCTL,
                                                                   KC_ENT,  KC_SPC,       KC_ENT,  KC_SPC,
                                                                   KC_LSFT, KC_ESC,       KC_ESC,  KC_RSFT
        ),
    [_LFT] = LAYOUT_manuform5x6(
      KC_TRNS, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                                                      KC_F6,   KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,
      KC_UNDS, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                                                       KC_6,    KC_7,   KC_8,   KC_9,   KC_0,    KC_F12,
      KC_TAB,  KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,                                                    KC_CIRC, KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN, KC_PIPE,
      KC_LSFT, KC_EQL, KC_MINS,KC_PLUS,KC_LCBR,KC_RCBR,                                                    KC_LBRC, KC_RBRC,KC_SCLN,KC_COLN,KC_BSLS, KC_RSFT,
                           KC_LGUI,KC_LALT,                                                                                             KC_RALT,KC_RGUI,
                                               KC_LCTL,KC_TRNS,                                                    MO(3),   KC_RCTL,
                                                                   KC_TRNS,  KC_TRNS,       KC_TRNS,   KC_TRNS,
                                                                   KC_TRNS,  KC_TRNS,       KC_TRNS,   KC_TRNS
        ),
    [_LFT] = LAYOUT_manuform5x6(
      KC_TRNS, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                                                      KC_F6,   KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_BSPC,
      KC_GRV,  KC_INS, KC_NO,  KC_APP, KC_NO,  KC_NUM,                                                     KC_PGUP,KC_LCTL,KC_UP,  KC_LCTL, KC_LCTL, KC_RBRC,
      KC_TAB,  KC_LALT,KC_LCTL,KC_LSFT,KC_NO,  KC_CAPS,                                                    KC_PGDN,KC_LEFT,KC_DOWN,KC_RGHT, KC_DEL,  KC_BSPC,
      KC_LSFT, KC_NO,  KC_CUT, KC_COPY,KC_PSTE,KC_SCRL,                                                    KC_LCTL,KC_HOME,KC_LCTL,KC_END,  KC_NO,   KC_RSFT,
                           KC_LGUI,KC_LALT,                                                                                            KC_RALT,KC_RGUI,
                                               KC_LCTL,MO(3),                                                      KC_TRNS,KC_RCTL,
                                                                   KC_TRNS,  KC_TRNS,       KC_TRNS,   KC_TRNS,
                                                                   KC_TRNS,  KC_TRNS,       KC_TRNS,   KC_TRNS
        ),
    [_LFT] = LAYOUT_manuform5x6(
      KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                                                    KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_NO,   DF(0),  DF(4),  DF(5),  KC_NO,  KC_NO,                                                      KC_NO,  KC_MRWD,KC_MPLY, KC_MFFD, KC_NO,   KC_NO,
      KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                      KC_NO,  KC_VOLD,KC_MUTE, KC_VOLU, KC_NO,   KC_NO,
      KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                      KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
                           KC_LGUI,KC_LALT,                                                                                            KC_RALT, KC_RGUI,
                                               KC_TRNS,KC_TRNS,                                                    KC_TRNS,KC_TRNS,
                                                                   KC_TRNS,  KC_TRNS,       KC_TRNS,   KC_TRNS,
                                                                   KC_TRNS,  KC_TRNS,       KC_TRNS,   KC_TRNS
        ),
    [_LFT] = LAYOUT_manuform5x6(
      KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                                                    KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_T  ,  KC_TAB, KC_Q  , KC_W  , KC_E  , KC_R  ,                                                     KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_G  ,  KC_LSFT,KC_A   ,KC_S   ,KC_D   ,KC_F,                                                       KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_B  ,  KC_LCTL,KC_Z  , KC_X  , KC_C  , KC_V  ,                                                     KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                           KC_TRNS,KC_TRNS,                                                                                           KC_TRNS,KC_TRNS,
                                               KC_LGUI,KC_LALT,                                                    KC_RALT, KC_RGUI,
                                                                   KC_ENT,  KC_SPC,       KC_ENT,  KC_SPC,
                                                                   KC_LSFT, KC_ESC,       KC_ESC,  KC_RSFT
        ),
    [_LFT] = LAYOUT_manuform5x6(
      KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                                                       KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_BSPC,
      KC_GRV,  KC_QUOT,KC_COMM,KC_DOT, KC_P,   KC_Y,                                                       KC_F,   KC_G,   KC_C,   KC_R,   KC_L,   KC_LBRC,
      KC_TAB,  KC_A,   KC_O,   KC_E,   KC_U,   KC_I,                                                       KC_D,   KC_H,   KC_T,   KC_N,   KC_S,   KC_QUOT,
      KC_LSFT, KC_SCLN,KC_Q,   KC_J,   KC_K,   KC_X,                                                       KC_B,   KC_M,   KC_W,   KC_V,   KC_Z,   KC_RSFT,
                           KC_TRNS,KC_TRNS,                                                                                            KC_TRNS,KC_TRNS,
                                               KC_LGUI,KC_LALT,                                                    KC_RALT, KC_RGUI,
                                                                   KC_ENT,  KC_SPC,       KC_ENT,  KC_SPC,
                                                                   KC_LSFT, KC_ESC,       KC_ESC,  KC_RSFT
        )
};


const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {7, 3, HSV_RED}
);
const rgblight_segment_t PROGMEM my_dvorak_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {7, 3, HSV_GREEN}
);

const rgblight_segment_t PROGMEM my_gme_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {7, 3, HSV_PURPLE}
);
//const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//    {13, 2, HSV_GREEN}
//);
// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,
    my_gme_layer,
    my_dvorak_layer
);

enum led_layers {
    _DEF = 0,
    _CPS,
    _GME
    _DVK
};

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case _QW:
        case _LFT:
        case _RGT:
        case _BTH:
            rgblight_sethsv_noeeprom(HSV_BLUE);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_MOOD + 0);
            break;
        case _GME:
            rgblight_sethsv_noeeprom(HSV_RED);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 3);
            break;
        case _DVK:
            rgblight_sethsv_noeeprom(HSV_GREEN);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT + 2);
            break;
    }
    //rgblight_set_layer_state(1, layer_state_cmp(state, _GME));
    return state;
}