#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to start of list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_node;

	_node = malloc(sizeof(listint_t));
	if (_node == NULL)
	{
		return (NULL);
	}

	_node->n = n;
	_node->next = *head;
	*head = _node;

	return (_node);
}

