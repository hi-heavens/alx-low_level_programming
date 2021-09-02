#include "main.h"

/**
 * print_diagonal - main entry
 * Description - A function that draws a diagonal line on the terminal
 * You can only use _putchar function to print
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * *@n: the function accepts an input saved into n
 * Return - Nothing (Success)
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int j = 1;
while (j <= n)
{
int k = 1;
while (k < j)
{
_putchar(' ');
k++;
}
_putchar('\\');
_putchar('\n');
j++;
}
}
}
