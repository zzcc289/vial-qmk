/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x97, 0x61, 0x7D, 0x2F, 0xA7, 0x5E, 0x42, 0x40}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 3 }

/* USB Device descriptor parameter */

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B7 }
#define MATRIX_COL_PINS { F7, F6, F5, F4 }
#define ENCODERS_PAD_A { D6 }
#define ENCODERS_PAD_B { D7 }

/* COL2ROW or ROW2COL */

/* number of backlight levels */
#ifdef BACKLIGHT_PIN
#   define BACKLIGHT_LEVELS 3
#endif


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#undef LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

// RGB Matrix
#   ifdef RGB_MATRIX_ENABLE
#       define RGB_MATRIX_LED_COUNT 25

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
// #       define ENABLE_RGB_MATRIX_ALPHAS_MODS
#       define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #       define ENABLE_RGB_MATRIX_GR45ADIENT_LEFT_RIGHT
#       define ENABLE_RGB_MATRIX_BREATHING
// #       define ENABLE_RGB_MATRIX_BAND_SAT
// #       define ENABLE_RGB_MATRIX_BAND_VAL
// #       define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #       define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// #       define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// #       define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#       define ENABLE_RGB_MATRIX_CYCLE_ALL
#       define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#       define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#       define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#       define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#       define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#       define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#       define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#       define ENABLE_RGB_MATRIX_DUAL_BEACON
#       define ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #       define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#       define ENABLE_RGB_MATRIX_RAINDROPS
// #       define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #       define ENABLE_RGB_MATRIX_HUE_BREATHING
// #       define ENABLE_RGB_MATRIX_HUE_PENDULUM
// #       define ENABLE_RGB_MATRIX_HUE_WAVE
// #       define ENABLE_RGB_MATRIX_PIXEL_RAIN
// #       define ENABLE_RGB_MATRIX_PIXEL_FLOW
// #       define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
// #       define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#       define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#       define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#       define ENABLE_RGB_MATRIX_SOLID_REACTIVE
// #       define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #       define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #       define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #       define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #       define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #       define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// #       define ENABLE_RGB_MATRIX_SPLASH
// #       define ENABLE_RGB_MATRIX_MULTISPLASH
// #       define ENABLE_RGB_MATRIX_SOLID_SPLASH
// #       define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif
