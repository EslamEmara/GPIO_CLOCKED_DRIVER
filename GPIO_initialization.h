/*
 * GPIO_initialization.h
 *
 *  Created on: Feb 10, 2020
 *      Author: Eslam
 */

#ifndef GPIO_INITIALIZATION_H_
#define GPIO_INITIALIZATION_H_

#include "GPIO_private.h"
#include "GPIO_configuration.h"

void GPIO_voidInit(void);
void GPIO_SetDirection(u8 port , u8 pin , u8 direction);
void GPIO_voidSetMaxAmps(u8 port , u8 pin , u8 amps);
void GPIO_voidSetPinControl(u8 port , u8 pin , s8 data);
void GPIO_DIGITAL_ENABLE(u8 port , u8 pin);
void GPIO_voidSetPinData(u8 port , u8 pin , u8 data);
void GPIO_voidSetAlt(u8 port , u8 pin);
u8 GPIO_u8GetPinValue(u8 port , u8 pin);

#endif /* GPIO_INITIALIZATION_H_ */
