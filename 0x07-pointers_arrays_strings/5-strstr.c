#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
char *a, *b;
for (; *haystack != '\0'; haystack++)
{
a = haystack;
b = needle;
while (*a == *b && *b != '\0')
{
a++;
b++;
}
if (*b == '\0')
{
return (haystack);
}
}
return (0);
}
