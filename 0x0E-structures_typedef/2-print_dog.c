#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* print_dog - Entry point
* Description - A function that prints a struct dog
* *@d: the function accepts an input saved into d
* Return: Nothing for now
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
else
{
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

if (d->age < 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n", d->age);

if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner); 
} 
}