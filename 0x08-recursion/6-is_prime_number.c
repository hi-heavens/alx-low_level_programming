#include "main.h"
/**
* is_prime_check - Entry point
* Description - A function that checks for
* non-prime number and return 1
* *@n: the function accepts an input saved into n
* *@f: the function accepts a pointer saved into f
* Return: (0)
*/
int is_prime_check(int n, int *f)
{
    int i;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            *f = 1;
            break;
        }
    }
    return (0);
}



/**
* is_prime_number - Entry point
* Description - A function that returns 1 if the
* input integer is a prime number, otherwise return 0
* *@n: the function accepts an input saved into n
* Return: (0)
*/
int is_prime_number(int n)
{
    int check = 0;

    is_prime_check(n, &check);

    if (n <= 1)
    {
        return (0);
    }
    else
    {
        if (check == 0)
        {
            return (1);
        }
        else
        {
            return (0);
        }
  }
}
