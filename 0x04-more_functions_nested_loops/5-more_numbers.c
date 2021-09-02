#include "main.h"

/**
 * more_numbers - main entry
 * Description - A function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 * Return - Nothing (Success)
*/
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{

		int j = 0;

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
	_putchar('\n');
	i++;
	}
}
