#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h:head of the listint_t list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t temp;
	size_t n;

	n = 0;
	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}

	return (n);
}
