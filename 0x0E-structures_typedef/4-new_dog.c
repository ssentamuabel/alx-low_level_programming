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
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name  = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;

	return (new_dog);
}
