#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to head pointer of the list
 * @idx: index position to insert new node
 * @n: n value of new node to be inserted
 *
 * Return: new node, or NULL on failure to insert
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int index = 0;

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

	/* set n value of the new node */
	new->n = n;

	/* if idx is 0, add node at start of list */
	if (idx == 0)
		add_dnodeint(h, n);

	current = *h;
	/* move current to next node until the node with index 1 less than idx */
	while (current && index < idx - 1)
	{
		current = current->next;
		index++;
	}
	printf("Current index: %d\n", index);

	if (index != idx - 1 || !current)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	new->prev = current;

	if (current->next != NULL)
		current->next->prev = new;

	current->next = new;

	return (new);
}
