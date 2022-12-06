/*
 * fsm_7SEG_horizontal.c
 *
 *  Created on: Nov 7, 2022
 *      Author: Welcome
 */

#include "fsm_7SEG_horizontal.h"
#include "software_timer.h"
#include "control_7SEG.h"
#include "global.h"
#include "traffic_buffer.h"

int status_7SEG_horizontal = display_countDown_horizontal;


void fsm_7SEG_horizontal_run(){
	switch(status_7SEG_horizontal){
		case display_countDown_horizontal:
			if(timer4_flag == 1)//control 2 led 7-SEG by scan led
			{
				update7SEG_horizontal(index_horizontal++);
				if(index_horizontal == 2) index_horizontal = 0;
				setTimer4(200);
			}
			break;
		case display_mode02:
			_7SEG_buffer_horizontal[0] = 0;
			_7SEG_buffer_horizontal[1] = 2;
			if(timer4_flag == 1)//control 2 led 7-SEG by scan led
			{
				update7SEG_horizontal(index_horizontal++);
				if(index_horizontal == 2) index_horizontal = 0;
				setTimer4(200);
			}
			break;
		case display_mode03:
			_7SEG_buffer_horizontal[0] = 0;
			_7SEG_buffer_horizontal[1] = 3;
			if(timer4_flag == 1)//control 2 led 7-SEG by scan led
			{
				update7SEG_horizontal(index_horizontal++);
				if(index_horizontal == 2) index_horizontal = 0;
				setTimer4(200);
			}
			break;
		case display_mode04:
			_7SEG_buffer_horizontal[0] = 0;
			_7SEG_buffer_horizontal[1] = 4;
			if(timer4_flag == 1)//control 2 led 7-SEG by scan led
			{
				update7SEG_horizontal(index_horizontal++);
				if(index_horizontal == 2) index_horizontal = 0;
				setTimer4(200);
			}
			break;
		case off_horizontal:
			off7SEG_horizontal();
			break;
		default:
			break;
	}
}
