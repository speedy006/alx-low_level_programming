#include "main.h"

/**
 * rot13 - encoding string
 * @a: string
 * Return: result
 */

char *rot13(char *a)
{
	int x, y;

	char alphabet[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (a[x] == alphabet[y])
			{
				a[x] = rot13[y];
				break;
			}
		}
	}
	return (a);
}
