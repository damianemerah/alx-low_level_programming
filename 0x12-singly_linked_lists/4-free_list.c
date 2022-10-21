#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 * @head: Head of node
 */

void free_list(list_t *head)
{
	list_t *cur_node;

	cur_node = head;

	while (cur_node != NULL)
	{
		cur_node = cur_node->next;
		free(cur_node->str);
		free(cur_node);
	}
}
