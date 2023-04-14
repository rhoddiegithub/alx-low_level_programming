#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of a certain number
 * @nmemb: the number of elements.
 * @size: the byte size of each array element.
 * Return: function fails - NULL.
 *	Otherwise - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *str;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memory = malloc(nmemb * size);

	if (memory == NULL)
	{
		return (NULL);
	}

	str = memory;

	for (index = 0; index < (nmemb * size); index++)
	{
		str[index] = '\0';
	}

	return (memory);
}
