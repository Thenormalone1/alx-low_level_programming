#include "main.h"
/**
 * leet - 1337
 * @s: string 1
 * Return: char
 */

char *leet(char *s)
{
char a[] = "aeotlAEOTL";
char n[] = "4307143071";
int i;
i = 0;
int x;
while (*(s + i) != '\0')
{
for (x = 0; x <= 9; x++)
{
if (*(s + i) == a[x])
{
*(s + i) = n[x];
}
}
i++;
}
return (s);
}
