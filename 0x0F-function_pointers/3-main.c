#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array
 * Return: 0, 98,99,100
*/

int main(int argc, char *argv[])
{
	int vl1, vl2;
	char *a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	vl1 = atoi(argv[1]);
	a = argv[2];
	vl2 = atoi(argv[3]);

	if (get_op_func(a) == NULL || a[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*a == '/' && vl2 == 0) || (*a == '%' && vl2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(a)(vl1, vl2));

	return (0);
}

