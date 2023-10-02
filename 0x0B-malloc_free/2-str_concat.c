#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concantenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	result = malloc(sizeof(char) * (x + y + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		result[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		result[x] = s2[y];
		x++, y++;
	}
	result[x] = '\0';
	return (result);
}

