#include "main.h"

/**
 * _abs - absolute
 * @n: integer to be absolute
 * Return: absolute ineger
 */

int _abs(int n)
{
int x;
if (n >= 0)
{
x = n;
}
else if (n < 0)
{
x = n * -1;
}
return (x);
}
