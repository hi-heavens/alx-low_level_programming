#include <stdio.h>
/**
* main - Entry point
* Description - A program that prints all arguments it receives
* *@argc: the function accepts an input saved into argc
* *@argv: the function accepts an input saved into argv
* Return: Success (0)
*/
int main(int argc, char *argv[])
{
	int argcount = 0;

	while (argcount < argc)
	{
		printf("%s\n", argv[argcount]);
		argcount++;
	}

	return (0);
}
