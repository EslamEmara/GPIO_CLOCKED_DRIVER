

/**
 * main.c
 */

#include "GPIO_initialization.h"
#include "GPIO_private.h"
#include "GPIO_configuration.h"
#include "BIT_MODE.h"

int main(void)
{
    u32 i=0;
    s8 flag =0;
    GPIO_voidInit();
    GPIO_SetDirection(PORTF,2,OUT);
    GPIO_SetDirection(PORTF,1,OUT);
    GPIO_SetDirection(PORTF,3,OUT);
    GPIO_SetDirection(PORTF,4,IN);
    GPIO_voidSetMaxAmps(PORTF,2,8);
    GPIO_voidSetMaxAmps(PORTF,1,8);
    GPIO_voidSetMaxAmps(PORTF,3,8);
    GPIO_voidSetMaxAmps(PORTF,4,8);
    GPIO_voidSetPinControl(PORTF,2,PULLUP);
    GPIO_voidSetPinControl(PORTF,1,PULLUP);
    GPIO_voidSetPinControl(PORTF,4,PULLUP);
    GPIO_voidSetPinControl(PORTF,3,PULLUP);
    GPIO_voidSetPinData(PORTF,2,1);
    GPIO_voidSetPinData(PORTF,1,1);
    GPIO_voidSetPinData(PORTF,3,1);


    while (1)
    {
      //  value = GETBIT (PORTF_AHB_DATA , 4);
        if (GPIO_u8GetPinValue(PORTF,4))
        {
            if (flag == 0)
            {
            GPIO_voidSetPinData(PORTF,2,0);
            GPIO_voidSetPinData(PORTF,1,1);
            GPIO_voidSetPinData(PORTF,3,0);
            flag ++;
            for (i = 0 ; i < 500000 ;i++);
            }
            else if (flag == 1)
            {
            GPIO_voidSetPinData(PORTF,1,0);
            GPIO_voidSetPinData(PORTF,2,1);
            GPIO_voidSetPinData(PORTF,3,0);
            flag ++;
            for (i = 0 ; i < 500000 ;i++);
            }
            else if (flag == 2)
                       {
                       GPIO_voidSetPinData(PORTF,1,0);
                       GPIO_voidSetPinData(PORTF,2,0);
                       GPIO_voidSetPinData(PORTF,3,1);
                       flag =0;
                       for (i = 0 ; i < 500000 ;i++);
                       }

        }


} return 0;}

