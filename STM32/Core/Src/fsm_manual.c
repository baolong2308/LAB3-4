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
		turnOn_RED();
		if (timer_flag[0] == 1) {
			status = AUTO_RED;
			setTimer(0, 500);
		}
		if (isButtonPressed() == 1) {
			status = MAN_GREEN;
			setTimer(1, 1000);
		}
		break;
	case MAN_GREEN:
		turnOn_GREEN();
		if (timer_flag[1] == 1) {
			status = AUTO_GREEN;
			setTimer(1, 300);
		}
		if (isButtonPressed() == 1) {
			status = MAN_YELLOW;
			setTimer(2, 1000);
		}
		break;
	case MAN_YELLOW:
		turnOn_YELLOW();
		if (timer_flag[2] == 1) {
			status = AUTO_YELLOW;
			setTimer(2, 200);
		}
		if (isButtonPressed() == 1) {
			status = MAN_RED;
			setTimer(0, 1000);
		}
		break;
	default:
		break;
	}
}
