#include "main.h"
/**
* _puts_recursion - Entry point
* Description - A function that takes a pointer to an int
* *@s: the function accepts an input saved into s
* Return: Nothing for now
*/
void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}

}
