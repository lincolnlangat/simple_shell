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
	static char buf[WR]
}