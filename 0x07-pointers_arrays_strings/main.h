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
/**
 * _strchr - search for a character
 * @s: the address of the string
 * @c: the character to check for 
 *
 * Return: the address of the string
 */
char *_strchr(char *s, char c);
/**
 *  _strspn - print the number of characters not in the string
 *
 *  @s : the address of the string
 *  @accept: the addrss of the string to check for
 *
 *  Return: int
 */
unsigned int _strspn(char *s, char *accept);
/**
 *  _print_chessboard- prints the chess board
 *
 *  Return: void
 */
void print_chessboard(char (*a)[8]);
/**
 *  _strpbrk - tress a pattern of words
 *  @s: the address of the string
 *  @accept: the string to look for
 *
 *  Return: address of the string
 */
char *_strpbrk(char *s, char *accept);
#endif
