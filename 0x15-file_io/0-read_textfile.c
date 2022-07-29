#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - read text from file and display it on stdout
 * 
 * @filename: filname
 * @letters: number of letters to print 
 * Return: ssize_t 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, _wrote;
	char *buf;

	if (filename != NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd != -1)
		{
			buf = malloc(letters);
			if (buf != NULL)
			{
				read(fd, buf, letters);
				_wrote = write(1, buf, letters);
				close(fd);
				if (_wrote)
				{
					free(buf);
					return (_wrote);
				}
			}
		}
	}
	return (0);
}
