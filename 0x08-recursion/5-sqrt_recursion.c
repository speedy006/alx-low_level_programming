#include "main.h"

/**
 * _sqrt - square root calculation
 * @x: value
 * @y: value
 * Return: result
 */
int _sqrt(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (_sqrt(x + 1, y));
}

/**
 * _sqrt_recursion - square root
 * @n: integer
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (_sqrt(1, n));
}
