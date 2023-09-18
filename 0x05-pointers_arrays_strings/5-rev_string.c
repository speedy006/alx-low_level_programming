#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
*/

void rev_string(char *s)
{
	int length = 0;
	int x;

	while (s[length] != '\0')
	{
		length++;
	}

	for (x = 0; x < length / 2; x++)
	{
		char temp = s[x];

		s[x] = s[length - x - 1];
		s[length - x - 1] = temp;
	}
}
