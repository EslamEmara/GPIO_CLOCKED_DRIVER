/*
 * GPIO_PROG.c
 *
 *  Created on: Feb 10, 2020
 *      Author: Eslam
 */

#include "GPIO_private.h"
#include "BIT_MODE.h"
#include "GPIO_configuration.h"
#include "GPIO_initialization.h"
#include "CLOCK_private.h"
#include "CLOCK_config.h"

#include "CLOCK_int.h"
#include "STD_TYPES.h"

void GPIO_voidInit(void)
{

        /* ========================== SETTING THE CLOCK =========================*/

        CLOCK_voidInit();

        /*==================================== CONFIGURING THE BUS ===============================*/

         #if (PORTF_BUS == AHB)
                 SETBIT(GPIOHBCTL , 0);
         #elif (PORTF_BUS == APB)
                 CLRBIT(GPIOHBCTL , 0);
         #endif

         #if (PORTB_BUS == AHB)
                 SETBIT(GPIOHBCTL , 1);
         #elif (PORTB_BUS == APB)
                 CLRBIT(GPIOHBCTL , 1);
         #endif

         #if (PORTC_BUS == AHB)
                 SETBIT(GPIOHBCTL , 2);
         #elif (PORTC_BUS == APB)
                 CLRBIT(GPIOHBCTL , 2);
         #endif

         #if (PORTD_BUS == AHB)
                 SETBIT(GPIOHBCTL , 3);
         #elif (PORTD_BUS == APB)
                 CLRBIT(GPIOHBCTL , 3);
         #endif

         #if (PORTE_BUS == AHB)
                 SETBIT(GPIOHBCTL , 4);
         #elif (PORTE_BUS == APB)
                 CLRBIT(GPIOHBCTL , 4);
         #endif

         #if  (PORTF_BUS == AHB)
                 SETBIT(GPIOHBCTL , 5);
         #elif (PORTF_BUS == APB)
                 CLRBIT(GPIOHBCTL , 5);
         #endif

     /* =================================== ENABLING CLOCK TO PORTS ================================= */

       #if  (PORTF_STATE == ENABLE)
                SETBIT (RCGCGPIO , 0);
       #elif(PORTF_STATE == DISABLE)
                CLRBIT (RCGCGPIO , 0);
       #endif

        #if  (PORTB_STATE == ENABLE)
                SETBIT (RCGCGPIO , 1);
        #elif(PORTB_STATE == DISABLE)
                CLRBIT (RCGCGPIO , 1);
        #endif

        #if  (PORTC_STATE == ENABLE)
                SETBIT (RCGCGPIO , 2);
        #elif(PORTC_STATE == DISABLE)
                CLRBIT (RCGCGPIO , 2);
        #endif

        #if  (PORTD_STATE == ENABLE)
                SETBIT (RCGCGPIO , 3);
        #elif(PORTD_STATE == DISABLE)
                CLRBIT (RCGCGPIO , 3);
        #endif

        #if  (PORTE_STATE == ENABLE)
                SETBIT (RCGCGPIO , 4);
        #elif(PORTE_STATE == DISABLE)
                CLRBIT (RCGCGPIO , 4);
        #endif

        #if  (PORTF_STATE == ENABLE)
                SETBIT (RCGCGPIO , 5);
        #elif(PORTF_STATE == DISABLE)
                CLRBIT (RCGCGPIO , 5);
        #endif

}

/* SETTING DIRECTION
 * OPTIONS : (PORTA-PORTF , 0-7 ,IN/OUT)
 */
