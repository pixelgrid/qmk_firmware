#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
// #include "keymap_steno.h"

#define FN1_M       LT(1, KC_M)
#define FN2_V       LT(2, KC_V)
#define FN4_B       LT(4, KC_B)
#define FN5_N       LT(5, KC_N)

// new
#define SFT_A      LSFT_T(KC_A)
#define SFT_SCLN   RSFT_T(KC_SCLN)
#define ALT_Z      LALT_T(KC_Z)
#define ALT_L      LALT_T(KC_L)
#define CTL_D      RCTL_T(KC_D)
#define CTL_K      LCTL_T(KC_K)
#define GUI_F      RGUI_T(KC_F)
#define GUI_J      LGUI_T(KC_J)
#define GUI_TAB    LGUI_T(KC_TAB)

// tap dance
enum {
  TD_SLSH_QUES,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_ortho_3x10(
    KC_Q,   KC_W,   KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,     KC_O,    KC_P,
    SFT_A,  KC_S,   KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,     KC_L,   SFT_SCLN,
    KC_Z,   KC_X,   KC_C,    FN2_V,   FN4_B,   FN5_N,   FN1_M,  KC_COMMA, KC_DOT,  TD(TD_SLSH_QUES)
  ),
  [1] = LAYOUT_ortho_3x10(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_LABK, KC_LBRC, KC_LCBR, KC_LPRN, KC_TILD, KC_GRV,  KC_RPRN, KC_RCBR, KC_RBRC, KC_RABK,
    _______, _______, _______, KC_PIPE, _______, _______, _______, _______, _______, OSL(3)
  ),
  [2] = LAYOUT_ortho_3x10(
    GUI_TAB, _______, KC_UP,   _______, _______,  KC_UNDS, KC_7,    KC_8,    KC_9,    KC_PLUS,
    KC_TAB,  KC_LEFT, KC_DOWN, KC_RGHT, _______,  KC_MINS, KC_4,    KC_5,    KC_6,    KC_BSLS,
    _______, _______, _______, _______, _______,  KC_EQL,  KC_1,    KC_2,    KC_3,    KC_0
  ),
  [3] = LAYOUT_ortho_3x10(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_F11,  KC_F12,  _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______,
    CG_SWAP, _______, _______, _______, RESET,   _______, _______, _______, _______, _______ 
  ),
  [4] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_LALT, KC_LCTL, KC_LGUI, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [5] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, _______, _______, _______, KC_QUOT,  KC_DQUO,
    _______, _______, _______, _______, _______, _______, KC_RGUI, KC_RCTL, KC_RALT, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )/*,
  [6] = LAYOUT_ortho_3x10(
    STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
    STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
    XXXXXXX, STN_NUM, STN_A,   STN_O,   STN_NUM, STN_E,   STN_U,   STN_NUM, STN_NUM, XXXXXXX
  ),
  */
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_SLSH_QUES] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_QUES),
};
