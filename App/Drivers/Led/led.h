/*
 * led.h
 *
 *  Created on: 2024年11月28日
 *      Author: 26448
 */

#ifndef APP_DRIVERS_LED_LED_H_
#define APP_DRIVERS_LED_LED_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "define.h"

/* LED0 is driven by the pin driver interface of rt  */
#define LED0_PIN  18   //PC3

/* Global Variable */

/*********************************************************************
 * @fn      LED1_BLINK_INIT
 *
 * @brief   LED1 directly calls the underlying driver
 *
 * @return  none
 */
void LED1_BLINK_INIT(void);

/*********************************************************************
 * @fn      led
 *
 * @brief   Test using the driver interface to operate the I/O port
 *
 * @return  none
 */
int led(void);

#ifdef __cplusplus
}
#endif

#endif /* APP_DRIVERS_LED_LED_H_ */
