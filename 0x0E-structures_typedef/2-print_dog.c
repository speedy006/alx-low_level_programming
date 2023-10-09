#include "dog.h"
#include <stdio.h>

/**
 * print_dog - main function
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->age ? d->owner : "(nil)");
	}
}

