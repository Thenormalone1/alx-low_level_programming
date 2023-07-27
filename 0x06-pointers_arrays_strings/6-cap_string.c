#include "main.h"
/**
 * cap_string - caps string
 * @s: string 
 * Return: char
 */
char *cap_string(char *s)
{
int i, x;
int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
}
if (i == 0)
{
*(s + i) = *(s + i) - 32;
}
else
{
for (x = 0; x <= 12; x++)
{
if (a[x] == *(s + i - 1))
{
*(s + i) = *(s + i) - 32;
}
}
}
}
i++;
}
return (s);
}
