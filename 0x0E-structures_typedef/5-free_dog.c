#include<stdlib.h>
#include "dog.h"
/**
 *  free_dog - to free the dog
 *  @d: address of the struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(1);

	free(d);
}
