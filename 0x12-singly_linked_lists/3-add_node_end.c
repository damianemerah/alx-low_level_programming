#include "lists.h"

/**
 * add_node_end - A function that adds a new node at
 * the end of a list_t list.
 *
 * @head: head of the linked list
 * @str: string to add
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *cur_node;
	size_t n;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	new_node->len = n;
	new_node->next = NULL;
	cur_node = *head;

	if (cur_node->next == NULL)
		*head = new_node;
	else
	{
		while (cur_node->next != NULL)
			cur_node = cur_node->next;
		cur_node->next = new_node;
	}

	return (*head);
}
