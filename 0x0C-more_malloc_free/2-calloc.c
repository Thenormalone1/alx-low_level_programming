#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - callocs
 * @nmemb: unsigned integer
 * @size: unsigned integar
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	a = malloc(nmemb * size);
	if (a == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		a[i] = 0;
	}
	return (a);
}
