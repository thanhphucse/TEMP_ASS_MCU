/*
 * fsm_pedestrian.h
 *
 *  Created on: Dec 18, 2022
 *      Author: MY-PC
 */

#ifndef INC_FSM_PEDESTRIAN_H_
#define INC_FSM_PEDESTRIAN_H_

//states for fsm_traffic_horizontal
#define pedes_off			130
#define pedes_red			131
#define pedes_green			132

extern int status_pedestrian_light;

void fsm_pedestrian_run();

#endif /* INC_FSM_PEDESTRIAN_H_ */
