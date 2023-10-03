#include <stdlib.h>
#include "main.h"

/**
 * len_words - count words
 * @str: string
 * Return: words
 */

int len_words(char *str)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (str[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}

	return (c);
}

/**
 * **strtow - spliting string to words
 * @str: string
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	char **x, *y;
	int a, b = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = len_words(str);
	if (words == 0)
		return (NULL);

	x = (char **) malloc(sizeof(char *) * (words + 1));
	if (x == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				y = (char *) malloc(sizeof(char) * (c + 1));
				if (y == NULL)
					return (NULL);
				while (start < end)
					*y++ = str[start++];
				*y = '\0';
				x[b] = y - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	x[b] = NULL;

	return (x);
}

