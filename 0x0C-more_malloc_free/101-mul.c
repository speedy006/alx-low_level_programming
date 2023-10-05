#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checker - checks digit
 * @s: value
 * Return: 0 or 1
*/

int checker(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (!isdigit(s[x]))
			return (0);
		x++;
	}
	return (1);
}

/**
 * main - multiplying numbers
 * @argc: number of arguments
 * @argv: array
 * Return: value
*/

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!checker(argv[1]) || !checker(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);

	return (0);
}

