#include "main.h"
#include <stdio.h>

/**
 * main - printing
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x != 1)
		{
			printf(" ");
		}
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", x);
		}
	}
	printf("\n");

	return (0);
}
