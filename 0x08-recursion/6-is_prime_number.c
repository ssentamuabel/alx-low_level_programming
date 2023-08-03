/**
 *  is_prime_recursive - help find recursive
 *  @n: the number to check
 *  @divisor: the divisor
 *
 *  Return: returns the value
 */
int is_prime_recursive(int n, int divisor)
{
	if ((n % divisor) == 0)
		return (0);
	if (divisor > (n / 2))
		return (1);
	return (is_prime_recursive(n, divisor + 1));
}
/**
 *  is_prime_number - print prime numbers
 *  @n: the number to be tested
 *
 *  Return: int
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, i));
}
