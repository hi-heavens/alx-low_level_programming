#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the alphabet in lowercase
 * except letter q and letter e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
			putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
