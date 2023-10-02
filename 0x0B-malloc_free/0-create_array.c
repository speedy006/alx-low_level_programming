#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating an array of chars
 * @size: size of array
 * @c: char
 * Return: NULL array
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}

	return (array);
}

