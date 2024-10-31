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
		time_2 = 2;
		if (isTimerExpired(1) == 1) {
			status = RED_GREEN;
			setTimer(1, TIME_GREEN * 100);
		}
		if (isButtonPressed(0) == 1) {
			status = MAN_YELLOW;
			temp = 0;
			setTimer(1, 1000);
		}
		if (isTimerExpired(3) == 1) {

			scanLEDs(temp,2);
		}
		if (isButtonPressed(1) == 1) {
			temp++;
			setTimer(1, 1000);
		}
		if (isButtonPressed(2) == 1) {
			TIME_RED = temp;
			time_1 = temp;
		}
		break;
	case MAN_GREEN:
		turnOn_GREEN1();
		turnOn_GREEN2();
		time_2 = 4;
		if (isTimerExpired(1) == 1) {
			status = RED_GREEN;
			setTimer(1, TIME_GREEN * 100);
		}
		if (isTimerExpired(3) == 1) {
			scanLEDs(temp,4);
		}
		if (isButtonPressed(0) == 1) {
			status = INIT;
			setTimer(1, 1000);
		}
		if (isButtonPressed(1) == 1) {
			temp++;
			setTimer(1, 1000);
		}
		if (isButtonPressed(2) == 1) {
			TIME_GREEN = temp;
			time_1 = temp;
		}
		break;
	case MAN_YELLOW:
		turnOn_YELLOW1();
		turnOn_YELLOW2();

		if (isTimerExpired(1) == 1) {
			status = RED_GREEN;
			setTimer(1, TIME_GREEN * 100);
		}
		if (isTimerExpired(3) == 1) {

			scanLEDs(temp,3);

		}
		if (isButtonPressed(0) == 1) {
			status = MAN_GREEN;
			temp = 0;
		}
		if (isButtonPressed(1) == 1) {
			temp++;
			setTimer(1, 1000);

		}
		if (isButtonPressed(2) == 1) {
			TIME_YELLOW = temp;
			time_1 = temp;
		}
		break;
	default:
		break;
	}
}
