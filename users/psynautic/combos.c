#ifdef COMBO_ENABLE

enum combo_events {
  SS_SNIP,
};

const uint16_t PROGMEM snip_combo[] = {KC_E, KC_Q, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [SS_SNIP] = COMBO_ACTION(snip_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case SS_SNIP:
      if (pressed) {
        tap_code16(KC_PSCREEN);
      }
      break;
  }
}
#endif
