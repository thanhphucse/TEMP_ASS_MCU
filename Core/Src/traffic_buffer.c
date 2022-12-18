/*
 * traffic_buffer.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Welcome
 */
#include <traffic_buffer.h>
#include "global.h"

//do->xanh->vang
int traffic_buffer_horizontal[3] = {0, 0, 0};
//xanh->vang->do
int traffic_buffer_vertical[3] = {0, 0, 0};

int _7SEG_buffer_horizontal[2] = {0, 0};
int _7SEG_buffer_vertical[2] = {0, 0};

