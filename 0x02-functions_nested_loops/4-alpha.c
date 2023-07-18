#include <stdio.h>

/**
 * _isalpha - checks ifchar is an alphabet
 * @c: character to be checked
 * Return: 1 (an alphabet) 2 (other)
 */
int _isalpha(int c)
{
if ((c >= 97 && c <=122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
