#include <stdio.h>
#include "dog.h"

/**
 * init_dog - this function takes in an address to a struct
 * @d: as the struct
 * then it initializes the struct with the
 * @name: pointer to the dogs name,
 * @age: age of the dog and
 * @owner: name of the dog owner
 * as values of the members of the struct
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
