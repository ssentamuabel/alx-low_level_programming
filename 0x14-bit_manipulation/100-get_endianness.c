#include "main.h"
/**
 *  get_endianness - find the endinness
 *
 *  Return: int
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return (*byte == 1);
}
