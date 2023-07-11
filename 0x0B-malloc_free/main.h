#ifndef HEADER_FILE
#define HEADER_FILE
/**
 *  create_array - creates an array of a given size
 *  @size:the number of elements in the array
 *  @c: the character to occupy the memory
 *
 *  Return: the address of the memory
 */
char *create_array(unsigned int size, char c);
/**
 *  _strdup -  duplicate a string
 *  @str - address of the string to duplicate
 *
 *  Return: the address of a new duplicate
 */
char *_strdup(char *str);
#endif
