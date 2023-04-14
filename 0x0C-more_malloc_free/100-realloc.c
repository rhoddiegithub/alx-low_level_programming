#include <stdlib.h>
#include<stdio.h>
#include "main.h"

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to the memory previously allocated (malloc(old_size))
 * @old_size: the size previously allocated
 * @new_size: the new size to reallocate
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *string;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		string = malloc(new_size);
		if (string == NULL)
			return (NULL);
		else
			return (string);
	}

	string = malloc(new_size);
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		*((char *)string + i) = *((char *)ptr + i);
	}
	free(ptr);

	return (string);
}
