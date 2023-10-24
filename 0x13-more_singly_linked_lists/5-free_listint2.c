#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to start of list
 */

void free_listint2(listint_t **head)
{
	listint_t *_node;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		_node = *head;
		*head = (*head)->next;
		free(_node);
	}

	*head = NULL;
}

