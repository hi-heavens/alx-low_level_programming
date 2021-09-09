#include "main.h"

/**
 * _strcat - Entry point
 * Description - A function that takes a pointer to an int
 * as parameter and updates the value it points to to 98
 * *@dest: the function accepts an input saved into dest
 * *@src: the function accepts an input saved into src
 * Return: Nothing for now
 */
char *_strcat(char *dest, char *src)
{
        int i = 0;
        int j = 0;
        int length = 0;

        while (dest[i] != '\0')
        {
                length += 1;
                i++;
        }

        while (src[j] != '\0')
        {
                dest[length] = src[j];
                j++;
                length++;
        }

        return dest;
}