#include "main.h"

/**
 * _memset - filling memory
 * @s: memory area
 * @b: constant byte
 * @n: bytes of memory
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
