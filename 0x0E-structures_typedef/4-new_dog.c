#include "dog.h"
#include <stdio.h>
/**
* new_dog - Entry point
* Description - A function that takes a pointer of a struct dog
* *@name: the function accepts a pointer input saved into name
* *@age: the function accepts an input saved into age
* *@owner: the function accepts a pointer input saved into owner
* Return: a struct pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p_dott;

    p_dott = malloc(sizeof(*p_dott));

    if (p_dott == NULL)
    {
        free(p_dott);
        return NULL;
    } else
    {
        p_dott->name = name;
        p_dott->age = age;
        p_dott->owner = owner;
    }

    return p_dott;
}