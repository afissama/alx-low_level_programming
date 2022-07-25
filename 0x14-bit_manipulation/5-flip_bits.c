int nb_digits_in_bin(unsigned long int n);

/**
 * flip_bits - Get the number of bit to flip to m from n
 *
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_;
	unsigned int count;
	int xor_len, i;

	xor_ = (n ^ m);
	xor_len = nb_digits_in_bin(xor_);
	count = 0;
	for (i = 0; i < xor_len; i++)
	{
		if ((xor_ & (1 << (i))))
		{
			count++;
		}
	}
	return (count);
}

/**
 * nb_digits_in_bin - get the number of n binary digits
 *
 * @n: unsigned long int
 * Return: the number of n digit in binary (int)
 */
int nb_digits_in_bin(unsigned long n)
{
	int count;

	count = 0;
	do {
		n /= 2;
		count++;
	} while (n != 0);

	return (count);
}
