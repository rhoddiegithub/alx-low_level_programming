#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using
 *	an inputted number of bytes.
 * @s1: the first string.
 * @s2: the second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 *	Otherwise - pointer to the concatenated string to memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int index = 0;
	unsigned int len = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[index])
	{
		len++;
		index++;
	}

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (index = 0; s1[index]; index++)
	{
		string[len++] = s1[index];
	}
	for (index = 0; s2[index] && index < n; index++)
	{
		string[len++] = s2[index];
	}
	string[len] = '\0';
	return (string);
}
