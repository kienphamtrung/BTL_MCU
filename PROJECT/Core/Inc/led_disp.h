/*
 * led_disp.h
 *
 *  Created on: Dec 11, 2022
 *      Author: ADMIN
 */

#ifndef INC_LED_DISP_H_
#define INC_LED_DISP_H_

#include "main.h"

void toggleREDS();
void toggleGREENs();
void toggleYELLOWs();

void reset();
void enableRED_WEST();
void enableYELLOW_WEST();
void enableGREEN_WEST();

void enableRED_NORTH();
void enableYELLOW_NORTH();
void enableGREEN_NORTH();

void PEDESTRIAN_RED();
void PEDESTRIAN_GREEN();
void OFF_PEDESTRIAN();

//void display7SEG1(int num);
//void display7SEG2(int num);
//
//void display_chuc(int num1, int num2);
//void display_don_vi(int num1, int num2);

#endif /* INC_LED_DISP_H_ */
