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
	int num_3 = 0;

	for (num_1 = 0; num_1 <= 9; num_1++)
	{
		for (num_2 = 0; num_2 <= 9; num_2++)
		{
			for (num_3 = 0; num_3 <= 9; num_3++)
			{
				if (num_2 > num_1 && num_3 > num_2)
				{
					putchar(num_1 + '0');
					putchar(num_2 + '0');
					putchar(num_3 + '0');
					if (!(num_1 == 7 && num_2 == 8 && num_3 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
