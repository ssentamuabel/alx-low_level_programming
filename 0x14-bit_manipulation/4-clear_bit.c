#include "main.h"
/**
 *  claer_bit - clears a bit to 0
 *  @n: the address of the value
 *  @index: the position of manipulation
 *
 *  Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;

	return (1);
}
