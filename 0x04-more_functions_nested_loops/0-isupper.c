#include "main.h"

/**
 * _isupper - checks sign
 * @c: integer to be checked
 * Return: 1 (Positive), 0 (Zero)
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
