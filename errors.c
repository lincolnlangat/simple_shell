#include "main.h"

/**
 * _eputs - Operation to print an input string
 * @str: String to be printed
 * Return: void
*/
void _eputs(char *str)
{
	int i;

	if (!str)
		return;
	i = 0;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - Operation to write the character c to stderr
 * @c: Character to print
 * Return: 1 on success, -1 on error
*/
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - Operation that writes char c to given fd
 * @c: The char to print
 * @fd: file descriptor to write to
 * Return: 1 on success, -1 on error
*/
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - Operation that prints an input string
 * @str: string to be printed
 * @fd: the filediscriptor to write to
 * Return: the number of char put
*/
int _putsfd(char *str, int fd)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
