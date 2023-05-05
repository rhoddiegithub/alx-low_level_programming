#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	unsigned int result = 0;
	char c;

	while ((c = *b++) != '\0')
	{
		if (c < '0' || c > '1')
		{
			return (0);
		}
		result = (result << 1) + (c - '0');
	}
	return (result);
}
