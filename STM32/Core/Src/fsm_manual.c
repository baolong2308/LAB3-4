/*
 * fsm_manual.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */

#include"fsm_manual.h"
void fsm_manual_run() {
	switch (status) {
	case MAN_RED:
		turnOn_RED1();
		turnOn_RED2();
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		display7SEG_2(2);
		if (isTimerExpired(1) == 1) {
			status = RED_GREEN;
			setTimer(1, TIME_GREEN * 100);
		}
		if (isButtonPressed(0) == 1) {
			status = MAN_YELLOW;
			setTimer(1, 1000);
		}
		if (isButtonPressed(1) == 1) {

		}
		break;
	case MAN_GREEN:
		turnOn_GREEN1();
		turnOn_GREEN2();
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		display7SEG_2(4);
		if (isTimerExpired(1) == 1) {
			status = RED_GREEN;
			setTimer(1, TIME_GREEN * 100);
		}
		if (isButtonPressed(0) == 1) {
			status = INIT;
			setTimer(1, 1000);
		}
		if (isButtonPressed(1) == 1) {

		}
		break;
	case MAN_YELLOW:
		turnOn_YELLOW1();
		turnOn_YELLOW2();
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		display7SEG_2(3);
		if (isTimerExpired(1) == 1) {
			status = RED_GREEN;
			setTimer(1, TIME_GREEN * 100);
		}
		if (isButtonPressed(0) == 1) {
			status = MAN_GREEN;
			setTimer(1, 1000);
		}
		if (isButtonPressed(1) == 1) {

		}
		break;
	default:
		break;
	}
}
