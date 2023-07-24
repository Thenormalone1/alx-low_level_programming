#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
{
int x, i;
x = 0;
while (s[x] != '\0')
{
x++;
}
for (i = x - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
