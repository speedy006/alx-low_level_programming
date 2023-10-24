#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to start of list
 * @index: index of the node that should be deleted, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node;
	listint_t *_node;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	temp_node = *head;

	if (index == 0)
	{
		*head = temp_node->next;
		free(temp_node);
		return (1);
	}

	for (x = 0; temp_node != NULL && x < index - 1; x++)
	{
		temp_node = temp_node->next;
	}

	if (temp_node == NULL || temp_node->next == NULL)
	{
		return (-1);
	}

	_node = temp_node->next->next;
	free(temp_node->next);
	temp_node->next = _node;

	return (1);
}

