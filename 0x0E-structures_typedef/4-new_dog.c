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

	_dog = malloc(sizeof(*_dog));
	if (_dog != NULL)
	{
		_dog->age = age;
		_dog->name = malloc(sizeof(_dog->name));
		if (_dog->name != NULL)
		{
			_dog->name = name;
			_dog->owner = malloc(sizeof(_dog->owner));
			if (_dog->owner != NULL)
			{
				_dog->owner = owner;
				return (_dog);
			}
			free(_dog->owner);
		}
		free(_dog->name);
	}
	free(_dog);
	return (NULL);
}
