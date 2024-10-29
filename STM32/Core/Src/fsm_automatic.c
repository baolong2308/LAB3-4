/*
 * fsm_automatic.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */

#include"fsm_automatic.h"

void fsm_automatic_run() {
	if (timer_flag[0] == 1) {
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		setTimer(0, 100);
	}
	switch (status) {
	case INIT:

		turnOff_LED();
		status = RED_GREEN;
		setTimer(6, 300);
		setTimer(0, 100);
		break;
	case RED_GREEN:
		turnOn_RED1();
		turnOn_GREEN2();
		display7SEG_MODE(1);
		if (isTimerExpired(6) == 1) {
			status = RED_YELLOW;
			setTimer(5, 200);
		}
		if (isButtonPressed(0) == 1) {
			status = MAN_RED;
			setTimer(7, 1000);
		}
		break;
	case RED_YELLOW:
		turnOn_YELLOW2();

		if (isTimerExpired(5) == 1) {
			status = GREEN_RED;
			setTimer(3, 300);

		}
		break;
	case GREEN_RED:
		turnOn_GREEN1();
		turnOn_RED2();

		if (isTimerExpired(3) == 1) {
			status = YELLOW_RED;
			setTimer(2, 200);
		}

		if (isButtonPressed(0) == 1) {
			status = MAN_RED;
			setTimer(7, 1000);
		}
		break;
	case YELLOW_RED:
		turnOn_YELLOW1();
		if (isTimerExpired(2) == 1) {
			status = RED_GREEN;
			setTimer(6, 300);
		}
		if (isButtonPressed(0) == 1) {
			status = MAN_RED;
			setTimer(7, 1000);
		}
		break;
	default:
		break;
	}
}
