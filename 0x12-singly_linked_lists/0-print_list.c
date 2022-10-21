#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: the head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	if (!h)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
