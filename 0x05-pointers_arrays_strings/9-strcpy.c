#include "main.h"
/**
 *  _strcpy - copy a string
 *  @dest: the destination
 *  @src: the source of the char
 *  Return: pointer address
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';

	return dest;
}
