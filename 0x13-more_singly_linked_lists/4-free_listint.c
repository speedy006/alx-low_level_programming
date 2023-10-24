#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer to start of list
 */

void free_listint(listint_t *head)
{
	listint_t *_node;

	while (head)
	{
		_node = head;
		head = head->next;
		free(_node);
	}
}

