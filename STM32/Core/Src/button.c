/*
 * button.c
 *
 *  Created on: Oct 21, 2024
 *      Author: admin
 */
#include "button.h"
#define MAX_BUTTON 10
int KeyReg0[MAX_BUTTON] = { NORMAL_STATE };
int KeyReg1[MAX_BUTTON] = { NORMAL_STATE };
int KeyReg2[MAX_BUTTON] = { NORMAL_STATE };
int KeyReg3[MAX_BUTTON] = { NORMAL_STATE }; // trạng thái ổn định trước đó
int button_flag[MAX_BUTTON];

int TimerForKeyPress = 1000;

int isButtonPressed(int index) {
	if (button_flag[index] == 1) {
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int index) {
	button_flag[index] = 1;
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
}

void getKeyInput() {
	/*	KeyReg0[0] = KeyReg1[0];
	 KeyReg1[0] = KeyReg2[0];
	 KeyReg2[0] = HAL_GPIO_ReadPin(Button_1_GPIO_Port, Button_1_Pin);

	 KeyReg0[1] = KeyReg1[1];
	 KeyReg1[1] = KeyReg2[1];
	 KeyReg2[1] = HAL_GPIO_ReadPin(Button_2_GPIO_Port, Button_2_Pin);

	 KeyReg0[2] = KeyReg1[2];
	 KeyReg1[2] = KeyReg2[2];
	 KeyReg2[2] = HAL_GPIO_ReadPin(Button_3_GPIO_Port, Button_3_Pin);*/
	for (int i = 0; i < MAX_BUTTON; i++) {
		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];
		KeyReg2[i] = HAL_GPIO_ReadPin(Button_1_GPIO_Port, Button_1_Pin);
		if ((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])) { // xử lý ổn định button
			if (KeyReg3[i] != KeyReg2[i]) { // KeyReg3 xử lý đè button
				KeyReg3[i] = KeyReg2[i];

				if (KeyReg2[i] == PRESSED_STATE) { // nhấn thả
					//TODO
					subKeyProcess(i);
					TimerForKeyPress = 1000;
				}
			} else {				// xử lý đè
				TimerForKeyPress--;
				if (TimerForKeyPress == 0) {

					KeyReg3[i] = NORMAL_STATE;	// Luôn để Key3 != Key2
				}
			}
		}
	}
}
