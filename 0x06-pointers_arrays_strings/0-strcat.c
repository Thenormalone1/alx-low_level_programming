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
while (*(dest + lengthD) != '\0')
{
lengthD++;
}
while (*(src + lengthS) != '\0' && lengthD < 97)
{
*(dest + lengthD) = *(src + lengthS);
l1++;
l2++;
}
*(dest + lengthD) = '\0';
return (dest);
}
