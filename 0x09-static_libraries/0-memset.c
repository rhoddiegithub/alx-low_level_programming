#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory
 * @b: constant byte to be copied
 * @n: number of bytes to be fill
 * Return: memory *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int size = n;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
