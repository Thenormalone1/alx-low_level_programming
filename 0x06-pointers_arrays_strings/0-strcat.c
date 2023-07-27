#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
int l1, l2;
l1 = 0;
l2 = 0;
while (dest[l1] != '\0')
{
l1++;
}
while ((src[l2] != '\0') && (l2 < 97))
{
dest[l1] = src[l2];
l1++;
l2++;
}
dest[l2] = '\0';
return (dest);
}
