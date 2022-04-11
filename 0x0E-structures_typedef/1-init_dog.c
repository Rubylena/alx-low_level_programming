#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to struct dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: (d)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
