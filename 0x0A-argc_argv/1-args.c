#include <stdio.h>
/**
* main - Entry point
* Description - A program that prints the number of arguments passed into it
* *@argc: the function accepts an input saved into argc
* *@argv: the function accepts an input saved into argv
* Return: Success (0)
*/
int main(int argc, char *argv[])
{

int numberOfArgument = argc;
printf("%d", numberOfArgument);

return (0);
}
