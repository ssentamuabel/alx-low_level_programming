#include "dog.h"
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

	d->name = name;
	d->owner = owner;
	d->age = age;


	return (d);
}
