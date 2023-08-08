#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: size of argv
 * @argv: array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		mul =  atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mul);
	}
	return (0);
}
