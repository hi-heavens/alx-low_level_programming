#include "main.h"
/**
* set_string - Entry point
* Description - A function that sets the value of a pointer to a char
* *@s: the function accepts an input saved into s
* *@to: the function accepts an input saved into to
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
