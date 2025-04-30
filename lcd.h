#ifndef __LCD_H
#define __LCD_H

#include "ee14lib.h"  // Required for gpio functions, delay, etc.
#include <stdint.h>   // For uint8_t, uint16_t types
#include <stdbool.h>  // For bool type

// Pins Used
#define RST D6
#define DC  A2
#define CS  D3
#define BL  D9

// Display characteristics
#define HEIGHT 280
#define WIDTH  240

// Colors
#define WHITE       0xFFFF
#define BLACK       0x0000  
#define BLUE        0x001F  
#define BRED        0xF81F
#define GRED        0xFFE0
#define GBLUE       0x07FF
#define RED         0xF800
#define MAGENTA     0xF81F
#define GREEN       0x07E0
#define CYAN        0x7FFF
#define YELLOW      0xFFE0
#define BROWN       0xBC40 
#define BRRED       0xFC07 
#define GRAY        0x8430 
#define DARKBLUE    0x01CF	
#define LIGHTBLUE   0x7D7C	 
#define GRAYBLUE    0x5458 
#define LIGHTGREEN  0x841F 
#define LGRAY       0xC618 
#define LGRAYBLUE   0xA651
#define LBBLUE      0x2B12
#define golfgreen  0x0700

// ——— Digit parameters — tweak to change overall size ———
#define SEG_LEN 70   // length of each segment
#define THICK    14   // segment thickness
#define DIGIT_W  SEG_LEN
#define DIGIT_H  (2*SEG_LEN + THICK)

// Initialization Functions
void dev_init(void);
void lcd_init(void);
void lcd_reset(void);
void lcd_setAttributes(void);
void lcd_initReg(void);

// Set Functions
void set_CS(bool set);
void set_DC(bool set);
void set_RST(bool set);
void set_backLight(unsigned int value);
void set_PWM(unsigned int value);

// Command/Data Functions
void lcd_sendCommand(uint8_t data);
void lcd_sendData(uint8_t data);
void lcd_send16Bit(uint16_t data);

// Window and Clear Functions
void lcd_set_windows(uint16_t Xstart, uint16_t Ystart, uint16_t Xend, uint16_t Yend);
void lcd_clear(uint16_t Color);
void draw_pixel(uint16_t X, uint16_t Y, uint16_t Color);
void paint_rectangle(uint16_t Xin, uint16_t Yin, uint16_t Radius, uint16_t Color);
void lcd_setBackground(uint16_t color);
void draw_ball(uint16_t Xin, uint16_t Yin, uint16_t color);
void draw_ball_test(uint16_t Xin, uint16_t Yin, uint16_t color, uint16_t radius);
void draw_title_screen(void);
void draw_flag(int offset);
void draw_digit(uint8_t digit, uint16_t X, uint16_t Y,uint16_t color);

#endif // __LCD_H