#include "main.h"

/**
 * is_prime_number - returning prime numbers
 * @n: integer
 * Return: result
 */

int checker(int n, int x);

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (checker(n, 2));
}

/**
 * checker - checking numbers
 * @n: integer
 * @x: integer
 * Return: result
 */

int checker(int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (checker(n, x + 1));
}
