#include "main.h"

/**
 * swap_int - swapping integers
 * @a: first intger
 * @b: second integer
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
