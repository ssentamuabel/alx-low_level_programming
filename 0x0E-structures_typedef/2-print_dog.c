#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *  print_dog - print the dog information
 *  @d: the dog pointer
 *
 *  Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = 0;
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
