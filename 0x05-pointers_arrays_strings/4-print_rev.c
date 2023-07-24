#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
{
int x;
x = 0;
while (s[x] != '\0')
{
x++;
}
for (; x >= 0; x--)
{
_putchar(s[x - 1]);
}
_putchar('\n');
}
