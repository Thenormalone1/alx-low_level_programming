#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - makes an array of ints
 * @min: int
 * @max: int
 * Return: array of ints
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		a[i] = i;
	}
	return (a);
}
