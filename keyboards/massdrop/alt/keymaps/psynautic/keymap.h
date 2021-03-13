#include QMK_KEYBOARD_H

#define RRED    {RGB_RED}
#define RCORAL  {RGB_CORAL}
#define RORANGE {RGB_ORANGE}
#define RGOLDR  {RGB_GOLDENROD}
#define RGOLD   {RGB_GOLD}
#define RYELL   {RGB_YELLOW}
#define RCHART  {RGB_CHARTREUSE}
#define RGREEN  {RGB_GREEN}
#define RSPRING {RGB_SPRINGGREEN}
#define RTURQ   {RGB_TURQUOISE}
#define RTEAL   {RGB_TEAL}
#define RCYAN   {RGB_CYAN}
#define RAZURE  {RGB_AZURE}
#define RBLUE   {RGB_BLUE}
#define RPURPLE {RGB_PURPLE}
#define RMAGENT {RGB_MAGENTA}
#define RPINK   {RGB_PINK}
#define ROFF    {RGB_OFF}

enum alt_keycodes {
    U_T_AUTO = SAFE_RANGE, //USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,              //USB Toggle Automatic GCR control
    DBG_TOG,               //DEBUG Toggle On / Off
    DBG_MTRX,              //DEBUG Toggle Matrix Prints
    DBG_KBD,               //DEBUG Toggle Keyboard Prints
    DBG_MOU,               //DEBUG Toggle Mouse Prints
    MD_BOOT,               //Restart into bootloader after hold timeout
};

enum alt_layers {
    _BASE = 0,
    _SPACEFN,
    _ONESHOT,
    _SETTINGS,
    _NUMPAD,
    _GAME,
    _GAME_ALT,
};

#define SPACEFN LT(_SPACEFN, KC_SPC)  // the meat and potatoes
#define DF_GAME DF(_GAME)  // default to game layer
#define DF_BASE DF(_BASE)
#define TG_SET TG(_SETTINGS)
#define TG_NUM TG(_NUMPAD)
#define OS_LAY OSL(_ONESHOT)
#define GAMEFUN MO(_GAME_ALT)
