#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{
if (x !=0)
{
putchar(',');
putchar(' ');
}
putchar(x);
}
putchar('\n');
return (0);
}
