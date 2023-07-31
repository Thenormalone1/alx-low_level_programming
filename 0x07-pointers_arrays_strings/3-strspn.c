#include "main.h"

/**
 * _strspn - find char
 * @s: char
 * @accept: char
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
int j, i;
j = 0;
i = 0;
unsigned int x = 0;
while (s[i] != ' ' && s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
x++;
j++;
}
i++;
j = 0;
}
return (x);
}
