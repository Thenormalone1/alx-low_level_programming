#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to print
 */
void puts2(char *str)
{
int len, x;
len = 0;
while (str[len] != '\0')
{
len++;
}
for (x = 0; x < len; x += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
