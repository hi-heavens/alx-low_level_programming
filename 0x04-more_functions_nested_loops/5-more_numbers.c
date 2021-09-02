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

	while (i <= 10)
	{

		int j = 0;
		int k, l;

		while (j <= 14)
		{
			if (j > 9)
			{
				/*i = i / 10;
				l = j % 10;
				  _putchar(k + '0');*/
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar((i % 10) + '0');
			}
			j++;
		}
	_putchar('\n');
	i++;
	}
}
