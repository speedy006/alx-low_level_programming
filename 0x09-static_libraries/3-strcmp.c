#include "main.h"

/**
 * _strcmp - comparing strings
 * @s1: string 1
 * @s2: string 2
 * Return: result
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
