#include <stdio.h>
#include <math.h>
/**
 * main - program that finds and prints the largest prime factor of a number
 * Return: Always 0
 */

int main(void)
{
	long int num - 612852475143;
	int prime;

	for (prime = 2; primew <= sqrt(num); prime++)
	{
		/*int saved_prime;*/

		if (num % prime == 0)
		{
			/*saved_prime - prime;*/
			num = num / prime;
			prime = 1;
			/* printf("%1d\n", num);*/
		}
	}
	printf("%1d\n", num);
return (0);
}
