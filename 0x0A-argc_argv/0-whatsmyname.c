#include "main.h"
/**
* main - Entry point
* Description - A program that prints its name, followed by a new line
* *@argc: the function accepts an input saved into argc
* *@argv: the function accepts an input saved into argv
* Return: Nothing for now
*/
int main(int argc, char *argv[])
{
        char programName = argv[0];
        printf("%s", programName);
}