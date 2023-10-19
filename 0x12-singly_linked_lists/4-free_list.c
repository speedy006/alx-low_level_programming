#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to start of list
 */

void free_list(list_t *head)
{
	list_t *_node;

	while (head)
	{
		_node = head;
		head = head->next;
		free(_node->str);
		free(_node);
	}
}

