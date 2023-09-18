#include "main.h"

/**
 * print_rev - reversed string
 * @s: string
*/

void print_rev(char *s)
{
	int length = 0;
	int x;

	while (s[length] != '\0')
	{
		length++;
	}

	for (x = length - 1; x >= 0; x--)
	{
		putchar(s[x]);
	}
	putchar('\n');
}
