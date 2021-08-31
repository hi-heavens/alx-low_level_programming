#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description - A function that prints 10 times the alphabet,
 * in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
