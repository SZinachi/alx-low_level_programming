#include "main.h"
#include <stdio.h>


/**
 * _strpbrk - Entry point
 *
 * @s: input
 *
 * @accept: input
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j =0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
return (s + i);
}
}
return (NULL);
}
