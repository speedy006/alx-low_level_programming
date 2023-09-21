#include "main.h"

/**
 * cap_string - capitalizing words
 * @a: string
 * Return: result
*/

char *cap_string(char *a)
{
	int x = 0;

	if (a[x] >= 'a' && a[x] <= 'z')
	{
		a[x] = a[x] - 'a' + 'A';
	}

	for (x = 1; a[x]; x++)
	{
		if (a[x - 1] == ' ' || a[x - 1] == '\t' ||
	a[x - 1] == '\n' || a[x - 1] == ',' || a[x - 1] == ';' ||
	a[x - 1] == '.' || a[x - 1] == '!' || a[x - 1] == '?' ||
	a[x - 1] == '"' || a[x - 1] == '(' || a[x - 1] == ')' ||
	a[x - 1] == '{' || a[x - 1] == '}')
		{
			if (a[x] >= 'a' && a[x] <= 'z')
			{
				a[x] = a[x] - 'a' + 'A';
			}
		}
	}

	return (a);
}
