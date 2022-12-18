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


int status_pedestrian_light = pedes_off;

void fsm_pedestrian_run(){
	switch(status_pedestrian_light){
		case pedes_off:
			//turn off pedestrian light
			set_off_pedes();
			break;

		case pedes_red:
			// turn red pedestrian light
			set_red_pedes();
			break;
		case pedes_green:
			// turn green pedestrian light
			set_green_pedes();

			//buzzer
			if (time_red_horizontal_temp <= 3){
				//##########################
				//buzzer bip louder + faster

				//change state
				//buzzer state
				if (time_red_horizontal_temp == 0){
					//###########
					//buzzer stop


				}

			}

			break;
		default:
			break;
	}
}


