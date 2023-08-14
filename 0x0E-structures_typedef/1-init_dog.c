#include "dog.h"
/**
 *  init_dog - to initialize a struct
 *  @d: the address of the struct
 *  @name: the address of name
 *  @age: the age of the dog
 *  @owner: the address of the owner
 *
 *  Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
