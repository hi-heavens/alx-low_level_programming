#include "function_pointers.h"
/**
* int_index - Entry point
* Description - A function that searches for an integer
* *@array: the function accepts an input saved into array
* *@size: the function accepts an input saved into size
* *@cmp: the function accepts an input saved into cmp
* Return: Success(0)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size < 1 || array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}
