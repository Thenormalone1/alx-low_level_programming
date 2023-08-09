#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *s;

	size1 = get_size(s1);
	size2 = get_size(s2);
	s = malloc((size1 + size2 + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		s[i + j] = s2[j];
	}
	return (s);
}

/**
 * get_size - gets size of a string
 * @s: string
 * Return: size
 */
int get_size(char *s)
{
	int size;

	if (s == NULL)
	{
		size = 0;
	}
	else
	{
		while (s[size] != '\0')
		{
			size++;
		}
	}
	return (size);
}
