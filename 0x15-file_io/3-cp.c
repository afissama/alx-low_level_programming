#include "main.h"
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((sz = read(fd_r, buff, 1024)) > 0)
	{
		write(fd_w, buff, sz);
	}
	if (close(fd_w) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	if (close(fd_r) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		exit(100);
	}
	return (0);
}
