#ifndef DOG_H
#define DOG_H

/**
 * struct dog- main entry
 * Description - Creation of a new data type called dog
 * *@name: This takes an input as name
 * *@age: This takes an input as age
 * *@owner: This takes an input as the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif
