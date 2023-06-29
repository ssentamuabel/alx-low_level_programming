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
/**
 *  _strcmp - compare strings
 *
 *  @s1: pointer to the string to compare
 *  @s2: pointer to the second string
 *
 *  Return: int 
 */
int _strcmp(char *s1, char *s2);
/**
 *  reverse_array - reverses the array
 *
 *  @a: the pointer to the array
 *  @n: the number of elements in the array
 *
 *  Return: int
 */
void reverse_array(int *a, int n);
/**
 *  string_toupper - change to upper
 *
 *  Return: address to pointer
 */
char *string_toupper(char *);
#endif
