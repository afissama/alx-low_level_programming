#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - init struct dog
 *
 * @d: struct pointer to init
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
