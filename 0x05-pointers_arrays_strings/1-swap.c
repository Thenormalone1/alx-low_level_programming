#include "main.h"

/**
 * swap_int - checks sign
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
