#include "main.h"

/**
 * puts2 - printing characters
 * @str: string
*/

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			putchar(str[x]);
		}
		x++;
	}
	putchar('\n');
}
