#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - prints two strings
 * @separator: character that separates the strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int index;
	char *str;

	va_start(list, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(list);
	printf("\n");
}
