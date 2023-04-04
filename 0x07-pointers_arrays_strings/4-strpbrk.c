#include "main.h"
#define NULL 0

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to search for
 * @accept: target matches
 * Return: pointer to index of string found at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
