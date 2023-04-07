#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: string to measure
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
	}
	else
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
