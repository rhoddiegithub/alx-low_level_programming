#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0) Success
 */

int main(void)
{
	int num_1 = 0;
	int num_2 = 0;

	for (num_1 = 0; num_1 <= 99; num_1++)
	{
		for (num_2 = 0; num_2 <= 99; num_2++)
		{
			if (num_2 > num_1)
			{
				putchar((num_1 / 10) + '0');
				putchar((num_1 % 10) + '0');
				putchar(' ');
				putchar((num_2 / 10) + '0');
				putchar((num_2 % 10) + '0');
				if (!(num_1 == 98 && num_2 == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
