#include "main.h"

/**
 * char *_strcpy - copying string
 * @dest: copying to
 * @src: value copied
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
	char *dest1 = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest1);
}
