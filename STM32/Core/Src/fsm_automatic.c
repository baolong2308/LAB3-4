/*
 * fsm_automatic.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */


#include"fsm_automatic.h"


void fsm_automatic_run(){
	switch(status){
	case INIT:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		status = AUTO_RED;
		setTimer(0, 500);
		break;
	case AUTO_RED:
		break;
	case AUTO_GREEN:
		break;
	case AUTO_YELLOW:
		break;
	default:
		break;
	}
}
