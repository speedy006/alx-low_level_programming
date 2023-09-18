#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: length
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
