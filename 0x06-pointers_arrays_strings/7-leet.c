#include "main.h"

/**
 * leet - encoding string
 * @a: string
 * Return: result
*/

char *leet(char *a)
{
	int x, y;
	char leet[11] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char replace[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (a[x] == leet[y])
			{
				a[x] = replace[y];
			}
		}
	}
	return (a);
}
