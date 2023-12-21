//
// Created by avvol on 21.12.2023.
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

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _GME));
    return state;
}