#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed to program
 * @argc: counts the argument
 * @argv: pointer to array of arguments
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
