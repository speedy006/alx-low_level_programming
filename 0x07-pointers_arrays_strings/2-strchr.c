#include "main.h"

/**
 * _strchr - locating string
 * @s: string
 * @c: character
 * Return: value
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (0);
}
