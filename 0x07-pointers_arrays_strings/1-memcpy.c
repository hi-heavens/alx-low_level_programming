#include "main.h"
/**
* _memcpy - Entry point
* Description - A function that copies memory area
* as parameter and updates the value it points to to 98
* *@dest: the function accepts an input saved into dest
* *@src: the function accepts an input saved into src
* *@n: the function accepts an input saved into n
* Return: Nothing for now
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
        char *d;

        unsigned int i = 0;

        while (i < n)
        {
                d = &dest[i];
                *d = src[i];
                i++;
        }

        return (0);
}
