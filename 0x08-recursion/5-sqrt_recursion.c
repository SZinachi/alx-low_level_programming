#include "main.h"

/**
 * sqrt_check - checks for the square root of c
 *
 * @g:guess at sqrt
 *
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */

int _sqrt_recursion(int n)
{
int i = 1;
if (n == 0)
{
return (0);
}
else if (n / i == i)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
i++;
return (_sqrt_recursion(n));
}
}
