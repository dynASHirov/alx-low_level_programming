#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmps = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmps == NULL)
			return (-1);
		tmps = tmps->next;
	}

	if (tmps == *head)
	{
		*head = tmps->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmps->prev->next = tmps->next;
		if (tmps->next != NULL)
			tmps->next->prev = tmps->prev;
	}

	free(tmps);
	return (1);
}
