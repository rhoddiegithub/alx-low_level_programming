#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument counter
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	int index, j, i;
	char *str;
	int len = ac;

	if (ac < 1 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index++] = av[i][j];
		}
		str[index++] = '\n';
	}
	str[len] = '\0';
	return (string);
}
