#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *  @n: integer input
 *  Return: absolute value of ab
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return (0);
}
