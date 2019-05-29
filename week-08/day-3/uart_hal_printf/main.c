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
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

UART_HandleTypeDef uart_handle;

int _write(int file, char *ptr, int len)
{
	int DataIdx;

	for (DataIdx = 0; DataIdx < len; DataIdx++) {
		HAL_UART_Transmit(&uart_handle, &ptr[DataIdx], 1, HAL_MAX_DELAY);
	}
	return len;
}

void init_uart()
{
	__HAL_RCC_USART1_CLK_ENABLE()
	;

	uart_handle.Instance = USART1;
	uart_handle.Init.BaudRate = 115200;
	uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode = UART_MODE_TX;
	uart_handle.Init.Parity = UART_PARITY_NONE;
	uart_handle.Init.StopBits = UART_STOPBITS_1;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;

	BSP_COM_Init(COM1, &uart_handle);

}

int main(void)
{
	HAL_Init();
	init_uart();

	char hello[] = "Hello World!";

	while (1) {
		//HAL_UART_Transmit(&uart_handle, (uint8_t*) hello, strlen(hello), 0xFFFF);
		printf("%s %d %f\r\n", hello, 42, 99.23523);
		HAL_Delay(1000);
	}
}
