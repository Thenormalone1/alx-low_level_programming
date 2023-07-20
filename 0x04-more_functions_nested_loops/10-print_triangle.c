#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int i, x, c;
if (size <= 0)
{
_putchar('\n');
}
for (x = 0; x < size; x++)
{
for (i = 0; i <= ((size - x) - 2); i++)
{
_putchar(' ');
}
for (c = 0; c <= x; c++)
{
_putchar('#');
}
if (x != (size - 1))
{
_putchar('\n');
}
}
}
