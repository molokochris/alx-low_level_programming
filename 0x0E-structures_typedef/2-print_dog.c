#include <stdio.h>
#include "dog.h"

/**
 * print_dog - takkes in a struct
 * @d: is the struct
 * as the parameter and prints the elements
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	} else if (d->name == NULL)
	{
		printf("Name: nil\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	} else if (d->age <= 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: nil\n");
		printf("Owner: %s\n", d->owner);
	} else if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: nil\n");
	} else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
