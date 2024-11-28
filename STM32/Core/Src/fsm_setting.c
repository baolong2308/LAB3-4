/*
 * fsm_manual.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */

#include"fsm_setting.h"

void fsm_setting() {
	switch (status) {

	case SET_RED:

		if (isTimerExpired(6) == 1) {
			HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
			HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
			setTimer(6, 50);
		}

		if (isButtonPressed(0) == 1) {
			status = SET_YELLOW;
			turnOff();
			count = 0;

		}
		if (isTimerExpired(3) == 1) {

			scanLEDs(count, 2);
		}
		if (isButtonPressed(1) == 1) {
			count++;

		}
		if (isButtonPressed(2) == 1) {
			TIME_RED = count;
			time_1 = count;
		}
		break;
	case SET_GREEN:

		if (isTimerExpired(6) == 1) {
			HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);
			HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
			setTimer(6, 50);
		}

		if (isTimerExpired(3) == 1) {
			scanLEDs(count, 4);
		}

		if (isButtonPressed(1) == 1) {
			count++;

		}
		if (isButtonPressed(2) == 1) {
			TIME_GREEN = count;
			time_1 = count;
		}
		if (isButtonPressed(0) == 1) {
			count = 0;
			if (TIME_RED == TIME_YELLOW + TIME_GREEN) {
				status = RED_GREEN;
				time_1 = TIME_GREEN - 1;
				time_2 = TIME_RED - 1;
				setTimer(2, 100);
				setTimer(1, TIME_GREEN * 100);

			} else {
				status = ERR;
				setTimer(4, 100);
			}

		}
		break;
	case SET_YELLOW:

		if (isTimerExpired(6) == 1) {
			HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
			HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
			setTimer(6, 50);
		}

		if (isTimerExpired(3) == 1) {

			scanLEDs(count, 3);

		}
		if (isButtonPressed(0) == 1) {
			status = SET_GREEN;
			turnOff();
			count = 0;
		}
		if (isButtonPressed(1) == 1) {
			count++;

		}
		if (isButtonPressed(2) == 1) {
			TIME_YELLOW = count;

		}
		break;
	case ERR:
		if (isTimerExpired(3)) {
			scanLEDs(99, 99);
		}
		if (isTimerExpired(4)) {
			status = INIT;
		}
		break;
	default:
		break;
	}
}
