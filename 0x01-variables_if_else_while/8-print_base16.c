#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar ('\n');
	return (0);
}
