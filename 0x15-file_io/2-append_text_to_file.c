#include "main.h"

int _strlen_recursion(char *s);
/**
 * append_text_to_file - append text to file
 *
 * @filename: the file name
 * @text_content: content to add
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd != -1)
		{
			if ((write(fd, text_content, _strlen_recursion(text_content))) != -1)
			{
				close(fd);
				return (1);
			}
			close(fd);
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
