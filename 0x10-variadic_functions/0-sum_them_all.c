#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums parameters
 * @n: parameters
 * Return: result
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list func;
	unsigned int sum = 0;
	unsigned int x;

	va_start(func, n);

	for (x = 0; x < n; x++)
		sum += va_arg(func, int);

	va_end(func);
	return (sum);
}

