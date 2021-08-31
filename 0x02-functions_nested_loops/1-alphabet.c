#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description - A program that that prints the alphabet
 * in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void) /** Description - Prototype for print_alphabet */
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
