#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers to 98
 * @n: integer to be checked
 * Return: nothing
 */

void print_to_98(int n)
{
for (; n <=98; n++)
{
if (n == 98)
{
printf("%d \n", n);
}
else
{
printf("%d, ", n);
}
}
