#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to start of list
 * Return: size of the list that was free'd
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *_node;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (*h)
	{
		count++;
		if (*h - ((*h)->next) > 0)
		{
			_node = (*h)->next;
			free(*h);
			*h = _node;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (count);
}

