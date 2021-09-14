#include "main.h"
/**
* _print_rev_recursion - Entry point
* Description - A function that prints a string in reverse
* *@s: the function accepts an input saved into s
* Return: Nothing for now
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(&s[1]);
	}
	else
	{
		return;
	}

	_putchar(*s);
}
