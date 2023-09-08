#include <stdio.h>

/**
* main - printing numbers
* Return: 0
*/

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
