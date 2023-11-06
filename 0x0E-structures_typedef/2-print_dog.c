#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog.
 * @d: struct dog
 * if element of struct is NULL replace with nil.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
