#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @... : a variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int index;

	va_start(list, n);

	for (index = 0; index < n; index++)
	{
		if (index > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(list, int));
	}

	va_end(list);
	printf("\n");
}
