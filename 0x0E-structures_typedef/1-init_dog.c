#include "dog.h"
/**
 *  init_dog - initializes the struct
 *  @d: pointer to the struct
 *  @name: the pointer of name
 *  @age: the age
 *  @owner: the address to the owner
 *
 *  Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
