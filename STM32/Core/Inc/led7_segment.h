/*
 * led7_segment.h
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_
#include"global.h"
extern int led_buffer[] ;
extern int time_1;
extern int time_2;
extern int index_led_1;
extern int index_led_2;
void turnoffLEDs();

void update7SEG_1(int index);
void update7SEG_2(int index);
void updateClockBuffer();
void display7SEG_1(int num);
void display7SEG_2(int num);
#endif /* INC_LED7_SEGMENT_H_ */
