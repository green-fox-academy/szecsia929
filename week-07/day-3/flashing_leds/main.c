/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

void init_pins()
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN;

	GPIOF->MODER |= (GPIO_MODER_MODER10_0);
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_10);
	GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR10);
	GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR10);

	GPIOF->MODER |= (GPIO_MODER_MODER9_0);
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_9);
	GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR9);
	GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR9);

	GPIOF->MODER |= (GPIO_MODER_MODER8_0);
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_8);
	GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR8);
	GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR8);

	GPIOF->MODER |= (GPIO_MODER_MODER7_0);
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_7);
	GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR7);
	GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR7);
}

int main(void)
{
	HAL_Init();
	init_pins();

	uint32_t led1 = (1 << 10);
	uint32_t led2 = (1 << 9);
	uint32_t led3 = (1 << 8);
	uint32_t led4 = (1 << 7);

	while (1) {

		GPIOF->BSRR = led1;
		GPIOF->BSRR = led2;
		GPIOF->BSRR = led3;
		GPIOF->BSRR = led4;
		HAL_Delay(500);
		GPIOF->BSRR = led1 << 16;
		GPIOF->BSRR = led2 << 16;
		GPIOF->BSRR = led3 << 16;
		GPIOF->BSRR = led4 << 16;
		HAL_Delay(500);

	}
}
