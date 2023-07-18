#include<stdio.h>
#include "dog.h"
#include<stdlib.h>
/**
 *  print_dog - print dog
 *  @d: address of the data
 *  Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %1f\n", (d->age != 0.0) ? d->age : 0.0);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
