#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
int r;
r = is_prime_number(1);
printf("%d\n", r);
r = is_prime_number(1024);
printf("%d\n", r);
r = is_prime_number(2);
printf("%d\n", r);
r = is_prime_number(3);
printf("%d\n", r);
r = is_prime_number(0);
printf("%d\n", r);
return (0);
}
