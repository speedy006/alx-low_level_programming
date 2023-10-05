#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array of integers
 * @min: min value
 * @max: max value
 * Return: pointer or NULL
*/

int *array_range(int min, int max)
{
	int *result;
	int x;

	if (min > max)
	{
		return (NULL);
	}

	result = malloc(sizeof(int) * ((max - min) + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	for (x = 0; min <= max; x++, min++)
	{
		result[x] = min;
	}

	return (result);
}

