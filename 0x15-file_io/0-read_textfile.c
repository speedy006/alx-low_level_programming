#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 * @filename: pointer to file
 * @letters: letters to read and print
 * Return: number of letters, NULL or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t letters_read, letters_written;
	char *temp;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		close(file);
		return (0);
	}

	letters_read = read(file, temp, letters);
	if (letters_read == -1)
	{
		free(temp);
		close(file);
		return (0);
	}

	letters_written = write(STDOUT_FILENO, temp, letters_read);
	if (letters_written == -1 || letters_written != letters_read)
	{
		free(temp);
		close(file);
		return (0);
	}
	free(temp);
	close(file);
	return (letters_written);
}

