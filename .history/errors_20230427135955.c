#include "main.h"

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

int _putfd(char c, int fd)