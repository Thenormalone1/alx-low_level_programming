#include <stdio.h>
/**
 * main - Entry point
 * @argc: size of argv
 * @argv: array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
		{
			printf("%d\n", i - 1);
		}
	}

	return (0);
}
