#ifndef LCD_H
#define LCD_H
#include <stdint.h>

// LCD Pin Definitions
#define RS GPIO_NUM_21
#define EN GPIO_NUM_22
#define D4 GPIO_NUM_16
#define D5 GPIO_NUM_17
#define D6 GPIO_NUM_18
#define D7 GPIO_NUM_19

// LCD Functions
void lcd_init(void);
void lcd_write_char(char c);
void lcd_write_string(const char* str);
void lcd_write_command(uint8_t cmd);

#endif 