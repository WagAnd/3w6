// HoRRoR77 https://github.com/WagAnd
// 3w6/rev2 keyboard by weteor https://github.com/weteor/3W6
// settings inspired by Manna-Harbour Miryoku https://github.com/manna-harbour/miryoku

#include QMK_KEYBOARD_H

enum layers
{
    _COLEMAK = 0,
    _QWERTY,
    _SYM,
    _NAV,
    _NUM,
    _CFG,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_COLEMAK] = LAYOUT(

        KC_Q,           KC_W,               KC_F,           KC_P,           KC_B,                       KC_J,       KC_L,          KC_U,            KC_Y,           KC_SCLN,
        LGUI_T(KC_A),   LALT_T(KC_R),       LCTL_T(KC_S),   LSFT_T(KC_T),   KC_G,                       KC_M,       RSFT_T(KC_N),  RCTL_T(KC_E),    RALT_T(KC_I),   RGUI_T(KC_O),
        KC_Z,           KC_X,               KC_C,           KC_D,           KC_V,                       KC_K,       KC_H,          KC_COMM,         KC_DOT,         KC_SLSH,
                                      
                                        KC_ESC,     LT(_NUM,KC_TAB),   LT(_NAV,KC_SPC),         LT(_SYM,KC_ENT),    KC_BSPC,    KC_DEL         
    ),    
    [_QWERTY] = LAYOUT(
        KC_Q,         KC_W,    KC_E,    KC_R,    KC_T,                                                   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  
        KC_A,         KC_S,    KC_D,    KC_F,    KC_G,                                                   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        LSFT_T(KC_Z), KC_X,    KC_C,    KC_V,    KC_B,                                                   KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),
            
                        LCTL_T(KC_ESC), LT(_NUM,KC_SPC), LT(_NAV, KC_TAB),     LT(_SYM, KC_BSPC), KC_ENT, LALT_T(KC_DEL)         
    ),
    [_SYM] = LAYOUT(
      KC_QUOT,        KC_DQUO,              KC_CIRC,        KC_QUES,          KC_GRV,                     KC_LBRC,    KC_LT,          KC_EQL,         KC_GT,          KC_RBRC,
      KC_EXLM,        KC_AT,                KC_HASH,        KC_DLR,           KC_PERC,                    KC_LCBR,    KC_LPRN,        KC_COLN,        KC_RPRN,        KC_RCBR,
      KC_BSLS,        KC_TILD,              KC_PIPE,        KC_AMPR,          KC_SCLN,                    KC_PSLS,    KC_PAST,        KC_PMNS,        KC_PPLS,        KC_UNDS,
     
                                                                KC_NO,    MO(_CFG),    KC_NO,          KC_NO,    KC_NO,  KC_NO   
    ),
    [_NAV] = LAYOUT(
      KC_NO,          KC_VOLD,              KC_MUTE,        KC_VOLU,          KC_NO,                      KC_NO,      KC_PGDN,        KC_UP,          KC_PGUP,        KC_DEL,
      KC_MPRV,        KC_MPLY,              KC_MSTP,        KC_MNXT,          KC_NO,                      KC_HOME,    KC_LEFT,        KC_DOWN,        KC_RGHT,        KC_END,
      KC_NO,          KC_NO,                KC_NO,          KC_NO,            KC_NO,                      KC_NO,      KC_NO,          KC_NO,          KC_NO,          KC_NO,
      
                                                                KC_NO,    KC_NO,    KC_NO,          KC_NO,    MO(_CFG),  KC_NO   
    ),
    [_NUM] = LAYOUT(
      KC_NO,          KC_F9,                KC_F10,         KC_F11,           KC_F12,                     KC_PPLS,    KC_P7,          KC_P8,          KC_P9,          KC_PSLS,
      KC_NO,          KC_F5,                KC_F6,          KC_F7,            KC_F8,                      KC_P0,      KC_P4,          KC_P5,          KC_P6,          KC_PDOT,
      KC_NO,          KC_F1,                KC_F2,          KC_F3,            KC_F4,                      KC_PMNS,    KC_P1,          KC_P2,          KC_P3,          KC_PAST,
      
                                                                KC_NO,    KC_NO,     KC_NO,         KC_PEQL,  KC_PENT,  KC_NO
    ),
    [_CFG] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX,DF(_QWERTY), DF(_COLEMAK),
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                         XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
    ),
};
