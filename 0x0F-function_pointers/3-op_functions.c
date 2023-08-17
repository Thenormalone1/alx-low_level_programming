#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds 2 ints
 * @a: int1
 * @b: int2
 * Return: int answer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts 2 ints
 * @a: int1
 * @b: int2
 * Return: int answer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies 2 ints
 * @a: int1
 * @b: int2
 * Return: int answer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 ints
 * @a: int1
 * @b: int2
 * Return: int answer
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	printf("%s\n", "Error");
	exit(100);
}
/**
 * op_mod - module
 * @a: int1
 * @b: int2
 * Return: int answer
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	printf("%s\n", "Error");
	exit(100);
}
