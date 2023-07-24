#include "main.h"

/**
 *_strlen - lenght of string
 * @s: string
 * Return: integer length of string
 */

int _strlen(char *s)
{
int c;
c = 0;
while (s[c] != '\0')
{
c++;
}
return (c);
}
