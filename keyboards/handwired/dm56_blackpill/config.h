//
// Created by avvol on 19.12.2023.
//

#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define SPLIT_HAND_PIN C15
#define SPLIT_HAND_PIN_LOW_IS_LEFT
#define SERIAL_USART_TX_PIN A2
#define SERIAL_USART_SPEED 921600

#define RGBLED_SPLIT    7
#define WS2812_DI_PIN B10

#define RGBLIGHT_SPLIT

#define RGBLIGHT_LAYERS
#define RGBLIGHT_DEFAULT_HUE 213
