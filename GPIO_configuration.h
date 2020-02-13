/*
 * GPIO_configuration.h
 *
 *  Created on: Feb 10, 2020
 *      Author: Eslam
 */

#ifndef GPIO_CONFIGURATION_H_
#define GPIO_CONFIGURATION_H_

#include "GPIO_private.h"

/* STATE THE PORT
 * OPTIONS :  ENABLE
 *            DISABLE
 */

#define PORTA_STATE ENABLE
#define PORTB_STATE ENABLE
#define PORTC_STATE ENABLE
#define PORTD_STATE ENABLE
#define PORTE_STATE ENABLE
#define PORTF_STATE ENABLE

/* SET THE BUS
 * OPTIONS : AHP
 *           APB
 */

#define PORTA_BUS   AHB
#define PORTB_BUS   AHB
#define PORTC_BUS   AHB
#define PORTD_BUS   AHB
#define PORTE_BUS   AHB
#define PORTF_BUS   AHB


#endif /* GPIO_CONFIGURATION_H_ */
