/*
 * led7_segment.c
 *
 *  Created on: Oct 27, 2024
 *      Author: admin
 */
#include"led7_segment.h"
void display7SEG_MODE(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_7_GPIO_Port, SEG2_7_Pin, SET);

		break;

	case 1:

		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, SET);

		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, SET);

		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, SET);

		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, SET);

		HAL_GPIO_WritePin(SEG2_7_GPIO_Port, SEG2_7_Pin, SET);

		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);

		break;

	case 2:

		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, SET);

		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, SET);

		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_7_GPIO_Port, SEG2_7_Pin, RESET);

		break;

	case 3:

		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, SET);

		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, SET);

		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_7_GPIO_Port, SEG2_7_Pin, RESET);

		break;

	case 4:

		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_7_GPIO_Port, SEG2_7_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, SET);

		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, SET);

		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, SET);

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
