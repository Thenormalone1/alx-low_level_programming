#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an int
 * @array: array of ints
 * @size: size of array
 * @cmp: pointer to a function that compares
 * Return: ints
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) = 1
		{
			return (i);
		}
	}
	return (-1);
}
