#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search for
 * @accept: prefix to measure
 * Return: count of bytes that matches
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int count = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			if (accept[j + 1] == '\0')
			{
				return (count);
			}
		}

		i++;
	}
	return (count);
}
