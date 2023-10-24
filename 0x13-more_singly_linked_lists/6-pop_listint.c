#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n)
 * @head: double pointer to start of list
 * Return: head node's data (n), or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *_node;

	if (*head == NULL)
	{
		return (0);
	}

	_node = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free(_node);

	return (x);
}

