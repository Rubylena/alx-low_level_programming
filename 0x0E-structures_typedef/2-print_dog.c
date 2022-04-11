#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - initialize a variable of type struct dog.
 * @d: pointer to struct dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);

	if (d->name == NULL)
	{
		prinf("Name: (nil)\n");
	}
	else
	{
		prinf("Name: %s\n", d->name);
	}

	if (d->age == NULL)
		prinf("Name: (nil)\n");
	else
		prinf("Age: %s\n", d->age);

	if (d->owner == NULL)
		prinf("Owner: (nil)\n");
	else
		prinf("Owner: %s\n", d->owner);
}
