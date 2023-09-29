#include "main.h"
/**
 *  get_bit - get bit at a given index
 *  @n: the index
 *  @index: the index
 *
 *  Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
