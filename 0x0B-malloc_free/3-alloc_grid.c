#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - array of integers
 * @width: width
 * @height: height
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int **result;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		result[x] = malloc(sizeof(int) * width);

		if (result[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(result[x]);
			}

			free(result);

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			result[x][y] = 0;
		}
	}
	return (result);
}

