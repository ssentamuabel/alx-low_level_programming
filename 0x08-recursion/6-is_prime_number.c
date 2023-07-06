/**
 *  helper - monitor the index
 *  @n: the value to check
 *  @i: the index ot truck
 *
 *  Return: int
 */
int helper(int n, int i)
{
	if (i > (n / 2))
	{
		return (1);
	}
	if ((n % i) == 0)
	{
		return (0);
	}

	return (helper(n, i + 1));
}
/**
 *  is_prime_number - prints prime numbers
 *  @n: the number to check
 *
 *  Return: int
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n == 1)
	{
		return (0);
	}
	if (n < 1)
	{
		return (0);
	}
	return (helper(n, i));
}
