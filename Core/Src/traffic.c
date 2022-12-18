/*
 * traffic.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */
#include "traffic.h"
#include "global.h"
#include "main.h"

void setRed_horizontal(){
	HAL_GPIO_WritePin(D2_TRAFFIC1_GPIO_Port, D2_TRAFFIC1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D3_TRAFFIC1_GPIO_Port, D3_TRAFFIC1_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}

void setGreen_horizontal(){
	HAL_GPIO_WritePin(D2_TRAFFIC1_GPIO_Port, D2_TRAFFIC1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D3_TRAFFIC1_GPIO_Port, D3_TRAFFIC1_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_SET);
}

void setYellow_horizontal(){
	HAL_GPIO_WritePin(D2_TRAFFIC1_GPIO_Port, D2_TRAFFIC1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D3_TRAFFIC1_GPIO_Port, D3_TRAFFIC1_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}

void setRed_vertical(){
	HAL_GPIO_WritePin(D4_TRAFFIC2_GPIO_Port, D4_TRAFFIC2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D5_TRAFFIC2_GPIO_Port, D5_TRAFFIC2_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}

void setGreen_vertical(){
	HAL_GPIO_WritePin(D4_TRAFFIC2_GPIO_Port, D4_TRAFFIC2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D5_TRAFFIC2_GPIO_Port, D5_TRAFFIC2_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_SET);
}

void setYellow_vertical(){
	HAL_GPIO_WritePin(D4_TRAFFIC2_GPIO_Port, D4_TRAFFIC2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D5_TRAFFIC2_GPIO_Port, D5_TRAFFIC2_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}


void toggleLedRed(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void toggleRed_horizontal(){
//	HAL_GPIO_TogglePin(REDA_GPIO_Port, REDA_Pin);
	HAL_GPIO_TogglePin(D2_TRAFFIC1_GPIO_Port, D2_TRAFFIC1_Pin);
	HAL_GPIO_WritePin(D3_TRAFFIC1_GPIO_Port, D3_TRAFFIC1_Pin, GPIO_PIN_RESET);
}

void toggleGreen_horizontal(){
//	HAL_GPIO_TogglePin(GREENA_GPIO_Port, GREENA_Pin);
	HAL_GPIO_TogglePin(D3_TRAFFIC1_GPIO_Port, D3_TRAFFIC1_Pin);
	HAL_GPIO_WritePin(D2_TRAFFIC1_GPIO_Port, D2_TRAFFIC1_Pin, GPIO_PIN_RESET);
}

void toggleYellow_horizontal(){
//	HAL_GPIO_TogglePin(YELLOWA_GPIO_Port, YELLOWA_Pin);
	HAL_GPIO_WritePin(D2_TRAFFIC1_GPIO_Port, D2_TRAFFIC1_Pin, HAL_GPIO_ReadPin(D3_TRAFFIC1_GPIO_Port, D3_TRAFFIC1_Pin));
	HAL_GPIO_TogglePin(D2_TRAFFIC1_GPIO_Port, D2_TRAFFIC1_Pin);
	HAL_GPIO_TogglePin(D3_TRAFFIC1_GPIO_Port, D3_TRAFFIC1_Pin);
}

void toggleRed_vertical(){
//	HAL_GPIO_TogglePin(REDB_GPIO_Port, REDB_Pin);
	HAL_GPIO_TogglePin(D4_TRAFFIC2_GPIO_Port, D4_TRAFFIC2_Pin);
	HAL_GPIO_WritePin(D5_TRAFFIC2_GPIO_Port, D5_TRAFFIC2_Pin, GPIO_PIN_RESET);
}

void toggleGreen_vertical(){
//	HAL_GPIO_TogglePin(GREENB_GPIO_Port, GREENB_Pin);
	HAL_GPIO_TogglePin(D5_TRAFFIC2_GPIO_Port, D5_TRAFFIC2_Pin);
	HAL_GPIO_WritePin(D4_TRAFFIC2_GPIO_Port, D4_TRAFFIC2_Pin, GPIO_PIN_RESET);
}

void toggleYellow_vertical(){
//	HAL_GPIO_TogglePin(YELLOWB_GPIO_Port, YELLOWB_Pin);
	HAL_GPIO_WritePin(D4_TRAFFIC2_GPIO_Port, D4_TRAFFIC2_Pin, HAL_GPIO_ReadPin(D5_TRAFFIC2_GPIO_Port, D5_TRAFFIC2_Pin));
	HAL_GPIO_TogglePin(D4_TRAFFIC2_GPIO_Port, D4_TRAFFIC2_Pin);
	HAL_GPIO_TogglePin(D5_TRAFFIC2_GPIO_Port, D5_TRAFFIC2_Pin);
}

void offAllLed_horizontal(){
	HAL_GPIO_WritePin(D2_TRAFFIC1_GPIO_Port, D2_TRAFFIC1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D3_TRAFFIC1_GPIO_Port, D3_TRAFFIC1_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}
void offGreenYellow_horizontal(){
//	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}
void offGreenRed_horizontal(){
//	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GREENA_GPIO_Port, GREENA_Pin, GPIO_PIN_RESET);
}
void offRedYellow_horizontal(){
//	HAL_GPIO_WritePin(REDA_GPIO_Port, REDA_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(YELLOWA_GPIO_Port, YELLOWA_Pin, GPIO_PIN_RESET);
}


void offAllLed_vertical(){
//	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D4_TRAFFIC2_GPIO_Port, D4_TRAFFIC2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D5_TRAFFIC2_GPIO_Port, D5_TRAFFIC2_Pin, GPIO_PIN_RESET);
}
void offGreenYellow_vertical(){
//	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}
void offGreenRed_vertical(){
//	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}
void offRedYellow_vertical(){
//	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
}

void resetTimeTraffic(){
	time_red_horizontal_temp = time_red_horizontal;
	time_green_horizontal_temp = time_green_horizontal;
	time_yellow_horizontal_temp = time_yellow_horizontal;

	time_red_vertical_temp = time_red_vertical;
	time_green_vertical_temp = time_green_vertical;
	time_yellow_vertical_temp = time_yellow_vertical;
}

void set_off_pedes(){
	HAL_GPIO_WritePin(D6_PEDES_LIGHT_GPIO_Port, D6_PEDES_LIGHT_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D7_PEDES_LIGHT_GPIO_Port, D7_PEDES_LIGHT_Pin, GPIO_PIN_RESET);
}
void set_red_pedes(){
	HAL_GPIO_WritePin(D6_PEDES_LIGHT_GPIO_Port, D6_PEDES_LIGHT_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D7_PEDES_LIGHT_GPIO_Port, D7_PEDES_LIGHT_Pin, GPIO_PIN_RESET);
}
void set_green_pedes(){
	HAL_GPIO_WritePin(D6_PEDES_LIGHT_GPIO_Port, D6_PEDES_LIGHT_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D7_PEDES_LIGHT_GPIO_Port, D7_PEDES_LIGHT_Pin, GPIO_PIN_SET);
}


