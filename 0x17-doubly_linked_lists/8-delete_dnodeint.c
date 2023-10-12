#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 * @head: pointer to head node
 * @index: index of node to be deleted
 *
 * Return: 1 on success, or -1 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* iterate through list to the end or until index is reached */
	while (current_index < index && current)
	{
		current = current->next;
		current_index++;
	}

	if (current_index != index || current == NULL)
		return (-1);

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
