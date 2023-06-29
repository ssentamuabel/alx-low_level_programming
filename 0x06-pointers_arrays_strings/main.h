#ifndef HEADER_FILEi
#define HEADER_FILE
/**
 *  _strcat - concatenate the string
 *  @dest: the destination string
 *  @src: the sourse of the string
 *  Return: address of the destination
 */
char *_strcat(char *dest, char *src);
/**
 * _strncat - to concatenate the string for a given number
 * @dest: the destination string
 * @src: the string source
 * @n: number of character
 */
char *_strncat(char *dest, char *src, int n);
/**
 *  _strncpy - copy the n number of characters
 *  @dest: the destination of the copy
 *  @src: the source of the character
 *  @n: this is the number of a character
 */
char *_strncpy(char *dest, char *src, int n);
#endif
