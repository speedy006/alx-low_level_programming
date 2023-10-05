#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocating memory block using malloc and free
 * @ptr: pointer to previous memory allocation
 * @old_size: size of allocated memory
 * @new_size: size of new memory block
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *b;
	unsigned int x;

	if (new_size == old_size)
		{return (ptr); }

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		{return (malloc(new_size)); }

	a = malloc(new_size);
	if (!a)
		{return (NULL); }

	b = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			{a[x] = b[x]; }
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			{a[x] = b[x]; }
	}

	free(ptr);
	return (a);
}

