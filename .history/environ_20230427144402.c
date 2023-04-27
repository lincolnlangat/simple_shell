#include "main.h";

int _myenv(info_t *info)
{
	print_list_str(info->env);
	return (0);
}

char *_getenv(info_t *info, const char *name)
{
	list_t *node;
	char *p;

	node = info->env;
	while (node)
	{
		p = starts_with(node->str, name);
		if (p && *p)
			return (p);
		node = node->next;
	}
	return (NULL);
}

int _mysetenv(info_t *info)
{
	if (info->argc != 3)
	{
		_eputs("Incorrect number of arguments\n");
		return (1);
	}
	if (_set)
}