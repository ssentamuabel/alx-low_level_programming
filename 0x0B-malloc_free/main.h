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
/**
 *  str_concat - concatenates two strings
 *  @s1: the first string
 *  @s2: the second string
 *
 *  Return: address to the concatenated string
 */
char *str_concat(char *s1, char *s2);
/**
 *  alloc_grid - to make a grid
 *  @width: the rows of the grid
 *  @height: the columns of the  grid
 *
 *  Return: address
 */
int **alloc_grid(int width, int height);
/**
 *  free_grid - free memory
 *
 *  @grid: the memory address 
 *  @height: the number of rows
 *  Return: void
 */
void free_grid(int **grid, int height);
#endif
