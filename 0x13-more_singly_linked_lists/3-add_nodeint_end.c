#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to start of list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_node;
	listint_t *end = *head;

	_node = malloc(sizeof(listint_t));
	if (_node == NULL)
	{
		return (NULL);
	}

	_node->n = n;
	_node->next = NULL;

	if (*head == NULL)
	{
		*head = _node;
		return (_node);
	}

	while (end->next)
	{
		end = end->next;
	}

	end->next = _node;

	return (_node);
}

