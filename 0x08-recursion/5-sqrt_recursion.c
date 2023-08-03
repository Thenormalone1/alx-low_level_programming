#include "main.h"

/**
 * sqrt - sqrt1
 * @a: int1
 * @b: int2
 * Return: int
 */
int sqrt(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - sqrt
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
return (sqrt(n, 1));
}
