#ifndef HEADER_FILEi
#define HEADER_FILE
int _putchar(char c);
/**
 *  puts_recursion - puts in the recursion way
 *  @s: the address to the string
 *
 *  Return: null
 */
void _puts_recursion(char *s);
/**
 *  is_palindrome - checks for a palindrome
 *
 *  @s: the address of the character
 *
 *  Return: int
 */
int is_palindrome(char *s);
/**
 *  _print_rev_recursion - prints a string in reverse
 *  @s: the address of the string
 *
 *  Return: void
 */
void _print_rev_recursion(char *s);
/**
 *  wildcmp - to compare strings
 *
 *  @s1: the first string to compare with
 *  @s2: the second string to compare to
 *
 *  Return: int 
 */
int wildcmp(char *s1, char *s2);
/**
 *  _pow_recursion - the power of the number
 *
 *  @x: the value of value
 *  @y: the power
 *
 *  Return: int
 */
int _pow_recursion(int x, int y);
/**
 *  _sqrt_recursion - the square root of a number
 *  @n: the value to find the square root
 *
 *  Return: int
 */
int _sqrt_recursion(int n);
/**
 *  _strlen_recursion - the length of the string
 *  @s: address of the string
 *
 *  Return: int
 */
int _strlen_recursion(char *s);
#endif
