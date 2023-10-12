#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head pointer of the list
 * @n: n value of the new node
 *
 * Return: address of new node or NULL on failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL; /* as this will be last node */

	/* if *head is NULL, list is empty. *head becomes new */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while ((current)->next)
	{
		current = current->next;
	}

	current->next = new;
	new->prev = current;

	return (new);
}
