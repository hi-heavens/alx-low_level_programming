#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Get a random number and confirm if the number
 * is positive, negative, or zero
 * Return: Always 1 (Success)
 */
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	else
	{
		printf("%i is zero\n", i);
	}

}
