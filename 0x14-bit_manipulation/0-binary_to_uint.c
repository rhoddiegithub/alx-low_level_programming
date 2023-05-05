#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			number = (number << 1) | 1;
		else if (*b == '0')
			number <<= 1;
		else
			return (0);
		b++;
	}

	return (number);
}
