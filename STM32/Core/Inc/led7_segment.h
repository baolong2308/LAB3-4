/*
 * led7_segment.h
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_
#include"global.h"

void turnOffLEDs();

void update7SEG_1(int index);
void update7SEG_2(int index);
void updateClockBuffer();
void display7SEG_1(int num);
void display7SEG_2(int num);
#endif /* INC_LED7_SEGMENT_H_ */
