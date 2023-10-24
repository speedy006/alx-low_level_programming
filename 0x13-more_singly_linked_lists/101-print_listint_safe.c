#include "lists.h"
#include <stdio.h>

/**
 * count_listint - counts nodes
 * @head: pointer to start of list
 * Return: number of nodes
 */

size_t count_listint(const listint_t *head)
{
	const listint_t *one_move, *two_moves;
	size_t node_count = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	one_move = head->next;
	two_moves = (head->next)->next;

	while (two_moves)
	{
		if (one_move == two_moves)
		{
			one_move = head;
			while (one_move != two_moves)
			{
				node_count++;
				one_move = one_move->next;
				two_moves = two_moves->next;
			}

			one_move = one_move->next;
			while (one_move != two_moves)
			{
				node_count++;
				one_move = one_move->next;
			}

			return (node_count);
		}

		one_move = one_move->next;
		two_moves = (two_moves->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to start of list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count, x = 0;

	count = count_listint(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (x = 0; x < count; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}

