/**
 *  helper - helps toincrement x
 *  @n: the value to find the square
 *  @x: the incremmenting value
 *
 *  Return: int
 */
int helper(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	if ((x * x) > n)
	{
		return (-1);
	}

	return (helper(n, x + 1));
}
/**
 *  _sqrt_recursion - the square root of a number
 *  @n: the value to find the square root
 *
 *  Return: int
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, x));
}
