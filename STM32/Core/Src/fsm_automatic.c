/*
 * fsm_automatic.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */

#include"fsm_automatic.h"
#include"led7_segment.h"
void scanLEDs() {
	if (isTimerExpired(3) == 1) {
		updateClockBuffer();
		update7SEG_2(index_led_2++ % 2);
		update7SEG_1(index_led_1++ % 2);
		setTimer(3, 25);
	}
}
void fsm_automatic_run() {
	if (isTimerExpired(0) == 1) {
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		setTimer(0, 100);
	}

	switch (status) {
	case INIT:

		turnOff_LED();
		status = RED_GREEN;

		setTimer(0, 100);
		setTimer(1, TIME_GREEN * 100);
		setTimer(2, 100);
		setTimer(3, 1);
		break;
	case RED_GREEN:
		turnOn_RED1();
		turnOn_GREEN2();
		if (isTimerExpired(2) == 1) {
			time_1--;
			time_2--;
			setTimer(2, 100);
		}
		scanLEDs();
		if (isTimerExpired(1) == 1) {
			status = RED_YELLOW;
			setTimer(1, TIME_YELLOW * 100);
			time_1 = TIME_YELLOW - 1;
		}

		if (isButtonPressed(0) == 1) {
			status = MAN_RED;
			setTimer(1, 1000);
		}

		break;
	case RED_YELLOW:
		turnOn_YELLOW2();
		if (isTimerExpired(2) == 1) {
			time_1--;
			time_2--;
			setTimer(2, 100);
		}
		scanLEDs();
		if (isTimerExpired(1) == 1) {
			status = GREEN_RED;
			setTimer(1, TIME_GREEN * 100);
			time_1 = TIME_RED - 1;
			time_2 = TIME_GREEN - 1;
		}
		if (isButtonPressed(0) == 1) {
			status = MAN_RED;
			setTimer(1, 1000);
		}

		break;
	case GREEN_RED:
		turnOn_GREEN1();
		turnOn_RED2();
		if (isTimerExpired(2) == 1) {
			time_1--;
			time_2--;
			setTimer(2, 100);
		}
		scanLEDs();
		if (isTimerExpired(1) == 1) {
			status = YELLOW_RED;
			setTimer(1, TIME_YELLOW * 100);
			time_2 = TIME_YELLOW - 1;
		}

		if (isButtonPressed(0) == 1) {
			status = MAN_RED;
			setTimer(1, 1000);
		}

		break;
	case YELLOW_RED:
		turnOn_YELLOW1();
		if (isTimerExpired(2) == 1) {
			time_1--;
			time_2--;
			setTimer(2, 100);
		}
		scanLEDs();
		if (isTimerExpired(1) == 1) {
			status = RED_GREEN;
			setTimer(1, TIME_GREEN * 100);
			time_1 = TIME_GREEN - 1;
			time_2 = TIME_RED - 1;
		}
		if (isButtonPressed(0) == 1) {
			status = MAN_RED;
			setTimer(1, 1000);
		}
		break;
	default:
		break;
	}
}
