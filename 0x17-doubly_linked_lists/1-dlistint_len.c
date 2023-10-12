#include "lists.h"

/**
 * dlistint_len - counts the number of elements of a dlistint_t list
 * @h: pointer to head of the list
 *
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
