//
// Created by avvol on 19.12.2023.
//


#include QMK_KEYBOARD_H

enum layer_names {
    _QW = 0,
    _LFT,
    _RGT,
    _BTH
};

#define LEFTER TT(_LFT)
#define RIGHTER TT(_RGT)


//clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = LAYOUT_manuform5x6(
         KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                                                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
         KC_GRV,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
                            _______, _______,           _______, _______, _______, _______,         _______, _______, _______, _______,           _______, _______,
                                                                          _______, _______,         _______, _______
        ),
    [_LFT] = LAYOUT_manuform5x6(
         KC_ESC, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
                            _______, _______,           _______, _______, _______, _______,         _______, _______, _______, _______,           _______, _______,
                                                                          _______, _______,         _______, _______
        ),
    [_RGT] = LAYOUT_manuform5x6(
         KC_ESC, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
                            _______, _______,           _______, _______, _______, _______,         _______, _______, _______, _______,           _______, _______,
                                                                          _______, _______,         _______, _______
        ),
    [_BTH] = LAYOUT_manuform5x6(
         KC_ESC, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                                                    _______, _______, _______, _______, _______, _______,
                            _______, _______,           _______, _______, _______, _______,         _______, _______, _______, _______,           _______, _______,
                                                                          _______, _______,         _______, _______
        )
}