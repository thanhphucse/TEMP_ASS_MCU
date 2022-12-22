/*
 * fsm_mannual.h
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */

#ifndef INC_FSM_MANNUAL_H_
#define INC_FSM_MANNUAL_H_

#define mannual_init	60
#define mannual_red_green		61
#define mannual_red_yellow		62
#define mannual_green_red		63
#define mannual_yellow_red		64

extern int status_mannual;
void fsm_mannual_run();

#endif /* INC_FSM_MANNUAL_H_ */
