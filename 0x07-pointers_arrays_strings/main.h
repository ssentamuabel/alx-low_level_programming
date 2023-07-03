#ifndef HEADER_FILEi
#define HEADER_FILE
int _putchar(char c);
/**
 *  memset - sets the first n bytes b
 *  @b: the byte to set
 *  @s: the pointer to the char
 *  @n: the number of firts elements 
 *
 *  Return: the address of the first charcter
 */
char *_memset(char *s, char b, unsigned int n);
/**
 *  set_string - sets  the value of a pointer to character
 *  @s:the address that points to  the pointer
 *  @to: the address to the char
 *
 *  Return: null
 */
void set_string(char **s, char *to);
/**
 *  _memcpy - copy src to  dest
 *
 *  @dest: the address to the destination
 *  @src: the address to the source
 *
 *  Return: the address of the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
#endif
