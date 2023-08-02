/**
 *  _pow_recursion - power
 *  @x: the value we are finding the  power
 *  @y: the power
 *
 *  Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
