#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print dog
 *
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(1);
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s", d->name);
	}

	printf("Age: %f", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
