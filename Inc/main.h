/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif 
	
	#include "stm32f10x.h"
	#include "stm32f10x_conf.h" 
	#include <stdio.h>
	#include <stdlib.h>
	#include "delay.h"

	#define PWML1 								GPIO_Pin_0
	#define PWML2 								GPIO_Pin_1	
	#define GPIOx 								GPIOB
	#define RCC_APB1Periph_TIMx 	RCC_APB1Periph_TIM3
	#define RCC_APB2Periph_GPIOx 	RCC_APB2Periph_GPIOB
	#define TIMx 									TIM3
	
	extern int led0pwmval;
	
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
