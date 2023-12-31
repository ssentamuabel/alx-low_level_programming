#include "dog.h"
#include<stdlib.h>
/**
 *  free_dog - free the memory of dog struct
 *  @d: the address of the dog struct
 *
 *  Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
