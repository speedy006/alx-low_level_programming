#include "main.h"

int checker(char *s, int a, int z);
int _strlen(char *s);

/**
 * is_palindrome - checking for palindrome
 * @s: string
 * @a: value
 * @z: value
 * Return: result
 */

int is_palindrome(char *s)
{
	return (checker(s, 0, _strlen(s) - 1));
}

/**
 * _strlen - string length
 * @s: string
 * Return: result
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * checker - checking for palindrome
 * @s: string
 * @a: value
 * @z: value
 * Return: result
 */

int checker(char *s, int a, int z)
{
	if (a >= z)
	{
		return (1);
	}

	if (s[a] != s[z])
	{
		return (0);
	}

	return (checker(s, a + 1, z - 1));
}
