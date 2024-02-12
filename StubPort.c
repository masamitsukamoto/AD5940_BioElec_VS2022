/**  
 * @file       NUCLEOF411Port.c
 * @brief      ST NUCLEOF411 board port file.
 * @version    V0.2.0
 * @author     ADI
 * @date       March 2019
 * @par Revision History:
 * 
 * Copyright (c) 2017-2019 Analog Devices, Inc. All Rights Reserved.
 * 
 * This software is proprietary to Analog Devices, Inc. and its licensors.
 * By using this software you agree to the terms of the associated
 * Analog Devices Software License Agreement.
**/
#include "ad5940.h"
#include "stdio.h"
//#include "stm32f4xx_hal.h"

volatile static uint8_t ucInterrupted = 0;       /* Flag to indicate interrupt occurred */

/**
	@brief Using SPI to transmit N bytes and return the received bytes. This function targets to 
                     provide a more efficent way to transmit/receive data.
	@param pSendBuffer :{0 - 0xFFFFFFFF}
      - Pointer to the data to be sent.
	@param pRecvBuff :{0 - 0xFFFFFFFF}
      - Pointer to the buffer used to store received data.
	@param length :{0 - 0xFFFFFFFF}
      - Data length in SendBuffer.
	@return None.
**/
void AD5940_ReadWriteNBytes(unsigned char *pSendBuffer,unsigned char *pRecvBuff,unsigned long length)
{
  //HAL_SPI_TransmitReceive(&SpiHandle, pSendBuffer, pRecvBuff, length, (uint32_t)-1);
	printf(__FUNCTION__"\n");
}

void AD5940_CsClr(void)
{
  //HAL_GPIO_WritePin(AD5940_CS_GPIO_PORT, AD5940_CS_PIN, GPIO_PIN_RESET);
	printf(__FUNCTION__"\n");

}

void AD5940_CsSet(void)
{
  //HAL_GPIO_WritePin(AD5940_CS_GPIO_PORT, AD5940_CS_PIN, GPIO_PIN_SET);
	printf(__FUNCTION__"\n");
}

void AD5940_RstSet(void)
{
  //HAL_GPIO_WritePin(AD5940_RST_GPIO_PORT, AD5940_RST_PIN, GPIO_PIN_SET);
	printf(__FUNCTION__"\n");
}

void AD5940_RstClr(void)
{
  //HAL_GPIO_WritePin(AD5940_RST_GPIO_PORT, AD5940_RST_PIN, GPIO_PIN_RESET);
	printf(__FUNCTION__"\n");
}

void AD5940_Delay10us(uint32_t time)
{
	printf(__FUNCTION__"\n");
}

uint32_t AD5940_GetMCUIntFlag(void)
{
	printf(__FUNCTION__"\n");
	return ucInterrupted;
}

uint32_t AD5940_ClrMCUIntFlag(void)
{
	printf(__FUNCTION__"\n");
	return 1;
}

uint32_t AD5940_MCUResourceInit(void *pCfg)
{
	printf(__FUNCTION__"\n");
  return 0;
}

/* MCU related external line interrupt service routine */
void EXTI15_10_IRQHandler()
{
	printf(__FUNCTION__"\n");
	ucInterrupted = 1;

}

