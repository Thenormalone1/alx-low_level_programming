#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints list
 * @h: ponter to head
 * Return: no. of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
