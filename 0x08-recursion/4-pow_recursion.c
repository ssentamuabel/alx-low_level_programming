/**
 *  helper - help to monitor n
 *  @x: the value to get the power
 *  @y: the power
 *  @n: the indexing
 */
int helper(int x, int y, int n)
{
	if (y == n)
	{
		return (x);
	}
	if (y == 0)
		return (1);
	return (x * helper(x, y, n + 1));
}
/**
 *  _pow_recursion - the power of the number
 *
 *  @x: the value of value
 *  @y: the power
 *
 *  Return: int
 */
int _pow_recursion(int x, int y)
{	int n = 0;
	if (y < 0)
	{
		return (-1);
	}
	return (helper(x, y, n));
}
