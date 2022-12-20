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

//int FSM_Buzzer_State = OFF;

TIM_HandleTypeDef htim2;

void FSM_Buzzer(){
	switch(FSM_Buzzer_State){
	case OFF:
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, 0);
		HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, RESET);
		break;
	case ON:
		//pedes button pressed, 1 beep
		if(timer31_flag==1){
			setTimer32(1000); //set 1 second
			__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, 399);
			HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, SET);
		}
		if(timer32_flag==1){  //end 1s
			FSM_Buzzer_State=OFF;
			setTimer32(1000); //set 1 second
		}
		//0 < red_traffic_light < 4s
		if(time_red_horizontal_temp<4){
			__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,Increase_Duty_Cycle);
			HAL_GPIO_TogglePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin);
			Increase_Duty_Cycle += 50;
			if(Increase_Duty_Cycle >= 999){
				Increase_Duty_Cycle = 989;
			}
			//red_traffic_light = 0
			if(time_red_horizontal_temp==0){
				FSM_Buzzer_State=OFF;
			}
		}
		// 2 beep when traffic light is green
		if(timer31_flag==1 && status_pedestrian_light ==pedes_green ){
			setTimer33(2000); //set 2 seconds
			setTimer32(1000);
			__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, 399);
			HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, SET);
			if(timer32_flag=1){
				__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, 0);
				HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, RESET);
				setTimer32(1000);
			}
			if(timer33_flag==1){
				FSM_Buzzer_State=OFF;
			}
		}
		break;
	default:
		break;
	}
}

