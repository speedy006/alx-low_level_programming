#include "main.h"

/**
 * _strpbrk - searching for string
 * @s: string
 * @accept: bytes from
 * Return: value
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *x = accept;

		while (*x)
		{
			if (*s == *x)
			{
				return (s);
			}
			x++;
		}
		s++;
	}

	return (0);
}
