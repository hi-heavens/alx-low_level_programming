#include "main.h"
/**
* _memset - Entry point
* Description - A function that fills memory with a constant byte
* *@s: the function accepts an input saved into s
* *@b: the function accepts an input saved into b
* *@n: the function accepts an input saved into n
* Return: a char as success
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p;
	unsigned int i = 0;

	while (i < n)
	{
		p = &s[i];
		*p = b;
		i++;
	}

	return (0);
}
