#include "main.h"

/**
 * _isdigit - checks if parameter is a digit between 0 and 9
 *
 * @c: input number
 *
 *  Return: 1 if digit between 0 and 9, 0 if otherwise
 *
 */

int _isdigit(int c)
{

int numbers[] = {0,1,2,3,4,5,6,7,8,9};
int arrlen = sizeof numbers / sizeof numbers[0];
int i;

for( i = 0; i <= arrlen; i++)

{
if(c == numbers[i])
{

return(1);
}
}
return(0);
}
