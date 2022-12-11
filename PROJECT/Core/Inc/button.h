/*
 * button.h
 *
 *  Created on: Dec 11, 2022
 *      Author: ADMIN
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

int isButtonPressed(int index);

void subKeyProcess(int index);
void getKeyInput();

#endif /* INC_BUTTON_H_ */
