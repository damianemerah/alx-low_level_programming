#include "list.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list,returns the head node’s data (n).
 *
 * @head: head of listint_t list
 * Return: head of node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);
	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
