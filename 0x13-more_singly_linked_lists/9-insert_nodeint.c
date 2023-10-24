#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to start of list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: integer
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;
	unsigned int x = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (x < idx - 1)
	{
		if (temp_node == NULL)
		{
			free(new_node);
			return (NULL);
		}

		temp_node = temp_node->next;
		x++;
	}

	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}

