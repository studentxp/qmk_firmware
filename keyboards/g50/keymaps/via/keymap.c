#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
        // R0: GP0
        {
            KC_Y,    KC_F3,   KC_CAPS, KC_T,    KC_F7,   KC_LBRC,
            KC_RBRC, KC_NO,   KC_NO,   KC_NUM,  KC_NO,   KC_NO,
            KC_BSPC, KC_NO,   KC_P4,   KC_P8,   KC_NO,   KC_LSFT
        },

        // R1: GP1
        {
            KC_N,    KC_NO,   KC_NO,   KC_B,    KC_NO,   KC_SLSH,
            KC_NO,   KC_NO,   KC_RALT, KC_RIGHT,KC_LEFT, KC_DOWN,
            KC_SPC,  KC_NO,   KC_P3,   KC_PDOT, KC_NO,   KC_RSFT
        },

        // R2: GP2
        {
            KC_M,    KC_C,    KC_X,    KC_V,    KC_DOT,  KC_NO,
            KC_COMM, KC_RCTL, KC_NO,   KC_NO,   KC_NO,   KC_NO,
            KC_ENT,  KC_NO,   KC_PAST, KC_PENT, KC_NO,   KC_RSFT
        },

        // R3: GP3
        {
            KC_J,    KC_D,    KC_S,    KC_F,    KC_L,    KC_SCLN,
            KC_K,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
            KC_BSLS, KC_APP,  KC_P1,   KC_P5,   KC_NO,   KC_NO
        },

        // R4: GP4
        {
            KC_7,    KC_3,    KC_2,    KC_4,    KC_9,    KC_0,
            KC_8,    KC_NO,   KC_INS,  KC_F12,  KC_END,  KC_F11,
            KC_F10,  KC_PGDN, KC_P0,   KC_P2,   KC_NO,   KC_NO
        },

        // R5: GP5
        {
            KC_U,    KC_E,    KC_W,    KC_R,    KC_O,    KC_P,
            KC_I,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
            KC_LGUI, KC_NO,   KC_P9,   KC_PMNS, KC_NO,   KC_NO
        },

        // R6: GP6
        {
            KC_6,    KC_F2,   KC_F1,   KC_5,    KC_F8,   KC_MINS,
            KC_EQL,  KC_LCTL, KC_NO,   KC_PSCR, KC_HOME, KC_DEL,
            KC_F9,   KC_PGUP, KC_P6,   KC_PPLS, KC_NO,   KC_NO
        },

        // R7: GP7
        {
            KC_H,    KC_F4,   KC_NO,   KC_G,    KC_NO,   KC_QUOT,
            KC_F6,   KC_NO,   KC_LALT, KC_NO,   KC_UP,   KC_NO,
            KC_F5,   KC_NO,   KC_P7,   KC_PSLS, KC_ESC,  KC_NO
        }
    }
};
