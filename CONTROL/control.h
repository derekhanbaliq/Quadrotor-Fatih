#ifndef CONTROL_H
#define CONTROL_H

#include "stm32f4xx.h"
#include "structconfig.h"

void Control(FLOAT_ANGLE *acc_in, FLOAT_XYZ *gyr_in, RC_TYPE *rc_in, u8 armed);
s16 Yaw_Control(float TARGET_YAW);
void Yaw_Carefree(FLOAT_ANGLE *Target_Angle, const FLOAT_ANGLE *Measure_Angle);
void Safety_Check(void);

#endif
