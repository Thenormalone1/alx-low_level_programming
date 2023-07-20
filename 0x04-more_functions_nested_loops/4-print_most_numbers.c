#include "main.h"

/**
 * print_most_numbers - checks sign
 * Return: 1 (Positive), 0 (Zero), -1 (Negative)
 */

void print_most_numbers(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
if ((x == '2') || (x == '4'))
{
break;
}
_putchar(x);
}
}
