#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: input
 *
 * @accept: input
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, check, value;
value = 0;
for (i = 0; s[i] != '\0'; i++)
{
check = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
value++;
check = 1;
}
}
if (check == 0)
return (value);
}
return (check);
}
