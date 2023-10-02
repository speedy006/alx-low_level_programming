#include "main.h"
#include <stdlib.h>

/**
 * strtow - splitting string to words
 * @str: string
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	char **result;
	int x, y, z, a, b, c = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (x = 0; str[x]; x++)
	{
		if ((str[x] == ' ' || str[x + 1] == '\0') &&
			(str[x + 1] != ' ' && str[x + 1]))
		{
			c++;
		}
	}
	result = malloc((c + 1) * sizeof(char *));
	if (result == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] && a < c; x++)
	{
		if (str[x] != ' ')
		{
			for (y = x; str[y] && str[y] != ' '; y++)
				;
			result[a] = malloc((y - x + 1) * sizeof(char));
			if (result[a] == NULL)
			{
				while (--a >= 0)
					free(result[a]);
				free(result);
				return (NULL);
			}
			for (z = x, b = 0; z < y; z++, b++)
				result[a][b] = str[z];
			result[a++][b] = '\0';
			x = y;
		}
	}
	result[a] = NULL;
	return (result);
}