void GPIO_SetDirection(u8 port , u8 pin , u8 direction)
{
    if (pin <= 7)
    {

    if (port == PORTA && PORTA_BUS == APB && direction == OUT)
        SETBIT(PORTA_APB , pin);
    else if (port == PORTA && PORTA_BUS == AHB && direction == OUT)
        SETBIT(PORTA_AHB , pin);
    else if (port == PORTA && PORTA_BUS == APB && direction == IN)
        CLRBIT(PORTA_APB , pin);
    else if (port == PORTA && PORTA_BUS == AHB && direction == IN)
        CLRBIT(PORTA_AHB , pin);

    if (port == PORTB && PORTB_BUS == APB && direction == OUT)
         SETBIT(PORTB_APB , pin);
     else if (port == PORTB && PORTB_BUS == AHB && direction == OUT)
         SETBIT(PORTB_AHB , pin);
     else if (port == PORTB && PORTB_BUS == APB && direction == IN)
         CLRBIT(PORTB_APB , pin);
     else if (port == PORTB && PORTB_BUS == AHB && direction == IN)
         CLRBIT(PORTB_AHB , pin);

    if (port == PORTC && PORTC_BUS == APB && direction == OUT)
         SETBIT(PORTC_APB , pin);
     else if (port == PORTC && PORTC_BUS == AHB && direction == OUT)
         SETBIT(PORTC_AHB , pin);
     else if (port == PORTC && PORTC_BUS == APB && direction == IN)
         CLRBIT(PORTC_APB , pin);
     else if (port == PORTC && PORTC_BUS == AHB && direction == IN)
         CLRBIT(PORTC_AHB , pin);

    if (port == PORTD && PORTD_BUS == APB && direction == OUT)
         SETBIT(PORTD_APB , pin);
     else if (port == PORTD && PORTD_BUS == AHB && direction == OUT)
         SETBIT(PORTD_AHB , pin);
     else if (port == PORTD && PORTD_BUS == APB && direction == IN)
         CLRBIT(PORTD_APB , pin);
     else if (port == PORTD && PORTD_BUS == AHB && direction == IN)
         CLRBIT(PORTD_AHB , pin);

    if (port == PORTE && PORTE_BUS == APB && direction == OUT)
         SETBIT(PORTE_APB , pin);
     else if (port == PORTE && PORTE_BUS == AHB && direction == OUT)
         SETBIT(PORTE_AHB , pin);
     else if (port == PORTE && PORTE_BUS == APB && direction == IN)
         CLRBIT(PORTE_APB , pin);
     else if (port == PORTE && PORTE_BUS == AHB && direction == IN)
         CLRBIT(PORTE_AHB , pin);

    if (port == PORTF && PORTF_BUS == APB && direction == OUT)
         SETBIT(PORTF_APB , pin);
     else if (port == PORTF && PORTF_BUS == AHB && direction == OUT)
         SETBIT(PORTF_AHB , pin);
     else if (port == PORTF && PORTF_BUS == APB && direction == IN)
         CLRBIT(PORTF_APB , pin);
     else if (port == PORTF && PORTF_BUS == AHB && direction == IN)
         CLRBIT(PORTF_AHB , pin);

    }
}
/*SET MAXIMUM CURRENT DRAIN
 * OPTIONS : 2 , 4 , 8
 *
 */
