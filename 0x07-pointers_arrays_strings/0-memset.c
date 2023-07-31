#include "main.h"

/**
 * print_sign - checks sign
 * @n: integer to be checked
 * @s: pointer
 * @b: char
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
s[x] = b;
}
return(s);
}
