/*
 * traffic.c
 *
 *  Created on: Nov 7, 2022
 *      Author: Welcome
 */

#ifndef SRC_TRAFFIC_C_
#define SRC_TRAFFIC_C_

#include "traffic.h"
#include "main.h"

void setRed_horizontal(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}

void setGreen_horizontal(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_SET);
}

void setYellow_horizontal(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}

void setRed_vertical(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}

void setGreen_vertical(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_SET);
}

void setYellow_vertical(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}



void toggleLedRed(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void toggleRed_horizontal(){
	HAL_GPIO_TogglePin(REDA_GPIO_Port, REDA_Pin);
}

void toggleGreen_horizontal(){
	HAL_GPIO_TogglePin(GREENA_GPIO_Port, GREENA_Pin);
}

void toggleYellow_horizontal(){
	HAL_GPIO_TogglePin(YELLOWA_GPIO_Port, YELLOWA_Pin);
}

void toggleRed_vertical(){
	HAL_GPIO_TogglePin(REDB_GPIO_Port, REDB_Pin);
}

void toggleGreen_vertical(){
	HAL_GPIO_TogglePin(GREENB_GPIO_Port, GREENB_Pin);
}

void toggleYellow_vertical(){
	HAL_GPIO_TogglePin(YELLOWB_GPIO_Port, YELLOWB_Pin);
}

void offAllLed_horizontal(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}
void offGreenYellow_horizontal(){
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}
void offGreenRed_horizontal(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}
void offRedYellow_horizontal(){
	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_RESET);
}


void offAllLed_vertical(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}
void offGreenYellow_vertical(){
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}
void offGreenRed_vertical(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}
void offRedYellow_vertical(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
}

#endif /* SRC_TRAFFIC_C_ */
