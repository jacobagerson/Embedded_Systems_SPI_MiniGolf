# Embedded Systems Project - Mini Golf on STM 

A fully integrated embedded system project that simulates a mini golf game using an STM32L432KC microcontroller. The game uses an LCD screen for graphics, an MPU-6050 gyroscope for motion input, and implements multiple low-level communication protocols including SPI, I2C, UART, and SysTick-based timing.

# Features

Tilt-Controlled Gameplay: users utilize the gyroscope's functionality to control the ball direction and velocity by moving their wrist.
LCD Graphics: Interactive screen rendered with SPI, with a title screen, ball animation, hole detection, and score screen.
Randomized Holes: The position of the ball and hole vary each round using the built in RNG feature on the microcontroller.
Precise Timing: Utilizes the SysTick peripheral interrupt to have delays which can be as small as a millisecond.

# Hardware Used

Microcontroller: Nucleo L432KC board with CMSIS framework
Sensors: MPU-6050 gyroscope and accelerometer
Display: 1.69 inch LCD, 240 x 280 pixels, with SPI interface
Inputs: External push buttons used for game start and reset
Software
Peripherals
SPI: used for LCD communication
I2C: used for MPU-6050 communication
RNG: for generating random position for both the hole and ball
SysTick: to create delays and keep track of time

# File Structure
File : Description

main.c : Entry point of the program, initializes hardware

game.c/h : Game logic, collision detection, motion handling

lcd.c/h : LCD control and rendering functions

gyro.c/h : Computes pitch and roll from MPU-6050 data

i2c.c : Low-level I2C driver for MPU-6050

spi.c/h : Low-level SPI driver for LCD

uart.c : UART configuration and serial I/O

rng.c/h : Hardware random number generator initialization

systick.c/h : SysTick configuration and delay function

ee14lib.h : Shared utilities and pin definitions, custom module created by professor for labs and modified for this project

stm32l432xx.h : MCU-specific register and peripheral mapping

# Block Diagram

<img width="371" alt="Screenshot 2025-05-14 at 11 52 17 AM" src="https://github.com/user-attachments/assets/3520d631-14da-4363-8eaa-eeaa0550988f" />

# State Machine

<img width="374" alt="Screenshot 2025-05-14 at 11 52 32 AM" src="https://github.com/user-attachments/assets/a24c08c4-9d1e-4834-a8d7-0cea9b34949b" />





