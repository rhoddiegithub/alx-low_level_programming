#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @num: the number which contains the bit
 * @index: the index at which bit is be found
 * Return: bit (Success) or -1 (error)
 */

int get_bit(unsigned long int num, unsigned int index)
{
	int n;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	n = (num >> index) & 1;
	return (n);
}
