/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x12, 0x3F, 0xC0, 0x0D, 0x91, 0xC6, 0xF4, 0x26};

#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 11 }

#define RGB_DI_PIN F4
#ifdef  RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 16
#define RGBLIGHT_SAT_STEP 16
#define RGBLIGHT_VAL_STEP 16
#define RGBLIGHT_SLEEP
#endif