void GPIO_voidSetMaxAmps(u8 port , u8 pin , u8 amps)
{
    if (amps ==2 )
    {

        if (port == PORTA)
        {
            if (PORTA_BUS == AHB)
                SETBIT(PORTA_AHB_2AMPS , pin);
            else if (PORTA_BUS == APB)
                SETBIT(PORTA_APB_2AMPS , pin);
        }

        else if (port == PORTB)
        {
            if (PORTB_BUS == AHB)
                SETBIT(PORTB_AHB_2AMPS , pin);
            else if (PORTB_BUS == APB)
                SETBIT(PORTB_APB_2AMPS , pin);
        }

        else if (port == PORTC)
        {
            if (PORTC_BUS == AHB)
                SETBIT(PORTC_AHB_2AMPS , pin);
            else if (PORTC_BUS == APB)
                SETBIT(PORTC_APB_2AMPS , pin);
        }

        else if (port == PORTD)
        {
            if (PORTD_BUS == AHB)
                SETBIT(PORTD_AHB_2AMPS , pin);
            else if (PORTD_BUS == APB)
                SETBIT(PORTD_APB_2AMPS , pin);
        }

        else if (port == PORTE)
        {
            if (PORTE_BUS == AHB)
                SETBIT(PORTE_AHB_2AMPS , pin);
            else if (PORTE_BUS == APB)
                SETBIT(PORTE_APB_2AMPS , pin);
        }

        else if (port == PORTF)
        {
            if (PORTF_BUS == AHB)
                SETBIT(PORTF_AHB_2AMPS , pin);
            else if (PORTF_BUS == APB)
                SETBIT(PORTF_APB_2AMPS , pin);
        }


    }

    else if (amps == 4)
    {
        if (port == PORTA)
               {
                   if (PORTA_BUS == AHB)
                       SETBIT(PORTA_AHB_4AMPS , pin);
                   else if (PORTA_BUS == APB)
                       SETBIT(PORTA_APB_4AMPS , pin);
               }

               else if (port == PORTB)
               {
                   if (PORTB_BUS == AHB)
                       SETBIT(PORTB_AHB_4AMPS , pin);
                   else if (PORTB_BUS == APB)
                       SETBIT(PORTB_APB_4AMPS , pin);
               }

               else if (port == PORTC)
               {
                   if (PORTC_BUS == AHB)
                       SETBIT(PORTC_AHB_4AMPS , pin);
                   else if (PORTC_BUS == APB)
                       SETBIT(PORTC_APB_4AMPS , pin);
               }

               else if (port == PORTD)
               {
                   if (PORTD_BUS == AHB)
                       SETBIT(PORTD_AHB_4AMPS , pin);
                   else if (PORTD_BUS == APB)
                       SETBIT(PORTD_APB_4AMPS , pin);
               }

               else if (port == PORTE)
               {
                   if (PORTE_BUS == AHB)
                       SETBIT(PORTE_AHB_4AMPS , pin);
                   else if (PORTE_BUS == APB)
                       SETBIT(PORTE_APB_4AMPS , pin);
               }

               else if (port == PORTF)
               {
                   if (PORTF_BUS == AHB)
                       SETBIT(PORTF_AHB_4AMPS , pin);
                   else if (PORTF_BUS == APB)
                       SETBIT(PORTF_APB_4AMPS , pin);
               }


           }

    else if (amps >= 8)
      {
          if (port == PORTA)
                 {
                     if (PORTA_BUS == AHB)
                         SETBIT(PORTA_AHB_8AMPS , pin);
                     else if (PORTA_BUS == APB)
                         SETBIT(PORTA_APB_8AMPS , pin);
                 }

                 else if (port == PORTB)
                 {
                     if (PORTB_BUS == AHB)
                         SETBIT(PORTB_AHB_8AMPS , pin);
                     else if (PORTB_BUS == APB)
                         SETBIT(PORTB_APB_8AMPS , pin);
                 }

                 else if (port == PORTC)
                 {
                     if (PORTC_BUS == AHB)
                         SETBIT(PORTC_AHB_8AMPS , pin);
                     else if (PORTC_BUS == APB)
                         SETBIT(PORTC_APB_8AMPS , pin);
                 }

                 else if (port == PORTD)
                 {
                     if (PORTD_BUS == AHB)
                         SETBIT(PORTD_AHB_8AMPS , pin);
                     else if (PORTD_BUS == APB)
                         SETBIT(PORTD_APB_8AMPS , pin);
                 }

                 else if (port == PORTE)
                 {
                     if (PORTE_BUS == AHB)
                         SETBIT(PORTE_AHB_8AMPS , pin);
                     else if (PORTE_BUS == APB)
                         SETBIT(PORTE_APB_8AMPS , pin);
                 }

                 else if (port == PORTF)
                 {
                     if (PORTF_BUS == AHB)
                         SETBIT(PORTF_AHB_8AMPS , pin);
                     else if (PORTF_BUS == APB)
                         SETBIT(PORTF_APB_8AMPS , pin);
                 }


             }

}

