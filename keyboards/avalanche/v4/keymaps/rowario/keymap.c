#include QMK_KEYBOARD_H

enum layer {
    _QWERTY,
	_NUMBERS,
	_SYMBOLS,
	_LIGHT,
	_ARROWS,
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	[_QWERTY] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD),		ENCODER_CCW_CW(KC_PGDN, KC_PGUP)  },
	[_NUMBERS] =  { ENCODER_CCW_CW(KC_VOLU, KC_VOLD),		ENCODER_CCW_CW(KC_PGDN, KC_PGUP)  },
	[_SYMBOLS] =  { ENCODER_CCW_CW(KC_VOLU, KC_VOLD),		ENCODER_CCW_CW(KC_PGDN, KC_PGUP)  },
	[_LIGHT] =    { ENCODER_CCW_CW(RGB_VAI, RGB_VAD),       ENCODER_CCW_CW(RGB_MOD, RGB_RMOD) },
	[_ARROWS] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD),		ENCODER_CCW_CW(KC_PGDN, KC_PGUP)  },
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT(
				 KC_NO,	   KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,						        		 KC_NO,   KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,
				 KC_GRV,   KC_Q,   KC_W,   KC_E,     KC_R,     KC_T,							        	 KC_Y,    KC_U,     KC_I,     KC_O,    KC_P,     KC_LBRC,
		KC_ESC,  KC_TAB,   KC_A,   KC_S,   KC_D,     KC_F,     KC_G,							        	 KC_H,    KC_J,     KC_K,     KC_L,    KC_SCLN,  KC_QUOT,  KC_RBRC,
				 KC_LSFT,  KC_Z,   KC_X,   KC_C,     KC_V,     KC_B,    KC_MUTE,  MO(4),  MO(3),  KC_F3,     KC_N,    KC_M,     KC_COMM,  KC_DOT,  KC_SLSH,  KC_BSLS,
										   KC_LGUI,  KC_LCTL,  KC_SPC,  KC_LALT,  MO(2),  MO(1),  KC_BSPC,   KC_ENT,  KC_RALT,  KC_LGUI
	),
    [_NUMBERS] = LAYOUT(
				 KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,								    KC_NO,  KC_NO,    KC_NO,   KC_NO,  KC_NO,   KC_NO,
				 KC_NO,    KC_F1,  KC_F2,  KC_F3,    KC_F4,    KC_F5,								    KC_F6,  KC_F7,    KC_F8,   KC_F9,  KC_F10,  KC_PSCR,
		KC_NO,   KC_NO,    KC_1,   KC_2,   KC_3,     KC_4,     KC_5,								    KC_6,   KC_7,     KC_8,    KC_9,   KC_0,    KC_NO,    KC_NO,
				 KC_LSFT,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO, KC_NO,     KC_NO, KC_NO,   KC_NO, KC_NO,  KC_NO,    KC_NO,   KC_NO,  KC_NO,   KC_RSFT,
										   KC_LGUI,  KC_LCTL,  KC_NO, KC_LALT,   KC_NO, KC_TRNS, KC_NO, KC_NO,  KC_RALT,  KC_RGUI
	),
    [_SYMBOLS] = LAYOUT(
			    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,									    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
				KC_NO,  KC_UNDS,  KC_PIPE,  KC_PMNS,  KC_LT,    KC_EQL,								        KC_EXLM,  KC_GT,    KC_PPLS,  KC_PSLS,  KC_AMPR,  KC_NO,
		KC_NO,  KC_NO,  KC_CIRC,  KC_TILD,  KC_LPRN,  KC_LCBR,  KC_LBRC,							 	    KC_RBRC,  KC_RCBR,  KC_RPRN,  KC_DQUO,  KC_ASTR,  KC_NO,  KC_NO,
				KC_NO,  KC_NO,    KC_PCMM,  KC_AT,    KC_HASH,  KC_COLN,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_SCLN,  KC_DLR,   KC_PERC,  KC_PDOT,  KC_NO,    KC_NO,
											KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_TRNS,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO
	),
    [_LIGHT] = LAYOUT(
			      KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,									   KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,  KC_NO,
			      KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,									   KC_NO,    RGB_RMOD,  RGB_MOD,  KC_NO,    KC_NO,  KC_NO,
		RGB_TOG,  KC_NO,  KC_NO,  RGB_HUI,  RGB_SAI,  RGB_SAD,  RGB_HUD,								   RGB_SPD,  RGB_VAD,   RGB_VAI,  RGB_SPI,  KC_NO,  KC_NO,  RGB_TOG,
			      KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_TRNS, KC_NO,  KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,  KC_NO,
											KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,   KC_NO,  KC_NO,    KC_NO,     KC_NO
	),
    [_ARROWS] = LAYOUT(
			    KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,										KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,  KC_NO,
			    KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,									    KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,  KC_NO,
		KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,										KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT,  KC_NO,  KC_NO,   KC_NO,
				KC_LSFT,  KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_TRNS,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,  KC_RSFT,
											KC_LGUI,  KC_LCTL,  KC_NO,  KC_LALT,  KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_RALT,  KC_LGUI
	)
};


