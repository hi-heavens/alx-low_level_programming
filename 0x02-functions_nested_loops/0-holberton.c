#include "main.h"
/**
 * main - Entry point
 * Description - A program that print the word Holberton
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[9] = "Holberton";
	int i;

	for(i = 0; i < 9; i++) 
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}