#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s2: string 1
 * @s1: string 2
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
