/*

Copyright (c) 2017-2019 Analog Devices, Inc. All Rights Reserved.

This software is proprietary to Analog Devices, Inc. and its licensors.
By using this software you agree to the terms of the associated
Analog Devices Software License Agreement.

*/
#include "stdio.h"
#include "AD5940.h"

/* Functions that used to initialize MCU platform */
uint32_t MCUPlatformInit(void *pCfg);

int main(void)
{
  void AD5940_Main(void);
  AD5940_MCUResourceInit(0);    /* Initialize resources that AD5940 use, like SPI/GPIO/Interrupt. */

  printf("Hello AD5940-Build Time:%s\n",__TIME__);
  AD5940_Main();
}

void Error_Handler(void){
  while(1);
}
