#include "main.h"

/**
 * string_match - check if a substring after wildcard matches s1
 * @s1: one string
 * @s2: one string
 * @after_card: placeholder for position right after wildcard
 * Return: 1 if matched, 0 if not
 */

int string_match(char *s1, char *s2, char *after_card)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (s1 == '\0' && *s2 == ")
	{
		return (string_match(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (0);
	}
	if (s2 == ")
	{
		return ( string_match(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (string_match(s1 + 1, s2 + 1, after_card);
	}
}

/**
 * wildcmp - compare if string with wildcard matches
 * @s1: one string
 * @s2: one string
 * Return: 1 if matched, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (s*1 == '\0' && *s2 == '\0')
	{
	return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmps(s1 +, s2 + 1));
	}
	else if (s2 == ")
	{
		return(string_match(s1,(s2 + 1), (s2 +)));
	}
	else
	{
		return (0);
	}
}
