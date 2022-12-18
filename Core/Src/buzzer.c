/*
 * buzzer.c
 *
 *  Created on: 10 thg 12, 2022
 *      Author: Administrator
 */
#include "main.h"
#include "buzzer.h"
#include "fsm_system.h"
#include "global.h"
#include "button.h"
#include "traffic.h"
#include "control_7SEG.h"
#include "traffic_buffer.h"
#include "fsm_traffic_blink.h"
#include "fsm_mannual.h"
#include "software_timer.h"
int FSM_Buzzer_State = OFF;

void FSM_Buzzer(){
	switch(FSM_Buzzer_State){
	case OFF:
		if(isButton_Pedes_Pressed()){
			FSM_Buzzer_State=ON;
		}
		break;
	case ON:
		//pedes button pressed, 1 beep


		//red_traffic_light < 4s
		if(time_red_horizontal_temp<4){
//			__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANEL_1,0);
		}
		//red_traffic_light = 0
		if(time_red_horizontal_temp==0){
			FSM_Buzzer_State=OFF;
			__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANEL_1,0);
		}

		break;
	default:
		break;
	}
}

