/*
 * button.c
 *
 *  Created on: Nov 7, 2022
 *      Author: Welcome
 */

#include "button.h"
int keyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int keyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};// trạng thái ổn định trước đó
int timerForKeyPress = 300;// nhấn đè thì 3s mới xử lý

int button_BUT1_flag = 0;
int button_BUT2_flag = 0;
int button_BUT3_flag = 0;

int button_BUT1_LongPressed_flag = 0;
int button_BUT2_LongPressed_flag = 0;
int button_BUT3_LongPressed_flag = 0;


int isButton_BUT1_Pressed()
{
	if(button_BUT1_flag == 1)
	{
		button_BUT1_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton_BUT2_Pressed()
{
	if(button_BUT2_flag == 1)
	{
		button_BUT2_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton_BUT3_Pressed()
{
	if(button_BUT3_flag == 1)
	{
		button_BUT3_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton_BUT1_LongPressed(){
	if(button_BUT1_LongPressed_flag == 1){
		button_BUT1_LongPressed_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton_BUT2_LongPressed(){
	if(button_BUT2_LongPressed_flag == 1){
		button_BUT2_LongPressed_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton_BUT3_LongPressed(){
	if(button_BUT3_LongPressed_flag == 1){
		button_BUT3_LongPressed_flag = 0;
		return 1;
	}
	else return 0;
}

void getKeyInput()
{
	for(int i = 0; i < 3; i++){
		// button debouncing
		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];
		//handle button 1
		if(i == 0){
			keyReg2[i] = HAL_GPIO_ReadPin(BUT1_GPIO_Port, BUT1_Pin);
			// if the button not bounce
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				 //case short pressed
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i]; // update for keyReg3
					if(keyReg2[i] == PRESSED_STATE)
					{
						//TODO
						button_BUT1_flag = 1;
						timerForKeyPress = 300;
					}
				}
				else// case long pressed
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
							//TODO
							button_BUT1_LongPressed_flag = 1;
							timerForKeyPress = 300;
						}
					}
				}
			}
		}
		//handle button 2
		if(i == 1){
			keyReg2[i] = HAL_GPIO_ReadPin(BUT2_GPIO_Port, BUT2_Pin);
			// if the button not bounce
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				//case short pressed
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i]; // update for keyReg3
					if(keyReg2[i] == PRESSED_STATE)
					{
						//TODO
						button_BUT2_flag = 1;
						timerForKeyPress = 300;
					}
				}
				else// key long pressed
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
							//TODO
							button_BUT2_LongPressed_flag = 1;
							timerForKeyPress = 300;
						}
					}
				}
			}
		}
		//handle button 3
		if(i == 2){
			keyReg2[i] = HAL_GPIO_ReadPin(BUT3_GPIO_Port, BUT3_Pin);
			// if the button not bounce
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				//case short pressed
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i]; //update for keyReg3
					if(keyReg2[i] == PRESSED_STATE)
					{
						//TODO
						button_BUT3_flag = 1;
						timerForKeyPress = 300;
					}
				}
				else// case long pressed
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
							//TODO
							button_BUT3_LongPressed_flag = 1;
							timerForKeyPress = 300;
						}
					}
				}
			}
		}
	}
}
