#include "main.h"
/**
 *  malloc_checked - create space using malloc
 *  @b: the size of bytes
 *
 *  Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
