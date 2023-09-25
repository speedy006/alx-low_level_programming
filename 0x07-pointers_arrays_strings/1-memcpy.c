#include "main.h"

/**
 * _memcpy - copying memory area
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: memory copied
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
