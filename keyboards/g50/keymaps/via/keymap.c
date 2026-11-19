#include QMK_KEYBOARD_H

// 初始键位全部设为 KC_A。
// 编译并连接 VIA 后，可在 VIA 中逐个设置键位。
// 当前布局是 8x16 调试网格，不代表笔记本键帽的真实物理排列。
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A
    )
};

static const char *row_text[] = {
    "R0 C", "R1 C", "R2 C", "R3 C",
    "R4 C", "R5 C", "R6 C", "R7 C"
};

static const char *col_text[] = {
    "0\n", "1\n", "2\n", "3\n",
    "4\n", "5\n", "6\n", "7\n",
    "8\n", "9\n", "10\n", "11\n",
    "12\n", "13\n", "14\n", "15\n"
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        uint8_t row = record->event.key.row;
        uint8_t col = record->event.key.col;

        if (row < MATRIX_ROWS && col < MATRIX_COLS) {
            send_string(row_text[row]);
            send_string(col_text[col]);
        }
    }

    // 阻止普通 A 键输出，只输出矩阵坐标
    return false;
}
