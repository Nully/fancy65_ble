#ifndef SLAVE_CONFIG_H_
#define SLAVE_CONFIG_H_

#include "custom_board.h"

#define THIS_DEVICE_ROWS 5
#define MATRIX_ROW_PINS { PIN7, PIN8, PIN9, PIN10, PIN11 }

#define THIS_DEVICE_COLS 6
#define MATRIX_COL_PINS { PIN20, PIN19, PIN18, PIN17, PIN16, PIN15 }

#define IS_LEFT_HAND  false

// Helix keyboard OLED support
//      see ./rules.mk: OLED_ENABLE=yes or no
#ifdef OLED_ENABLE
  #define SSD1306OLED
#endif

#endif /* SLAVE_CONFIG_H_ */