#ifdef OLED_ENABLE
#define WIDTH 128
char wpm_str[9];

void render_short_array_pos(const uint16_t *frame, uint8_t x, uint8_t y, uint8_t width) {
    uint16_t size = pgm_read_word(&(frame[0])) + 1;
    for (uint16_t i = 1; i < size; i++) {
        uint16_t cur_px = pgm_read_word(&(frame[i]));

        bool on = (cur_px & (1 << 15)) >> 15;
        cur_px &= ~(1UL << 15);

        uint8_t x_cur = (cur_px % width) + x;
        uint8_t y_cur = (cur_px / width) + y;
        oled_write_pixel(x_cur, y_cur, on);
    }
}

void render_short_array(const uint16_t *frame) {
    render_short_array_pos(frame, 0, 0, WIDTH);
}

#define IDLE_FRAMES 5
#define IDLE_SPEED 20

#define TAP_FRAMES 2
#define TAP_SPEED 35

#define PREP_FRAMES 1

#define ANIM_FRAME_DURATION 200
#define ANIM_SIZE 636

uint32_t anim_timer = 0;
uint32_t anim_sleep = 0;
uint8_t current_idle_frame = 0;
uint8_t current_tap_frame = 0;

void render_anim(void) {
    static const uint16_t base[] PROGMEM = {223,   32968, 32969, 32970, 33095, 33099, 33222, 33228, 33346, 33347, 33348, 33349, 33356, 33470, 33471, 33472, 33473, 33484, 33596, 33597, 33613, 33723, 33742, 33789, 33790, 33791, 33844, 33845, 33850, 33871, 33872, 33913, 33914, 33915, 33916, 33971, 33974, 33975, 33976, 33977, 34001, 34036, 34037, 34038, 34039, 34040, 34098, 34130, 34160, 34161, 34162, 34163, 34226, 34259, 34283, 34284, 34285, 34286, 34287, 34354, 34379, 34380, 34388, 34407, 34408, 34409, 34410, 34483, 34507, 34508, 34517, 34530, 34531, 34532, 34533, 34534, 34611, 34638, 34639, 34640, 34641, 34646, 34654, 34655, 34656, 34657, 34740, 34751, 34752, 34762, 34766, 34767, 34768, 34769, 34775, 34779, 34780, 34781, 34868, 34879, 34880, 34884, 34887, 34888, 34889, 34890, 34903, 34904, 34905, 34906, 34996, 35013, 35014, 35032, 35123, 35132, 35133, 35134, 35135, 35150, 35151, 35160, 35250, 35260, 35261, 35262, 35263, 35273, 35274, 35275, 35276, 35277, 35280, 35281, 35288, 35378, 35397, 35398, 35399, 35400, 35410, 35411, 35412, 35413, 35414, 35415, 35506, 35522, 35523, 35524, 35633, 35649, 35761, 35778, 35889, 35892, 35893, 35894, 35895, 35896, 35897, 35906, 36016, 36017, 36018, 36019, 36026, 36027, 36034, 36142, 36143, 36156, 36157, 36162, 36266, 36267, 36268, 36269, 36286, 36287, 36288, 36289, 36390, 36391, 36392, 36393, 36514, 36515, 36516, 36517, 36638, 36639, 36640, 36641, 36762, 36763, 36764, 36765, 36886, 36887, 36888, 36889, 37010, 37011, 37012, 37013, 37134, 37135, 37136, 37137, 37258, 37259, 37260, 37261, 37382, 37383, 37384, 37385, 37506, 37507, 37508, 37509, 37632, 37633};

    static const uint16_t  idle_diff_0[] PROGMEM  = {0};
    static const uint16_t  idle_diff_2[] PROGMEM  = {22, 32841, 32842, 201, 202, 32971, 331, 33100, 588, 33357, 716, 33485, 33716, 33717, 33843, 1076, 1077, 33846, 33847, 33970, 1203, 1206, 1207};
    static const uint16_t  idle_diff_3[] PROGMEM  = {104, 200, 327, 33096, 454, 33223, 578, 579, 580, 581, 33350, 702, 703, 704, 705, 33474, 33475, 33476, 33477, 716, 33485, 828, 829, 33598, 33599, 33600, 33601, 955, 33724, 33725, 33741, 974, 1082, 33851, 33870, 1103, 1104, 1208, 1209, 33978, 33999, 34000, 1233, 34104, 34105, 34129, 1362, 34258, 1491, 1611, 1612, 34387, 1620, 34482, 1715, 34516, 1749, 34635, 34636, 1870, 1871, 1872, 1873, 34645, 1878, 34739, 1972, 1983, 1984, 1994, 34774, 2007, 2116, 2119, 2120, 2121, 34894, 34895, 34896, 34897, 35007, 35008, 35012, 2245, 2246, 35015, 35016, 35017, 35018, 2355, 35124, 2364, 2365, 2366, 2367, 35141, 35142, 2482, 35251, 35388, 35389, 35390, 35391, 2865, 35634};
    static const uint16_t  idle_diff_4[] PROGMEM  = {20, 200, 201, 202, 327, 33096, 33097, 33098, 331, 454, 33223, 33227, 460, 33350, 1076, 1077, 1203, 33972, 33973, 1330, 34099};
    static const uint16_t *idle_diff[IDLE_FRAMES] = {idle_diff_0, idle_diff_0, idle_diff_2, idle_diff_3, idle_diff_4};

    static const uint16_t  prep_diff_0[] PROGMEM  = {107, 32841, 32842, 201, 202, 32971, 331, 33100, 588, 33357, 716, 33485, 33716, 33717, 33843, 1076, 1077, 33846, 33847, 33875, 33876, 33877, 33878, 33970, 1203, 1206, 1207, 34002, 34007, 34133, 34136, 34257, 34263, 34264, 34385, 34389, 34392, 34512, 34516, 34520, 1870, 1871, 1873, 1878, 34648, 34746, 34747, 34748, 1998, 1999, 2001, 34873, 34875, 34877, 35000, 35005, 35027, 35028, 35029, 35030, 2264, 35128, 35129, 2365, 2367, 35152, 35153, 35154, 2392, 35255, 35258, 35259, 2492, 2493, 2495, 2512, 2513, 2520, 35383, 35386, 35387, 35390, 2642, 2643, 2644, 2645, 2646, 2647, 35518, 35646, 35647, 35648, 35770, 35771, 35772, 35773, 3010, 3138, 3258, 3259, 3266, 3388, 3389, 3394, 3518, 3519, 3520, 3521};
    static const uint16_t *prep_diff[PREP_FRAMES] = {prep_diff_0};

    static const uint16_t  tap_diff_0[] PROGMEM = {187,  32841, 32842, 201,  202,   32971, 331,   33100, 33238, 33239, 33240, 33241, 588,  33357, 33366, 33367, 33368, 33369, 716,   33485, 33494, 33495, 33496, 33497, 33622, 33623, 33624, 33625, 33716, 33717, 33750, 33751, 33752, 33753, 33759, 33760, 33843, 1076,  1077,  33846, 33847, 33878, 33879, 33880, 33881, 33886, 33887, 33888, 33889, 33970, 1203,  1206,  1207,  34006, 34007, 34008, 34013, 34014, 34015, 34016, 34017, 34135, 34136, 34140, 34141, 34142, 34143, 34144, 34145, 34146, 34264, 34267, 34268, 34269, 34270, 34271, 34272, 34273, 34274, 34395, 34396, 34397, 34398, 34399, 34400, 34523, 34524, 1870, 1871, 1872, 1873, 34746, 34747, 34748,
                                                   1998, 1999,  2000,  2001, 34873, 34875, 34877, 2135,  35000, 35005, 35128, 35129, 2365, 2367,  35162, 35163, 35164, 35165, 35166, 35167, 35168, 35169, 35170, 35255, 35258, 35259, 2492,  2493,  2495,  35290, 35291, 35292, 35293, 35294, 35295, 35296, 35297, 35298, 35383, 35386, 35387, 35390, 35418, 35419, 35420, 35421, 35422, 35423, 35424, 35425, 35518, 35546, 35547, 35548, 35549, 35550, 35551, 35552, 35553, 35646, 35647, 35648, 35675, 35676, 35677, 35678, 35679, 35680, 35770, 35771, 35772, 35773, 3010,  35804, 35805, 35806, 35807, 35808, 3138,  35933, 35934, 35935, 3258,  3259,  3266,  36062, 36063, 3388, 3389, 3394, 3518, 3519,  3520,  3521};
    static const uint16_t  tap_diff_1[] PROGMEM = {187,   32841, 32842, 201,   202,   32971, 331,   33100, 588,   33357, 716,   33485, 33716, 33717, 33843, 1076,  1077,  33846, 33847, 33875, 33876, 33877, 33878, 33970, 1203,  1206,  1207,  34002, 34007, 34133, 34136, 34257, 34263, 34264, 34385, 34389, 34392, 34512, 34516, 34520, 1870,  1871,  1873,  1878,  34648, 1998,  1999,  2001,  35027, 35028, 35029, 35030, 2264,  2364,  2365,  2366,  2367,  35152, 35153, 35154, 2392,  2492,  2493,  2494,  2495,  2512,  2513,  2520,  2642,  2643,  2644,  2645,  2646,  2647,  36274, 36275, 36276, 36277, 36278, 36279, 36280, 36402, 36403, 36404, 36405, 36406, 36407, 36408, 36409, 36530, 36531, 36532, 36533, 36534,
                                                   36535, 36536, 36537, 36658, 36659, 36660, 36661, 36662, 36663, 36800, 36801, 36802, 36803, 36922, 36923, 36924, 36928, 36929, 36930, 36931, 36932, 37049, 37050, 37051, 37052, 37056, 37057, 37058, 37059, 37060, 37061, 37176, 37177, 37178, 37179, 37180, 37184, 37185, 37186, 37187, 37188, 37189, 37190, 37303, 37304, 37305, 37306, 37307, 37312, 37313, 37314, 37315, 37316, 37317, 37318, 37319, 37430, 37431, 37432, 37433, 37434, 37435, 37440, 37441, 37442, 37443, 37444, 37445, 37446, 37447, 37558, 37559, 37560, 37561, 37562, 37563, 37568, 37569, 37570, 37571, 37572, 37573, 37687, 37688, 37689, 37690, 37696, 37697, 37698, 37699, 37817, 37818, 37824, 37825};
    static const uint16_t *tap_diff[TAP_FRAMES] = {tap_diff_0, tap_diff_1};

    void animation_phase(void) {
        oled_clear();
        if (get_current_wpm() <= IDLE_SPEED) {
            current_idle_frame = (current_idle_frame + 1) % IDLE_FRAMES;
            render_short_array(base);
            render_short_array(idle_diff[current_idle_frame]);
        }
        if (get_current_wpm() > IDLE_SPEED && get_current_wpm() < TAP_SPEED) {
            render_short_array(base);
            render_short_array(prep_diff[0]);
        }
        if (get_current_wpm() >= TAP_SPEED) {
            current_tap_frame = (current_tap_frame + 1) % TAP_FRAMES;
            render_short_array(base);
            render_short_array(tap_diff[current_tap_frame]);
        }
    }

    if (get_current_wpm() != 0) {
        oled_on();
        if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
            anim_timer = timer_read32();
            animation_phase();
        }
        anim_sleep = timer_read32();
    } else {
        if (timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
            oled_off();
        } else {
            if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
                anim_timer = timer_read32();
                animation_phase();
            }
        }
    }
}

void render_layer_state(void) {
	oled_set_cursor(0, 5);
	switch (get_highest_layer(layer_state)) {
		case _QWERTY: oled_write_P(PSTR("Layer: QWERTY"), false); break;
		case _NUMBERS: oled_write_P(PSTR("Layer: NUMBERS"), false); break;
		case _SYMBOLS: oled_write_P(PSTR("Layer: SYMBOLS"), false); break;
		case _LIGHT: oled_write_P(PSTR("Layer: LIGHT"), false); break;
		case _ARROWS: oled_write_P(PSTR("Layer: ARROWS"), false); break;
		default: oled_write_P(PSTR("Layer: Undefined"), false); 
	}
}

void render_wpm(void) {
	oled_set_cursor(0, 6);
	sprintf(wpm_str, "Wpm: %03d", get_current_wpm());
	oled_write(wpm_str, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_anim();
		render_layer_state();
		render_wpm();
    }
    return false;
}
#endif
