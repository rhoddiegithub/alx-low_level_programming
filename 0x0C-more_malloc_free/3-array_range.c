#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *	from min to max.
 * @min: the first value of the array.
 * @max: the last value of the array.
 * Return: If min > max or the function fails - NULL.
 *	Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arry, index, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arry = malloc(sizeof(int) * size);

	if (arry == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		arry[index] = min++;
	}

	return (arry);
}
