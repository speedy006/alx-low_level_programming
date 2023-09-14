#include "main.h"

/**
 * print_line - printing lines
 * @n: value
 */

void print_line(int n)
{
	if (n > 0)
	{
		int y;

		for (y = 0; y < n; y++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
