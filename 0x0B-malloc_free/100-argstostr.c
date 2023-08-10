#include "main.h"
#include <stdlib.h>
/**
 * argstostr - 
 * @ac: size of av
 * @av: array of strings
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, x, l;
	char *str;

	x = 0;
	l = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[x] = av[i][n];
		x++;
	}
	if (str[x] == '\0')
	{
		str[x++] = '\n';
	}
	}
	return (str);
}
