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
	if (_dog != NULL)
	{
		_dog->name = malloc(sizeof(char *));
		if (_dog->name != NULL)
		{
			_dog->owner = malloc(sizeof(char *));
			if (_dog->owner != NULL)
			{
				_dog->age = age;
				_dog->name = name;
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
