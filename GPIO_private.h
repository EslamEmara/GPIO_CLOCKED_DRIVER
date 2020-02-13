/*
 * GPIO_private.h
 *
 *  Created on: Feb 10, 2020
 *      Author: Eslam
 */

#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

#include "STD_TYPES.h"

#define GPIOHBCTL    (*(volatile u32*)  (0x400FE06C))
//#define RCC          (*(volatile u32*)  (0x400FE060))
#define RCGCGPIO     (*(volatile u32*)  (0x400FE608))

#define PORTA_APB  (*(volatile u32*) (0x40004400))
#define PORTA_AHB  (*(volatile u32*) (0x40058400))
#define PORTB_APB  (*(volatile u32*) (0x40005400))
#define PORTB_AHB  (*(volatile u32*) (0x40059400))
#define PORTC_APB  (*(volatile u32*) (0x40006400))
#define PORTC_AHB  (*(volatile u32*) (0x4005A400))
#define PORTD_APB  (*(volatile u32*) (0x40007400))
#define PORTD_AHB  (*(volatile u32*) (0x4005B400))
#define PORTE_APB  (*(volatile u32*) (0x40024400))
#define PORTE_AHB  (*(volatile u32*) (0x4005C400))
#define PORTF_APB  (*(volatile u32*) (0x40025400))
#define PORTF_AHB  (*(volatile u32*) (0x4005D400))

#define PORTA_APB_2AMPS  (*(volatile u32*) (0x40004500))
#define PORTA_AHB_2AMPS  (*(volatile u32*) (0x40058500))
#define PORTB_APB_2AMPS  (*(volatile u32*) (0x40005500))
#define PORTB_AHB_2AMPS  (*(volatile u32*) (0x40059500))
#define PORTC_APB_2AMPS  (*(volatile u32*) (0x40006500))
#define PORTC_AHB_2AMPS  (*(volatile u32*) (0x4005A500))
#define PORTD_APB_2AMPS  (*(volatile u32*) (0x40007500))
#define PORTD_AHB_2AMPS  (*(volatile u32*) (0x4005B500))
#define PORTE_APB_2AMPS  (*(volatile u32*) (0x40024500))
#define PORTE_AHB_2AMPS  (*(volatile u32*) (0x4005C500))
#define PORTF_APB_2AMPS  (*(volatile u32*) (0x40025500))
#define PORTF_AHB_2AMPS  (*(volatile u32*) (0x4005D500))

#define PORTA_APB_4AMPS  (*(volatile u32*) (0x40004504))
#define PORTA_AHB_4AMPS  (*(volatile u32*) (0x40058504))
#define PORTB_APB_4AMPS  (*(volatile u32*) (0x40005504))
#define PORTB_AHB_4AMPS  (*(volatile u32*) (0x40059504))
#define PORTC_APB_4AMPS  (*(volatile u32*) (0x40006504))
#define PORTC_AHB_4AMPS  (*(volatile u32*) (0x4005A504))
#define PORTD_APB_4AMPS  (*(volatile u32*) (0x40007504))
#define PORTD_AHB_4AMPS  (*(volatile u32*) (0x4005B504))
#define PORTE_APB_4AMPS  (*(volatile u32*) (0x40024504))
#define PORTE_AHB_4AMPS  (*(volatile u32*) (0x4005C504))
#define PORTF_APB_4AMPS  (*(volatile u32*) (0x40025504))
#define PORTF_AHB_4AMPS  (*(volatile u32*) (0x4005D504))

#define PORTA_APB_8AMPS  (*(volatile u32*) (0x40004508))
#define PORTA_AHB_8AMPS  (*(volatile u32*) (0x40058508))
#define PORTB_APB_8AMPS  (*(volatile u32*) (0x40005508))
#define PORTB_AHB_8AMPS  (*(volatile u32*) (0x40059508))
#define PORTC_APB_8AMPS  (*(volatile u32*) (0x40006508))
#define PORTC_AHB_8AMPS  (*(volatile u32*) (0x4005A508))
#define PORTD_APB_8AMPS  (*(volatile u32*) (0x40007508))
#define PORTD_AHB_8AMPS  (*(volatile u32*) (0x4005B508))
#define PORTE_APB_8AMPS  (*(volatile u32*) (0x40024508))
#define PORTE_AHB_8AMPS  (*(volatile u32*) (0x4005C508))
#define PORTF_APB_8AMPS  (*(volatile u32*) (0x40025508))
#define PORTF_AHB_8AMPS  (*(volatile u32*) (0x4005D508))

#define PORTA_APB_PULLUP  (*(volatile u32*) (0x40004510))
#define PORTA_AHB_PULLUP  (*(volatile u32*) (0x40058510))
#define PORTB_APB_PULLUP  (*(volatile u32*) (0x40005510))
#define PORTB_AHB_PULLUP  (*(volatile u32*) (0x40059510))
#define PORTC_APB_PULLUP  (*(volatile u32*) (0x40006510))
#define PORTC_AHB_PULLUP  (*(volatile u32*) (0x4005A510))
#define PORTD_APB_PULLUP  (*(volatile u32*) (0x40007510))
#define PORTD_AHB_PULLUP  (*(volatile u32*) (0x4005B510))
#define PORTE_APB_PULLUP  (*(volatile u32*) (0x40024510))
#define PORTE_AHB_PULLUP  (*(volatile u32*) (0x4005C510))
#define PORTF_APB_PULLUP  (*(volatile u32*) (0x40025510))
#define PORTF_AHB_PULLUP  (*(volatile u32*) (0x4005D510))

