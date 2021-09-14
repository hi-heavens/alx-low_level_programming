#include "main.h"
/**
* _strlen_recursion - Entry point
* Description - A function that returns the length of a string
* *@s: the function accepts an input saved into s
* Return: Success (0)
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}

	_putchar(*s);
}
