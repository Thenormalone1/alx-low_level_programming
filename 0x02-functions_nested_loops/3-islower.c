#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: int paramater to be checked
 * Return:  1 (lowercase) 0 (other)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
