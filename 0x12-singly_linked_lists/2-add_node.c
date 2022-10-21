#include "lists.h"

/**
 * add_node - A function that addss a new node at
 * the bdgining of list_t list
 *
 * @head: head of the linked list
 * @str: String to store in the list
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
