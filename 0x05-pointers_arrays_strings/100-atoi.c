#include "main.h"
/**
 *  _atoi - to number
 *  @s: variable 
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if ((*s >= '0') && (*s <= '9'))
		{
			digit = *s - '0';
			result = result * 10 + digit;
		}
		else if (*s == '+')
		{
		}
		else if (result != 0)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}
