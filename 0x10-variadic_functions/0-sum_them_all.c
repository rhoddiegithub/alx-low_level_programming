#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, index;
	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list_ap, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(list_ap, int);
	}

	va_end(list_ap);

	return (sum);
}
