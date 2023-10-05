#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocating memory using malloc
 * @b: memory size
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (!a)
	{
		exit(98);
	}
	return (a);
}

