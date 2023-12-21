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

const rgblight_segment_t PROGMEM my_qwe_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, RGBLED_NUM, HSV_PURPLE});
const rgblight_segment_t PROGMEM my_gme_layer[]    = RGBLIGHT_LAYER_SEGMENTS({0, RGBLED_NUM, HSV_CYAN});
const rgblight_segment_t PROGMEM my_dvk_layer[]    = RGBLIGHT_LAYER_SEGMENTS({0, RGBLED_NUM, HSV_RED});
const rgblight_segment_t PROGMEM my_cps_layer[]    = RGBLIGHT_LAYER_SEGMENTS({0, RGBLED_NUM, HSV_GREEN});

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_qwe_layer, my_gme_layer, my_dvk_layer, my_cps.layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(3, led_state.caps_lock);
    return true;
}
layer_state_t layer_state_set_user(layer_state_t state) {
    //led_t leds = host_keyboard_led_state();
    //if(leds.caps_lock){
    //    rgblight_set_layer_state(3, led_state.caps_lock);
    //
    //}
    //rgblight_set_layer_state(3, led_state.caps_lock);
    rgblight_set_layer_state(0, layer_state_cmp(state, _QW) || layer_state_cmp(state, _LFT) || layer_state_cmp(state, _RGT) || layer_state_cmp(state, _BTH));
    rgblight_set_layer_state(1, layer_state_cmp(state, _GME));
    rgblight_set_layer_state(2, layer_state_cmp(state, _DVK));
    return state;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _QW) || layer_state_cmp(state, _LFT) || layer_state_cmp(state, _RGT) || layer_state_cmp(state, _BTH));
    rgblight_set_layer_state(1, layer_state_cmp(state, _GME));
    rgblight_set_layer_state(2, layer_state_cmp(state, _DVK));

    return state;
}