#ifndef HEADER_FILE
#define HEADER_FILE

/**
 *  putchar -  print a character
 *
 *  Return: On success one
 */
int _putchar(char c);

/**
 *  print_alphaabet - prints alphabet
 *  Retuurn: nothing
 */
void print_alphabet(void);


/**
 *  print_alphabet_x10 - prints alphabet x 10
 *
 *  Return: nothing
 */
void print_alphabet_x10(void);
/**
 *  _islower(int c)- checks for lower charcter
 *  @c: the charcter to check
 *
 *  Return: int
 */
int _islower(int c);
/**
 *  _isalpha - checks for all alphabets
 *  @c: the character to check
 *
 *  Return: 1 if alphabet else 0
 */
int _isalpha(int c);
/**
 *  print_sign - prints the sign of the input
 *  @n: the value to check
 *
 *  Return: int
 */
int print_sign(int n);
/**
 *  _abs - finds the absolute value
 *  @: the value to get the absolute
 *
 *  Return: int
 */
int _abs(int);
/**
 *  print_last_digit - prints the last digit
 *  @: the value to get the last digit
 *
 *  Return: int
 */
int print_last_digit(int);
/**
 *  jack_bauer - print time
 *
 *  Return: nothing
 */
void jack_bauer(void);
/**
 *  times_table
 *
 *  Return: void
 */
void times_table(void);
/**
 *  add - add two integers
 *
 *  Return: int
 */
int add(int, int);
#endif
