#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *@head: pointer to the head pointer of a linked list
 *Return: pointer to the first node of the returned list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *currents;
	listint_t *nxt;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	current = *head;
	*head = currents->next;
	nxt = (*head)->next;

	currents->next = NULL;

	while (nxt != NULL)
	{
		(*head)->next = currents;
		currents = *head;
		*head = nxt;
		nxt = nxt->next;
	}
	(*head)->next = currents;
	return (*head);
}
