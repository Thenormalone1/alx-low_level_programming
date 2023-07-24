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
for (; *s == '\0'; s++)
{
c++
}
return (c);
}
