#include "main.h"

/**
  prime_checker - checks for prime
 *
 * @n: input to check
 *
 * @i: n / 2, then passes to i - 1, checks if greater than 0
 *
 * Return: prime check
 */

int prime_checker(int n, int i)
{
if (n % i == 0)
{
return (0);
}
else if (i == 2 || i == 3)
{
return (1);
}
else
{
return (prime_checker(n, i + 1));
}
}

/**
 * is_prime_number - executes prime_checker
 *
 * @n: input to check
 *
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
if (n == 0 || n == 1)
{
return (0);
}
else if (n == 2 || n == 3)
{
return (1);
}
else
{
return (prime_checker(n, 1));
}
}
