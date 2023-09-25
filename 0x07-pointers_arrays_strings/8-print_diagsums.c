#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - printing sum of diagonals
 * @a: value
 * @size: value
*/

void print_diagsums(int *a, int size)
{
	int x;
	int s1 = 0;
	int s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[x * size + x];
		s2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", s1, s2);
}
