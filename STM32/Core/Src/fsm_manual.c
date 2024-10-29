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

		if (isTimerExpired(7) == 1) {
			status = RED_GREEN;
			setTimer(6, 300);
		}
		if (isButtonPressed(0) == 1) {
			status = MAN_YELLOW;
			setTimer(7, 1000);
		}
		if (isButtonPressed(1) == 1) {

		}
		break;
	case MAN_GREEN:
		turnOn_GREEN1();
		turnOn_GREEN2();

		if (isTimerExpired(7) == 1) {
			status = RED_GREEN;
			setTimer(6, 300);
		}
		if (isButtonPressed(0) == 1) {
			status = MAN_RED;
			setTimer(7, 1000);
		}
		if (isButtonPressed(1) == 1) {

		}
		break;
	case MAN_YELLOW:
		turnOn_YELLOW1();
		turnOn_YELLOW2();

		if (isTimerExpired(7) == 1) {
			status = RED_GREEN;
			setTimer(6, 300);
		}
		if (isButtonPressed(0) == 1) {
			status = MAN_GREEN;
			setTimer(7, 1000);
		}
		if (isButtonPressed(1) == 1) {

		}
		break;
	default:
		break;
	}
}
