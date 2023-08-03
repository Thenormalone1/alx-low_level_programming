#include "main.h"

/**
 * _strlen_recursion - return length of str
 * @s: char pointer
 * Return: int
 */

int _strlen_recursion(char *s)
{
int x;
x = 0;
if (*s != '\0')
{
x++;
s++;
_strlen_recursion(s);
}
return(x);
}
