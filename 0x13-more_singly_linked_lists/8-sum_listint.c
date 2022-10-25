#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head: head of listint_t list
 * Return: sum of data(n) of listint_t list
 */

int sum_listint(listint_t *head)
{
	size_t sum;

	sum = 0;
	while (*head)
	{
		sum++;
		head = head->next;
	}

	return (sum);
}
