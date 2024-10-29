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
void turnoffLEDs();
void display7SEG(int num);
void update7SEG(int index);


#endif /* INC_LED7_SEGMENT_H_ */
