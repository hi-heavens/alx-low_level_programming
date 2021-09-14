#include "main.h"
/**
* factorial - Entry point
* Description - A function that returns the factorial
* of a given number
* *@n: the function accepts an input saved into n
* Return: Success (0)
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
