#include "lists.h"

/**
 * listint_len - Returns the number of elements
 * linked to listint_t list
 *
 * @n: A pointer to the head of the listint_t list
 * Return: the number of element in listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
