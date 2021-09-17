#include <stdio.h>
/**
* main - Entry point
* Description - A program that prints its name, followed by a new line
* *@argc: the function accepts an input saved into argc
* *@argv: the function accepts an input saved into argv
* Return: Success (0)
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *programName = argv[0];

	printf("%s\n", programName);

	return (0);
}
