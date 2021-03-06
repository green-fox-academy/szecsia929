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

void init_led_pins()
{
	__HAL_RCC_GPIOF_CLK_ENABLE()
	;

	GPIO_InitTypeDef gpio_config;

	gpio_config.Pin = GPIO_PIN_10 | GPIO_PIN_9 | GPIO_PIN_8 | GPIO_PIN_7;
	gpio_config.Mode = GPIO_MODE_OUTPUT_PP;
	gpio_config.Pull = GPIO_NOPULL;
	gpio_config.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOF, &gpio_config);
}

void init_button_pin()
{
	__HAL_RCC_GPIOB_CLK_ENABLE()
	;

	GPIO_InitTypeDef gpio_config;

	gpio_config.Pin = GPIO_PIN_4;
	gpio_config.Mode = GPIO_MODE_IT_RISING_FALLING;
	gpio_config.Pull = GPIO_NOPULL;
	gpio_config.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOB, &gpio_config);

	HAL_NVIC_EnableIRQ(EXTI4_IRQn);
	HAL_NVIC_SetPriority(EXTI4_IRQn, 16, 0);
}

int main()
{
	HAL_Init();
	init_led_pins();
	init_button_pin();

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN;

	while (1) {

	}
}

void EXTI4_IRQHandler()
{
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_4);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_10);
	HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_9);
	HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_8);
	HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_7);
}
