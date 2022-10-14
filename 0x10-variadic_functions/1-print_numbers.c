#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - This prints numbers passed
 * to it
 *
 * @separator: Delimiter
 * @n: last named parameter
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int init;
	va_list values;

	if (separator == NULL)
		return;
	va_start(values, n);

	for (init = 0; init < n; init++)
	{
		printf("%d", va_arg(values, int));
		if (init != (n - 1))
			printf("%s", separator);
	}

	va_end(values);
}
