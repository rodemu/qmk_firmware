#include QMK_KEYBOARD_H

#define L1_Q       LT(1, KC_Q)
#define L2_B       LT(2, KC_B)
#define L3_N       LT(3, KC_N)
#define L4_M       LT(4, KC_M)
#define L5_DOT     LT(5, KC_DOT)
#define CT_A       MT(MOD_LCTL, KC_A)
#define SF_Z       MT(MOD_LSFT, KC_Z)
#define CT_SCLN    MT(MOD_LCTL, KC_SCOLON)
#define SF_SLSH    MT(MOD_LSFT, KC_SLASH)
#define CT_DEL     LCTL(KC_DEL)
#define AL_C       MT(MOD_LALT, KC_C)
#define GU_V       MT(MOD_LGUI, KC_V)
#define CT_TAB     MT(MOD_LCTL, KC_TAB)
#define SF_SPC     MT(MOD_LSFT, KC_SPC)
//redefine more easy
#define KC_ KC_TRNS
#define _______ KC_TRNS
#define _A KC_A
#define _B KC_B
#define _C KC_C
#define _D KC_D
#define _E KC_E
#define _F KC_F
#define _G KC_G
#define _H KC_H
#define _I KC_I
#define _J KC_J
#define _K KC_K
#define _L KC_L
#define _M KC_M
#define _N KC_N
#define _O KC_O
#define _P KC_P
#define _Q KC_Q
#define _R KC_R
#define _S KC_S
#define _T KC_T
#define _U KC_U
#define _V KC_V
#define _W KC_W
#define _X KC_X
#define _Y KC_Y
#define _Z KC_Z
//numbers 
#define _0 KC_0 
#define _1 KC_1 
#define _2 KC_2 
#define _3 KC_3 
#define _4 KC_4 
#define _5 KC_5 
#define _6 KC_6 
#define _7 KC_7 
#define _8 KC_8 
#define _9 KC_9 
#define COMMA KC_COMMA   
#define GRV   KC_GRAVE   
#define BSLSH KC_BSLASH  
#define SPC   KC_SPC     
#define BSPC  KC_BSPC    
#define DEL   KC_DEL     
#define ENT   KC_ENT  
#define ESC   KC_ESC
#define TAB   KC_TAB
//mouse
#define M_MVU KC_MS_UP
#define M_MVD KC_MS_DOWN
#define M_MVL KC_MS_LEFT
#define M_MVR KC_MS_RIGHT
#define M_BL  KC_MS_BTN1
#define M_BR  KC_MS_BTN2
#define M_WU  KC_MS_WH_UP
#define M_WD  KC_MS_WH_DOWN
#define M_WL  KC_MS_WH_LEFT
#define M_WR  KC_MS_WH_RIGHT
//arrow
#define ARR_U KC_UP
#define ARR_D KC_DOWN
#define ARR_L KC_LEFT
#define ARR_R KC_RIGHT
//layers
#define LAYER0_DEFAULT 0
#define LAYER1_SYSTEM  1
#define LAYER2_B       2
#define LAYER3_N       3
#define LAYER4_M       4
#define LAYER5_DOT     5
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [LAYER0_DEFAULT] = LAYOUT_ortho_3x10(
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
     L1_Q   ,  _W   ,  _E   ,  _R   ,  _T   ,  _Y   ,  _U   ,  _I   ,  _O   ,  _P   ,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     CT_A   ,  _S   ,  _D   ,  _F   ,  _G   ,  _H   ,  _J   ,  _K   ,  _L   ,CT_SCLN,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     SF_Z   ,  _X   ,AL_C   ,GU_V   ,L2_B   ,L3_N   ,L4_M   , COMMA ,L5_DOT ,SF_SLSH
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  ),

  [LAYER1_SYSTEM] = LAYOUT_ortho_3x10(
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
     _______,_______,_______,_______,_______,_______,_______,_______,_______, CT_DEL,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     _______,_______,_______,_______,_______,_______,_______,_______,_______, BL_INC,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     _______,_______,_______,_______,_______,_______, RESET ,_______,_______, BL_DEC
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  ),

  [LAYER2_B] = LAYOUT_ortho_3x10(
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
       _1   ,  _2   ,  _3   ,  _4   ,  _5   ,  _6   ,  _7   ,  _8   ,  _9   ,  _0   ,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     _______,_______,_______,_______,  DEL ,   BSPC ,_______,_______,_______, BSLSH ,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     _______,_______,_______,_______,_______,SF_SPC ,  SPC  ,KC_LBRC,KC_RBRC,  ENT
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  ),

  [LAYER3_N] = LAYOUT_ortho_3x10(
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
       ESC  ,_______,_______,_______,_______,_______,_______,_______,  GRV  ,KC_MINS,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
       TAB  ,_______,_______,_______,  DEL  ,  BSPC ,_______,_______,KC_QUOT,KC_EQL ,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     _______,_______,_______,_______,_______,_______,  SPC  ,_______,  ESC  ,  ENT
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  ),

  [LAYER4_M] = LAYOUT_ortho_3x10(
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
       ESC  ,_______, M_MVU ,_______, M_WD  ,_______,_______, ARR_U ,_______, M_BL  ,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     _______, M_MVL , M_MVD , M_MVR , M_WU  ,KC_HOME, ARR_L , ARR_D , ARR_R , M_BR  ,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     _______,_______,_______,_______,_______,KC_END ,_______,_______,  ESC  ,  ENT
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  ),

  [LAYER5_DOT] = LAYOUT_ortho_3x10(
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
      KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,_______,_______,_______,_______,_______,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
      KC_F6 , KC_F7 , KC_F8 , KC_F9 , KC_F10,_______,_______,_______,_______,_______,
  //|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
      KC_F11, KC_F12,_______,_______,_______,_______,_______,_______,_______,_______
  //+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  ),

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

  if (usb_led & (1 << USB_LED_NUM_LOCK)) {
    DDRD |= (1 << 5); PORTD &= ~(1 << 5);
  } else {
    DDRD &= ~(1 << 5); PORTD &= ~(1 << 5);
  }

  if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
    DDRB |= (1 << 0); PORTB &= ~(1 << 0);
  } else {
    DDRB &= ~(1 << 0); PORTB &= ~(1 << 0);
  }

  if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

  } else {

  }

  if (usb_led & (1 << USB_LED_COMPOSE)) {

  } else {

  }

  if (usb_led & (1 << USB_LED_KANA)) {

  } else {

  }

}
