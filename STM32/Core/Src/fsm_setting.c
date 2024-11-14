/*
 * fsm_setting.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */
#include"fsm_setting.h"

void fsm_setting() {
	switch (status) {
	case MAN_RED:
		turnOn_RED1();
		turnOn_RED2();
		if (isButtonPressed(1) == 1) {
			status = MAN_YELLOW;
		}
		if (isTimerExpired(3) == 1) {

			scanLEDs(99, 5);
		}
		break;
	case MAN_YELLOW:
		turnOn_YELLOW1();
		turnOn_YELLOW2();
		if (isButtonPressed(1) == 1) {
			status = MAN_GREEN;
		}
		if (isTimerExpired(3) == 1) {

			scanLEDs(99, 5);
		}
		break;
	case MAN_GREEN:
		turnOn_GREEN1();
		turnOn_GREEN2();
		if (isButtonPressed(1) == 1) {
			status = RED_GREEN;
			time_1 = TIME_GREEN - 1;
			time_2 = TIME_RED - 1;
			setTimer(2, 100);
			setTimer(1, TIME_GREEN * 100);
		}
		if (isTimerExpired(3) == 1) {

			scanLEDs(99, 5);
		}

		break;
	default:
		break;
	}
}

