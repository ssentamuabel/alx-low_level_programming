/**
 *  helper - helps to find square root
 *  @n: the number
 *  @i: the test value
 *
 *  Return: int
 */
int helper(int n, int i)
{
	int square = i * i;

	if (square == n)
		return (i);
	if (square < n)
	{
		return (helper(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 *  _sqrt_recursion - find the square root
 *  @n: the square check
 *
 *  Return: int
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	return (helper(n, i));
}
