#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an imputted number of elements
 * 		of an array of integers
 * @a: The array of integers
 * @n: The number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i != (n -1))
		{
			printf("%d, ", a[1]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
