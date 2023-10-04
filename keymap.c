/*
qmk compile -kb avalanche/v4 -km pwl_avalanche
qmk flash -kb avalanche/v4 -km pwl_avalanche
*/

#include QMK_KEYBOARD_H

enum layer {
    LAYER_0,
    _SYMB,
    _NAV,
};

enum custom_keycodes {
    SYMB = SAFE_RANGE,
    NAV,
    ADJUST,
};

#define FN_1 MO(_SYMB)
#define LFN_2 LT(_NAV, KC_GRV)
#define RFN_2 MO(_NAV)
#define LFN_3 LSFT_T(KC_EQL)
#define RFN_3 RSFT_T(KC_MINS)
#define EN_LALT LALT_T(KC_ENT)
#define EN_RALT RALT_T(KC_ENT)
#define KC_ESCTL LCTL_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_0] = LAYOUT(
                 KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_BSLS,
                 KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        _______, KC_ESCTL,KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, _______, 
                 KC_LSFT, _______, KC_Z,    KC_X,    KC_C,    KC_V,   KC_LEFT,  KC_RIGHT,KC_DOWN, KC_UP,   KC_B,    KC_N,    KC_M,    KC_COMM, _______,  KC_RSFT,
                                            KC_MUTE, KC_LALT, KC_LGUI,MO(_SYMB),MO(_NAV),KC_ENT,  KC_SPC,  KC_RALT, KC_VOLD, _______
    ),
    [_SYMB] = LAYOUT(
                 _______, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX,                                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F11,
                 _______, _______, KC_1,    KC_2,    KC_3, KC_BSPC,                                       KC_GRV,  KC_MINS, KC_EQL, KC_LBRC, KC_RBRC,  XXXXXXX,
        _______, _______, _______, KC_4,    KC_5,    KC_6,    KC_7,                                       KC_BSLS, KC_COMM , KC_DOT, KC_SLSH, KC_RPRN, KC_LPRN, KC_F12,
                 _______, _______, KC_8,    KC_9,    KC_0,   XXXXXXX, _______, _______, _______, _______, XXXXXXX, KC_PGUP, KC_PGDN, XXXXXXX, XXXXXXX, _______,
                                            _______, _______, _______, _______, _______, KC_DEL,  KC_BSPC, _______, _______, _______
    ),
    [_NAV] = LAYOUT(
                 _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 _______, KC_0,    KC_1,    KC_2,    KC_3,    KC_BSPC,                                     KC_DEL,  KC_EXLM, KC_AT,   KC_HASH, XXXXXXX, KC_LPRN,
        _______, _______, KC_0,    KC_4,    KC_5,    KC_6,    KC_DEL,                                      KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, XXXXXXX, XXXXXXX, KC_RPRN,
                 _______, KC_0,    KC_7,    KC_8,    KC_9,    KC_DOT,  _______, _______, _______, _______, XXXXXXX, KC_AMPR, KC_ASTR, XXXXXXX, XXXXXXX, _______,
                                            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
};



