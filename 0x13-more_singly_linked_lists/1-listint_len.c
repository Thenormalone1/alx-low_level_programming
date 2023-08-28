#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns number of elements
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
