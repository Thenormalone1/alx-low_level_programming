#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @dest: string 1
 * @src: string 2
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
