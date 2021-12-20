#include "dog.h"
#include <stdio.h>
/**
* free_dog - Entry point
* Description - A function that takes a pointer of a struct dog
* *@d: the function accepts a pointer input saved into d
* Return: Nothing for now
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void free_dog(dog_t *d);

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}

void free_dog(dog_t *d)
{
    if (d)
        free(d);
}