#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: size of argv
 * @argv: array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("%s\n", "Error");
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("%s\n", "Error");
		return (99);
	}
	ans = (*p)(num1, num2);
	printf("%d\n", ans);
	return (0);
}
