#include "main.h"
#include <stdarg.h>
/**
 * main - Entry point
 *
 * @argc: nb of argument (int)
 * @argv: arg list
 * Return: 0 if sucess
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, sz;
	char buff[1024];

	if (argc != 3)
	{
		p_error('a', 97, "Usage: cp file_from file_to");
	}
	fd_r =  open(argv[1], O_RDONLY);
	if ((fd_r == -1))
	{
		p_error('o', 98, "Error: Can't read from file", argv[1]);
	}

	fd_w = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_w == -1)
	{
		p_error('o', 99, "Error: Can't write to", argv[2]);
	}
	while ((sz = read(fd_r, buff, 1024)) > 0)
	{
		if (write(fd_w, buff, sz) == -1)
		{
			p_error('o', 99, "Error: Can't write to", argv[2]);
		}
	}
	if (sz == -1)
	{
		p_error('o', 98, "Error: Can't read from file", argv[1]);
	}
	if (close(fd_w) == -1)
	{
		p_error('c', 100, "Error: Can't close fd", fd_w);
	}
	if (close(fd_r) == -1)
	{
		p_error('c', 100, "Error: Can't close fd", fd_r);
	}
	return (0);
}

/**
 * p_error - print error and exit
 *
 * @c: error type
 * @code: exit code
 */
void p_error(char c, int code, ...)
{
	va_list ptr;

	va_start(ptr, code);
	switch (c)
	{
		char *arg_0;

		case 'a':
			dprintf(STDERR_FILENO, "%s\n", va_arg(ptr, char *));
			exit(code);
		case 'o':
			arg_0 = va_arg(ptr, char *);
			dprintf(STDERR_FILENO, "%s %s\n", arg_0, va_arg(ptr, char *));
			exit(code);
			break;
		case 'c':
			arg_0 = va_arg(ptr, char *);
			dprintf(STDERR_FILENO, "%s %d\n", arg_0, va_arg(ptr, int));
			exit(code);
		default:
			break;
	}
	va_end(ptr);
}
