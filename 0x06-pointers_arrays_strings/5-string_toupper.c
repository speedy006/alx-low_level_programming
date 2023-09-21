#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @a: string
 * Return: result
*/

char *string_toupper(char *a)
{
	int x = 0;

	while (a[x])
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] = a[x] - 'a' + 'A';
		}
		x++;
	}

	return (a);
}
