#ifndef _INTERRUPT_H_
#define _INTERRUPT_H_

#include "main.h"
#include "stdbool.h"
struct keys
{
  uchar judge_sta;
	bool key_sta;
	bool single_flag;
	bool long_flag;
	uint key_time;
};

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
 void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim);
#endif

