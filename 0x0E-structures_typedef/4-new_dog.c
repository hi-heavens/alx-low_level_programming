#include "dog.h"
#include <stdlib.h>
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
    int i, j;

    p_dott = malloc(sizeof(*p_dott));

    if (p_dott == NULL || !(name) || !(owner))
    {
        free(p_dott);
        return NULL;
    }
    for (i = 0; name[i]; i++)
        ;
    p_dott->name = malloc(i++);
    for (i = 0; owner[i]; i++)
        ;
    p_dott->owner = malloc(i++);


    if (!(p_dott->name) || !(p_dott->owner))
	{
		free(p_dott->owner);
		free(p_dott->name);
		free(p_dott);
		return (NULL);
	}

    for (j = 0; j < i; j++)
    {
        p_dott->name[j] = name[j];
    }
    p_dott->name[j] = '\0';

    p_dott->age = age;

    for (j = 0; j < i; j++)
    {
        p_dott->owner[j] = owner[j];
    }
    p_dott->owner[j] = '\0';


    return (p_dott);
}
