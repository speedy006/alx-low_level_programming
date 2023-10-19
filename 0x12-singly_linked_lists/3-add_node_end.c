#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to start of list
 * @str: string to duplicate
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_node;
	list_t *last = *head;
	int len = 0;

	while (str[len])
	{
		len++;
	}

	_node = malloc(sizeof(list_t));
	if (!_node)
	{
		return (NULL);
	}

	_node->str = strdup(str);
	if (!_node->str)
	{
		free(_node);
		return (NULL);
	}

	_node->len = len;
	_node->next = NULL;

	if (*head == NULL)
	{
		*head = _node;
		return (_node);
	}

	while (last->next)
	{
		last = last->next;
	}

	last->next = _node;

	return (_node);
}

