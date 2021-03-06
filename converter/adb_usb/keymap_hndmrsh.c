#include "keymap_common.h"

/* 
 * - Swapped ALT and WIN keys
 * - Added momentary layer for media keys
 */

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_EXT_ANSI(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,                   FN0,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,EQL, PSLS,PAST,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
    LCAP,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,          UP,           P1,  P2,  P3,
    LCTL,LGUI,LALT,          SPC,                               RGUI,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    KEYMAP_EXT_ANSI(
    NO,  MPRV,MPLY,MSTP,MNXT,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,            NO,  NO,  NO,                    FN0,
    NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,       NO,  NO,  NO,      NO,  NO,  NO,  NO,
    NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,       NO,  NO,  NO,      NO,  NO,  NO,  NO,
    NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,       NO,                          NO,  NO,  NO,  NO,
    NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,            NO,            NO,           NO,  NO,  NO,
    NO,  NO,  NO,            NO,                                NO,  NO,       NO,  NO,  NO,      NO,       NO,  NO
    ),
};

const uint16_t PROGMEM fn_actions[] = {
	ACTION_LAYER_MOMENTARY(1)
};