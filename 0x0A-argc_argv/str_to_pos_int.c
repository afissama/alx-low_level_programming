/**
 * _convert_to_int - convert string to int
 *
 * @s: char*
 * Return: int
 */
int _convert_to_int(char *s)
{
	int len;
	int sign;
	int pos;
	int numb;

	len = _strlen_recursion(s);
	sign = 1;
	pos = 0;
	numb = 0;
		/** Check the number sign **/
	if (s[0] == '-')
	{
		sign = -1;
		pos = 1;
		len = len - 1;
	}
	if (s[0] == '+')
	{
		pos = 1;
		len = len - 1;
	}

	len -= 1;
	while (s[pos])
	{
		if (s[pos] >= '0' && s[pos] <= '9')
		{
			numb += (s[pos] - '0') * _pow_recursion(10, len);
			len = len - 1;
			pos++;
		}
		else
		{
			return (-1);
		}
	}
	return (numb * sign);
}

/**
 * _pow_recursion - return x power y
 * @x: int
 * @y: int
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}

/**
 * print_number - reverse the given string
 * @n: array length
 *
 */
void print_number(int n)
{
	int nb_digit = 0;
	int temp = n;
	int t_temp = 0;
	int nb = 0;



	if (temp == 0)
	{
		nb_digit = 1;
	}
	t_temp = temp;

	while (t_temp != 0)
	{
		t_temp = t_temp / 10;
		nb_digit++;
	}
	t_temp = temp;

	if (n < 0)
	{
		_putchar('-');
	}


	while (nb_digit > 0)
	{
		nb = _abs(t_temp / _pow_recursion(10, nb_digit - 1));
		t_temp = _abs(t_temp) - nb * (_pow_recursion(10, nb_digit - 1));
		nb_digit--;
		_putchar('0' + nb);
	}
}

/**
 * _strlen_recursion - return the length of parsing param
 * @s: string passing pointer
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(&s[1]));
}
