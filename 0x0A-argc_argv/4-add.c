#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description - A program that adds positive numbers
* *@argc: the function accepts an input saved into argc
* *@argv: the function accepts an input saved into argv
* Return: Success (0)
*/
int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;

	if (argc < 1)
	{
		printf("%s", "Error\n");
		return (1);
	}

	while (count < argc)
	{
		char *argument = argv[count];

		if (!atoi(argument))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			sum += atoi(argument);
		}
		count++;
	}

	printf("%d\n", sum);

	return (0);
}
