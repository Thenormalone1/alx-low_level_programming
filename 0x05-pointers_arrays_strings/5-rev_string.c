#include "main.h"

/**
 * rev_string  - reverses string
 * @s: string
 */

void rev_string(char *s)
{
int c, x, temp;
c = 0;
while (s[c] != '\0')
{
c++;
}
for (x = 0; x <= c; x++)
{
temp = s[x];
s[x] = s[c];
s[c] = temp;
}
}
