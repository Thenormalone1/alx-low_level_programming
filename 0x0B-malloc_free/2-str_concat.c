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

	size1 = 0;
	size2 = 0;
	if (s1 == NULL)
	{
		size1 = 0;
	}
	else
	{
		while (s1[size1] != '\0')
		{
			size1++;
		}
	}
	if (s2 == NULL)
	{
		size2 = 0;
	}
	else
	{
		while (s2[size2] != '\0')
		{
			size2++;
		}
	}
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
