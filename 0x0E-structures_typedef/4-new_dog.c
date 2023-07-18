#include<stdlib.h>
#include "dog.h"
/**
 *  new_dog - function to create a new data
 *  @name: address of name
 *  @age:  age
 *  @owner: address of owner
 *
 *  Return: address of the struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
