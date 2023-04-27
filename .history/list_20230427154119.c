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
	list_t *new_head;

	if (head)
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);
	_memset((void *) new_node)
}