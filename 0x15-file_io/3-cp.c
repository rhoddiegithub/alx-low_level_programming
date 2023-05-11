#include "main.h"

/**
 * error_close - checks if the files can be opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 * Return: no return.
 */
void error_close(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close_file;
	ssize_t read_f, write_f;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	error_close(file_from, file_to, argv);

	read_f = 1024;
	while (read_f == 1024)
	{
		read_f = read(file_from, buf, 1024);
		if (read_f == -1)
			error_close(-1, 0, argv);
		write_f = write(file_to, buf, read_f);
		if (write_f == -1)
			error_close(0, -1, argv);
	}

	error_close_file = close(file_from);
	if (error_close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_close_file = close(file_to);
	if (error_close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
