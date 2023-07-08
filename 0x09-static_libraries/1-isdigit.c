/**
 *  _isdigit - check for digit
 *  @c: the value to check
 *  Return: int
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
