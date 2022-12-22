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

<<<<<<< HEAD
int FSM_Buzzer_State = OFF;
=======
//int FSM_Buzzer_State = OFF;

TIM_HandleTypeDef htim2;
>>>>>>> 906bd82a3581f7b670db585618f455e211a3e553

TIM_HandleTypeDef htim2;

void FSM_Buzzer(){
	switch(FSM_Buzzer_State){
	case OFF:
		set_off_buzzer();
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, 0);
		break;
	case ONE_BIP:
		if(timer32_flag==1){  //end 1s
			FSM_Buzzer_State = OFF;
			set_off_buzzer();
		}
<<<<<<< HEAD
		//red_traffic_light = 0
		if(time_red_horizontal_temp==0){
			FSM_Buzzer_State=OFF;
			__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,0);
=======
		else {
//			//pedes button pressed, 1 beep
				__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, 399);
				set_on_buzzer();
>>>>>>> 906bd82a3581f7b670db585618f455e211a3e553
		}

		break;
	case LOUDER_BIP:
		//0 < red_traffic_light < 4s
		if(time_red_horizontal_temp < 4 ){
			__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,Increase_Duty_Cycle);
//			HAL_GPIO_TogglePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin);
			set_on_buzzer();
			Increase_Duty_Cycle += 50;
			if(Increase_Duty_Cycle >= 999){
				Increase_Duty_Cycle = 99;
			}
		}
		else {
			FSM_Buzzer_State = OFF;
			set_off_buzzer();
		}
		break;
	default:
		break;
	}
}

