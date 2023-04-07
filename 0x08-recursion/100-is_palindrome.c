#include "main.h"
/**
 * compare - compare head and tail indices for match
 * @first: index starting from left of string
 * @last: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int _compare(char *first, char *last)
{
	if (first >= last)
		return (1);
	if (*first == *last)
		return (_compare(first + 1, last - 1));

	return (0);
}

/**
 * _strlen - find length of string to access last index
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (_compare(s, (s + len - 1)));
}