#define PORTA_APB_PULLDOWN  (*(volatile u32*) (0x40004514))
#define PORTA_AHB_PULLDOWN  (*(volatile u32*) (0x40058514))
#define PORTB_APB_PULLDOWN  (*(volatile u32*) (0x40005514))
#define PORTB_AHB_PULLDOWN  (*(volatile u32*) (0x40059514))
#define PORTC_APB_PULLDOWN  (*(volatile u32*) (0x40006514))
#define PORTC_AHB_PULLDOWN  (*(volatile u32*) (0x4005A514))
#define PORTD_APB_PULLDOWN  (*(volatile u32*) (0x40007514))
#define PORTD_AHB_PULLDOWN  (*(volatile u32*) (0x4005B514))
#define PORTE_APB_PULLDOWN  (*(volatile u32*) (0x40024514))
#define PORTE_AHB_PULLDOWN  (*(volatile u32*) (0x4005C514))
#define PORTF_APB_PULLDOWN  (*(volatile u32*) (0x40025514))
#define PORTF_AHB_PULLDOWN  (*(volatile u32*) (0x4005D514))

#define PORTA_APB_OPEN_DRAIN  (*(volatile u32*) (0x4000450C))
#define PORTA_AHB_OPEN_DRAIN  (*(volatile u32*) (0x4005850C))
#define PORTB_APB_OPEN_DRAIN  (*(volatile u32*) (0x4000550C))
#define PORTB_AHB_OPEN_DRAIN  (*(volatile u32*) (0x4005950C))
#define PORTC_APB_OPEN_DRAIN  (*(volatile u32*) (0x4000650C))
#define PORTC_AHB_OPEN_DRAIN  (*(volatile u32*) (0x4005A50C))
#define PORTD_APB_OPEN_DRAIN  (*(volatile u32*) (0x4000750C))
#define PORTD_AHB_OPEN_DRAIN  (*(volatile u32*) (0x4005B50C))
#define PORTE_APB_OPEN_DRAIN  (*(volatile u32*) (0x4002450C))
#define PORTE_AHB_OPEN_DRAIN  (*(volatile u32*) (0x4005C50C))
#define PORTF_APB_OPEN_DRAIN  (*(volatile u32*) (0x4002550C))
#define PORTF_AHB_OPEN_DRAIN  (*(volatile u32*) (0x4005D50C))

#define PORTA_APB_DATA  (*(volatile u32*) (0x400043FC))
#define PORTA_AHB_DATA  (*(volatile u32*) (0x400583FC))
#define PORTB_APB_DATA  (*(volatile u32*) (0x400053FC))
#define PORTB_AHB_DATA  (*(volatile u32*) (0x400593FC))
#define PORTC_APB_DATA  (*(volatile u32*) (0x400063FC))
#define PORTC_AHB_DATA  (*(volatile u32*) (0x4005A3FC))
#define PORTD_APB_DATA  (*(volatile u32*) (0x400073FC))
#define PORTD_AHB_DATA  (*(volatile u32*) (0x4005B3FC))
#define PORTE_APB_DATA  (*(volatile u32*) (0x400243FC))
#define PORTE_AHB_DATA  (*(volatile u32*) (0x4005C3FC))
#define PORTF_APB_DATA  (*(volatile u32*) (0x400253FC))
#define PORTF_AHB_DATA  (*(volatile u32*) (0x4005D3FC))

#define PORTA_APB_DEN  (*(volatile u32*) (0x4000451C))
#define PORTA_AHB_DEN  (*(volatile u32*) (0x4005851C))
#define PORTB_APB_DEN  (*(volatile u32*) (0x4000551C))
#define PORTB_AHB_DEN  (*(volatile u32*) (0x4005951C))
#define PORTC_APB_DEN  (*(volatile u32*) (0x4000651C))
#define PORTC_AHB_DEN  (*(volatile u32*) (0x4005A51C))
#define PORTD_APB_DEN  (*(volatile u32*) (0x4000751C))
#define PORTD_AHB_DEN  (*(volatile u32*) (0x4005B51C))
#define PORTE_APB_DEN  (*(volatile u32*) (0x4002451C))
#define PORTE_AHB_DEN  (*(volatile u32*) (0x4005C51C))
#define PORTF_APB_DEN  (*(volatile u32*) (0x4002551C))
#define PORTF_AHB_DEN  (*(volatile u32*) (0x4005D51C))

#define PORTA_APB_ALT  (*(volatile u32*) (0x40004420))
#define PORTA_AHB_ALT  (*(volatile u32*) (0x40058420))
#define PORTB_APB_ALT  (*(volatile u32*) (0x40005420))
#define PORTB_AHB_ALT  (*(volatile u32*) (0x40059420))
#define PORTC_APB_ALT  (*(volatile u32*) (0x40006420))
#define PORTC_AHB_ALT  (*(volatile u32*) (0x4005A420))
#define PORTD_APB_ALT  (*(volatile u32*) (0x40007420))
#define PORTD_AHB_ALT  (*(volatile u32*) (0x4005B420))
#define PORTE_APB_ALT  (*(volatile u32*) (0x40024420))
#define PORTE_AHB_ALT  (*(volatile u32*) (0x4005C420))
#define PORTF_APB_ALT  (*(volatile u32*) (0x40025420))
#define PORTF_AHB_ALT  (*(volatile u32*) (0x4005D420))



#define ENABLE           1
#define DISABLE          0

#define AHB              1
#define APB              0

#define OUT              1
#define IN               0

#define PULLUP           1
#define PULLDOWN            0
#define OPEN_DRAIN     (-1)

#define GPIO_HIGH       1
#define GPIO_LOW        0

#define PORTA           0
#define PORTB           1
#define PORTC           2
#define PORTD           3
#define PORTE           4
#define PORTF           5


#endif /* GPIO_PRIVATE_H_ */
