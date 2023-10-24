#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to start of list
 * Return: the addess of the node where the loop starts, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one_move, *two_moves;

	if (head == NULL)
	{
		return (NULL);
	}

	one_move = head;
	two_moves = head;

	while (two_moves != NULL && two_moves->next != NULL)
	{
		one_move = one_move->next;
		two_moves = two_moves->next->next;

		if (one_move == two_moves)
		{
			one_move = head;
			while (one_move != two_moves)
			{
				one_move = one_move->next;
				two_moves = two_moves->next;
			}
			return (one_move);
		}
	}

	return (NULL);
}

