#include <stdio.h>
#include <stdlib.h>

/**
 * main - adding numbers
 * @argc: argument number
 * @argv: array
 * Return: value
 */

int main(int argc, char *argv[])
{
	int x, result = 0;

	for (x = 1; x < argc; x++)
	{
		char *a = argv[x];

		while (*a != '\0')
		{
			if (*a < '0' || *a > '9')
			{
				printf("Error\n");
				return (1);
			}
			a++;
		}

		result += atoi(argv[x]);
	}

	printf("%d\n", result);

	return (0);
}
