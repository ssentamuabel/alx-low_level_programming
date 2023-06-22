/**
 *  _isdigit - check for digit
 *  @c: the value to check
 *  Return: int
 */
int _isdigit(int c)
{
	int n;
	if (n > 47 && n < 58)
	{
		n = 1;
	}
	else
	{
		n = 0;
	}

	return (n);
}
