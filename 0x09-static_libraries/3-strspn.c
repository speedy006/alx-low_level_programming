#include "main.h"

/**
 * _strspn - length of string
 * @s: segment of string
 * @accept: bytes from
 * Return: value
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;

	while (*s)
	{
		char *y = accept;

		while (*y)
		{
			if (*s == *y)
			{
				x++;
				break;
			}
			y++;
		}
		if (!*y)
		{
			break;
		}
		s++;
	}

	return (x);
}
