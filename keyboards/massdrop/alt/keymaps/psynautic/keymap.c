#include "keymap.h"

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_65_ansi_blocker(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_MUTE, \
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,   KC_L,     KC_SCLN, KC_QUOT,          KC_ENT,  KC_VOLU, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_VOLD, \
        KC_LGUI, KC_LALT, HYPR(KC_NO),                        SPACEFN,                            KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT  \
    ),

    [_SPACEFN] = LAYOUT_65_ansi_blocker(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11, KC_F12,  KC_DEL,  KC_INS,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TG_NUM,  \
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, _______, _______,          _______, TG_SET,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_PGUP, OS_LAY, \
        _______, _______, _______,                            _______,                            KC_APP,  KC_RGUI, KC_HOME, KC_PGDN, KC_END   \
    ),

    [_ONESHOT] = LAYOUT_65_ansi_blocker(
        DF_GAME, KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_DEL,  KC_INS,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BRIU, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_BRID, \
        _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, _______, _______, _______, _______, _______, _______, _______,          KC_MPLY, _______, \
        _______, _______, _______,                            _______,                            KC_APP,  KC_RGUI, KC_MRWD, KC_MSTP, KC_MFFD  \
    ),

    [_SETTINGS] = LAYOUT_65_ansi_blocker(
        _______, U_T_AUTO,U_T_AGCR,_______, _______, MD_BOOT, DBG_TOG, _______, _______, _______, _______, _______, _______, _______, RESET,   \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TG_SET,  \
        _______, RGB_TOG, RGB_MOD, RGB_RMOD,RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD,          _______, TG_SET,  \
        _______, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW,RGB_M_SN,_______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______  \
    ),

    [_NUMPAD] = LAYOUT_65_ansi_blocker(
        KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, _______, _______, KC_PSLS, KC_PAST, KC_PMNS, _______, _______, _______, \
        _______, _______, KC_MS_U, KC_BTN3, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_LPRN, KC_RPRN, TG_NUM,  \
        KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN2, _______, KC_BTN2, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PEQL,          _______, _______, \
        _______, _______, _______,                            KC_P0,                              KC_PDOT, KC_PENT, _______, _______, _______  \
    ),

    [_GAME] = LAYOUT_65_ansi_blocker(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, _______, \
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_VOLU, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_VOLD, \
        KC_LGUI, KC_LALT, HYPR(KC_NO),                        KC_SPC,                             KC_RALT, GAMEFUN, KC_LEFT, KC_DOWN, KC_RGHT  \
    ),

    [_GAME_ALT] = LAYOUT_65_ansi_blocker(
        DF_BASE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_INS,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TG_SET,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, TG_NUM,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_PGUP, OS_LAY,  \
        _______, _______, _______,                            _______,                            KC_APP,  _______, KC_HOME, KC_PGDN, KC_END   \
    )
};

