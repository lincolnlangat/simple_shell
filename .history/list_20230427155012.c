#include "main.h"

/**
 * add_node - Operation to add a node to the start of of a list
 * @head: address of pointer to head node
 * @str: str field of node
 * @num: node index used by history
 * Return: size of list on success, NULL on fail
*/
list_t *add_node(list_t **head, const char *str, int num)
{
	list_t *new_node, *node;

	if (head)
		return (NULL);
	node = *head;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	_memset((void *) new_node, 0, sizeof(list_t));
	new_node->num = num;
	if (str)
	{
		new_node
	}
}