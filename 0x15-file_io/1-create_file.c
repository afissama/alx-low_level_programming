#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int _strlen_recursion(char *s);
/**
 * create_file - Create a file object
 * 
 * @filename: the filename
 * @text_content: the text content
 * Return: int 
 */
int create_file(const char *filename, char *text_content)
{
	int fd, _ret;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (fd != -1)
		{
			_ret = write(fd, text_content, _strlen_recursion(text_content));
			close(fd);
			if (_ret != -1)
			{
				return(1);
			}
		}
		
	}
	return (-1);
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
