#include "main.h"
/**
 * string_toupper - changes lowercase into uppercase
 * @s: string 1
 * Return: char
 */
char *string_toupper(char *s)
{
int x;
x = 0;
while (*(s + i) != '\0')
{
if (*(s + x) >= 'a' && *(s + x) <= 'z')
{
*(s + x) = *(s + x) -32;
}
x++;
}
return (s);
}
