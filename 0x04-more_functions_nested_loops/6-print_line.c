#include "main.h"

/**
 * print_line - main entry
 * Description - A function that draws a straight line in the terminal
 * You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * *@n: the function accepts an input saved into n
 * from 0 to 14, followed by a new line
 * Return - Nothing (Success)
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		while (j <= n)
		{
			_putchar('_');
			j++;
		}

		_putchar('\n');
	}
}
