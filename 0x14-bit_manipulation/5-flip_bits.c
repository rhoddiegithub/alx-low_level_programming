#include "main.h"

/**
 * flip_bits - Counts the number of bits that needs to be flipped
 * @n: the number
 * @m: the number to flip n to
 * Return: necessary number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_diff = n ^ m;
	unsigned int i = 0;

	while (num_diff > 0)
	{
		i += num_diff & 1;
		num_diff >>= 1;
	}
	return (i);
}
