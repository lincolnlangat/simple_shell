#include "main.h"

void _eputs(char *str)
{
	int i;

	if (!str)
		return;
	i
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}