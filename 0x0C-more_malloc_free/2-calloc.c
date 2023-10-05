#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocating memory for array using malloc
 * @nmemb: array elements
 * @size: element size
 * Return: pointer or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (nmemb * size); x++)
	{
		a[x] = 0;
	}

	return ((void *)a);
}

