#include "main.h"
/**
 * _strncpy - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 * @n: integar for num of bytes
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
int l1;
l1 = 0;
while (*(src + l1) != '\0' && (l1 < n))
{
*(dest + l1) = *(src + l1);
l1++;
}
while (l1 < n)
{
*(dest + l1) = '\0';
l1++;
}
return (dest);
}
