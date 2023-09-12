#include "main.h"

/**
 * print_last_digit - printing
 * @x: number
 * Return: value
*/

int print_last_digit(int x)
{
	int digit = x % 10;

	if (digit < 0)
	{
		digit = -digit;
	}

	_putchar('0' + digit);

	return (digit);
}
