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
	bool has_number = false;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if ((*s >= '0') && (*s <= '9'))
		{
			digit = *s - '0';
		 if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
		 {
			 if (sign == -1)
			 {
				 return INT_MIN;
			{
			else
			{
				return INT_MAX;
			}
		}
			result = result * 10 + digit;
			has_number = true;
		}
		else if (*s == '+' && !has_number)
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
