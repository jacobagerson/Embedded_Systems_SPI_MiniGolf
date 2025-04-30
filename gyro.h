#ifndef GYRO_H
#define GYRO_H

#include <stm32l432xx.h>
#include "ee14lib.h"
#include <math.h>

#ifndef PI
#define PI 3.14159265358979323846f
#endif

// I2C address for MPU-6050 (AD0 pin low)
#ifndef MPU_ADDRESS
#define MPU_ADDRESS 0x68
#endif

/**
 * @brief   Computes the pitch angle (degrees) from accelerometer data.
 * @return  Pitch in degrees.
 */
float get_pitch(void);

/**
 * @brief   Computes the roll angle (degrees) from accelerometer data.
 * @return  Roll in degrees.
 */
float get_roll(void);

#endif // GYRO_H