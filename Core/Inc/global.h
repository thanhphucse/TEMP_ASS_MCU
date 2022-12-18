/*
 * global.h
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

extern int status_system;

// define states of whole system
#define 	INIT 	0
#define		MODE1	1
#define		MODE2	2
#define		MODE3	3
#define		MODE4	4
#define		MAN_MODE 95
//#define		pedes_off	5

// declare time duration for red, green, yellow in horizontal road
extern int time_red_horizontal;
extern int time_green_horizontal;
extern int time_yellow_horizontal;
// temporary varible used for count down time in horizontal road
// when it equal to 0, it will be reassigned into initial time
extern int time_red_horizontal_temp;
extern int time_green_horizontal_temp;
extern int time_yellow_horizontal_temp;

// declare time duration for red, green, yellow in vertical road
extern int time_red_vertical;
extern int time_green_vertical;
extern int time_yellow_vertical;
// temporary varible used for count down time in vertical road
// when it equal to 0, it will be reassigned into initial time
extern int time_red_vertical_temp;
extern int time_green_vertical_temp;
extern int time_yellow_vertical_temp;

//index for 7SEG buffer in horizontal road and vertical road
extern int index_horizontal;
extern int index_vertical;

//extern int status_pedestrian_light;

#endif /* INC_GLOBAL_H_ */
