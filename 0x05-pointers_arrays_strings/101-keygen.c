#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates passwords
 * Return: 0
*/

int main(void)
{
	srand(time(NULL));

	char password[7];

	int x;

	for (x = 0; x < 6; x++)
	{
		password[x] = rand() % 94 + 33;
	}

	password[6] = '\0';
	printf("%s\n", password);

	return (0);
}
