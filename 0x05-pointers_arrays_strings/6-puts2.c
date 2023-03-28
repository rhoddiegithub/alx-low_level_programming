#include "main.h"

/**
 * puts2 - func that prints 1 char/2 of a string, followed by a new line
 * @str: declaration of str and parameters for the function puts2
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			c = str[i];
			_putchar(c);
		}
	}
	_putchar('\n');
}
