#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - checks sign
 * @b: int
 * return: pointer
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
	exit(98);
	}
	return (malloc(b));
}
