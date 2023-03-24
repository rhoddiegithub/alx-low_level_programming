#include "main.h"

/**
 * print_square - functions that prints a square, followed by a new line
 * @size: the int for the parameters of my function
 * Return: 0
 */


void print_square(int size)
{
	int a = 0;
	int b = 0;
	int c = size;

	if (c > 0)
	{
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			a++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
