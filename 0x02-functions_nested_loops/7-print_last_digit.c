#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int last;
	last = (num % 10);

	if (last < -1)
	{
		last = (last * -1);
	}
	_putchar(last + '0');
	return (last);
}

