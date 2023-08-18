#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sums arguments
 * @n: int number of passed
 * @...: variable parameter
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list n2;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(n2, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(n2, const unsigned int);
	}
	va_end(n2);
	return (sum);
}
