#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: single letter inputs
 * Return: 1 if int c is upper or lower case, 0 if otherwise
 */



int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
        }
}
