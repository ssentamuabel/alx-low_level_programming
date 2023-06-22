#include "main.h"
/**
 *  more_numbers - more numbers
 *  Return: null
 */
void more_numbers(void){
{
	int values[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int i, j;

	for (i = 0; i < 15; i++)
	{
		if (i > 10)
			_putchar((char)49);
		_putchar((char)values[i % 10]);
	}
	_putchar((char)10);
}
