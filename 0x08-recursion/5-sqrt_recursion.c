#include "main.h"

/**
 * _sqrt - Finds the natural square root of an inputted number
 * @number: The number to find the square root of
 * @root: The square value
 * Return: If the number has a natural square root
 * If the number does not have a natural square root - -1
 */
int _sqrt(int number, int root)
{
	if ((root * root) == number)
		return (root);

	if (root == number / 2)
		return (-1);

	return (_sqrt(number, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to return the square root of
 * Return: If n has a natural square root - the natural square root - -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
