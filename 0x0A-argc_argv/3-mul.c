#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description - A program that multiplies two numbers
* *@argc: the function accepts an input saved into argc
* *@argv: the function accepts an input saved into argv
* Return: Success (0)
*/
int main(int argc, char *argv[])
{
int num1, num2, multiply;

if (argc != 3)
{
printf("%s", "Error\n");
return (1);
}
else
{
char *argument2 = argv[1];
char *argument3 = argv[2];

num1 = atoi(argument2);
num2 = atoi(argument3);

multiply = num1 * num2;

printf("%d\n", multiply);

return (0);
}   
}
