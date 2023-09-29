#include "main.h"

/**
 * _strncat - concantenating strings
 * @dest: concantenate to
 * @src: concantenate from
 * @n: bytes
 * Return: resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}

	dest[x + y] = '\0';

	return (dest);
}
