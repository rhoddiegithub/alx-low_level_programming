#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'z';

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
