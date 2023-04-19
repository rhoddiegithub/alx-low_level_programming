#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a
 *	parameter on each element of an array.
 * @array: The array
 * @size: The size of array
 * @action: pointer to function that we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
