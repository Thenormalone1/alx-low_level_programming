#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
int a;
int b;
for (a = 0; a <= 23; a++)
{
while (a <= 9)
{
_putchar('0');
}
_putchar(a);
_putchar(':');
}
for (b = 0; b <= 59; b++)
{
while (b <= 9)
{
_putchar('0');
}
_putchar(b);
_putchar('\n');
}
}
