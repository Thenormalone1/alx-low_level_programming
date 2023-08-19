#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_numbers - prints numbers
 * @n: integer
 * @separator: string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i, j;

	j = 0;
	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (i != (n - 1) || separator != NULL || *separator != 0)
		{
			while (separator[j] != '\0')
			{
				printf("%c", separator[j]);
				j++;
			}
		}
		j = 0;
	}
	printf("\n");
}
