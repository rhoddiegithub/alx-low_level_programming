#include "main.h"

/**
 * *_strcat - Concatenates the string pointed to by @src
 *	including the terminatig
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length++] = src[i];
	}

	dest[length] = '\0';

	return (dest);
}
