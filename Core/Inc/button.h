/*
 * button.h
 *
 *  Created on: Nov 7, 2022
 *      Author: Welcome
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "control_7SEG.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton_BUT1_Pressed();//if button1 is pressed, return 1, else return 0
int isButton_BUT2_Pressed();//if button2 is pressed, return 1, else return 0
int isButton_BUT3_Pressed();//if button3 is pressed, return 1, else return 0

// don't care in this lab
int isButton_BUT1_LongPressed();//if button1 is long pressed, return 1, else return 0
int isButton_BUT2_LongPressed();//if button1 is long pressed, return 1, else return 0
int isButton_BUT3_LongPressed();//if button1 is long pressed, return 1, else return 0

#endif /* INC_BUTTON_H_ */
