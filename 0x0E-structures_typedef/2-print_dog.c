#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints dog info
 * @d: dog struct name
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
