#ifndef GAME_H
#define GAME_H

#include <stdint.h>  // for uint16_t, uint32_t

// Extern global variables (defined in game.c)
extern volatile float pitch;
extern volatile float roll;

extern volatile float x_acc;
extern volatile float y_acc;
extern volatile float x_velo;
extern volatile float y_velo;
extern volatile float x_pos;
extern volatile float y_pos;
extern volatile float x_pos_old;
extern volatile float y_pos_old;

extern volatile uint32_t x_ball_random;
extern volatile uint32_t y_ball_random;
extern volatile uint32_t x_hole_random;
extern volatile uint32_t y_hole_random;

// Function declarations
void game(void);
int collision(uint16_t x_ball, uint16_t y_ball, uint16_t x_hole, uint16_t y_hole);
void get_random_number(void);
void EXTI_Init(void);

#endif // GAME_H
