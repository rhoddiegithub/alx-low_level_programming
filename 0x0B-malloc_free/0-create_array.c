#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}

	string = malloc(sizeof(*string) * size);

	if (string == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		string[i] = c;
		i++;
	}
	string[i] = '\0';

	return (string);
}
