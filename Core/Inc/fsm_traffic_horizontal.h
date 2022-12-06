/*
 * fsm_traffic_led_horizontal.h
 *
 *  Created on: Nov 7, 2022
 *      Author: Welcome
 */

#ifndef INC_FSM_TRAFFIC_HORIZONTAL_H_
#define INC_FSM_TRAFFIC_HORIZONTAL_H_
//states for fsm_traffic_horizontal
#define display_traffic_horizontal			5
#define modifying_led_red_horizontal		6
#define modifying_led_green_horizontal		7
#define modifying_led_yellow_horizontal		8
#define mannual_horizontal					-3

extern int status_traffic_horizontal;

void fsm_traffic_horizontal_run();

#endif /* INC_FSM_TRAFFIC_horizontal_H_ */
