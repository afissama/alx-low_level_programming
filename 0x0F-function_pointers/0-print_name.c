/**
 * print_name - print given name using pointer funct
 *
 * @name: char *
 * @f: function used to prints name
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
