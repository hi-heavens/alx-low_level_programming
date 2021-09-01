#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Entry point
 * Description - A function that prints the last digit of a number
 * @i: the function accepts an input saved into i
 * Return: Return the absolute value of the input (Success)
 */
int print_last_digit(int i)
{
        int j;

        j = i % 10;
        if (j < 0)
        {
                j = -1 * j;
        }
        _putchar(j + '0');
        return (j);
}
