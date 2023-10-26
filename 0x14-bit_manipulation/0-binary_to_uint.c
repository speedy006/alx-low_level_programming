#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an usigned int
 * @b: pointer to string
 * Return: the converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		x = (x << 1) + (*b - '0');
		b++;
	}

	return (x);
}

