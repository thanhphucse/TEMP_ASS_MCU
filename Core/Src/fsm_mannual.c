/*
 * fsm_mannual.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */
#include "fsm_mannual.h"
#include "fsm_system.h"
#include "software_timer.h"
#include "global.h"
#include "traffic.h"
#include "button.h"
#include "fsm_traffic_blink.h"
#include "main.h"
#include <stdio.h>

UART_HandleTypeDef huart2;
uint8_t str1[30] = " ";

status_mannual = mannual_init;

void fsm_mannual_run(){
	switch(status_mannual){
		case mannual_init:
			status_mannual = mannual_red_green;
			setTimer9(5000);
			break;
		case mannual_red_green:
			if(timer9_flag == 1){
				status_system = INIT;
				status_mannual = mannual_init;
				status_traffic_blink_horizontal = init_horizontal;
				status_traffic_blink_vertical = init_vertical;

//				HAL_UART_Transmit(&huart2, str, sprintf(str, "%s \n", "\rMODE 1 \r"), 1000);

				resetTimeTraffic();
				break;
			}
			if(isButton_BUT2_Pressed() == 1){
				status_mannual = mannual_red_yellow;
				setTimer9(5000);
			}
			if(isButton_BUT1_Pressed() == 1){
				status_mannual = mannual_init;
				status_system = MODE2;
				HAL_UART_Transmit(&huart2, str1, sprintf(str1, "%s \n", "\rMODE 2 \r"), 1000);
				HAL_UART_Transmit(&huart2, str1, sprintf(str1, "%d \n", time_red_vertical), 1000);
			}
			setRed_horizontal();
			setGreen_vertical();
			break;
		case mannual_red_yellow:
			if(timer9_flag == 1){
				status_system = INIT;
				status_mannual = mannual_init;
				status_traffic_blink_horizontal = init_horizontal;
				status_traffic_blink_vertical = init_vertical;

				resetTimeTraffic();
				break;
			}
			if(isButton_BUT2_Pressed() == 1){
				status_mannual = mannual_green_red;
				setTimer9(5000);
			}
			if(isButton_BUT1_Pressed() == 1){
				status_mannual = mannual_init;
				status_system = MODE2;
				HAL_UART_Transmit(&huart2, str1, sprintf(str1, "%s \n", "\rMODE 2 \r"), 1000);
				HAL_UART_Transmit(&huart2, str1, sprintf(str1, "%d \n", time_red_vertical), 1000);
			}
			setRed_horizontal();
			setYellow_vertical();
			break;
		case mannual_green_red:
			if(timer9_flag == 1){
				status_system = INIT;
				status_mannual = mannual_init;
				status_traffic_blink_horizontal = init_horizontal;
				status_traffic_blink_vertical = init_vertical;

				resetTimeTraffic();
				break;
			}
			if(isButton_BUT2_Pressed() == 1){
				status_mannual = mannual_yellow_red;
				setTimer9(5000);
			}
			if(isButton_BUT1_Pressed() == 1){
				status_system = MODE2;
				status_mannual = mannual_init;
				HAL_UART_Transmit(&huart2, str1, sprintf(str1, "%s \n", "\rMODE 2 \r"), 1000);
				HAL_UART_Transmit(&huart2, str1, sprintf(str1, "%d \n", time_red_vertical), 1000);
			}
			setGreen_horizontal();
			setRed_vertical();
			break;
		case mannual_yellow_red:
			if(timer9_flag == 1){
				status_system = INIT;
				status_mannual = mannual_init;
				status_traffic_blink_horizontal = init_horizontal;
				status_traffic_blink_vertical = init_vertical;

				resetTimeTraffic();
				break;
			}
			if(isButton_BUT2_Pressed() == 1){
				status_mannual = mannual_red_green;
				setTimer9(5000);
			}
			if(isButton_BUT1_Pressed() == 1){
				status_system = MODE2;
				status_mannual = mannual_init;
				HAL_UART_Transmit(&huart2, str1, sprintf(str1, "%s \n", "\rMODE 2 \r"), 1000);
			}
			setYellow_horizontal();
			setRed_vertical();
			break;
		default:
			break;
	}
}


