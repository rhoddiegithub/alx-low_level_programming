#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: the matrix
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int i;

	for (i = 0; < size; i++)
	{
		sum_1 += (a + i size + i);

		sum_2 += (a + i size + (size - i - 1));
	}
	printf("%d, %d\n", sum_1, sum_2);
}
