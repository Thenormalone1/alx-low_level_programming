#include "main.h"

/**
 * more_numbers - checks sign
 * Return: 1 (Positive), 0 (Zero), -1 (Negative)
 */

void more_numbers(void)
{
int x;
for (x = 0; x <= 14; x++)
{
if (x >= 10)
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
}
_putchar(x + '0');
}
}
