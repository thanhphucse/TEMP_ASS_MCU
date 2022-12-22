/*
 * traffic.h
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */

#ifndef INC_TRAFFIC_H_
#define INC_TRAFFIC_H_

void setRed_horizontal();// turn on led red on horizontal road
void setGreen_horizontal();// turn on led green on horizontal road
void setYellow_horizontal();// turn on led yellow on horizontal road

void setRed_vertical();// turn on led red on vertical road
void setGreen_vertical();// turn on led green on vertical road
void setYellow_vertical();// turn on led yellow on vertical road

void toggleLedRed();//toggle led-red for debugging

void toggleRed_horizontal();// toggle led red on horizontal road
void toggleGreen_horizontal();//toggle led green on horizontal road
void toggleYellow_horizontal();//toggle led yellow on horizontal road

void toggleRed_vertical();// toggle led red on vertical road
void toggleGreen_vertical();//toggle led green on vertical road
void toggleYellow_vertical();//toggle led yellow on vertical road

void offAllLed_horizontal();// turn off all led on horizontal road
void offGreenYellow_horizontal();// turn off green and yellow led on horizontal road
void offGreenRed_horizontal();// turn off green and red led on horizontal road
void offRedYellow_horizontal();// turn off red and yellow led on horizontal road


void offAllLed_vertical();// turn off all led on vertical road
void offGreenYellow_vertical();// turn off green and yellow led on vertical road
void offGreenRed_vertical();// turn off green and red led on vertical road
void offRedYellow_vertical();// turn off red and yellow led on vertical road

void resetTimeTraffic();

void set_off_pedes();// turn off pedestrian light
void set_red_pedes();// turn red pedestrian light
void set_green_pedes();// turn green pedestrian light

void set_on_buzzer();
void set_off_buzzer();
#endif /* INC_TRAFFIC_H_ */
