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
	char *nmcpy, *owncpy;

	d = malloc(sizeof(dog_t));


	if (d == NULL)
		return (NULL);

	nmcpy = malloc(((int)strlen(name)) * sizeof(char)  + 1);
	if (nmcpy == NULL)
	{
		free(d);
		return (NULL);
	}

	owncpy = malloc(((int)strlen(owner)) * sizeof(char) + 1);
	if (owncpy == NULL)
	{
		free(d);
		return (NULL);
	}
	nmcpy = strdup(name);
	d->name = nmcpy;

	owncpy = strdup(owner);
	d->owner = owncpy;

	d->age = age;


	return (d);
}
