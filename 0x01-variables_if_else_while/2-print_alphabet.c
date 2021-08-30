#include <stdio.h>
/**
* main - Entry point
* Description: Program that prints the alphabet in lowercase, followed by a new line
* Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}