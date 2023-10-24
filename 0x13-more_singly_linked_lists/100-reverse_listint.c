#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to start of list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *forward;

	while (*head)
	{
		forward = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forward;
	}

	*head = back;

	return (*head);
}

