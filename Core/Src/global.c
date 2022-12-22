/*
 * global.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */
#include "global.h"
#include "traffic_buffer.h"
#include "fsm_system.h"
#include "buzzer.h"

int status_system = INIT;

int time_red_horizontal = 10;
int time_green_horizontal = 7;
int time_yellow_horizontal = 3;

int time_red_horizontal_temp = 10;
int time_green_horizontal_temp = 7;
int time_yellow_horizontal_temp = 3;

int time_green_vertical = 7;
int time_yellow_vertical = 3;
int time_red_vertical = 10;

int time_green_vertical_temp = 7;
int time_yellow_vertical_temp = 3;
int time_red_vertical_temp = 10;

int index_horizontal = 0;
int index_vertical = 0;

//char str[] = "START";
//Buzzer
int FSM_Buzzer_State = OFF;
int Increase_Duty_Cycle = 99;
int Increase_Speed = 5;
