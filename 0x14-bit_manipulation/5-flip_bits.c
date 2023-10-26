#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number
 * @m: number
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int result = 0;

	while (x)
	{
		result += x & 1;
		x >>= 1;
	}

	return (result);
}

