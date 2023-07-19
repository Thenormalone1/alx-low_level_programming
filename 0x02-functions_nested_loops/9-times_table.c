#include "main.h"

/**
 * times_table - times table
 *
 * Return: nothing
 */

void times_table(void)
{
int r;
int c;
int x;
for (c = 0; c <= 9; c++)
{
for (r = 0; r <= 9; r++)
{
x = r * c;
if (r == 0)
{
_putchar(x + '0');
}
if (x < 10 && r != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(x + '0');
}
else if (x >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
}
_putchar('\n');
}
}
