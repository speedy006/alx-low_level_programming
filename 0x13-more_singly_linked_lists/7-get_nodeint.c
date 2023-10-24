#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to start of list
 * @index: index of the node, starting at 0
 * Return: nth node of a listint_t linked list, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x == index)
		{
			return (head);
		}

		x++;
		head = head->next;
	}

	return (NULL);
}

