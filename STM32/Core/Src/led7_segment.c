/*
 * led7_segment.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */
#include"led7_segment.h"
int led_buffer[4] = { 0, 0, 0, 0 };

void updateClockBuffer(int time1, int time2) {
	led_buffer[0] = time1 / 10;
	led_buffer[1] = time1 % 10;
	led_buffer[2] = time2 / 10;
	led_buffer[3] = time2 % 10;
}
void update7SEG_1(int index) {

	switch (index) {
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);

		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);

		display7SEG_1(led_buffer[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		display7SEG_1(led_buffer[1]);
		break;
	default:
		break;
	}
}
void update7SEG_2(int index) {

	switch (index) {
	case 0:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG_2(led_buffer[2]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		display7SEG_2(led_buffer[3]);
		break;
	default:
		break;
	}
}
void display7SEG_1(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);
		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, SET);

		break;

	case 1:

		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, SET);

		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, SET);

		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, SET);

		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, SET);

		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

		break;

	case 2:

		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, SET);

		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, SET);

		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

		break;

	case 3:

		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, SET);

		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

		break;

	case 4:

		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, SET);

		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, SET);

		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

		break;

	case 5:

		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, SET);

		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

		break;

	case 6:

		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, SET);

		break;

	case 7:

		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, SET);

		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, SET);

		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, SET);

		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

		break;

	case 8:

		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

		break;

	case 9:

		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, RESET);

		break;

	default:

		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, SET);

		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, SET);

		HAL_GPIO_WritePin(SEG0_3_GPIO_Port, SEG0_3_Pin, SET);

		HAL_GPIO_WritePin(SEG0_4_GPIO_Port, SEG0_4_Pin, SET);

		HAL_GPIO_WritePin(SEG0_5_GPIO_Port, SEG0_5_Pin, SET);

		HAL_GPIO_WritePin(SEG0_6_GPIO_Port, SEG0_6_Pin, SET);

		HAL_GPIO_WritePin(SEG0_7_GPIO_Port, SEG0_7_Pin, SET);

		break;
	}

}
void display7SEG_2(int num) {
	switch (num) {

	case 0:

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, SET);

		break;

	case 1:

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, SET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, SET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

		break;

	case 2:

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, SET);

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

		break;

	case 3:

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

		break;

	case 4:

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, SET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

		break;

	case 5:

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, SET);

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

		break;

	case 6:

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, SET);

		break;

	case 7:

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, SET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

		break;

	case 8:

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

		break;

	case 9:

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);

		break;

	default:

		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, SET);

		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, SET);

		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, SET);

		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);

		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);

		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);

		HAL_GPIO_WritePin(SEG1_7_GPIO_Port, SEG1_7_Pin, SET);

		break;
	}

}
