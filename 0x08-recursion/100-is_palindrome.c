int check_border(char *s, int size, int n);
int _strlen_recursion(char *s);
/**
 * is_palindrome - check if str is palindrom
 *
 * @s: char*
 * Return: int
 */
int is_palindrome(char *s)
{
	return (check_border(s, (_strlen_recursion(s) - 1), 0));
}

/**
 * check_border - check if str is palindrom
 *
 * @s: char*
 * @n: current char length
 * @size: int
 * Return: int
 */
int check_border(char *s, int size, int n)
{
	if (s[size - n] != s[n])
	{
		return (0);
	}
	if (size - n <= n)
	{
		return (1);
	}

	return (check_border(s, size, n + 1));
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
