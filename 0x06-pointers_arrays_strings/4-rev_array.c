#include "main.h"
/**
 * reverse_array - reverses array
 * @a: integar
 * @n: integar
 */
void reverse_array(int *a, int n)
{
int tmp, n1, n2;
n1 = 0;
n2 = n - 1;
while (n1 < n2)
{
tmp = *(a + n1);
*(a + n1) = *(a + n2);
*(a + n2) = tmp;
n1++;
n2--;
}
}
