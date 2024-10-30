/*
 * global.h
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include"timer.h"
#include"button.h"
#include "main.h"
#include"fsm_automatic.h"
#include"fsm_manual.h"
#include"traffic_light.h"
#include"led7_segment.h"

#define NORMAL_STATE GPIO_PIN_RESET
#define PRESSED_STATE GPIO_PIN_SET

extern int TIME_RED;
extern int TIME_YELLOW;
extern int TIME_GREEN;
extern int time_1;
extern int time_2;
extern int led_buffer[] ;
extern int index_led_1;
extern int index_led_2;
extern int temp;

#define INIT        1
#define RED_GREEN   2
#define RED_YELLOW  3
#define GREEN_RED	4
#define YELLOW_RED	5
#define MAN_RED    12
#define MAN_GREEN  13
#define MAN_YELLOW 14



extern int status;


#endif /* INC_GLOBAL_H_ */