#ifdef _______
#undef _______
#define _______ ROFF

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [_BASE] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, \
        //UnderGlow
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______,                                                                                                                      _______, \
        _______,                                                                                                                      _______, \
        _______,                                                                                                                      _______, \
        _______,                                                                                                                      _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
    },
    [_SPACEFN] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, \
        //UnderGlow
        RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, RPURPLE, \
        _______,                                                                                                                      _______, \
        _______,                                                                                                                      _______, \
        _______,                                                                                                                      _______, \
        _______,                                                                                                                      _______, \
        _______, _______, _______, _______, _______, _______ ,_______, _______, _______, _______, _______, _______, _______, _______, _______  \
    },
    [_ONESHOT] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, \
        //UnderGlow
        RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR, RGOLDR,  RGOLDR,  RGOLDR,   RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  \
        RGOLDR,                                                                                                                       RGOLDR,  \
        RGOLDR,                                                                                                                       RGOLDR,  \
        RGOLDR,                                                                                                                       RGOLDR,  \
        RGOLDR,                                                                                                                       RGOLDR,  \
        RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR,  RGOLDR   \
    },
    [_SETTINGS] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, \
        //UnderGlow
        RAZURE,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RAZURE,  \
        RAZURE,                                                                                                                       RAZURE,  \
        RAZURE,                                                                                                                       RAZURE,  \
        RAZURE,                                                                                                                       RAZURE,  \
        RAZURE,                                                                                                                       RAZURE,  \
        RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE,  RAZURE   \
    },
    [_NUMPAD] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______, RSPRING, RSPRING, RSPRING, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, \
        _______, _______, _______, _______, _______, _______, _______, _______, RSPRING, RSPRING, RSPRING, RSPRING,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, RSPRING, RSPRING, RSPRING, RSPRING,          _______, _______, \
        _______, _______, _______,                            RSPRING,                            RSPRING, RSPRING, _______, _______, _______, \
        //UnderGlow
        RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING,RSPRING, RSPRING, RSPRING,  RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, \
        RSPRING,                                                                                                                      RSPRING, \
        RSPRING,                                                                                                                      RSPRING, \
        RSPRING,                                                                                                                      RSPRING, \
        RSPRING,                                                                                                                      RSPRING, \
        RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING, RSPRING  \
    },
    [_GAME] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, RCORAL,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, RCORAL,  RCORAL,  RCORAL,  _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, \
        //UnderGlow
        RCORAL,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RCORAL,  \
        _______,                                                                                                                      _______, \
        _______,                                                                                                                      _______, \
        _______,                                                                                                                      _______, \
        _______,                                                                                                                      _______, \
        _______, _______, _______, _______, _______, _______ ,_______, _______, _______, _______, _______, _______, _______, _______, _______  \
    },
    [_GAME_ALT] = {
        RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, \
        //UnderGlow
        RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCYAN,   RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  \
        RCORAL,                                                                                                                       RCORAL,  \
        RCORAL,                                                                                                                       RCORAL,  \
        RCORAL,                                                                                                                       RCORAL,  \
        RCORAL,                                                                                                                       RCORAL,  \
        RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL,  RCORAL   \
    },
};

#undef _______
#define _______ KC_TRNS
#endif

#define MODS_SHIFT  (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL  (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTRL))
#define MODS_ALT  (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

void matrix_init_user(void) {
  // set num lock on at start (for numonly layer to work)
  if (1<<USB_LED_NUM_LOCK) {
      SEND_STRING(SS_TAP(X_NUMLOCK)); //register_code(KC_NUMLOCK); unregister_code(KC_NUMLOCK);
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case RGB_TOG:
            if (record->event.pressed) {
              switch (rgb_matrix_get_flags()) {
                case LED_FLAG_ALL: {
                    rgb_matrix_set_flags(LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER | LED_FLAG_INDICATOR);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case (LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER | LED_FLAG_INDICATOR): {
                    rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case LED_FLAG_UNDERGLOW: {
                    rgb_matrix_set_flags(LED_FLAG_NONE);
                    rgb_matrix_disable_noeeprom();
                  }
                  break;
                default: {
                    rgb_matrix_set_flags(LED_FLAG_ALL);
                    rgb_matrix_enable_noeeprom();
                  }
                  break;
              }
            }
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        RGB rgb = {
            .r = pgm_read_byte(&ledmap[layer][i][0]),
            .g = pgm_read_byte(&ledmap[layer][i][1]),
            .b = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (rgb.r || rgb.g || rgb.b) {
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
}
void rgb_matrix_indicators_user(void) {
    set_layer_color(get_highest_layer(default_layer_state));
    set_layer_color(get_highest_layer(layer_state));

    int default_layer = get_highest_layer(default_layer_state);
    int layer = get_highest_layer(layer_state);
    switch (layer) {
        case _SPACEFN:
            //rgb_matrix_mode_noeeprom(RGB_MATRIX_BAND_SAT);
            break;
    }
    switch (default_layer) {
        case _BASE:
            break;
        case _GAME:
            break;
    }
}
