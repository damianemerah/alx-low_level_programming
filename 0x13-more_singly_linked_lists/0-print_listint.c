#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h:head of the listint_t list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t temp;
	size_t num;

	num = 0;
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		num++;
		temp = temp->next;
	}

	return (num);
}
