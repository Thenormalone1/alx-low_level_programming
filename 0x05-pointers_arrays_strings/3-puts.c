#include "main.h"

/**
 * _puts - prints string
 * @str: string to be printed
 */

void _puts(char *str)
{
int x;
x = 0;
while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}
