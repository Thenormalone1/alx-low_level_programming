#include "main.h"

/**
 * is_prime_number - checks if prime
 * @n: integer
 * Return: int
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_prime(n, n - 1));
}

/**
 * _prime - checks if prime2
 * @n: int
 * @i: int
 * Return: int
 */
int _prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (_prime(n, i - 1));
}
