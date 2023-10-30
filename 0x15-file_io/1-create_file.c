#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: string to write
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t count;
	size_t length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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

