#include "main.h"

/**
 * reverse_array - reversing integers
 * @a: array
 * @n: elements in array
*/

void reverse_array(int *a, int n)
{
	int x, hold;

	for (x = 0; x < n / 2; x++)
	{
		hold = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = hold;
	}
}
