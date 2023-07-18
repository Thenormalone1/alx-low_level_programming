#include "main.h"

/**
 *print_alphabet_x10 - prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
int z;
char x;
for (z = 1; z <= 10; z++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
