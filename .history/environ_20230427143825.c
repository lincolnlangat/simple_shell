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
	wh
}