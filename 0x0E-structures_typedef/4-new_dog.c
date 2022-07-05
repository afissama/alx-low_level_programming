#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;

	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
	{
		return (NULL);
	}
	init_dog(_dog, name, age, owner);

	return (_dog);
}
