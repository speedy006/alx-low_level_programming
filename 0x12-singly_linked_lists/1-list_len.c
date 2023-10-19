#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: pointer to start of list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}

