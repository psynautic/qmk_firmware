#pragma once

#define FORCE_NKRO

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES         // reacts to keypresses
//#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE  // Sets the default mode, if none has been set
//#define RGB_MATRIX_STARTUP_HUE 211

#define RGBLIGHT_ANIMATIONS             // Enable all additional animation modes.

#ifdef COMBO_ENABLE
    #undef COMBO_COUNT
    #undef COMBO_TERM
    #define COMBO_COUNT 1
    #define COMBO_TERM 60
#endif
