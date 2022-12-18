/*
 * software_timer.h
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int TICK;// time cycle

//timer1 for light normal for traffic led in vertical (red/green/yellow)
extern int timer1_flag;
extern int timer1_counter;

//timer2 for light normal for traffic led in horizontal (red/green/yellow)
extern int timer2_flag;
extern int timer2_counter;

// timer3 count down as a clock in vertical
extern int timer3_flag;
extern int timer3_counter;

// timer4 for scan led7Segment in horizontal
extern int timer4_flag;
extern int timer4_counter;

// timer5 count down as a clock in horizontal
extern int timer5_flag;
extern int timer5_counter;

// timer6 for scan led7Segment in vertical
extern int timer6_flag;
extern int timer6_counter;

// toggle led-red/green/yellow vertical road 2Hz while modifying time of it
extern int timer7_flag;
extern int timer7_counter;

// toggle led-red/green/yellow horizontal road 2Hz while modifying time of it
extern int timer8_flag;
extern int timer8_counter;

//timer9 limit time in mannual mode in horizontal
extern int timer9_flag;
extern int timer9_counter;

//timer10 for blink led PA5 for debuging
extern int timer10_flag;
extern int timer10counter;

//timer9 limit time in mannual mode in vertical
extern int timer11_flag;
extern int timer11counter;


//pedes
extern int timer30_flag;
extern int timer30counter;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer5(int duration);
void setTimer6(int duration);
void setTimer7(int duration);
void setTimer8(int duration);
void setTimer9(int duration);
void setTimer10(int duration);
void setTimer11(int duration);
void setTimer30(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
