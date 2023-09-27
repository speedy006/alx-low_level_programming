#include "main.h"

/**
 * _pow_recursion - raising x to the power of y
 * @x: value
 * @y: value
 * Return: result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
