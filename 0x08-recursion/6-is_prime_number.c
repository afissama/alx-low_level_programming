int get_prime(int n, int sq);
/**
 * is_prime_number - check if n is prime or not
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	return (get_prime(n, (n / 2)));
}

/**
 * get_prime - cheack if n is prime
 *
 * @n: int
 * @sq: int
 * Return: int
 */
int get_prime(int n, int sq)
{
	if (n < 2)
	{
		return (0);
	}

	if (sq <= 1)
	{
		return (1);
	}
	if (n % sq == 0)
	{
		return (0);
	}

	return (get_prime(n, (sq - 1)));
}
