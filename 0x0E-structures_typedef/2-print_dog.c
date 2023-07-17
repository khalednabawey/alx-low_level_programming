#include <stdio.h>
#include "dog.h"
/**
 * print_dog -> prints the variables of the dog.
 *
 * @d: the struct variable.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
			printf("Name: %s", d->name);
		else
			printf("Name: (nil)");
		if (d->age != NULL)
			printf("Age: %s", d->age);
		else
			printf("Age: (nil)");
		if (d->owner)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)");
	}
}
