/*
 * 7SEG_buffer.h
 *
 *  Created on: Nov 7, 2022
 *      Author: Welcome
 */

#ifndef INC_TRAFFIC_BUFFER_H_
#define INC_TRAFFIC_BUFFER_H_
//save time duration for led red, green, yellow in horizontal road
//traffic_buffer_horizontal[0]: time duration led red
//traffic_buffer_horizontal[1]: time duration led green
//traffic_buffer_horizontal[2]: time duration led yellow
extern int traffic_buffer_horizontal[3];

//save time duration for led green, yellow, red in vertical road
//traffic_buffer_horizontal[0]: time duration led green
//traffic_buffer_horizontal[1]: time duration led yellow
//traffic_buffer_horizontal[2]: time duration led red
extern int traffic_buffer_vertical[3];

//buffer is used for display time value in horizontal road
extern int _7SEG_buffer_horizontal[2];
//buffer is used for display time value in vertical road
extern int _7SEG_buffer_vertical[2];

#endif /* INC_TRAFFIC_BUFFER_H_ */
