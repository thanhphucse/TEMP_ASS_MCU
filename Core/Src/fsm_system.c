/*
 * system.c
 *
 *  Created on: Nov 7, 2022
 *      Author: Welcome
 */
#include "fsm_system.h"
#include "global.h"
#include "button.h"
#include "traffic.h"
#include "control_7SEG.h"
#include "traffic_buffer.h"
#include "fsm_traffic_blink.h"
#include "fsm_mannual.h"
#include "software_timer.h"


fsm_system_run(){
	switch(status_system){
		case INIT:
			status_system = MODE1;
			break;
		case MODE1://normal mode: The traffic light application is running normally
			status_traffic_horizontal = display_traffic_horizontal;
			status_traffic_vertical = display_traffic_vertical;
			status_7SEG_horizontal = display_countDown_horizontal;
			status_7SEG_vertical = display_countDown_vertical;
			if(isButton_BUT1_Pressed() == 1){
				status_system = MODE2;
			}

			if(isButton_BUT2_Pressed() == 1){
				status_system = MAN_MODE;
			}
			break;
		case MAN_MODE:
			fsm_mannual_run();
			status_7SEG_horizontal = off_horizontal;
			status_7SEG_vertical = off_vertical;
			status_traffic_horizontal = mannual_horizontal;
			status_traffic_vertical = mannual_vertical;
			break;
		case MODE2://mode2: Modify time duration for the red LEDs
			status_traffic_horizontal = modifying_led_red_horizontal;
			status_traffic_vertical = modifying_led_red_vertical;
			status_7SEG_horizontal = display_mode02;
			status_7SEG_vertical = display_time_value;

			//second button is used to increase the time duration value for the red LEDs
			if(isButton_BUT2_Pressed() == 1){
				time_red_horizontal++;
				time_red_vertical++;
			}
			//update buffer
			_7SEG_buffer_vertical[0] = time_red_vertical/10;
			_7SEG_buffer_vertical[1] = time_red_vertical%10;

			//The third button is used to set the value
			if(isButton_BUT3_Pressed() == 1){
				time_red_horizontal_temp= time_red_horizontal;
				time_red_vertical_temp= time_red_vertical;
			}

			// change into MODE3
			if(isButton_BUT1_Pressed() == 1){
				status_system = MODE3;
			}
			break;
		case MODE3://Mode 3 - Modify time duration for the amber LEDs (yellow led):
			status_traffic_horizontal = modifying_led_yellow_horizontal;
			status_traffic_vertical = modifying_led_yellow_vertical;
			status_7SEG_horizontal = display_mode03;
			status_7SEG_vertical = display_time_value;

			//vertical button is used to increase the time duration value for the yellow LEDs
			if(isButton_BUT2_Pressed() == 1){
				time_yellow_horizontal++;
				time_yellow_vertical++;
			}
			//update buffer
			_7SEG_buffer_vertical[0] = time_yellow_vertical/10;
			_7SEG_buffer_vertical[1] = time_yellow_vertical%10;

			//The third button is used to set the value
			if(isButton_BUT3_Pressed() == 1){
				time_yellow_horizontal_temp= time_yellow_horizontal;
				time_yellow_vertical_temp= time_yellow_vertical;
			}
			// change into MODE4
			if(isButton_BUT1_Pressed() == 1){
				status_system = MODE4;
			}
			break;
		case MODE4://Mode 4 - Modify time duration for the green LEDs
			status_traffic_horizontal = modifying_led_green_horizontal;
			status_traffic_vertical = modifying_led_green_vertical;
			status_7SEG_horizontal = display_mode04;
			status_7SEG_vertical = display_time_value;

			//vertical button is used to increase the time duration value for the green LEDs
			if(isButton_BUT2_Pressed() == 1){
				time_green_horizontal++;
				time_green_vertical++;
			}
			//update buffer
			_7SEG_buffer_vertical[0] = time_green_vertical/10;
			_7SEG_buffer_vertical[1] = time_green_vertical%10;

			//The third button is used to set the value
			if(isButton_BUT3_Pressed() == 1){
				time_green_horizontal_temp= time_green_horizontal;
				time_green_vertical_temp= time_green_vertical;
			}
			// turn back into MODE1
			if(isButton_BUT1_Pressed() == 1){
				status_traffic_blink_horizontal = init_horizontal;
				status_traffic_blink_vertical = init_vertical;
				status_system = INIT;
			}
			break;
	}
}
