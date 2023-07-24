#include "main.h"

/**
 * rev_string  - reverses string
 * @s: string
 */

void rev_string(char *s)
{
int c, x, temp, len;
c = 0;
while (s[c] != '\0')
{
c++;
}
len = c - 1;
for (x = 0; x <= c / 2; x++)
{
temp = s[x];
s[x] = s[len];
s[len--] = temp;
}
}
