#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 * Return: Always (0) Success
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char low = 'a';

		while (low <= 'z')
		{
			_putchar(low);
			low++;
		}	i++;
		_putchar('\n');
	}
}
