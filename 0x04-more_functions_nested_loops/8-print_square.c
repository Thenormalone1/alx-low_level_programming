#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 */

void print_square(int size)
{
int r;
int c;
for (c = 0; c < size; c++)
{
for (r = 0; r < size; r++)
{
_putchar('\#');
}
_putchar('\n');
}
}
