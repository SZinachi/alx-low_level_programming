#include <stdio.h>

/**
 *main - prints numbers of base 16 in lowercase
 *
 *followed by new line
 *
 *Return: 0 if (successful)
 *
 */

int main(void)

{

int n;

for (n = 48; n < 58; n++)

{

putchar(n);

if (n != 57)

{

putchar(',');

putchar(' ');

}

}

putchar('\n');

return (0);

}
