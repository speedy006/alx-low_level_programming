#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concantenating strings
 * @s1: string 1
 * @s2: string 2
 * @n: characters
 * Return: result
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int a = 0, b = 0, x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (n >= b)
	{
		n = b;
	}

	result = malloc(sizeof(char) * (a + n + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < a; x++)
	{
		result[x] = s1[x];
	}
	for (x = 0; x < n; x++)
	{
		result[a + x] = s2[x];
	}
	result[a + n] = '\0';

	return (result);
}

