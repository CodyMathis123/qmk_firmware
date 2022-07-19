#pragma once

#include QMK_KEYBOARD_H

#ifdef OLED_ENABLE
#include "oled.h"
#endif
#define U_NP KC_NO  // key is not present
#define U_NA KC_NO  // present but not available for use
#define U_NU KC_NO  // available but not used

enum layers { BASE, MBO, MEDR, NAVR, MOUR, NSSL, NSL, FUNL };

#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)

