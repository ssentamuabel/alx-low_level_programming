#include<stdlib.h>
/**
 *  malloc_checked - malloc check
 *  @b: the size of memory to check
 *
 *  Return:the address of the pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
