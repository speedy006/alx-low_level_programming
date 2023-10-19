#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to start of list
 * @str: string to duplicate
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *_node;
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
	_node->next = *head;
	*head = _node;

	return (_node);
}

