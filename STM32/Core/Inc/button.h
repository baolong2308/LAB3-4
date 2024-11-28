/*
 * button.h
 *
 *  Created on: Oct 21, 2024
 *      Author: admin
 */
#include "global.h"

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
extern int KeyReg0[];
extern int KeyReg2[];
extern int KeyReg1[];
extern int KeyReg3[];
extern int button_flag[];


int isButtonPressed(int index);

void getKeyInput();
void subKeyProcess(int index);

#endif /* INC_BUTTON_H_ */
