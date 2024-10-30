/*
 * fsm_manual.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */

#include"fsm_manual.h"
void fsm_manual_mode() {

	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
}
void fsm_manual_run() {
	switch (status) {

	case MAN_RED:
		turnOn_RED1();
		turnOn_RED2();
		fsm_manual_mode();
		display7SEG_2(2);
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

			updateClockBuffer(temp, time_2);
			update7SEG_1(index_led_1++ % 2);
			setTimer(3, 25);
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
		fsm_manual_mode();
		display7SEG_2(4);
		if (isTimerExpired(1) == 1) {
			status = RED_GREEN;

			setTimer(1, TIME_GREEN * 100);
		}
		if (isTimerExpired(3) == 1) {

			updateClockBuffer(temp, time_2);
			update7SEG_1(index_led_1++ % 2);
			setTimer(3, 25);

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
		fsm_manual_mode();
		display7SEG_2(3);
		if (isTimerExpired(1) == 1) {
			status = RED_GREEN;
			setTimer(1, TIME_GREEN * 100);
		}
		if (isTimerExpired(3) == 1) {

			updateClockBuffer(temp, time_2);
			update7SEG_1(index_led_1++ % 2);
			setTimer(3, 25);

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
