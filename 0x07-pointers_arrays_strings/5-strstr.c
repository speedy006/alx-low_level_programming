#include "main.h"

/**
 * _strstr - locating substring
 * @haystack: locating from
 * @needle: substring
 * Return: value
*/

char *_strstr(char *haystack, char *needle)
{
	char *x;
	char *y;

	while (*haystack)
	{
		x = haystack;
		y = needle;

		while (*haystack && *y && *haystack == *y)
		{
			haystack++;
			y++;
		}

		if (!*y)
		{
			return (x);
		}

		haystack = x + 1;
	}

	return (0);
}
