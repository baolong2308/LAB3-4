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


		if (isButtonPressed(0) == 1) {
			status = MAN_YELLOW;
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
	case MAN_GREEN:
		turnOn_GREEN1();
		turnOn_GREEN2();


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
	case MAN_YELLOW:
		turnOn_YELLOW1();
		turnOn_YELLOW2();

		if (isTimerExpired(3) == 1) {

			scanLEDs(count, 3);

		}
		if (isButtonPressed(0) == 1) {
			status = MAN_GREEN;
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
