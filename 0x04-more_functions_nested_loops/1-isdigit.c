#include "main.h"

/**
 * _isdigit - checks sign
 * @c: integer to be checked
 * Return: 1 (Positive), 0 (Zero)
 */

int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
