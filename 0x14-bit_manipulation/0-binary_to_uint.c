#include "main.h"
/**
 *  _len - length of the string
 *  @s: the address of the string
 *
 *  Return: the int
 */
unsigned int _len(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '1' || s[i] == '0')
			i++;
		else
			return (0);
	}
	return (i);
}
/**
 *  _pow - power calculation
 *  @value: the value to find the power
 *  @times: the power of the value
 *  Return: the return value
 */
unsigned int _pow(unsigned int value, unsigned int times)
{
	unsigned int i = 0, res = 1;

	if (times == 0)
		return (1);
	for (i = 0; i < times; i++)
		res *= value;
	return (res);
}
/**
 *  binary_to_uint - change binary to int
 *  @b: the adress of the string
 *
 *  Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0, i = 0;
	unsigned int len = _len(b);

	if (len == 0)
		return (0);

	while (len > 0)
	{
		if (b[len - 1] == '1')
		{
			value += _pow(2, i);
			len--;
			i++;
		}
		else
		{
			len--;
			i++;
			continue;
		}
	}


	return (value);
}
