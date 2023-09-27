#include "main.h"

int checker(char *s, int start, int end);

/**
 * is_palindrome - checking for palindrome string
 * @s: string
 * Return: result
 */

int is_palindrome(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (checker(s, 0, count - 1));
}

/**
 * checker - checking string
 * @s: string
 * @x: value
 * @y: value
 * Return: value
 */

int checker(char *s, int x, int y)
{
	if (x >= y)
	{
		return (1);
	}

	if (s[x] != s[y])
	{
		return (0);
	}

	return (checker(s, x + 1, y - 1));
}