void GPIO_voidSetPinControl(u8 port , u8 pin , s8 data)
{
    if (pin <=7 )
    {
    if (data == PULLUP)
    {
        if (port == PORTA)
        {
            if (PORTA_BUS == AHB)
                SETBIT(PORTA_AHB_PULLUP , pin);
            else if (PORTA_BUS == APB)
                SETBIT(PORTA_APB_PULLUP , pin);
        }

        else if (port == PORTB)
                {
                    if (PORTB_BUS == AHB)
                        SETBIT(PORTB_AHB_PULLUP , pin);
                    else if (PORTB_BUS == APB)
                        SETBIT(PORTB_APB_PULLUP , pin);
                }

        else if (port == PORTC)
                {
                    if (PORTC_BUS == AHB)
                        SETBIT(PORTC_AHB_PULLUP , pin);
                    else if (PORTC_BUS == APB)
                        SETBIT(PORTC_APB_PULLUP , pin);
                }

        else if (port == PORTD)
                {
                    if (PORTD_BUS == AHB)
                        SETBIT(PORTD_AHB_PULLUP , pin);
                    else if (PORTD_BUS == APB)
                        SETBIT(PORTD_APB_PULLUP , pin);
                }

        else if (port == PORTE)
                {
                    if (PORTE_BUS == AHB)
                        SETBIT(PORTE_AHB_PULLUP , pin);
                    else if (PORTE_BUS == APB)
                        SETBIT(PORTE_APB_PULLUP , pin);
                }

        else if (port == PORTF)
                {
                    if (PORTF_BUS == AHB)
                        SETBIT(PORTF_AHB_PULLUP , pin);
                    else if (PORTF_BUS == APB)
                        SETBIT(PORTF_APB_PULLUP , pin);
                }

    }

    if (data == PULLDOWN)
       {
           if (port == PORTA)
           {
               if (PORTA_BUS == AHB)
                   SETBIT(PORTA_AHB_PULLDOWN , pin);
               else if (PORTA_BUS == APB)
                   SETBIT(PORTA_APB_PULLDOWN , pin);
           }

           else if (port == PORTB)
                   {
                       if (PORTB_BUS == AHB)
                           SETBIT(PORTB_AHB_PULLDOWN , pin);
                       else if (PORTB_BUS == APB)
                           SETBIT(PORTB_APB_PULLDOWN , pin);
                   }

           else if (port == PORTC)
                   {
                       if (PORTC_BUS == AHB)
                           SETBIT(PORTC_AHB_PULLDOWN , pin);
                       else if (PORTC_BUS == APB)
                           SETBIT(PORTC_APB_PULLDOWN , pin);
                   }

           else if (port == PORTD)
                   {
                       if (PORTD_BUS == AHB)
                           SETBIT(PORTD_AHB_PULLDOWN , pin);
                       else if (PORTD_BUS == APB)
                           SETBIT(PORTD_APB_PULLDOWN , pin);
                   }

           else if (port == PORTE)
                   {
                       if (PORTE_BUS == AHB)
                           SETBIT(PORTE_AHB_PULLDOWN , pin);
                       else if (PORTE_BUS == APB)
                           SETBIT(PORTE_APB_PULLDOWN , pin);
                   }

           else if (port == PORTF)
                   {
                       if (PORTF_BUS == AHB)
                           SETBIT(PORTF_AHB_PULLDOWN , pin);
                       else if (PORTF_BUS == APB)
                           SETBIT(PORTF_APB_PULLDOWN , pin);
                   }

       }

    if (data    ==  OPEN_DRAIN)
       {
           if (port == PORTA)
           {
               if (PORTA_BUS == AHB)
                   SETBIT(PORTA_AHB_OPEN_DRAIN , pin);
               else if (PORTA_BUS == APB)
                   SETBIT(PORTA_APB_OPEN_DRAIN , pin);
           }

           else if (port == PORTB)
                   {
                       if (PORTB_BUS == AHB)
                           SETBIT(PORTB_AHB_OPEN_DRAIN , pin);
                       else if (PORTB_BUS == APB)
                           SETBIT(PORTB_APB_OPEN_DRAIN , pin);
                   }

           else if (port == PORTC)
                   {
                       if (PORTC_BUS == AHB)
                           SETBIT(PORTC_AHB_OPEN_DRAIN , pin);
                       else if (PORTC_BUS == APB)
                           SETBIT(PORTC_APB_OPEN_DRAIN , pin);
                   }

           else if (port == PORTD)
                   {
                       if (PORTD_BUS == AHB)
                           SETBIT(PORTD_AHB_OPEN_DRAIN , pin);
                       else if (PORTD_BUS == APB)
                           SETBIT(PORTD_APB_OPEN_DRAIN , pin);
                   }

           else if (port == PORTE)
                   {
                       if (PORTE_BUS == AHB)
                           SETBIT(PORTE_AHB_OPEN_DRAIN , pin);
                       else if (PORTE_BUS == APB)
                           SETBIT(PORTE_APB_OPEN_DRAIN , pin);
                   }

           else if (port == PORTF)
                   {
                       if (PORTF_BUS == AHB)
                           SETBIT(PORTF_AHB_OPEN_DRAIN , pin);
                       else if (PORTF_BUS == APB)
                           SETBIT(PORTF_APB_OPEN_DRAIN , pin);
                   }

       }
    }
    }

