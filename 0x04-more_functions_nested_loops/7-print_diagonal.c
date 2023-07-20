#include "main.h"
/**
 * print_diagonal - printing diagonals
 * @n: number of diagonals
 * @n: number of diagonals
 */

void print_diagonal(int n)
{
int i;
int c;
if (n < 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
if (i > 0)
{
c = 0;
while (c > i)
{
_putchar(' ');
c++;
}
}
_putchar('\\');
if (i != (n - 1))
{
_putchar('\n');
}
}
}
