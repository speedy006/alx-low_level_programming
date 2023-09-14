#include "main.h"

/**
 * print_square - printing
 * @size: value
 */

void print_square(int size)
{
	if (size > 0)
	{
		int x, y;

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
