int get_square(int n, int sq);
/**
 * _sqrt_recursion - Return the natural square root of number
 *
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (get_square(n, 0));
}

/**
 * get_square - Return the natural square root of number
 *
 * @n: int
 * @sq: int
 * Return: int
 */
int get_square(int n, int sq)
{
	if (sq * sq == n)
	{
		return (sq);
	}
	if (sq * sq > n)
	{
		return (-1);
	}

	return (get_square(n, (sq + 1)));
}
