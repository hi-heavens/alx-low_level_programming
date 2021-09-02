#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Entry point
 * Description - that prints the numbers, from 0 to
 * 9, followed by a new line
 * You can only use _putchar twice in your code
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
