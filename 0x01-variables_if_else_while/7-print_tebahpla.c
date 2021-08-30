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
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
