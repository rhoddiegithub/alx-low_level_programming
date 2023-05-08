#include "main.h"

/**
 * read_textfile - read a certain size and prints to std output
 * @filename: a pointer to the name of the file to read from
 * @letters: the size to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_f, read_f, write_f;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	open_f = open(filename, O_RDONLY);
	read_f = read(open_f, buf, letters);
	write_f = write(STDOUT_FILENO, buf, read_f);

	if (open_f == -1 || read_f == -1 || write_f == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(open_f);
	return (write_f);
}
