/*
 * fsm_7SEG_vertical.c
 *
 *  Created on: Nov 7, 2022
 *      Author: Welcome
 */
#include "fsm_7SEG_vertical.h"
#include "software_timer.h"
#include "global.h"
#include "control_7SEG.h"

int status_7SEG_vertical = display_countDown_vertical;



void fsm_7SEG_vertical_run(){
	switch(status_7SEG_vertical){
		case display_countDown_vertical:
			if(timer6_flag == 1)//control 2 led 7-SEG
			{
				update7SEG_vertical(index_vertical++);
				if(index_vertical == 2) index_vertical = 0;
				setTimer6(200);
			}
			break;
		case display_time_value:
			if(timer6_flag == 1)//control 2 led 7-SEG
			{
				update7SEG_vertical(index_vertical++);
				if(index_vertical == 2) index_vertical = 0;
				setTimer6(200);
			}
			break;
		case off_vertical:
			off7SEG_vertical();
			break;
		default:
			break;
	}
}
