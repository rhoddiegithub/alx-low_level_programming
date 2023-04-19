#include "function_pointers.h"

/**
 * int_index - search for integer in array via function pointer
 * @array: array
 * @size: size of array
 * @cmp: pointer to searching/comparing function that we need to execute
 * Return: index where integer's found, -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
	}
	return (-1);
}
