#include "main.h"
#include <stdio.h>


/**
 * _strchr - Entry point
 *
 * @s: input
 *
 * @c: input
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
unsigned int i =0;
while (s[i] != '\0')
{
if (s[i] == c)
return (s + i);
i++;
}
return (NULL);
}

