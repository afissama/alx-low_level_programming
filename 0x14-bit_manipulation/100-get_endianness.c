/**
 * get_endianness - Get the endianness object
 *
 *
 * Return: 1 if little endian 0 if not.
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;
	return ((int)*c);
}
