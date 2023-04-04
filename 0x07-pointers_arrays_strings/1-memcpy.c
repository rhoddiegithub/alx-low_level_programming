#include "main.h"

/**
 * _memcpy - write a function that copies memory area
 * @dest: destination
 * @src: source
 * @n: number of byte to copy
 * Return: destination point
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int size = n;

	if (size > 0)
	{
		while (i < size)
		{
			dest{i} = src{i};
			i++;
		}
	}
	return (dest);
}
