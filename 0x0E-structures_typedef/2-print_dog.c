#include <stdio.h>
#include "dog.h"

/**
 * print_dog - takkes in a struct
 * @d: is the struct
 * as the parameter and prints the elements
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
