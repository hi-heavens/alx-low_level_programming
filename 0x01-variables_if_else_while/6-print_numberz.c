#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all single digit 
 * numbers of base 10 starting from 0
 * You can only use putchar function and just twice
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}