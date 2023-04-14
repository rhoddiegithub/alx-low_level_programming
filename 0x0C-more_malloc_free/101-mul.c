#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _iszero - determines if any number is zero
 * @argv: argument vector.
 * Return: no return.
 */
void _iszero(char *argv[])
{
	int index, isn1 = 1, isn2 = 1;

	for (index = 0; argv[1][index]; index++)
		if (argv[1][index] != '0')
		{
			isn1 = 0;
			break;
		}

	for (index = 0; argv[2][index]; index++)
		if (argv[2][index] != '0')
		{
			isn2 = 0;
			break;
		}

	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 *  _init_array - set memery to zero in a new array
 * @arr: char array.
 * @len: length of the char array.
 * Return: pointer of a char array.
 */
char *_init_array(char *arr, int len)
{
		int index = 0;

		for (index = 0; index < len; index++)
			arr[index] = '0';
		arr[len] = '\0';
		return (arr);
}

/**
 * _check_num - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 * Return: length of the number.
 */
int _check_num(char *argv[], int n)
{
	int len;

	for (len = 0; argv[n][len]; len++)
		if (!isdigit(argv[n][len]))
		{
			printf("Error\n");
			exit(98);
		}

	return (len);
}

/**
 * main - program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int len1, len2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	len1 = _check_num(argv, 1), len2 = _check_num(argv, 2);
	_iszero(argv), lnout = len1 + len2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _init_array(nout, lnout);
	k = lnout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = len1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = _init_array(nout, lnout);
			k = lnout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