void GPIO_DIGITAL_ENABLE(u8 port , u8 pin)
{
    if (port == PORTA)
    {
        if (PORTA_BUS==AHB)
            SETBIT(PORTA_AHB_DEN,pin);
        else if (PORTA_BUS==APB)
            SETBIT(PORTA_APB_DEN,pin);
    }
    else if (port == PORTB)
    {
        if (PORTB_BUS==AHB)
            SETBIT(PORTB_AHB_DEN,pin);
        else if (PORTB_BUS==APB)
            SETBIT(PORTB_APB_DEN,pin);
    }
    else if (port == PORTC)
        {
            if (PORTC_BUS==AHB)
                SETBIT(PORTC_AHB_DEN,pin);
            else if (PORTC_BUS==APB)
                SETBIT(PORTC_APB_DEN,pin);
        }
    else if (port == PORTD)
        {
            if (PORTD_BUS==AHB)
                SETBIT(PORTD_AHB_DEN,pin);
            else if (PORTD_BUS==APB)
                SETBIT(PORTD_APB_DEN,pin);
        }
    else if (port == PORTE)
        {
            if (PORTE_BUS==AHB)
                SETBIT(PORTE_AHB_DEN,pin);
            else if (PORTE_BUS==APB)
                SETBIT(PORTE_APB_DEN,pin);
        }
    else if (port == PORTF)
        {
            if (PORTF_BUS==AHB)
                SETBIT(PORTF_AHB_DEN,pin);
            else if (PORTF_BUS==APB)
                SETBIT(PORTF_APB_DEN,pin);
        }
}


void GPIO_voidSetAlt(u8 port , u8 pin)
{

    if (port == PORTA)
    {
        if (PORTA_BUS == AHB)
            CLRBIT(PORTA_AHB_ALT,pin);
        else if (PORTA_BUS == APB)
            CLRBIT(PORTA_APB_ALT,pin);
    }

    else if (port == PORTB)
    {
        if (PORTB_BUS == AHB)
            CLRBIT(PORTB_AHB_ALT,pin);
        else if (PORTB_BUS == APB)
            CLRBIT(PORTB_APB_ALT,pin);
    }

    else if (port == PORTC)
    {
        if (PORTC_BUS == AHB)
            CLRBIT(PORTC_AHB_ALT,pin);
        else if (PORTC_BUS == APB)
            CLRBIT(PORTC_APB_ALT,pin);
    }

    else if (port == PORTD)
    {
        if (PORTD_BUS == AHB)
            CLRBIT(PORTD_AHB_ALT,pin);
        else if (PORTD_BUS == APB)
            CLRBIT(PORTD_APB_ALT,pin);
    }

    else if (port == PORTE)
    {
        if (PORTE_BUS == AHB)
            CLRBIT(PORTE_AHB_ALT,pin);
        else if (PORTE_BUS == APB)
            CLRBIT(PORTE_APB_ALT,pin);
    }

    else if (port == PORTF)
    {
        if (PORTF_BUS == AHB)
            CLRBIT(PORTF_AHB_ALT,pin);
        else if (PORTF_BUS == APB)
            CLRBIT(PORTF_APB_ALT,pin);
    }

}
/* SET THE DATA IN PINS
 * OPTIONS : PORTA-F  ,  0-7  ,  GPIO_HIGH-GPIO_LOW  )
 */
