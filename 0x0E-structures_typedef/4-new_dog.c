#include "dog.h"
#include<string.h>
#include<stdlib.h>
/**
 *  new_dog -  to create a new dog
 *  @name: the address of the name
 *  @age: the age of the dog
 *  @owner: the address of the owner
 *
 *  Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));


	if (d == NULL)
		return (NULL);

	d->name = strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;


	return (d);
}
