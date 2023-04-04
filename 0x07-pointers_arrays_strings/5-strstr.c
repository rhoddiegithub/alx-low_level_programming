#include "main.h"
#define NULL 0

/**
 * _strstr - function that locates a substring
 * @haystack: string to search for
 * @needle: target substring
 * Return: pointer to string at the first occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int length;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != needle[0])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			length = i;

			while (needle[j] != '\0')
			{
				if (haystack[length] == needle[j])
				{
					length++;
				}
				else
				{
					break;
				}
				j++;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
