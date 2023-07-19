#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: integer to get last digit
 * Return: last digit
 */

int print_last_digit(int n)
{
char x;
x = n % 10;
_putchar(x);
return (x);
}
