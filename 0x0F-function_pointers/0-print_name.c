#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints name
 * @name string
 * @f: pointer to a function
 */
void print_name1(char *name, void (*f)(char *));
{
	f(name);
}
