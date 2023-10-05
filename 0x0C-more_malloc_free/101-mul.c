#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checker - checks for numbers
 * @a: string
 * Return: 0 or 1
*/

int checker(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
		if (!isdigit(a[x]))
			return (0);
	return (1);
}

/**
 * print_result - prints number
 * @x: number
*/

void print_result(unsigned long x)
{
	if (x / 10)
	{
		print_result(x / 10);
	}
	_putchar((x % 10) + '0');
}

/**
 * main - ckecks arguments
 * @argc: number of arguments
 * @argv: array
 * Return: 0
*/

int main(int argc, char *argv[])
{
	unsigned long x, y, z;

	if (argc != 3 || !checker(argv[1]) || !checker(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;

	print_result(z);
	_putchar('\n');

	return (0);
}

