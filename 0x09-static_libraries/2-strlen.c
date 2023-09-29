#include "main.h"

/**
 * _strlen - printing string length
 * @s: string
 * Return: value
*/

int _strlen(char *s)
{
	if (*s)
	{
		return (1 + _strlen(s + 1));
	}
	else
	{
		return (0);
	}
}
