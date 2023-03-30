#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int tmp, i;
	int end = n - 1;

	for (i = end; i >= n / 2; i--)
	{
		tmp = a[end - i];
		a[end - i] = a[i];
		a[i] = tmp;
	}
}
