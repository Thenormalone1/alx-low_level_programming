#include "main.h"

/**
 * palind1 - 1
 * @a: str
 * @l: integer
 * Return: int
 */
int palind1(char *a, int l)
{
if (*a == 0)
{
return (l - 1);
}
return (palind1(a + 1, l + 1));
}

/**
 * palind2 - 2
 * @a: string
 * @l: length
 * Return: int
 */

int palind2(char *a, int l)
{
if (*a != *(a + l))
{
return (0);
}
else if (*a == 0)
{
return (1);
}
return (palind2(a + 1, l - 2));
}
/**
 * is_palindrome - checks if str is a palindrome
 * @s: str
 * Return: int
 */
int is_palindrome(char *s)
{
int x;
l = palind1(s, 0);
return (palind2(s, l));
}
