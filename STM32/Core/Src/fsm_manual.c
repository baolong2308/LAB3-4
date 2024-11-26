/*
 * fsm_setting.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */
#include"fsm_manual.h"

void fsm_manual_run() {
	switch (status) {
	case MANUAL:

		switch (status_1) {
		case MAN_RED_1:
			turnOn_RED1();
			if (isButtonPressed(1) == 1) {
				status_1 = MAN_YELLOW_1;
			}
			if (isTimerExpired(3) == 1) {

				scanLEDs(99, 5);
			}
			if (isButtonPressed(0) == 1) {
				status = READY;
			}
			break;
		case MAN_YELLOW_1:
			turnOn_YELLOW1();
			if (isButtonPressed(1) == 1) {
				status_1 = MAN_GREEN_1;
			}
			if (isButtonPressed(0) == 1) {
				status = READY;
			}
			if (isTimerExpired(3) == 1) {

				scanLEDs(99, 5);
			}
			break;
		case MAN_GREEN_1:
			turnOn_GREEN1();
			if (isButtonPressed(1) == 1) {
				status_1 = MAN_RED_1;
			}
			if (isButtonPressed(0) == 1) {
				status = READY;
			}
			if (isTimerExpired(3) == 1) {

				scanLEDs(99, 5);
			}
		}

		switch (status_2) {
		case MAN_RED_2:
			turnOn_RED2();
			if (isButtonPressed(2) == 1) {
				status_2 = MAN_YELLOW_2;
			}
			if (isTimerExpired(3) == 1) {

				scanLEDs(99, 5);
			}
			if (isButtonPressed(0) == 1) {
				status = READY;
			}
			break;
		case MAN_YELLOW_2:
			turnOn_YELLOW2();
			if (isButtonPressed(2) == 1) {
				status_2 = MAN_GREEN_2;
			}

			if (isTimerExpired(3) == 1) {

				scanLEDs(99, 5);
			}
			if (isButtonPressed(0) == 1) {
				status = READY;
			}
			break;
		case MAN_GREEN_2:
			turnOn_GREEN2();
			if (isButtonPressed(2) == 1) {
				status_2 = MAN_RED_2;
			}
			if (isTimerExpired(3) == 1) {

				scanLEDs(99, 5);
			}
			if (isButtonPressed(0) == 1) {
				status = READY;
			}
			break;
		}

		break;
	case READY:

		status = RED_GREEN;
		time_1 = TIME_GREEN - 1;
		time_2 = TIME_RED - 1;
		setTimer(2, 100);
		setTimer(1, TIME_GREEN * 100);

		break;
	default:
		break;
	}
}