void GPIO_voidSetPinData(u8 port , u8 pin , u8 data)
{
    if(pin<=7)
    {
        GPIO_voidSetAlt(port , pin);
        GPIO_DIGITAL_ENABLE(port , pin);

    if ( data > 0 )
    {
        if (port == PORTA)
        {
            if(PORTA_BUS == AHB)
                SETBIT(PORTA_AHB_DATA , pin);
            else if (PORTA_BUS == APB)
                SETBIT(PORTA_APB_DATA, pin);
        }
        else if (port == PORTB)
        {
            if(PORTB_BUS == AHB)
                SETBIT(PORTB_AHB_DATA , pin);
            else if (PORTB_BUS == APB)
                SETBIT(PORTB_APB_DATA, pin);
        }
        else if (port == PORTC)
        {
            if(PORTC_BUS == AHB)
                SETBIT(PORTC_AHB_DATA , pin);
            else if (PORTC_BUS == APB)
                SETBIT(PORTC_APB_DATA, pin);
        }
        else if (port == PORTD)
        {
            if(PORTD_BUS == AHB)
                SETBIT(PORTD_AHB_DATA , pin);
            else if (PORTD_BUS == APB)
                SETBIT(PORTD_APB_DATA, pin);
        }
        else if (port == PORTE)
        {
            if(PORTE_BUS == AHB)
                SETBIT(PORTE_AHB_DATA , pin);
            else if (PORTE_BUS == APB)
                SETBIT(PORTE_APB_DATA, pin);
        }
        else if (port == PORTF)
        {
            if(PORTF_BUS == AHB)
                SETBIT(PORTF_AHB_DATA, pin);
            else if (PORTF_BUS == APB)
                SETBIT(PORTF_APB_DATA, pin);
        }
    }

    else if ( data == 0 )
    {
        if (port == PORTA)
        {
            if(PORTA_BUS == AHB)
                CLRBIT(PORTA_AHB_DATA , pin);
            else if (PORTA_BUS == APB)
                CLRBIT(PORTA_APB_DATA, pin);
        }
        else if (port == PORTB)
        {
            if(PORTB_BUS == AHB)
                CLRBIT(PORTB_AHB_DATA , pin);
            else if (PORTB_BUS == APB)
                CLRBIT(PORTB_APB_DATA, pin);
        }
        else if (port == PORTC)
        {
            if(PORTC_BUS == AHB)
                CLRBIT(PORTC_AHB_DATA , pin);
            else if (PORTC_BUS == APB)
                CLRBIT(PORTC_APB_DATA, pin);
        }
        else if (port == PORTD)
        {
            if(PORTD_BUS == AHB)
                CLRBIT(PORTD_AHB_DATA , pin);
            else if (PORTD_BUS == APB)
                CLRBIT(PORTD_APB_DATA, pin);
        }
        else if (port == PORTE)
        {
            if(PORTE_BUS == AHB)
                CLRBIT(PORTE_AHB_DATA , pin);
            else if (PORTE_BUS == APB)
                CLRBIT(PORTE_APB_DATA, pin);
        }
        else if (port == PORTF)
        {
            if(PORTF_BUS == AHB)
                CLRBIT(PORTF_AHB_DATA , pin);
            else if (PORTF_BUS == APB)
                CLRBIT(PORTF_APB_DATA, pin);
        }
    }

    }
}

   u8 GPIO_u8GetPinValue   (u8 port , u8 pin)
    {
        u8 value =0;
    if(pin<=7)
     {
         GPIO_voidSetAlt(port , pin);
         GPIO_DIGITAL_ENABLE(port , pin);
    if (port == PORTA)
    {
        if (PORTA_BUS == AHB)
           value= GETBIT(PORTA_AHB_DATA,pin);
        else if (PORTA_BUS == APB)
           value= GETBIT(PORTA_APB_DATA,pin);

    }
    else if (port == PORTB)
    {
        if (PORTB_BUS == AHB)
           value= GETBIT(PORTB_AHB_DATA,pin);
        else if (PORTB_BUS == APB)
           value= GETBIT(PORTB_APB_DATA,pin);

    }

    else if (port == PORTC)
    {
        if (PORTC_BUS == AHB)
           value= GETBIT(PORTC_AHB_DATA,pin);
        else if (PORTC_BUS == APB)
           value= GETBIT(PORTC_APB_DATA,pin);

    }
    else if (port == PORTD)
    {
        if (PORTD_BUS == AHB)
           value= GETBIT(PORTD_AHB_DATA,pin);
        else if (PORTD_BUS == APB)
           value= GETBIT(PORTD_APB_DATA,pin);

    }
    else if (port == PORTE)
    {
        if (PORTE_BUS == AHB)
           value= GETBIT(PORTE_AHB_DATA,pin);
        else if (PORTE_BUS == APB)
           value= GETBIT(PORTE_APB_DATA,pin);

    }
    else if (port == PORTF)
    {
        if (PORTF_BUS == AHB)
           value= GETBIT(PORTF_AHB_DATA,pin);
        else if (PORTF_BUS == APB)
           value= GETBIT(PORTF_APB_DATA,pin);

    }

     }
    return !value;   //assuming pulled up
    }

