#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
/**
 * main - Entry point
 * @argc: size of argv
 * @argv: array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
		{
			i -= 2;
		}
		else if (i % 25 == 0)
		{
			i -= 25;
		}
		else if (i % 10 == 0)
		{
			i -= 10;
		}
		else if (i % 5 == 0)
		{
			i -= 5;
		}
		else if (i % 2 == 0)
		{
			if (i % 10 == 6)
			{
				i -= 1;
			}
			else
			{
				i -= 2;
			}
		}
		else
		{
			i -= 1;
		}
		count++;
	}

	return (count);
}
