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
#include "stm32746g_discovery_lcd.h"
#include "stm32746g_discovery_ts.h"

static void Error_Handler(void);
static void SystemClock_Config(void);

void LCD_Init()
{
	BSP_LCD_Init();
	BSP_LCD_LayerDefaultInit(1, LCD_FB_START_ADDRESS);
	BSP_LCD_SelectLayer(1);
	BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
	BSP_LCD_SetBackColor(LCD_COLOR_WHITE);
	BSP_LCD_Clear(LCD_COLOR_WHITE);
}

void TS_Init()
{
	BSP_TS_Init(BSP_LCD_GetXSize(), BSP_LCD_GetYSize());
}

int main(void)
{
	HAL_Init();
	SystemClock_Config();
	LCD_Init();
	TS_Init();

	/* drawing text */
	BSP_LCD_SetTextColor(LCD_COLOR_BLUE);
	BSP_LCD_DisplayStringAt(BSP_LCD_GetXSize(), BSP_LCD_GetYSize() / 2, "START", CENTER_MODE);

	BSP_LCD_SetFont(&Font12);

	TS_StateTypeDef ts_state;
	int time_positionY = 0;
	int startFlag = 0;
	int counter = 0;
	float time = 0;
	float timeSum = 0;
	uint8_t char_buffer[2];

	while (1) {
		BSP_TS_GetState(&ts_state);
		if (ts_state.touchDetected && startFlag == 0) {
			startFlag = 1;
			BSP_LCD_Clear(LCD_COLOR_WHITE);
			BSP_LCD_SetTextColor(LCD_COLOR_RED);
			BSP_LCD_FillRect(BSP_LCD_GetXSize() / 2 - 25, BSP_LCD_GetYSize() / 2 - 25, 50, 50);
			BSP_LCD_SetTextColor(LCD_COLOR_BLACK);
			while (ts_state.touchDetected) {
				BSP_TS_GetState(&ts_state);
				if (!(ts_state.touchDetected)) {
					break;
				}
			}
		}
		if (startFlag) {
			while (!(ts_state.touchDetected)) {
				time += 0.01;
				HAL_Delay(10);
				sprintf(char_buffer, "%.2f", time);
				BSP_LCD_DisplayStringAt(0, time_positionY, char_buffer, LEFT_MODE);
				BSP_TS_GetState(&ts_state);
				if (ts_state.touchDetected && ts_state.touchX[0] > BSP_LCD_GetXSize() / 2 - 25 && ts_state.touchX[0] < BSP_LCD_GetXSize() / 2 + 25
						&& ts_state.touchY[0] > BSP_LCD_GetYSize() / 2 - 25 && ts_state.touchY[0] < BSP_LCD_GetYSize() / 2 + 25) {
					while (ts_state.touchDetected) {
						BSP_TS_GetState(&ts_state);
						if (!(ts_state.touchDetected)) {
							break;
						}
					}
					time_positionY += 10;
					break;
				} else {
					while (ts_state.touchDetected) {
						BSP_TS_GetState(&ts_state);
						if (!(ts_state.touchDetected)) {
							break;
						}
						sprintf(char_buffer, "%.2f", time);
						BSP_LCD_DisplayStringAt(0, time_positionY, char_buffer, LEFT_MODE);
					}
				}
			}
			timeSum += time;
			time = 0;
			counter++;
			if (counter == 10) {
				BSP_LCD_Clear(LCD_COLOR_WHITE);
				sprintf(char_buffer, "%.2f", timeSum / counter);
				BSP_LCD_SetTextColor(LCD_COLOR_BLUE);
				BSP_LCD_SetFont(&Font24);
				BSP_LCD_DisplayStringAt(BSP_LCD_GetXSize(), BSP_LCD_GetYSize() / 2 - 28, "Your average time is:", CENTER_MODE);
				BSP_LCD_DisplayStringAt(BSP_LCD_GetXSize(), BSP_LCD_GetYSize() / 2, char_buffer, CENTER_MODE);
				BSP_LCD_DisplayStringAt(BSP_LCD_GetXSize(), BSP_LCD_GetYSize() / 2 + 28, "Press the reset button!", CENTER_MODE);
				while (1) {
				}
			}
		}
	}
}

static void Error_Handler(void)
{
}

static void SystemClock_Config(void)
{
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

	/**Configure the main internal regulator output voltage */
	__HAL_RCC_PWR_CLK_ENABLE()
	;
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

	/**Initializes the CPU, AHB and APB busses clocks */
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

	/**Activate the Over-Drive mode */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}
