#include "main.h"
#define NULL 0

/**
 * _strchr - function that locates a character in a string
 * @s: string to search
 * @c: character to be found
 * Return: pointer to that character found in the string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
