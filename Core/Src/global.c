/*
 * global.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */
#include "global.h"
#include "traffic_buffer.h"
#include "fsm_system.h"

int status_system = INIT;

int time_red_horizontal = 5;
int time_green_horizontal = 3;
int time_yellow_horizontal = 2;

int time_red_horizontal_temp = 5;
int time_green_horizontal_temp = 3;
int time_yellow_horizontal_temp = 2;

int time_green_vertical = 3;
int time_yellow_vertical = 2;
int time_red_vertical = 5;

int time_green_vertical_temp = 3;
int time_yellow_vertical_temp = 2;
int time_red_vertical_temp = 5;

int index_horizontal = 0;
int index_vertical = 0;

//int status_pedestrian_light = pedes_off;
