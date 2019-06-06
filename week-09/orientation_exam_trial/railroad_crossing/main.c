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

TIM_HandleTypeDef timer_handle;

void SystemClock_Config();
void init_timer();

volatile int time = 0;
volatile int closed_mode = 0;
volatile int lowered = 0;
volatile int button = 0;
volatile int stance_changeing_timer = 0;

int main(void)
{
	SystemClock_Config();
	init_timer();
	BSP_PB_Init(BUTTON_WAKEUP, BUTTON_MODE_EXTI);
	BSP_LED_Init(LED1);
	HAL_TIM_Base_Start_IT(&timer_handle);

	while (1) {
	}
}

void Error_Handler()
{
}

void TIM2_IRQHandler(void)
{
	HAL_TIM_IRQHandler(&timer_handle);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if (!closed_mode && time == 1) {
		BSP_LED_Toggle(LED1);
	}

	if (closed_mode) {
		BSP_LED_Toggle(LED1);
	}

	if (button) {
		++stance_changeing_timer;
	}

	if (!lowered && stance_changeing_timer == 9) {
		button = 0;
		lowered = 1;
		stance_changeing_timer = 0;
		BSP_PB_Init(BUTTON_WAKEUP, BUTTON_MODE_EXTI);
	}

	if (lowered && stance_changeing_timer == 11) {
		button = 0;
		lowered = 0;
		closed_mode = 0;
		stance_changeing_timer = 0;
		BSP_PB_Init(BUTTON_WAKEUP, BUTTON_MODE_EXTI);
	}

	if (time == 1) {
		time = 0;
	} else {
		++time;
	}
}

void EXTI15_10_IRQHandler()
{
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	closed_mode = 1;
	button = 1;
	BSP_PB_DeInit(BUTTON_WAKEUP);
}

void SystemClock_Config()
{
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

	__HAL_RCC_PWR_CLK_ENABLE()
	;
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
	RCC_OscInitStruct.PLL.PLLM = 8;
	RCC_OscInitStruct.PLL.PLLN = 216;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 2;

	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}

void init_timer()
{
	__HAL_RCC_TIM2_CLK_ENABLE()
	;

	timer_handle.Instance = TIM2;
	timer_handle.Init.Prescaler = 54000 - 1;
	timer_handle.Init.Period = 1000 - 1;
	timer_handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	timer_handle.Init.CounterMode = TIM_COUNTERMODE_UP;

	HAL_TIM_Base_Init(&timer_handle);

	HAL_NVIC_SetPriority(TIM2_IRQn, 1, 0);
	HAL_NVIC_EnableIRQ(TIM2_IRQn);
}
