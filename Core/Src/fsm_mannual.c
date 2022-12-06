/*
 * fsm_mannual.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Welcome
 */
#include "fsm_mannual.h"
#include "fsm_system.h"
#include "software_timer.h"
#include "global.h"
#include "traffic.h"
#include "control_7SEG.h"
#include "button.h"
#include "fsm_traffic_blink.h"

status_mannual = mannual_init;

void fsm_mannual_run(){
	switch(status_mannual){
		case mannual_init:
			status_mannual = mannual_red;
			setTimer9(5000);
			break;
		case mannual_red:
			if(timer9_flag == 1){
				status_system = INIT;
				status_traffic_blink_horizontal = init_horizontal;
				status_traffic_blink_vertical = init_vertical;
				break;
			}
			if(isButton_BUT2_Pressed() == 1){
				status_mannual = mannual_green;
				setTimer9(5000);
			}
			setRed_horizontal();
			setRed_vertical();
			break;
		case mannual_green:
			if(timer9_flag == 1){
				status_system = INIT;
				status_traffic_blink_horizontal = init_horizontal;
				status_traffic_blink_vertical = init_vertical;
				break;
			}
			if(isButton_BUT2_Pressed() == 1){
				status_mannual = mannual_yellow;
				setTimer9(5000);
			}
			setGreen_horizontal();
			setGreen_vertical();
			break;
		case mannual_yellow:
			if(timer9_flag == 1){
				status_system = INIT;
				status_traffic_blink_horizontal = init_horizontal;
				status_traffic_blink_vertical = init_vertical;
				break;
			}
			if(isButton_BUT2_Pressed() == 1){
				status_mannual = mannual_red;
				setTimer9(5000);
			}
			setYellow_horizontal();
			setYellow_vertical();
			break;
		default:
			break;
	}
}