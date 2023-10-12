#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums parameters
 * @n: parameters
 * @...: parameters
 * Return: result
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list func;
	unsigned int sum = 0;
	unsigned int x;

	if (n == 0)
	{
		return (0);
	}

	va_start(func, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(func, int);
	}

	va_end(func);
	return (sum);
}
