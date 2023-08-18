#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums arguments
 * @n: int number of passed
 * @...: variable parameter
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list n2;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(n2, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
	sum = sum + va_arg(n2, int);
	}
	va_end(n2);
	return (sum);
}
