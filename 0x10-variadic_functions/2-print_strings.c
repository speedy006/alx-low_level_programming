#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separates
 * @n: arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list func;
	unsigned int x;
	char *b;

	va_start(func, n);

	for (x = 0; x < n; x++)
	{
		b = va_arg(func, char*);

		if (b == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", b);
		}

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(func);
}

