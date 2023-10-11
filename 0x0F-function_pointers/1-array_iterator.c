#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}

