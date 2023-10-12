#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything
 * @format: arguments
*/

void print_all(const char * const format, ...)
{
	va_list func;
	char *a;
	char *separator = "";
	int x = 0;

	va_start(func, format);
	while (format && format[x])
	{
		switch (format[x++])
		{
			case 'c': {
					printf("%s%c", separator, va_arg(func, int));
					break; }
			case 'i': {
					printf("%s%d", separator, va_arg(func, int));
					break; }
			case 'f': {
					printf("%s%f", separator, va_arg(func, double));
					break; }
			case 's': {
					a = va_arg(func, char*);
					if (a == NULL)
						a = "(nil)";
					printf("%s%s", separator, a);
					break; }
			default: {
				continue; }
		}
		separator = ", ";
	}

	printf("\n");
	va_end(func);
}


