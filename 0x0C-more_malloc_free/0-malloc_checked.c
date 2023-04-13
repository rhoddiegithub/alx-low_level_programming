#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of memory to be allocated
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b);
{
	void *x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
