#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: string to add
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t count;
	size_t length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}

		count = write(file, text_content, length);
		if (count == -1)
		{
			close(file);
			return (-1);
		}
		if ((size_t)count != length)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}

