#include "main.h"

/**
 * _strlen_recursion - printing string length
 * @s: string
 * Return: value
*/

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
