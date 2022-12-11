/*
 * led_disp.c
 *
 *  Created on: Dec 11, 2022
 *      Author: ADMIN
 */

#include "led_disp.h"

void toggleREDS(){
	HAL_GPIO_TogglePin(D3_GPIO_Port, D3_Pin);
	HAL_GPIO_TogglePin(D5_GPIO_Port, D5_Pin);


}
void toggleGREENs(){
	HAL_GPIO_TogglePin(D2_GPIO_Port, D2_Pin);
	HAL_GPIO_TogglePin(D4_GPIO_Port, D4_Pin);
}


void toggleYELLOWs(){
	HAL_GPIO_TogglePin(D3_GPIO_Port, D3_Pin);
	HAL_GPIO_TogglePin(D5_GPIO_Port, D5_Pin);
	HAL_GPIO_TogglePin(D2_GPIO_Port, D2_Pin);
	HAL_GPIO_TogglePin(D4_GPIO_Port, D4_Pin);
}
void reset(){// In each case when we want to modify the time for each led, we reset it before let it blink every second(toggle)
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
}

void enableRED_WEST(){
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
}
void enableYELLOW_WEST(){
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
}
void enableGREEN_WEST(){
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
}

void enableRED_NORTH(){
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
}
void enableGREEN_NORTH(){
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
}
void enableYELLOW_NORTH(){
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
}
void PEDESTRIAN_RED(){
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, SET);

}
void PEDESTRIAN_GREEN(){
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, SET);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, RESET);

}
void OFF_PEDESTRIAN(){
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, RESET);
}
//const uint8_t SEG7[10] = {0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10};
//
//void display7SEG1(int num){
//	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, ((SEG7[num]>>0)&0x01));
//	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, ((SEG7[num]>>1)&0x01));
//	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, ((SEG7[num]>>2)&0x01));
//	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, ((SEG7[num]>>3)&0x01));
//	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, ((SEG7[num]>>4)&0x01));
//	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, ((SEG7[num]>>5)&0x01));
//	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, ((SEG7[num]>>6)&0x01));
//}
//
//void display7SEG2(int num){
//	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, ((SEG7[num]>>0)&0x01));
//	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, ((SEG7[num]>>1)&0x01));
//	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, ((SEG7[num]>>2)&0x01));
//	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, ((SEG7[num]>>3)&0x01));
//	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, ((SEG7[num]>>4)&0x01));
//	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, ((SEG7[num]>>5)&0x01));
//	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, ((SEG7[num]>>6)&0x01));
//}
//
//void display_chuc(int num1, int num2){
//	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
//	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
//	display7SEG1(num1/10);
//
//	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
//	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
//	display7SEG2(num2/10);
//}
//
//void display_don_vi(int num1, int num2){
//	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
//	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
//	display7SEG1(num1%10);
//
//	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
//	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
//	display7SEG2(num2%10);
//}
