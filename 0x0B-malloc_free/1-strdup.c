#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to allocated memory space
 * @str: String
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int x, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x]; x++)
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x]; x++)
	{
		dup[x] = str[x];
	}

	dup[len] = '\0';

	return (dup);
}

