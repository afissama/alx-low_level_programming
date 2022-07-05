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
		_dog->name = malloc(sizeof(_dog->name));
		if (_dog->name != NULL)
		{
			_dog->owner = malloc(sizeof(_dog->owner));
			if (_dog->owner != NULL)
			{
				_dog->age = age;
				_dog->name = _strcpy(_dog->name, name);
				_dog->owner = _strcpy(_dog->owner, owner);
				return (_dog);
			}
			free(_dog->owner);
		}
		free(_dog->name);
	}
	free(_dog);
	return (NULL);
}

/**
 * _strcpy - copy the parsing string
 * @dest: destination param
 * @src: source param
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
