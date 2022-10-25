#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of listint_t list
 * @head: head of listint_t list
 * @n: interger to be added to listint_t list
 * Return: address to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
