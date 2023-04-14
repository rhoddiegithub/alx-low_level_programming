#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_length(char *str);
char *create_x_array(int size);
char *iterate_zeroes(char *str);
void get_product(char *prod, char *mult, int digit, int zeroes);
void add_numbers(char *final_prod, char *next_prod, int next_len);

/**
 * find_length - Finds the length of a string.
 * @str: string to be measured.
 * Return: length of the string.
 */
int find_length(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_x_array - Creates an array of chars and initializes it with
 *	the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 * Description: If there is insufficient space, the
 *	function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *create_x_array(int size)
{
	char *arr;
	int i;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		arr[i] = 'x';

	arr[i] = '\0';

	return (arr);
}

/**
 * iterate_zeroes - Iterates through a string of numbers containing
 *	leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * _isdigit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 * Return: The converted int.
 */
int _isdigit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_product - Multiplies a string of numbers by a single digit.
 * @prod: The buffer to store the result.
 * @multe string of numbers.
 * @digit: single digit.
 * @zeroes: necessary number of leading zeroes.
 * Description: If mult contains a non-digit, the function
 *              exits with a status value of 98.
 */
void get_product(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_length(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_number - Adds the numbers stored in two strings.
 * @final_prod: The buffer storing the running final product.
 * @next_prod: The next product to be added.
 * @next_len: The length of next_prod.
 */
void add_number(char *final_product, char *next_product, int next_len)
{
	int num, tens = 0;

	while (*(final_product + 1))
		final_product++;

	while (*(next_product + 1))
		next_product++;

	for (; *final_product != 'x'; final_product--)
	{
		num = (*final_product - '0') + (*next_product - '0');
		num += tens;
		*final_product = (num % 10) + '0';
		tens = num / 10;

		next_product--;
		next_len--;
	}

	for (; next_len >= 0 && *next_product != 'x'; next_len--)
	{
		num = (*next_product - '0');
		num += tens;
		*final_product = (num % 10) + '0';
		tens = num / 10;

		final_product--;
		next_product--;
	}

	if (tens)
		*final_product = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *final_product, *next_product;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_length(argv[1]) + find_length(argv[2]);
	final_product = create_x_array(size + 1);
	next_product = create_x_array(size + 1);

	for (index = find_length(argv[2]) - 1; index >= 0; index--)
	{
		digit = _isdigit(*(argv[2] + index));
		get_product(next_product, argv[1], digit, zeroes++);
		add_number(final_product, next_product, size - 1);
	}
	for (index = 0; final_product[index]; index++)
	{
		if (final_product[index] != 'x')
			putchar(final_product[index]);
	}
	putchar('\n');

	free(next_product);
	free(final_product);

	return (0);
}
