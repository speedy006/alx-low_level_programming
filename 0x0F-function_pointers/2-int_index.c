#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array != NULL && cmp != NULL)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
			{
				return (x);
			}
		}
	}

	return (-1);
}

