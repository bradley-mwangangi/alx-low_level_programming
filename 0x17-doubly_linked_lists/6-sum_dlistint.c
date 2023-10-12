#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a dlistint_t list
 * @head: pointer to head node of the list
 *
 * Return: sum of data, or 0 if list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (!head)
		return (sum);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
