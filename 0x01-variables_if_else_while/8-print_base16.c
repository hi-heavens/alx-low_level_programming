#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all the numbers of base 16 
 * in lowercase, to only use the putchar function 
 * and just three times
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}