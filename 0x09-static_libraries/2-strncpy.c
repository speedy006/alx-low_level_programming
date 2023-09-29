#include "main.h"

/**
 * _strncpy - copying string
 * @dest: copy to
 * @src: copy from
 * @n: string
 * Return: result
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
