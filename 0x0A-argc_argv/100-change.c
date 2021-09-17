#include <stdio.h>
#include <stdlib.h>

/**
* returnCoin - Entry point
* Description - A program that returns the number
* of coins to be given to the customer
* *@cents: the function accepts an input saved into cents
* Return: Success (0)
*/
int returnCoin (int cents)
{
int coins = 0;

while (cents > 0)
{
while (cents >= 25)
{
cents -= 25;
coins++;
}
while (cents >= 10)
{
cents -= 10;
coins++;
}
while (cents >= 5)
{
cents -= 5;
coins++;
}
while (cents >= 2)
{
cents -= 2;
coins++;
}
while (cents >= 1)
{
cents -= 1;
coins++;
}
return (coins);
}

return (0);
}


/**
* main - Entry point
* Description - A program that prints the minimum
* number of coins to make change for an amount of money
* *@argc: the function accepts an input saved into argc
* *@argv: the function accepts an input saved into argv
* Return: Success (0)
*/
int main(int argc, char *argv[])
{
char *argument = argv[1];
int inputCent = atoi(argument);
int centPaid = inputCent;
int totalCoin;

if (argc != 2)
{
printf("%s\n", "Error");
return (1);
}
else if (argc < 0)
{
return (-1);
}
else
{
totalCoin = returnCoin(centPaid);
printf("%d", totalCoin);

return (0);
}

}
