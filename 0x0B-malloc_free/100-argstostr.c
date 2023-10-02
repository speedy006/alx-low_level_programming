#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: input
 * @av: double pointer
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int x, y, z, a;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (x = 0, a = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++, a++)
			;
		a++;
	}

	a++;
	result = malloc(sizeof(char) * a);

	if (result == NULL)
	{
		return (NULL);
	}

	for (x = 0, z = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++, z++)
		{
			result[z] = av[x][y];
		}

		result[z] = '\n';
		z++;
	}

		result[z] = '\0';

		return (result);
}

