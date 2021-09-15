#include "main.h"
/**
* _pow_recursion - Entry point
* Description - A function that returns the value of
* x raised to the power of y
* *@x: the function accepts an input saved into x
* *@y: the function accepts an input saved into y
* Return: Success (0)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
