#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Entry point
 * Description - A function that checks for lowercase character
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
        char i = islower(c);

        if(i != 0)
        {
                return (1);
        }
        return (0);     
}
