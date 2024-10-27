/*
 * button.c
 *
 *  Created on: Oct 21, 2024
 *      Author: admin
 */
#include "button.h"

int KeyReg0 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;

int button1_flag = 0;

int KeyReg3 = NORMAL_STATE; // trạng thái ổn định trước đó
int TimerForKeyPress = 100;

int isButtonPressed() {
	if (button1_flag == 1) {
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess() {
	button1_flag = 1;
}

void getKeyInput() {
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(Button_1_GPIO_Port, Button_1_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)) { // xử lý ổn định button
		if (KeyReg3 != KeyReg2) { // KeyReg3 xử lý đè button
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE) { // nhấn thả
				//TODO
				subKeyProcess();
				TimerForKeyPress = 100;
			}
		} else {				// xử lý đè
			TimerForKeyPress--;
			if (TimerForKeyPress == 0) {
				//TODE
				/*if (KeyReg2 == PRESSED_STATE) {
				 //TODO
				 subKeyProcess();
				 }
				 TimerForKeyPress = 100;*/
				KeyReg3 = NORMAL_STATE;	// Luôn để Key3 != Key2
			}
		}
	}
}
