#include "main.h"

/**
 * _memcpy - copies mem
 * @n: integer
 * @dest: array1 to be copied to
 * @src: array to be copied from
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
