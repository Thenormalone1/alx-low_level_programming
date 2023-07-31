#include "main.h"
/**
 * _strpbrk - a
 * @s: array 1
 * @accept: array 2
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
return (s);
}
s++;
}
return ('\0');
}
