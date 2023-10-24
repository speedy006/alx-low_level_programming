#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to start of list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *one_move, *two_moves;

	if (head == NULL)
	{
		exit(98);
	}

	one_move = head;
	two_moves = head;

	while (one_move && two_moves && two_moves->next)
	{
		one_move = one_move->next;
		two_moves = two_moves->next->next;

		if (one_move == two_moves)
		{
			printf("Loop\n");
			return (0);
		}
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}

	return (count);
}

