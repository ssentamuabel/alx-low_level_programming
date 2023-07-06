/**
 *  factorial - find the factorial
 *  @n: the number to get the factorial
 *
 *  Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
