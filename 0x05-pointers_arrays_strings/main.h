#ifndef HEADER_FILE
#define HEADER_FILE
/**
 *  reset_to_98 - reset the input value to 98
 *  @n: the pointer value
 *  Return: null;
 */
void reset_to_98(int *n);
/**
 *  swap_int - swap the values;
 *  @a: the firsr address value
 *  @b: the seconf address value
 *  Return: nothing
 */
void swap_int(int *a, int *b);
/**
 *  _strlen - the length of a string
 *  @s: pointer to the string to get the length
 *  Return: int 
 */
int _strlen(char *s);
/**
 *  _puts - puts string
 *  @s: pointer to the string 
 *  Return: nothg
 */
void _puts(char *str);
int _putchar(char c);
/**
 *  print_rev - reverse of a string
 *  @s: the pointer of the string to reverse
 *  Return: void
 */
void print_rev(char *s);
/**
 * rev_string - reverse a string 
 * @s: the pointer that holds the string
 * Return: void
 */
 void rev_string(char *s);
 /**
  *  puts2 - put characters in odd
  *  @str: the pointer pointing to the string
  *  Return: void
  */
void puts2(char *str);
/**
 *  print_array - print the elements in the array
 *  @a: array pointer
 *  @n: the number of arrays to be printed
 */
void print_array(int *a, int n);
/**
 * _strcpy(char *dest, char
 */
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
#endif
