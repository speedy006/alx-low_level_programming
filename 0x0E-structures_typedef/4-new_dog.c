#include "dog.h"
#include <stdlib.h>

/**
 * length - string length
 * @a: string
 * Return: length
*/

int length(char *a)
{
	int x = 0;

	while (*a++)
	{
		x++;
	}

	return (x);
}

/**
 * copy - copies string
 * @a: copy from
 * @b: copy to
 * Return: pointer
*/

char *copy(char *a, char *b)
{
	char *temp = a;

	while ((*a++ = *b++))
		;

	return (temp);
}

/**
 * new_dog - main fuction
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(length(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	copy(dog->name, name);

	dog->age = age;

	dog->owner = malloc(length(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	copy(dog->owner, owner);

	return (dog);
}

