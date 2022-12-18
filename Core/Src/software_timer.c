/*
 * software_timer.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */

#include "software_timer.h"

int TICK = 10;//time cycle

//timer1 for light normal for traffic led in vertical (red/green/yellow)
int timer1_flag = 0;
int timer1_counter = 0;

//timer2 for light normal for traffic led in horizontal (red/green/yellow)
int timer2_flag = 0;
int timer2_counter = 0;

// timer3 count down as a clock in vertical
int timer3_flag = 0;
int timer3_counter = 0;

// timer4 for scan led7Segment in horizontal
int timer4_flag = 0;
int timer4_counter = 0;

// timer5 count down as a clock in horizontal
int timer5_flag = 0;
int timer5_counter = 0;

// timer6 for scan led7Segment in vertical
int timer6_flag = 0;
int timer6_counter = 0;

// toggle led-red/green/yellow vertical road 2Hz while modifying time of it
int timer7_flag = 0;
int timer7_counter = 0;

// toggle led-red/green/yellow horizontal road 2Hz while modifying time of it
int timer8_flag = 0;
int timer8_counter = 0;

// timer9 for limit time in mannual mode in horizontal
int timer9_flag = 0;
int timer9_counter = 0;

//timer10 for blink led PA5 for debuging
int timer10_flag = 0;
int timer10_counter = 0;

// timer11 for limit time in mannual mode in vertical
int timer11_flag = 0;
int timer11_counter = 0;

// timer30 for 2 cycle trafic light
int timer30_flag = 0;
int timer30_counter = 0;

void setTimer1(int duration){
	timer1_counter = duration/TICK;
	timer1_flag = 0;
}

void setTimer2(int duration){
	timer2_counter = duration/TICK;
	timer2_flag = 0;
}

void setTimer3(int duration){
	timer3_counter = duration/TICK;
	timer3_flag = 0;
}

void setTimer4(int duration){
	timer4_counter = duration/TICK;
	timer4_flag = 0;
}

void setTimer5(int duration){
	timer5_counter = duration/TICK;
	timer5_flag = 0;
}

void setTimer6(int duration){
	timer6_counter = duration/TICK;
	timer6_flag = 0;
}

void setTimer7(int duration){
	timer7_counter = duration/TICK;
	timer7_flag = 0;
}

void setTimer8(int duration){
	timer8_counter = duration/TICK;
	timer8_flag = 0;
}

void setTimer9(int duration){
	timer9_counter = duration/TICK;
	timer9_flag = 0;
}

void setTimer10(int duration){
	timer10_counter = duration/TICK;
	timer10_flag = 0;
}

void setTimer11(int duration){
	timer11_counter = duration/TICK;
	timer11_flag = 0;
}

void setTimer30(int duration){
	timer30_counter = duration/TICK;
	timer30_flag = 0;
}

void timerRun(){
	if(timer1_counter > 0) timer1_counter--;
	if(timer1_counter == 0){
		timer1_flag = 1;
	}

	if(timer2_counter > 0) timer2_counter--;
	if(timer2_counter == 0){
		timer2_flag = 1;
	}

	if(timer3_counter > 0) timer3_counter--;
	if(timer3_counter == 0){
		timer3_flag = 1;
	}

	if(timer4_counter > 0) timer4_counter--;
	if(timer4_counter == 0){
		timer4_flag = 1;
	}

	if(timer5_counter > 0) timer5_counter--;
	if(timer5_counter == 0){
		timer5_flag = 1;
	}

	if(timer6_counter > 0) timer6_counter--;
	if(timer6_counter == 0){
		timer6_flag = 1;
	}

	if(timer7_counter > 0) timer7_counter--;
	if(timer7_counter == 0){
		timer7_flag = 1;
	}

	if(timer8_counter > 0) timer8_counter--;
	if(timer8_counter == 0){
		timer8_flag = 1;
	}

	if(timer9_counter > 0) timer9_counter--;
	if(timer9_counter == 0){
		timer9_flag = 1;
	}

	if(timer10_counter > 0) timer10_counter--;
	if(timer10_counter == 0){
		timer10_flag = 1;
	}

	if(timer11_counter > 0) timer11_counter--;
	if(timer11_counter == 0){
		timer11_flag = 1;
	}

	if(timer30_counter > 0) timer30_counter--;
	if(timer30_counter == 0){
		timer30_flag = 1;
	}
}

