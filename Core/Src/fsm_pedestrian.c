/*
 * fsm_pedestrian.c
 *
 *  Created on: Dec 18, 2022
 *      Author: MY-PC
 */

#include "fsm_pedestrian.h"
#include "main.h"
#include "control_7SEG.h"
#include "fsm_traffic_blink.h"
#include "software_timer.h"
#include "traffic.h"
#include "global.h"
#include "buzzer.h"
#include "button.h"


int status_pedestrian_light = pedes_off;

void fsm_pedestrian_run(){
	switch(status_pedestrian_light){
		case pedes_off:
			//display
			//turn off pedestrian light
			set_off_pedes();
//			FSM_Buzzer_State = OFF;
			//change state
			break;

		case pedes_red:
			// turn red pedestrian light
			set_red_pedes();
			if (timer30_flag == 1){
				status_pedestrian_light = pedes_off;
			}

			if (status_traffic_blink_horizontal == red_horizontal)
				status_pedestrian_light = pedes_green;
			//if traffic light is green/yellow => pedestrian light is red
			else
				status_pedestrian_light = pedes_red;

			break;
		case pedes_green:
			// turn green pedestrian light
			set_green_pedes();

			if (status_traffic_blink_horizontal == red_horizontal){
				status_pedestrian_light = pedes_green;
			}
			//if traffic light is green/yellow => pedestrian light is red
			else
				status_pedestrian_light = pedes_red;

			//buzzer
			if (time_red_horizontal_temp < 4){ //buzzer bip louder + faster
				//change state
				FSM_Buzzer_State = LOUDER_BIP;
			}

			break;
		default:
			break;
	}
}


