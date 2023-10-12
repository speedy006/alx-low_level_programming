#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separates
 * @n: arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list func;
	unsigned int x;

	va_start(func, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(func, int));
		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(func);
}

