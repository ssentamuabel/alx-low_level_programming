#ifndef HEADER_FILE
#define HEADER_FILE
/**
 *  malloc_checked - malloc check
 *  @b: the size of memory to check
 *
 *  Return:the address of the pointer
 */
void *malloc_checked(unsigned int b);
/**
 *  string_nconcat - concatenate two strings
 *  @s1: the first string
 *  @s2: the second string
 *  @n: the number of characters
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
