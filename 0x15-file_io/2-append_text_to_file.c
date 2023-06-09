#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: a pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1
 *      If the file does not exist the user lacks write permissions - -1.
 *      Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_f, write_f, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	open_f = open(filename, O_WRONLY | O_APPEND);
	write_f = write(open_f, text_content, length);

	if (open_f == -1 || write_f == -1)
		return (-1);

	close(open_f);

	return (1);
}
